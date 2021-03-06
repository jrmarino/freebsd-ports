--- src/3rdparty/chromium/base/allocator/allocator_shim_unittest.cc.orig	2018-11-13 18:25:11 UTC
+++ src/3rdparty/chromium/base/allocator/allocator_shim_unittest.cc
@@ -29,7 +29,7 @@
 #include "base/allocator/allocator_interception_mac.h"
 #include "base/mac/mac_util.h"
 #include "third_party/apple_apsl/malloc.h"
-#else
+#elif !defined(OS_BSD)
 #include <malloc.h>
 #endif
 
@@ -294,7 +294,7 @@ TEST_F(AllocatorShimTest, InterceptLibcSymbols) {
   ASSERT_GE(aligned_allocs_intercepted_by_size[61], 1u);
 #endif  // !OS_WIN
 
-#if !defined(OS_WIN) && !defined(OS_MACOSX)
+#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_BSD)
   void* memalign_ptr = memalign(128, 53);
   ASSERT_NE(nullptr, memalign_ptr);
   ASSERT_EQ(0u, reinterpret_cast<uintptr_t>(memalign_ptr) % 128);
@@ -307,7 +307,7 @@ TEST_F(AllocatorShimTest, InterceptLibcSymbols) {
   ASSERT_GE(aligned_allocs_intercepted_by_alignment[kPageSize], 1u);
   // pvalloc rounds the size up to the next page.
   ASSERT_GE(aligned_allocs_intercepted_by_size[kPageSize], 1u);
-#endif  // !OS_WIN && !OS_MACOSX
+#endif  // !OS_WIN && !OS_MACOSX && !OS_BSD
 
   char* realloc_ptr = static_cast<char*>(malloc(10));
   strcpy(realloc_ptr, "foobar");
@@ -323,13 +323,13 @@ TEST_F(AllocatorShimTest, InterceptLibcSymbols) {
   free(zero_alloc_ptr);
   ASSERT_GE(frees_intercepted_by_addr[Hash(zero_alloc_ptr)], 1u);
 
-#if !defined(OS_WIN) && !defined(OS_MACOSX)
+#if !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_BSD)
   free(memalign_ptr);
   ASSERT_GE(frees_intercepted_by_addr[Hash(memalign_ptr)], 1u);
 
   free(pvalloc_ptr);
   ASSERT_GE(frees_intercepted_by_addr[Hash(pvalloc_ptr)], 1u);
-#endif  // !OS_WIN && !OS_MACOSX
+#endif  // !OS_WIN && !OS_MACOSX && !OS_BSD
 
 #if !defined(OS_WIN)
   free(posix_memalign_ptr);
