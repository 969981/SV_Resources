/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3c3f8; name: FUN_00a3c3f8
 */


void FUN_00a3c3f8(void *param_1)

{
  long lVar1;
  
  if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","CompressedBufferCopy",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/ui_utility/screen_capture.cpp"
               ,0x568,"Buffer Copy Faild buffer is null");
  }
  lVar1 = *(long *)(DAT_04835c08 + 0x28);
  if ((((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) || (*(int *)(lVar1 + 0x40) != 0)) ||
     (*(void **)(DAT_04835c08 + 0x30) == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","CompressedBufferCopy",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/ui_utility/screen_capture.cpp"
               ,0x56d,"Buffer Copy Faild GetCompressedBuffer is null");
  }
  memcpy(param_1,*(void **)(DAT_04835c08 + 0x30),(ulong)(uint)(DAT_04835be8 * DAT_04835bec * 3) / 6)
  ;
  return;
}


