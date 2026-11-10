/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e9ac8; name: FUN_012e9ac8
 */


void FUN_012e9ac8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = lVar2;
  if (*(long *)(lVar2 + 0x1a8) != 0) {
    lVar1 = *(long *)(lVar2 + 0x1a8);
  }
  if (*(long *)(lVar2 + 0x1b0) != 0) {
    lVar2 = *(long *)(lVar2 + 0x1b0);
  }
  if (lVar1 == lVar2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("input != output","InsertDependencyToTarget",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
               ,700);
  }
  FUN_00da3100(*param_1);
  return;
}


