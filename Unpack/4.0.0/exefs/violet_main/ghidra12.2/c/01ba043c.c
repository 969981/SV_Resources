/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ba043c; name: FUN_01ba043c
 */


void FUN_01ba043c(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined8 param_4,undefined8 param_5,undefined1 param_6 [16],float param_7)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  short sVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  bool bVar19;
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_bc;
  float local_70;
  float fStack_6c;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  pbVar11 = PTR_DAT_047d7b48;
  if (((*PTR_DAT_047d7b48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7b48), iVar6 != 0))
  {
    FUN_00100190(&LAB_00aa519c,PTR_DAT_047d7b50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7b48);
  }
  puVar14 = (undefined8 *)PTR_DAT_047d7b58;
  puVar13 = (undefined8 *)PTR_DAT_047d7b50;
  local_bc = param_7 * param_7;
  plVar16 = (long *)(*(long *)PTR_DAT_047d7b50 + 0x58);
  *(long *)PTR_DAT_047d7b58 = *(long *)PTR_DAT_047d7b50;
LAB_01ba04a0:
  plVar16 = (long *)*plVar16;
LAB_01ba04a4:
  if ((*pbVar11 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(pbVar11);
    puVar13 = (undefined8 *)PTR_DAT_047d7b50;
    puVar14 = (undefined8 *)PTR_DAT_047d7b58;
    if (iVar6 != 0) {
      FUN_00100190(&LAB_00aa519c,PTR_DAT_047d7b50,&PTR_LOOP_04483000);
      __cxa_guard_release(pbVar11);
      puVar13 = (undefined8 *)PTR_DAT_047d7b50;
      puVar14 = (undefined8 *)PTR_DAT_047d7b58;
    }
  }
  *puVar14 = *puVar13;
  if (plVar16 == (long *)0x0) {
    return;
  }
  piVar15 = (int *)plVar16[6];
  if (*piVar15 == 4) {
    if (piVar15[1] != 5) {
      if (piVar15[1] != 0) goto LAB_01ba04a0;
    }
    lVar7 = *(long *)(piVar15 + 10);
    if (lVar7 != 0) {
      if (*(short *)(lVar7 + 0x1a) != 0) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar12 = *(short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar12) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar19) {
              *psVar1 = sVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01ba052c;
            bVar19 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01ba052c:
            bVar19 = false;
          }
          if (bVar19) goto LAB_01ba0620;
          sVar12 = sVar2;
          if (sVar2 == 0) break;
        } while( true );
      }
      goto LAB_01ba0824;
    }
  }
  goto LAB_01ba04a0;
LAB_01ba0620:
  lVar7 = *(long *)(lVar7 + 0x10);
  if (lVar7 == 0) {
LAB_01ba0824:
    pbVar11 = PTR_DAT_047d7b48;
    puVar13 = (undefined8 *)PTR_DAT_047d7b50;
    puVar14 = (undefined8 *)PTR_DAT_047d7b58;
    goto LAB_01ba04a0;
  }
  plVar9 = (long *)(lVar7 + 0xe8);
  lVar17 = *plVar9;
  auVar21 = param_3;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar17) {
    lVar8 = nn::os::GetCurrentThread();
LAB_01ba0644:
    if (*plVar9 == 0) goto code_r0x01ba064c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xf0));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xf0));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar19) {
              *plVar9 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01ba0654;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar19) {
        *plVar9 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01ba0654:
    bVar19 = false;
    goto LAB_01ba0658;
  }
  bVar19 = true;
LAB_01ba0658:
  plVar9 = (long *)FUN_013217a0(*(undefined8 *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0x108));
  if ((*(long **)(lVar7 + 0x108) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_013217a0(*(undefined8 *)(lVar7 + 0x138),*(undefined8 *)(lVar7 + 0x140));
    if (*(long **)(lVar7 + 0x140) == plVar9) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar8 = *plVar9 + -0x20;
  }
  plVar9 = (long *)(lVar7 + -0x28);
  if (!bVar19) {
    *(undefined8 *)(lVar7 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xf0));
  }
  if (lVar8 == 0) {
    bVar19 = true;
  }
  else {
    FUN_00d52990(&local_60,lVar8,0);
    puVar13 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      if (*(short *)((long)local_60 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_60 + 0x1a);
        sVar12 = *(short *)((long)local_60 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar12) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar19) {
              *psVar1 = sVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01ba08c4;
            bVar19 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01ba08c4:
            bVar19 = false;
          }
          if (bVar19) {
            plVar18 = (long *)0x0;
            if (local_60[2] != 0) {
              plVar18 = (long *)(local_60[2] + -0x28);
            }
            goto LAB_01ba08ec;
          }
          sVar12 = sVar2;
        } while (sVar2 != 0);
      }
      plVar18 = (long *)0x0;
LAB_01ba08ec:
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar12 = *psVar1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar19) {
          *psVar1 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar15 = (int *)((long)local_60 + 0x1c);
        do {
          iVar6 = *piVar15;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar19) {
            *piVar15 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar13;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar18 != (long *)0x0) {
        auVar20 = FUN_01fa0254(plVar18);
        uStack_58 = auVar20._8_8_;
        local_60 = auVar20._0_8_;
        uStack_48 = auVar21._8_8_;
        uStack_50 = auVar21._0_8_;
        uVar10 = FUN_01fa030c(&local_60);
        if ((uVar10 & 1) == 0) {
          bVar3 = false;
          bVar19 = true;
        }
        else {
          uVar10 = FUN_01fa0340(param_2,param_3,param_4,param_5,&local_60);
          if ((uVar10 & 1) != 0) {
            lVar8 = (**(code **)(*plVar9 + 0x68))(plVar9);
            local_70 = param_6._0_4_;
            fStack_6c = param_6._4_4_;
            local_70 = *(float *)(lVar8 + 0x30) - local_70;
            fStack_6c = *(float *)(lVar8 + 0x34) - fStack_6c;
            fVar22 = *(float *)(lVar8 + 0x38) - param_6._8_4_;
            local_70 = local_70 * local_70;
            fStack_6c = fStack_6c * fStack_6c;
            fVar22 = fVar22 * fVar22;
            auVar21._0_4_ = local_70 + fStack_6c;
            auVar21._4_4_ = fVar22 + 0.0;
            auVar21._8_4_ = local_70 + fStack_6c;
            auVar21._12_4_ = fVar22 + 0.0;
            auVar21 = NEON_ext(auVar21,auVar21,4,1);
            fVar22 = auVar21._0_4_ + auVar21._4_4_;
            if (fVar22 < local_bc) {
              FUN_00ca1a48(param_1,plVar16[6] + 0x28);
              local_bc = fVar22;
            }
          }
          bVar19 = false;
          bVar3 = true;
        }
        lVar8 = plVar18[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))(plVar18);
        }
        else if (sVar12 == 0) goto LAB_01ba0a08;
        if (!bVar3) goto LAB_01ba06bc;
      }
    }
    bVar19 = false;
  }
LAB_01ba06bc:
  lVar7 = *(long *)(lVar7 + 8);
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar5 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar3) {
      *psVar1 = sVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar12 == 0) {
LAB_01ba0a08:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  pbVar11 = PTR_DAT_047d7b48;
  puVar13 = (undefined8 *)PTR_DAT_047d7b50;
  puVar14 = (undefined8 *)PTR_DAT_047d7b58;
  if (!bVar19) goto LAB_01ba04a0;
  goto LAB_01ba04a4;
code_r0x01ba064c:
  cVar5 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar19) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01ba0654;
  goto LAB_01ba0644;
}


