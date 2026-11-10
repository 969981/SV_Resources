/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5dea4; name: FUN_01e5dea4
 */


undefined8 FUN_01e5dea4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  short *psVar10;
  undefined8 uVar11;
  long *local_90;
  short *local_88;
  int local_80 [16];
  undefined4 local_28;
  int local_24;
  
  if (*param_2 == 0) {
    return 0;
  }
  FUN_019205c0(*(undefined8 *)(param_1 + 0x28));
  local_28 = 0xd;
  FUN_01e5e294(&local_90,*(undefined8 *)(param_1 + 0x28),&local_28);
  uVar5 = FUN_01e5e30c(*param_2);
  FUN_0105453c(*param_2,local_90);
  plVar1 = local_90;
  uVar7 = FUN_01920760(local_90[6],*(undefined2 *)((long)local_90 + 0x52),uVar5);
  if ((uVar7 & 1) == 0) {
LAB_01e5df5c:
    FUN_0100bad4(*param_2);
    uVar11 = 0;
  }
  else {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar9 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar9;
    uVar8 = (uint)*(byte *)(lVar9 + 0x2c);
    uVar4 = uVar8 - 1;
    if ((9 < uVar4 || uVar8 == 0) || uVar4 == 5) goto LAB_01e5df5c;
    local_88 = (short *)plVar1[6];
    uVar8 = 0;
    psVar10 = local_88;
    do {
      if (*psVar10 == 0) {
        if (uVar8 == 0) goto LAB_01e5e1c8;
        break;
      }
      if (*psVar10 == 0x10) {
        lVar9 = (ulong)(ushort)psVar10[1] + 2;
        psVar10 = psVar10 + lVar9;
      }
      else {
        psVar10 = psVar10 + 1;
        lVar9 = 1;
      }
      uVar8 = (int)lVar9 + uVar8;
    } while (uVar8 < 0x800);
    local_24 = 0;
    iVar6 = (**(code **)(*DAT_0483b098 + 0x28))
                      (DAT_0483b098,local_80,*(undefined4 *)(&DAT_03d317dc + (ulong)uVar4 * 4),
                       &local_88,1);
    if ((iVar6 == 0) && (local_80[0] != 0)) {
      uVar11 = 1;
      local_24 = 1;
      FUN_019a5cf0(&local_24,&local_88);
      if (0 < local_24) goto LAB_01e5df5c;
    }
    else {
LAB_01e5e1c8:
      uVar11 = 1;
    }
  }
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 5;
    do {
      lVar9 = *plVar1;
      iVar6 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_01e5e174;
  }
  local_28 = 0xd;
  FUN_01e5e294(&local_90,*(undefined8 *)(param_1 + 0x28),&local_28);
  uVar5 = FUN_01e5e30c(*param_2);
  FUN_018e7a04(*param_2,local_90);
  plVar1 = local_90;
  uVar7 = FUN_01920760(local_90[6],*(undefined2 *)((long)local_90 + 0x52),uVar5);
  if ((uVar7 & 1) == 0) {
LAB_01e5e114:
    FUN_019209d0(local_90,uVar5);
    FUN_00e677b0(*param_2,local_90);
    uVar11 = 0;
  }
  else {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar9 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar9;
    uVar8 = (uint)*(byte *)(lVar9 + 0x2c);
    uVar4 = uVar8 - 1;
    if (((9 < uVar4) || (uVar8 == 0)) || (uVar4 == 5)) goto LAB_01e5e114;
    local_88 = (short *)plVar1[6];
    uVar8 = 0;
    psVar10 = local_88;
    do {
      if (*psVar10 == 0) {
        if (uVar8 == 0) goto LAB_01e5e130;
        break;
      }
      if (*psVar10 == 0x10) {
        lVar9 = (ulong)(ushort)psVar10[1] + 2;
        psVar10 = psVar10 + lVar9;
      }
      else {
        psVar10 = psVar10 + 1;
        lVar9 = 1;
      }
      uVar8 = (int)lVar9 + uVar8;
    } while (uVar8 < 0x800);
    local_24 = 0;
    iVar6 = (**(code **)(*DAT_0483b098 + 0x28))
                      (DAT_0483b098,local_80,*(undefined4 *)(&DAT_03d317dc + (ulong)uVar4 * 4),
                       &local_88,1);
    if ((iVar6 == 0) && (local_80[0] != 0)) {
      local_24 = 1;
      FUN_019a5cf0(&local_24,&local_88);
      if (0 < local_24) goto LAB_01e5e114;
    }
  }
LAB_01e5e130:
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 5;
    do {
      lVar9 = *plVar1;
      iVar6 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_01e5e174:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_01920670();
  return uVar11;
}


