/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a32e20; name: FUN_00a32e20
 */


void FUN_00a32e20(undefined8 *param_1,byte param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *local_118;
  char *local_110;
  char *pcStack_108;
  long local_100;
  long *local_f8;
  undefined8 *local_f0 [2];
  undefined1 *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  char *local_c0 [2];
  long local_b0 [3];
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_28;
  
  if (3 < param_2) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  local_e0 = &DAT_b1686d3e6def5684;
  pcStack_d8 = "playables";
  local_d0 = 9;
  local_c8 = (long *)0x0;
  FUN_00e25df8(local_f0,&local_e0);
  if ((local_f0[0] == (undefined8 *)0x0) || (*(short *)((long)local_f0[0] + 0x1a) == 0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    goto LAB_00a3316c;
  }
  if ((local_f0[0] == (undefined8 *)0x0) || (*(short *)((long)local_f0[0] + 0x1a) == 0)) {
    plVar12 = (long *)0x0;
  }
  else {
    psVar1 = (short *)((long)local_f0[0] + 0x1a);
    sVar11 = *(short *)((long)local_f0[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00a332e0;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a332e0:
        bVar6 = false;
      }
      if (bVar6) {
        plVar12 = (long *)0x0;
        if (local_f0[0][2] != 0) {
          plVar12 = (long *)(local_f0[0][2] + -0x28);
        }
        break;
      }
      plVar12 = (long *)0x0;
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  local_c0[0] = (char *)0xdd89716d5b07e188;
  local_c0[1] = "other_player_0";
  local_b0[2] = 0xdd89726d5b07e33b;
  pcStack_98 = "other_player_1";
  local_b0[0] = 0xe;
  local_b0[1] = 0;
  local_80 = 0xdd89736d5b07e4ee;
  pcStack_78 = "other_player_2";
  local_90 = 0xe;
  uStack_88 = 0;
  local_70 = 0xe;
  uStack_68 = 0;
  local_60 = 0xdd89746d5b07e6a1;
  pcStack_58 = "other_player_3";
  local_50 = 0xe;
  uStack_48 = 0;
  uVar10 = (ulong)param_2;
  local_110 = local_c0[uVar10 * 4];
  pcStack_108 = local_c0[uVar10 * 4 + 1];
  local_100 = local_b0[uVar10 * 4];
  local_f8 = (long *)local_b0[uVar10 * 4 + 1];
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x18))();
  }
  FUN_00cb7f10(&local_28,plVar12 + 8,&local_110);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x60))(plVar12);
  }
  plVar12 = local_28;
  if (local_28 == (long *)0x0) {
LAB_00a3315c:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    lVar13 = local_28[6];
    if (*(long *)(lVar13 + 0x10) == 0) {
LAB_00a33348:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar8;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar11 == -1) goto LAB_00a33368;
    lVar13 = FUN_0168e7c4(plVar12 + 0x21,local_c0);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x120) == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)(*(long *)(lVar13 + 0x120) + 0x210) != '\0';
    }
    lVar13 = plVar12[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar11 == 0) goto LAB_00a331e8;
    if (!bVar6) goto LAB_00a3315c;
    lVar13 = (**(code **)(*plVar12 + 0x68))(plVar12);
    uVar14 = *(undefined8 *)(lVar13 + 0x38);
    uVar8 = *(undefined8 *)(lVar13 + 0x30);
    local_118 = local_28;
    if (local_28 == (long *)0x0) {
      FUN_00a32780(local_c0,&local_118);
    }
    else {
      lVar13 = local_28[6];
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00a33348;
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar9;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar11 == -1) {
LAB_00a33368:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar12 = local_118;
      FUN_00a32780(local_c0,&local_118);
      if (plVar12 != (long *)0x0) {
        lVar13 = plVar12[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar11 == 0) goto LAB_00a331e8;
      }
    }
    if ((char)local_b0[0] == '\0') {
      *(undefined1 *)param_1 = 0;
    }
    else {
      param_1[1] = CONCAT44((float)((ulong)local_c0[1] >> 0x20) + 0.0,
                            (float)uVar14 + SUB84(local_c0[1],0));
      *param_1 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)local_c0[0] >> 0x20),
                          (float)uVar8 + SUB84(local_c0[0],0));
    }
    *(bool *)(param_1 + 2) = (char)local_b0[0] != '\0';
  }
  if (local_28 != (long *)0x0) {
    lVar13 = local_28[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar11 == 0) {
LAB_00a331e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_00a3316c:
  if (local_f0[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0[0] + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_f0[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_c0[0] = (char *)*local_f0[0];
        FUN_00c44438(lVar13 + 0x8040,local_c0);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


