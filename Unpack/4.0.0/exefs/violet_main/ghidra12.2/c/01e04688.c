/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e04688; name: FUN_01e04688
 */


void FUN_01e04688(undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined4 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  short sVar15;
  long *plVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90 [3];
  undefined8 local_78;
  
  uVar24 = param_3._8_8_;
  uVar23 = param_3._4_4_;
  if ((DAT_04837608 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(&DAT_04837608);
    uVar23 = 0;
    uVar24 = 0;
    if (iVar8 != 0) {
      FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837608);
      uVar23 = 0;
      uVar24 = 0;
    }
  }
  lVar7 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  auVar19._4_4_ = uVar23;
  auVar19._0_4_ = param_3._0_4_;
  plVar16 = (long *)(DAT_048375f8 + 0x2d8);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01e04784;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x2e0));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x2e0));
        while (*plVar16 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e04784;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e04784:
  local_78 = CONCAT71(local_78._1_7_,1);
  local_a0 = &local_78;
  puVar12 = (undefined8 *)(lVar7 + 0x58);
  if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
    puVar11 = puVar12;
    goto LAB_01e04820;
  }
  puVar14 = (undefined8 *)(lVar7 + 0x58);
  puVar11 = (undefined8 *)*puVar12;
  do {
    if (*(byte *)(puVar11 + 4) < 2) {
      puVar12 = puVar14;
      if (*(byte *)(puVar11 + 4) != 0) {
LAB_01e04820:
        puVar14 = (undefined8 *)*puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
          plVar16 = (long *)(lVar7 + 0x50);
          FUN_01e028e0(local_90,plVar16,&local_a0);
          *local_90[0] = 0;
          local_90[0][1] = 0;
          local_90[0][2] = puVar11;
          *puVar12 = local_90[0];
          puVar11 = local_90[0];
          if (*(long *)*plVar16 != 0) {
            *plVar16 = *(long *)*plVar16;
            puVar11 = (undefined8 *)*puVar12;
          }
          FUN_010108e0(*(undefined8 *)(lVar7 + 0x58),puVar11);
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          puVar14 = local_90[0];
        }
        puVar6 = PTR_DAT_047d3918;
        puVar12 = (undefined8 *)puVar14[6];
        while( true ) {
          if (puVar12 == puVar14 + 5) {
            *(undefined8 *)(lVar7 + 0x2d8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x2e0));
            return;
          }
          lVar9 = puVar12[2];
          if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) break;
LAB_01e04850:
          puVar12 = (undefined8 *)puVar12[1];
        }
        psVar1 = (short *)(lVar9 + 0x1a);
        sVar15 = *(short *)(lVar9 + 0x1a);
LAB_01e04904:
        sVar3 = *psVar1;
        if (sVar3 == sVar15) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e04938;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e04938:
          bVar5 = false;
        }
        if (!bVar5) break;
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          plVar16 = (long *)(lVar9 + -0x28);
          lVar10 = (**(code **)(*plVar16 + 0x68))(plVar16);
          fVar17 = *(float *)(lVar10 + 0x30) - param_1._0_4_;
          fVar20 = *(float *)(lVar10 + 0x34) - param_1._4_4_;
          fVar21 = *(float *)(lVar10 + 0x38) - param_1._8_4_;
          fVar22 = *(float *)(lVar7 + 0x4c) + param_2;
          fVar17 = fVar17 * fVar17;
          fVar20 = fVar20 * fVar20;
          fVar21 = fVar21 * fVar21;
          auVar18._0_4_ = fVar17 + fVar20;
          auVar18._4_4_ = fVar21 + 0.0;
          auVar18._8_4_ = fVar17 + fVar20;
          auVar18._12_4_ = fVar21 + 0.0;
          auVar18 = NEON_ext(auVar18,auVar18,4,1);
          if (auVar18._0_4_ + auVar18._4_4_ < fVar22 * fVar22) {
            (**(code **)(*(long *)(lVar9 + -0x28) + 0x18))(local_90,plVar16);
            local_a0 = (undefined8 *)0x0;
            uStack_98 = 0;
            if (local_90[0][2] == lVar9) {
              FUN_00c9ea00(&local_a0,local_90);
            }
            puVar11 = local_90[0];
            if (local_90[0] != (undefined8 *)0x0) {
              psVar1 = (short *)(local_90[0] + 3);
              do {
                sVar15 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar15 == 1) {
                piVar2 = (int *)((long)local_90[0] + 0x1c);
                do {
                  iVar8 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar6 = lVar9;
                  local_78 = *puVar11;
                  FUN_00c44438(lVar9 + 0x8040,&local_78);
                }
              }
              else if (sVar15 == 0) goto LAB_01e04ab4;
            }
            FUN_01e04c80(local_90,&local_a0);
            auVar19._8_8_ = uVar24;
            FUN_01e04d40(auVar19,local_90,param_4);
            puVar11 = local_90[0];
            if (local_90[0] != (undefined8 *)0x0) {
              psVar1 = (short *)(local_90[0] + 3);
              do {
                sVar15 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar15 == 1) {
                piVar2 = (int *)((long)local_90[0] + 0x1c);
                do {
                  iVar8 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar6 = lVar9;
                  local_78 = *puVar11;
                  FUN_00c44438(lVar9 + 0x8040,&local_78);
                }
              }
              else if (sVar15 == 0) goto LAB_01e04ab4;
            }
            puVar11 = local_a0;
            if (local_a0 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_a0 + 3);
              do {
                sVar15 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar15 == 1) {
                piVar2 = (int *)((long)local_a0 + 0x1c);
                do {
                  iVar8 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar6 = lVar9;
                  local_78 = *puVar11;
                  FUN_00c44438(lVar9 + 0x8040,&local_78);
                }
              }
              else if (sVar15 == 0) {
LAB_01e04ab4:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
          (**(code **)(*plVar16 + 0x60))(plVar16);
        }
        goto LAB_01e04850;
      }
      puVar12 = puVar11 + 1;
      puVar13 = (undefined8 *)*puVar12;
      puVar14 = puVar12;
      if (puVar13 == (undefined8 *)0x0) goto LAB_01e04820;
    }
    else {
      puVar13 = (undefined8 *)*puVar11;
      if (puVar13 == (undefined8 *)0x0) {
        puVar12 = puVar11;
        goto LAB_01e04820;
      }
      puVar14 = puVar11;
    }
    puVar11 = puVar13;
  } while( true );
  sVar15 = sVar3;
  if (sVar3 == 0) goto LAB_01e04850;
  goto LAB_01e04904;
}


