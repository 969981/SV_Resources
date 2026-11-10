/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de2f94; name: FUN_01de2f94
 */


undefined8 FUN_01de2f94(long param_1,int *param_2)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  short sVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = 0x89f5cbcc65ae0e8a;
  pcStack_58 = "L_cursorover_popup_00";
  local_50 = 0x15;
  uStack_48 = 0;
  lVar8 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_60);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  iVar6 = FUN_014a24ec();
  uVar9 = FUN_014a24ec();
  if (param_2[1] == 0) {
    iVar11 = 7;
    if (iVar6 != 2) {
      iVar11 = 3;
    }
    if (*param_2 < iVar11) {
      local_60 = 0x3e7eb23dcb6e8621;
      pcStack_58 = "N_list_temochi_02";
      local_50 = 0x11;
      uStack_48 = 0;
      lVar8 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_60);
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
      local_60 = 0xa9aefb5179720017;
      pcStack_58 = "N_box_visible_00";
      local_50 = 0x10;
      uStack_48 = 0;
      lVar8 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_60);
      bVar3 = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    else {
      FUN_014e5120(param_1,0x20,0);
      local_60 = 0x3e7eb23dcb6e8621;
      pcStack_58 = "N_list_temochi_02";
      local_50 = 0x11;
      uStack_48 = 0;
      lVar8 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_60);
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      local_60 = 0xa9aefb5179720017;
      pcStack_58 = "N_box_visible_00";
      local_50 = 0x10;
      uStack_48 = 0;
      lVar8 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_60);
      bVar3 = *(byte *)(lVar8 + 0x58) | 1;
    }
    *(byte *)(lVar8 + 0x58) = bVar3;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01084328(&local_70,param_1 + 0x130);
    local_60 = CONCAT71(local_60._1_7_,1);
    FUN_01de0af4(&local_70,s_F3179DD50C98C45F5_04541c0b,&local_60);
    if (local_70 == (undefined8 *)0x0) goto LAB_01de3384;
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 != 1) goto LAB_01de3380;
    piVar2 = (int *)((long)local_70 + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar12 = local_70;
    } while (cVar4 != '\0');
  }
  else {
    iVar6 = 2;
    if ((int)uVar9 != 0) {
      iVar6 = 4;
    }
    if (iVar6 < param_2[1]) {
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      FUN_01084328(&local_90,param_1 + 0x130);
      local_60 = CONCAT71(local_60._1_7_,1);
      FUN_01de0af4(&local_90,s_F3179DD50C98C45F5_04541c0b,&local_60);
      if (local_90 == (undefined8 *)0x0) goto LAB_01de3384;
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 != 1) {
LAB_01de3380:
        if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        goto LAB_01de3384;
      }
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puVar12 = local_90;
      } while (cVar4 != '\0');
    }
    else {
      uVar7 = FUN_01de0d1c(uVar9,param_2);
      FUN_014e5120(param_1,uVar7,0);
      if (*(int *)(param_1 + 0x298) == 1) {
        lVar8 = *(long *)(param_1 + 0x1b0);
        uVar13 = 0;
        do {
          if ((((*(short *)(lVar8 + 0xbf6) == 0) || (*(int *)(lVar8 + 0xbf0) != 0)) ||
              (uVar7 != *(byte *)(lVar8 + 0xbf4))) || (uVar13 != *(byte *)(lVar8 + 0xbf5))) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          FUN_014e2fd0(param_1,0,uVar7,uVar13,0,uVar9);
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x1e);
      }
      local_60 = 0x3e7eb23dcb6e8621;
      pcStack_58 = "N_list_temochi_02";
      local_50 = 0x11;
      uStack_48 = 0;
      lVar8 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_60);
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      local_60 = 0xa9aefb5179720017;
      pcStack_58 = "N_box_visible_00";
      local_50 = 0x10;
      uStack_48 = 0;
      lVar8 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_60);
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_01084328(&local_80,param_1 + 0x130);
      local_60 = CONCAT71(local_60._1_7_,*(int *)(param_1 + 0x284) - 1U < 4);
      FUN_01de0af4(&local_80,s_F3179DD50C98C45F5_04541c0b,&local_60);
      if (local_80 == (undefined8 *)0x0) goto LAB_01de3384;
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 != 1) goto LAB_01de3380;
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        puVar12 = local_80;
      } while (cVar4 != '\0');
    }
  }
  if (iVar6 != -1) {
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar8 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar8;
    local_60 = *puVar12;
    FUN_00c44438(lVar8 + 0x8040,&local_60);
  }
LAB_01de3384:
  return *(undefined8 *)param_2;
}


