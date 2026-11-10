/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01967d8c; name: FUN_01967d8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01967d8c(long param_1)

{
  int *piVar1;
  short *psVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  size_t sVar9;
  ulong uVar10;
  short sVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78 [4];
  undefined8 *local_68;
  undefined7 uStack_60;
  undefined4 local_59;
  undefined5 uStack_55;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  local_38 = FUN_0119579c();
  if (*(int *)(param_1 + 0x108) - 1U < 2) {
    lVar13 = *(long *)(param_1 + 0x30);
    local_68 = (undefined8 *)0x619e2314f09d850e;
    uStack_60 = 0x3bf5de3;
    local_59 = 0xc00;
    uStack_55 = 0;
  }
  else {
    puVar14 = (undefined8 *)&DAT_cbf29ce484222645;
    iVar8 = FUN_01195974(param_1);
    snprintf((char *)&local_80,0x14,"N_context_0%d",iVar8 + 1);
    sVar9 = strlen((char *)&local_80);
    if ((byte)local_80 != 0) {
      pbVar12 = (byte *)((ulong)&local_80 | 1);
      bVar3 = (byte)local_80;
      do {
        puVar14 = (undefined8 *)(((ulong)puVar14 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar3 != 0);
    }
    uStack_60 = SUB87(&local_80,0);
    local_59._0_1_ = (undefined1)((ulong)&local_80 >> 0x38);
    local_59._1_3_ = (undefined3)sVar9;
    uStack_55 = (undefined5)(sVar9 >> 0x18);
    lVar13 = *(long *)(param_1 + 0x30);
    local_68 = puVar14;
  }
  uStack_50 = 0;
  lVar13 = FUN_00c8c7b4(*(undefined8 *)(lVar13 + 0x170),&local_68);
  local_40[0] = *(undefined4 *)(lVar13 + 0x38);
  local_48 = *(undefined8 *)(lVar13 + 0x30);
  FUN_01195bb4(&local_68,param_1,*(undefined4 *)(param_1 + 0x108));
  puVar14 = local_68;
  if (local_68 == (undefined8 *)0x0) {
LAB_01967e60:
    bVar7 = false;
  }
  else {
    if (*(short *)((long)local_68 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_68 + 0x1a);
      sVar11 = *(short *)((long)local_68 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar11) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01968474;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01968474:
          bVar7 = false;
        }
        if (bVar7) {
          plVar15 = (long *)0x0;
          if (local_68[2] != 0) {
            plVar15 = (long *)(local_68[2] + -0x28);
          }
          goto LAB_0196849c;
        }
        sVar11 = sVar4;
      } while (sVar4 != 0);
    }
    plVar15 = (long *)0x0;
LAB_0196849c:
    psVar2 = (short *)(local_68 + 3);
    do {
      sVar11 = *psVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_68 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_80 = *puVar14;
        FUN_00c44438(lVar13 + 0x8040,&local_80);
      }
    }
    else if (sVar11 == 0) goto LAB_01968000;
    if (plVar15 == (long *)0x0) goto LAB_01967e60;
    uVar10 = FUN_01dcd22c(plVar15);
    if (uVar10 >> 0x20 == 0) {
      bVar7 = *(int *)(param_1 + 0x108) == 0;
    }
    else {
      bVar7 = false;
    }
    lVar13 = plVar15[6];
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar11 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar11 == 0) goto LAB_019684f8;
  }
  iVar8 = *(int *)(param_1 + 0x298);
  if (iVar8 == 0) {
    if (*(int *)(param_1 + 0x284) == 3) {
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      FUN_01084328(&local_90,param_1 + 0x130);
      FUN_01968958(&local_90,s_F948AF51F4B0CD72D_04541a70,&local_48,(ulong)&local_48 | 4,local_40,
                   &local_38);
      if (local_90 == (undefined8 *)0x0) goto LAB_01967ec0;
      psVar2 = (short *)(local_90 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_90 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar14 = local_90;
        } while (cVar5 != '\0');
        goto LAB_01968390;
      }
    }
    else if (*(int *)(param_1 + 0x284) == 1) {
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      FUN_01084328(&local_a0,param_1 + 0x130);
      FUN_01968958(&local_a0,s_FF939C80E181F490B_04541a83,&local_48,(ulong)&local_48 | 4,local_40,
                   &local_38);
      if (local_a0 == (undefined8 *)0x0) goto LAB_01967ec0;
      psVar2 = (short *)(local_a0 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar14 = local_a0;
        } while (cVar5 != '\0');
        goto LAB_01968390;
      }
    }
    else if (bVar7) {
      local_68 = (undefined8 *)0x619e2314f09d850e;
      uStack_60 = 0x3bf5de3;
      local_59 = 0xc00;
      uStack_55 = 0;
      uStack_50 = 0;
      lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_68);
      local_78[0] = *(undefined4 *)(lVar13 + 0x38);
      local_80 = *(undefined8 *)(lVar13 + 0x30);
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      FUN_01084328(&local_b0,param_1 + 0x130);
      FUN_01dd59e8(&local_b0,s_F29E97F769353286E_04541a96,&local_80,(ulong)&local_80 | 4,local_78);
      if (local_b0 == (undefined8 *)0x0) goto LAB_01967ec0;
      psVar2 = (short *)(local_b0 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar14 = local_b0;
        } while (cVar5 != '\0');
        goto LAB_01968390;
      }
    }
    else {
      local_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
      FUN_01084328(&local_c0,param_1 + 0x130);
      FUN_01968958(&local_c0,s_FF4B03421A0BE96F9_04541aa9,&local_48,(ulong)&local_48 | 4,local_40,
                   &local_38);
      if (local_c0 == (undefined8 *)0x0) goto LAB_01967ec0;
      psVar2 = (short *)(local_c0 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar14 = local_c0;
        } while (cVar5 != '\0');
LAB_01968390:
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_68 = (undefined8 *)*puVar14;
          FUN_00c44438(lVar13 + 0x8040,&local_68);
        }
        goto LAB_01967ec0;
      }
    }
  }
  else if (iVar8 == 1) {
    if (bVar7) {
      local_68 = (undefined8 *)0x619e2314f09d850e;
      uStack_60 = 0x3bf5de3;
      local_59 = 0xc00;
      uStack_55 = 0;
      uStack_50 = 0;
      lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_68);
      local_78[0] = *(undefined4 *)(lVar13 + 0x38);
      local_80 = *(undefined8 *)(lVar13 + 0x30);
      local_d0 = (undefined8 *)0x0;
      uStack_c8 = 0;
      FUN_01084328(&local_d0,param_1 + 0x130);
      FUN_01dd59e8(&local_d0,s_F29E97F769353286E_04541a96,&local_80,(ulong)&local_80 | 4,local_78);
      if (local_d0 == (undefined8 *)0x0) goto LAB_01967ec0;
      psVar2 = (short *)(local_d0 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar14 = local_d0;
        } while (cVar5 != '\0');
        goto LAB_01968390;
      }
    }
    else {
      local_e0 = (undefined8 *)0x0;
      uStack_d8 = 0;
      FUN_01084328(&local_e0,param_1 + 0x130);
      if (local_e0 == (undefined8 *)0x0) goto LAB_01967ec0;
      if (*(short *)((long)local_e0 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_e0 + 0x1a);
        sVar11 = *(short *)((long)local_e0 + 0x1a);
LAB_0196829c:
        sVar4 = *psVar2;
        if (sVar4 == sVar11) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_019682c0;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019682c0:
          bVar7 = false;
        }
        if (!bVar7) goto code_r0x019682c8;
        lVar13 = local_e0[2];
        if (lVar13 != 0) {
          plVar15 = (long *)(lVar13 + -0x28);
          local_68 = DAT_03d300f3;
          uStack_60 = (undefined7)DAT_03d300fb;
          local_59 = ram0x03d30102;
          FUN_017bfaf8(plVar15,0,&local_68,&local_38);
          lVar13 = *(long *)(lVar13 + 0x70);
          psVar2 = (short *)(lVar13 + 0x1a);
          do {
            sVar11 = *psVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))(plVar15);
          }
          else if (sVar11 == 0) goto LAB_019684f8;
        }
      }
LAB_019682d0:
      if (local_e0 == (undefined8 *)0x0) goto LAB_01967ec0;
      psVar2 = (short *)(local_e0 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar14 = local_e0;
        } while (cVar5 != '\0');
        goto LAB_01968390;
      }
    }
  }
  else {
    if (iVar8 != 2) goto LAB_01967ec0;
    FUN_01195974(param_1);
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_01195bb4(&local_68,param_1);
      puVar14 = local_68;
      if (local_68 == (undefined8 *)0x0) goto LAB_01967ec0;
      if (*(short *)((long)local_68 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_68 + 0x1a);
        sVar11 = *(short *)((long)local_68 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar11) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01968424;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01968424:
            bVar7 = false;
          }
          if (bVar7) {
            plVar15 = (long *)0x0;
            if (local_68[2] != 0) {
              plVar15 = (long *)(local_68[2] + -0x28);
            }
            goto LAB_0196866c;
          }
          sVar11 = sVar4;
        } while (sVar4 != 0);
      }
      plVar15 = (long *)0x0;
LAB_0196866c:
      psVar2 = (short *)(local_68 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_68 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_80 = *puVar14;
          FUN_00c44438(lVar13 + 0x8040,&local_80);
        }
      }
      else if (sVar11 == 0) goto LAB_01968000;
      if (plVar15 == (long *)0x0) goto LAB_01967ec0;
      uVar10 = FUN_01dcd22c(plVar15);
      if (uVar10 >> 0x20 == 0) {
        local_110 = (undefined8 *)0x0;
        uStack_108 = 0;
        FUN_01084328(&local_110,param_1 + 0x130);
        FUN_01dd59e8(&local_110,s_F3609350E682C2BE5_04541abc,&local_48,(ulong)&local_48 | 4,local_40
                    );
        if (local_110 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_110 + 3);
          do {
            sVar11 = *psVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar11 == 1) {
            piVar1 = (int *)((long)local_110 + 0x1c);
            do {
              iVar8 = *piVar1;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              puVar14 = local_110;
            } while (cVar5 != '\0');
            goto LAB_0196881c;
          }
LAB_01968788:
          if (sVar11 == 0) goto LAB_01968000;
        }
      }
      else {
        local_120 = (undefined8 *)0x0;
        uStack_118 = 0;
        FUN_01084328(&local_120,param_1 + 0x130);
        FUN_01968958(&local_120,s_F973E7EF1CCC40C5E_04541acf,&local_48,(ulong)&local_48 | 4,local_40
                     ,&local_38);
        if (local_120 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_120 + 3);
          do {
            sVar11 = *psVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar11 != 1) goto LAB_01968788;
          piVar1 = (int *)((long)local_120 + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            puVar14 = local_120;
          } while (cVar5 != '\0');
LAB_0196881c:
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_68 = (undefined8 *)*puVar14;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
      }
      lVar13 = plVar15[6];
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar11 == 0) {
LAB_019684f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_01967ec0;
    }
    if (bVar7) {
      local_68 = (undefined8 *)0x619e2314f09d850e;
      uStack_60 = 0x3bf5de3;
      local_59 = 0xc00;
      uStack_55 = 0;
      uStack_50 = 0;
      lVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_68);
      local_78[0] = *(undefined4 *)(lVar13 + 0x38);
      local_80 = *(undefined8 *)(lVar13 + 0x30);
      local_f0 = (undefined8 *)0x0;
      uStack_e8 = 0;
      FUN_01084328(&local_f0,param_1 + 0x130);
      FUN_01dd59e8(&local_f0,s_F29E97F769353286E_04541a96,&local_80,(ulong)&local_80 | 4,local_78);
      if (local_f0 == (undefined8 *)0x0) goto LAB_01967ec0;
      psVar2 = (short *)(local_f0 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar14 = local_f0;
        } while (cVar5 != '\0');
        goto LAB_01968390;
      }
    }
    else {
      local_100 = (undefined8 *)0x0;
      uStack_f8 = 0;
      FUN_01084328(&local_100,param_1 + 0x130);
      local_68 = (undefined8 *)((ulong)local_68 & 0xffffffffffffff00);
      FUN_01dd5ae8(&local_100,&local_48,(ulong)&local_48 | 4,local_40,&local_38,&local_68);
      if (local_100 == (undefined8 *)0x0) goto LAB_01967ec0;
      psVar2 = (short *)(local_100 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_100 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          puVar14 = local_100;
        } while (cVar5 != '\0');
        goto LAB_01968390;
      }
    }
  }
  if (sVar11 == 0) {
LAB_01968000:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_01967ec0:
  FUN_0196891c(param_1);
  return;
code_r0x019682c8:
  sVar11 = sVar4;
  if (sVar4 == 0) goto LAB_019682d0;
  goto LAB_0196829c;
}


