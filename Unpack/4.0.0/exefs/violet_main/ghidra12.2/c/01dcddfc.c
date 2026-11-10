/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcddfc; name: FUN_01dcddfc
 */


void FUN_01dcddfc(long param_1,int param_2,undefined8 param_3,ulong param_4,byte param_5,
                 byte param_6)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  byte local_48 [4];
  byte local_44 [4];
  
  local_44[0] = param_5 & 1;
  local_48[0] = param_6 & 1;
  if (param_2 < 0xb) {
    if (param_2 == 0) {
      FUN_011b6674(*(undefined8 *)(param_1 + 0x1c0),0,param_3,1);
      goto switchD_01dcde58_caseD_c;
    }
    if ((param_2 != 5) || (lVar12 = FUN_01dc71f8(*(undefined8 *)(param_1 + 0x1a0)), lVar12 == 0))
    goto switchD_01dcde58_caseD_c;
    goto LAB_01dcdea4;
  }
  switch(param_2) {
  case 0xb:
    local_68 = 0x49b5b2e8a6b4fb19;
    pcStack_60 = "boxname";
    local_58 = 7;
    local_50 = (long *)0x0;
    local_88 = (long *)0x5ced541336fb5812;
    pcStack_80 = "msg_team_name_01";
    local_78 = 0x10;
    local_70 = (long *)0x0;
    FUN_014c705c(*(undefined8 *)(param_1 + 0x1c0),0,&local_68,&local_88);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
    goto switchD_01dcde58_caseD_c;
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
    goto switchD_01dcde58_caseD_10;
  }
  if (param_2 != 0x29) goto switchD_01dcde58_caseD_c;
switchD_01dcde58_caseD_10:
  uVar9 = FUN_01195974(param_1);
  uVar14 = *(undefined8 *)(param_1 + 0x1a0);
  uVar13 = uVar9 >> 0x20;
  iVar8 = *(int *)(param_1 + 0x108);
  if (iVar8 == 0) {
    lVar12 = FUN_01195854();
    uVar11 = (uint)*(byte *)(lVar12 + 0x570);
    uVar10 = 0;
    iVar8 = *(int *)(param_1 + 0x108);
  }
  else {
    uVar10 = 1;
    if (iVar8 != 1) {
      if (iVar8 != 2) {
        uVar11 = 0xffffffff;
        uVar10 = 3;
        goto LAB_01dcde88;
      }
      uVar10 = 2;
    }
    uVar11 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dcde88:
  if (iVar8 == 0) {
    uVar13 = (ulong)(uint)((int)uVar9 + (int)(uVar9 >> 0x20) * 6);
  }
  else if ((iVar8 != 1) && (iVar8 != 2)) {
    uVar13 = 1;
  }
  lVar12 = FUN_010f26f8(uVar14,uVar10,uVar11,uVar13);
  if (lVar12 != 0) {
LAB_01dcdea4:
    FUN_014c0fb4(*(undefined8 *)(param_1 + 0x1c0),0,lVar12);
  }
switchD_01dcde58_caseD_c:
  FUN_01dd4de4(&local_88,param_1,param_2);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_01084328(&local_98,param_1 + 0x130);
  FUN_01dda0e4(&local_98,&local_88,local_44,local_48);
  puVar7 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_98 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_68 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(param_1 + 0x2ac) = 0;
  if (((param_4 & 1) != 0) && (*(long *)(param_1 + 0x1b8) != 0)) {
    *(undefined4 *)(param_1 + 0x170) = 0xb;
    *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 0xb;
  }
  if (local_88 != (long *)0x0) {
    plVar2 = local_88 + 5;
    do {
      lVar12 = *plVar2;
      iVar8 = (int)lVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


