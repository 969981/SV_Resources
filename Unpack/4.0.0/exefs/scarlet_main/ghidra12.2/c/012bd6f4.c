/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bd6f4; name: FUN_012bd6f4
 */


void FUN_012bd6f4(void)

{
  long lVar1;
  
  lVar1 = FUN_012bd888();
  if (*(long *)(lVar1 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("_this->m_file.IsNull()","BootAsMasterRom",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework/activation_manager.cpp"
               ,0x31);
  }
  *(undefined1 *)(lVar1 + 0x11c) = 1;
  return;
}


