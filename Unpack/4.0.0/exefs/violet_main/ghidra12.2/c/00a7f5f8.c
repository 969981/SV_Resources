/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a7f5f8; name: FUN_00a7f5f8
 */


void FUN_00a7f5f8(long param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  char *pcVar9;
  undefined8 *puVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  short sVar20;
  long *plVar21;
  int iVar22;
  int iVar23;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  lVar16 = FUN_01195854();
  if (lVar16 == 0) {
    return;
  }
  local_f0 = (undefined8 *)0x0;
  local_e8 = (code *)0x0;
  FUN_00f3e8f8(&local_f0,*(long *)(param_1 + 0x30) + 0x68);
  puVar10 = local_f0;
  if (local_f0 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_f0 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_f0 + 0x1a);
    sVar20 = *(short *)((long)local_f0 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar20) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00a7f69c;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a7f69c:
        bVar8 = false;
      }
      if (bVar8) {
        plVar21 = (long *)0x0;
        if (local_f0[2] != 0) {
          plVar21 = (long *)(local_f0[2] + -0x28);
        }
        goto LAB_00a7f6c4;
      }
      sVar20 = sVar5;
    } while (sVar5 != 0);
  }
  plVar21 = (long *)0x0;
LAB_00a7f6c4:
  psVar1 = (short *)(local_f0 + 3);
  do {
    sVar20 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar20 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar20 == 1) {
    piVar2 = (int *)((long)local_f0 + 0x1c);
    do {
      iVar15 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar19 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar19;
      local_110 = *puVar10;
      FUN_00c44438(lVar19 + 0x8040,&local_110);
    }
  }
  else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar21 == (long *)0x0) {
    return;
  }
  lVar19 = plVar21[0x95];
  iVar15 = *(int *)(lVar19 + 8);
  if (*(int *)(lVar19 + 0x1c) == 0) {
    iVar22 = *(int *)(lVar19 + 0xc);
    iVar23 = 0;
    if (iVar22 != 0) {
      iVar23 = iVar15 / iVar22;
    }
    iVar22 = iVar15 - iVar23 * iVar22;
  }
  else {
    iVar23 = *(int *)(lVar19 + 0x10);
    iVar22 = 0;
    if (iVar23 != 0) {
      iVar22 = iVar15 / iVar23;
    }
    iVar23 = iVar15 - iVar22 * iVar23;
  }
  bVar3 = *(byte *)(param_1 + 0x69);
  uVar12 = FUN_01dd66b8(*(undefined8 *)(param_1 + 0x30));
  bVar4 = *(byte *)(lVar16 + 0x56f);
  FUN_01ddc9d8(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x1a0));
  if (iVar23 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    iVar13 = FUN_014a24ec();
    iVar15 = 8;
    if (iVar13 != 2) {
      iVar15 = 4;
    }
    uVar14 = iVar22 + iVar15 * (iVar23 + -1) & 0xff;
  }
  FUN_00a6a748(*(undefined8 *)(param_1 + 0x30),param_2,uVar14);
  uVar14 = FUN_01dcddf4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x1a0));
  FUN_01ddc9d8(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x1a0));
  if (uVar14 == 1) {
    FUN_00a7fae0(param_1,2);
    lVar16 = plVar21[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar20 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    goto LAB_00a7f97c;
  }
  if (uVar14 == 0) {
    uVar6 = iVar22 + (iVar23 + -1) * (uint)bVar3;
    *(undefined4 *)(param_1 + 0x60) = 3;
    uVar14 = 0;
    if (uVar6 < (uint)bVar4 + (uVar12 & 1) || param_2 != 0) {
      uVar14 = uVar6;
    }
    *(char *)(param_1 + 0x70) = (char)uVar14;
    *(int *)(param_1 + 0x6c) = param_2;
    lVar16 = plVar21[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar20 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    goto LAB_00a7f97c;
  }
  if ((uVar14 & 0xfffffffe) == 4) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar16 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar16;
    local_110 = 0x9361c9d60afa3753;
    local_108 = "PLAY_UI_COMMON_BEEP";
    local_100 = 0x13;
    local_f8 = (long *)0x0;
    if (*(long *)(lVar16 + 0x48) == 0) {
      uVar17 = 0xffffffffffffffff;
    }
    else {
      uVar17 = FUN_00cf8198();
    }
    pcVar9 = local_108;
    memset(&local_f0,0,0x80);
    plVar18 = *(long **)(*(long *)(lVar16 + 0x200) + 0x60);
    iVar15 = (**(code **)(*plVar18 + 0xd0))(plVar18,pcVar9,uVar17,1,&LAB_01080c70,lVar16,0,0,0);
    if (iVar15 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar16 + 0x220),&local_110,iVar15,uVar17,0,&local_f0,0);
      pcVar11 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = (undefined8 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar11)(auStack_d0);
      }
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
LAB_00a7f93c:
    FUN_0129e8c0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
  }
  else {
    if (uVar14 == 0xd) {
      uVar17 = 5;
    }
    else {
      if (uVar14 != 7) {
        if (uVar14 == 6) {
          FUN_00a7fae0(param_1,4);
          lVar16 = plVar21[6];
          psVar1 = (short *)(lVar16 + 0x1a);
          do {
            sVar20 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar20 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_00a7f97c;
        }
        goto LAB_00a7f93c;
      }
      uVar17 = 3;
    }
    FUN_00a7fae0(param_1,uVar17);
  }
  lVar16 = plVar21[6];
  psVar1 = (short *)(lVar16 + 0x1a);
  do {
    sVar20 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar20 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00a7f97c:
  if (sVar20 == 1) {
    *(undefined8 *)(lVar16 + 0x10) = 0;
    (**(code **)(*plVar21 + 0x50))(plVar21);
  }
  else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


