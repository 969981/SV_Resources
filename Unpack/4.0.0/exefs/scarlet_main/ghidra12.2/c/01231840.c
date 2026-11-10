/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01231840; name: FUN_01231840
 */


void FUN_01231840(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(char *)(param_1 + 0x579) != '\0') {
    plVar9 = *(long **)(param_1 + 0x140);
    plVar2 = *(long **)(param_1 + 0x148);
    *(undefined1 *)(param_1 + 0x579) = 0;
    if (plVar9 != plVar2) {
      lVar10 = *plVar9;
      if (*(char *)(lVar10 + 0x11b) == '\0') {
        (**(code **)(*(long *)(lVar10 + 0x20) + 0xf8))((long *)(lVar10 + 0x20));
        *(undefined2 *)(lVar10 + 0x11b) = 1;
      }
      while (plVar9 = plVar9 + 1, plVar9 != plVar2) {
        lVar10 = *plVar9;
        if (*(char *)(lVar10 + 0x11b) == '\0') {
          (**(code **)(*(long *)(lVar10 + 0x20) + 0xf8))((long *)(lVar10 + 0x20));
          *(undefined2 *)(lVar10 + 0x11b) = 1;
        }
      }
    }
    puVar6 = PTR_DAT_047dd4f0;
    puVar5 = PTR_DAT_047dd4e8;
    puVar4 = PTR_DAT_047dd4e0;
    puVar3 = *(undefined8 **)(param_1 + 0x1b8);
    for (puVar1 = *(undefined8 **)(param_1 + 0x1b0); puVar1 != puVar3; puVar1 = puVar1 + 1) {
      plVar9 = (long *)*puVar1;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        iVar7 = *(int *)puVar6;
        *(int *)puVar6 = iVar7 + 2;
        if (0x1d < iVar7) goto LAB_01231ab4;
        *(int *)puVar5 = iVar7;
        __cxa_guard_release(puVar4);
      }
      lVar10 = plVar9[0x86];
      uVar8 = 1L << ((ulong)*(uint *)puVar5 & 0x3f) | plVar9[0x87];
      plVar9[0x87] = uVar8;
      uVar8 = uVar8 & 0xffffffff;
      *(bool *)(plVar9 + 0x86) = uVar8 != 0;
      if ((char)lVar10 == '\0' && uVar8 != 0) {
        FUN_00d37964(plVar9,2,1);
        (**(code **)(*plVar9 + 0x108))(plVar9);
        FUN_00cf6de0(plVar9 + 0x21,auStack_58);
      }
    }
    plVar9 = *(long **)(param_1 + 0x138);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x58))(plVar9);
      if (((*PTR_DAT_047dd4e0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047dd4e0), iVar7 != 0)) {
        iVar7 = *(int *)PTR_DAT_047dd4f0;
        *(int *)PTR_DAT_047dd4f0 = iVar7 + 2;
        if (0x1d < iVar7) {
LAB_01231ab4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("s_offset <= static_cast<int32_t>(SuspendCase::CaseLimit)",
                     "GetSuspendCaseOffset",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/game_object.h"
                     ,0x45a);
        }
        *(int *)PTR_DAT_047dd4e8 = iVar7;
        __cxa_guard_release(PTR_DAT_047dd4e0);
      }
      lVar10 = plVar9[0x86];
      uVar8 = 1L << ((ulong)*(uint *)PTR_DAT_047dd4e8 & 0x3f) | plVar9[0x87];
      plVar9[0x87] = uVar8;
      uVar8 = uVar8 & 0xffffffff;
      *(bool *)(plVar9 + 0x86) = uVar8 != 0;
      if (((char)lVar10 == '\0') && (uVar8 != 0)) {
        FUN_00d37964(plVar9,2,1);
        (**(code **)(*plVar9 + 0x108))(plVar9);
        FUN_00cf6de0(plVar9 + 0x21,auStack_60);
      }
      (**(code **)(*plVar9 + 0x60))(plVar9);
    }
  }
  return;
}


