/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f74334; name: FUN_00f74334
 */


void FUN_00f74334(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined1 auStack_28 [8];
  
  piVar3 = (int *)PTR_DAT_047dd610;
  if ((*PTR_DAT_047dd608 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047dd608);
    piVar3 = (int *)PTR_DAT_047dd610;
    if (iVar2 != 0) {
      iVar2 = *(int *)PTR_DAT_047dd4f0;
      *(int *)PTR_DAT_047dd4f0 = iVar2 + 3;
      piVar3 = (int *)PTR_DAT_047dd610;
      if (0x1c < iVar2) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("s_offset <= static_cast<int32_t>(SuspendCase::CaseLimit)","GetSuspendCaseOffset"
                   ,
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/game_object.h"
                   ,0x45a);
      }
      *(int *)PTR_DAT_047dd610 = iVar2;
      __cxa_guard_release(PTR_DAT_047dd608);
    }
  }
  lVar1 = param_1[0x86];
  uVar4 = param_1[0x87] & (1L << ((ulong)(uint)(*piVar3 + param_2) & 0x3f) ^ 0xffffffffffffffffU);
  param_1[0x87] = uVar4;
  uVar4 = uVar4 & 0xffffffff;
  *(bool *)(param_1 + 0x86) = uVar4 != 0;
  if (((char)lVar1 != '\0') && (uVar4 == 0)) {
    FUN_00d37964(param_1,2,0);
    FUN_00d37964(param_1,0,0);
    (**(code **)(*param_1 + 0x110))(param_1);
    FUN_00d38190(param_1 + 0x21,auStack_28);
  }
  return;
}


