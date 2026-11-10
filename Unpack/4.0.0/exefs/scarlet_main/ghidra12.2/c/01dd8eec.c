/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd8eec; name: FUN_01dd8eec
 */


void FUN_01dd8eec(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar11 = *(long *)(param_1 + 0x1b0);
  local_38 = FUN_01195974();
  FUN_014e2aa0(*(undefined4 *)(lVar11 + 0xbf0),*(undefined1 *)(lVar11 + 0xbf5),&local_38,
               (ulong)&local_38 | 4);
  if (*(int *)(lVar11 + 0xbf0) == 1) {
    if (*(uint *)(param_1 + 0x2a4) != (uint)*(byte *)(lVar11 + 0xbf4)) {
      FUN_014e3148(param_1);
      uVar4 = *(undefined1 *)(lVar11 + 0xbf4);
      FUN_014e2fd0(param_1,1,uVar4,0,0,0);
      FUN_014e2fd0(param_1,1,uVar4,1,0,0);
      FUN_014e2fd0(param_1,1,uVar4,2,0,0);
      FUN_014e2fd0(param_1,1,uVar4,3,0,0);
      FUN_014e2fd0(param_1,1,uVar4,4,0,0);
      FUN_014e2fd0(param_1,1,uVar4,5,0,0);
      *(uint *)(param_1 + 0x2a4) = (uint)*(byte *)(lVar11 + 0xbf4);
    }
    FUN_01dd29cc(local_58,param_1,1);
    if (local_58[0] == (undefined8 *)0x0) goto LAB_01dd93f4;
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 != 1) {
LAB_01dd9590:
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      goto LAB_01dd93f4;
    }
    piVar2 = (int *)((long)local_58[0] + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      puVar10 = local_58[0];
    } while (cVar5 != '\0');
  }
  else {
    if (*(int *)(lVar11 + 0xbf0) != 0) goto LAB_01dd93f4;
    lVar8 = FUN_01195854();
    if (*(char *)(lVar8 + 0x570) != *(char *)(lVar11 + 0xbf4)) {
      FUN_014e5120(param_1,*(char *)(lVar11 + 0xbf4),0);
      uVar4 = *(undefined1 *)(lVar11 + 0xbf4);
      FUN_014e2fd0(param_1,0,uVar4,0,0,0);
      FUN_014e2fd0(param_1,0,uVar4,1,0,0);
      FUN_014e2fd0(param_1,0,uVar4,2,0,0);
      FUN_014e2fd0(param_1,0,uVar4,3,0,0);
      FUN_014e2fd0(param_1,0,uVar4,4,0,0);
      FUN_014e2fd0(param_1,0,uVar4,5,0,0);
      FUN_014e2fd0(param_1,0,uVar4,6,0,0);
      FUN_014e2fd0(param_1,0,uVar4,7,0,0);
      FUN_014e2fd0(param_1,0,uVar4,8,0,0);
      FUN_014e2fd0(param_1,0,uVar4,9,0,0);
      FUN_014e2fd0(param_1,0,uVar4,10,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0xb,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0xc,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0xd,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0xe,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0xf,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x10,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x11,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x12,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x13,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x14,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x15,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x16,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x17,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x18,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x19,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x1a,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x1b,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x1c,0,0);
      FUN_014e2fd0(param_1,0,uVar4,0x1d,0,0);
      FUN_01dc0660(lVar8,*(undefined1 *)(lVar11 + 0xbf4));
    }
    local_38 = CONCAT44(local_38._4_4_ + 1,(undefined4)local_38);
    FUN_01dd29cc(local_48,param_1,0);
    if (local_48[0] == (undefined8 *)0x0) goto LAB_01dd93f4;
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 != 1) goto LAB_01dd9590;
    piVar2 = (int *)((long)local_48[0] + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      puVar10 = local_48[0];
    } while (cVar5 != '\0');
  }
  if (iVar7 != -1) {
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar8 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar8;
    local_80 = *puVar10;
    FUN_00c44438(lVar8 + 0x8040,&local_80);
  }
LAB_01dd93f4:
  FUN_014e4eac(param_1,&local_38);
  local_60 = *(long **)(param_1 + 0x30);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x58))();
  }
  local_80 = 0xd74bebc3a9958d8b;
  pcStack_78 = "L_icon_item_01/lift_item";
  local_70 = 0x18;
  local_68 = (long *)0x0;
  FUN_01dcc560(&local_60,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  local_88 = *(long **)(param_1 + 0x30);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x58))();
  }
  local_80 = 0x449313d95ebfa1dd;
  pcStack_78 = "L_icon_item_01/lifting_item";
  local_70 = 0x1b;
  local_68 = (long *)0x0;
  FUN_01dcc560(&local_88,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x60))();
  }
  plVar9 = *(long **)(param_1 + 0x30);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x58))(plVar9);
  }
  local_80 = 0xdef019c03b77a4b3;
  pcStack_78 = "L_icon_item_01/release_item";
  local_70 = 0x1b;
  local_68 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    lVar8 = FUN_00e895f4(plVar9[0x2e],&local_80);
    if (lVar8 != 0) {
      FUN_00dfcea4();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    (**(code **)(*plVar9 + 0x60))(plVar9);
  }
  FUN_01dd8a44(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(lVar11 + 0xbf0),
               *(undefined1 *)(lVar11 + 0xbf4),*(undefined1 *)(lVar11 + 0xbf5),0);
  if (*(long *)(param_1 + 0x1b8) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 0x13;
    *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 0x13;
  }
  return;
}


