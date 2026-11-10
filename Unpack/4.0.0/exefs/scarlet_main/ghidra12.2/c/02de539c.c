/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02de539c; name: FUN_02de539c
 */


long FUN_02de539c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  uVar4 = param_2 - lVar2 >> 4;
  uVar3 = param_1[7];
  if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("index < m_end","erase",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/culling/culling_system.h"
               ,0x391,"FlatHashTable::erase iterator out of bounds");
  }
  uVar1 = uVar4 + 1;
  if (uVar1 < (ulong)(param_1[1] - lVar2 >> 4)) {
    memmove((void *)(lVar2 + uVar4 * 0x10),(void *)(lVar2 + uVar1 * 0x10),(uVar3 - uVar1) * 0x10);
    uVar3 = param_1[7];
    lVar2 = *param_1;
  }
  param_1[7] = uVar3 - 1;
  return lVar2 + uVar4 * 0x10;
}


