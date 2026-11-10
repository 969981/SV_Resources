/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021aa02c; name: FUN_021aa02c
 */


undefined8 FUN_021aa02c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("args.group","operator()",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/scene_manager.cpp"
               ,0x3b7);
  }
  lVar1 = FUN_021a9764(*(long *)(param_1 + 8) + 0x28);
  if (lVar1 != 0) {
    FUN_021aa084();
  }
  return *(undefined8 *)(param_1 + 8);
}


