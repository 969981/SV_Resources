/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3c698; name: FUN_00d3c698
 */


void FUN_00d3c698(long param_1,ulong param_2)

{
  short *psVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  float fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
  undefined8 uVar22;
  float fVar23;
  undefined8 *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined2 local_80;
  undefined1 uStack_7e;
  undefined5 uStack_7d;
  long *local_78;
  long *local_68;
  undefined1 local_60 [8];
  ulong uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_28;
  
  plVar14 = (long *)(param_1 + 0x250);
  lVar10 = nn::os::GetCurrentThread();
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 600));
        while (*plVar14 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *plVar14 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00d3c6d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar7) {
      *plVar14 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00d3c6d4:
  FUN_00c9e664(&local_80,param_1 + 0xe8);
  lVar10 = (**(code **)(*(long *)local_78[9] + 0x68))();
  uVar11 = *(ulong *)(lVar10 + 0x38);
  uVar22 = *(undefined8 *)(lVar10 + 0x30);
  if (local_78 != (long *)0x0) {
    plVar14 = local_78 + 5;
    do {
      lVar10 = *plVar14;
      iVar9 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar14 = (long *)CONCAT53(uStack_7d,CONCAT12(uStack_7e,local_80));
  fVar23 = (float)uVar11;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x60))();
  }
  if (((param_2 & 1) == 0) &&
     ((*(char *)(param_1 + 0x170) != '\0' || (*(char *)(param_1 + 0x220) != '\0')))) {
    auVar16._0_4_ = *(float *)(param_1 + 0x240) - (float)uVar22;
    fVar15 = *(float *)(param_1 + 0x248) - fVar23;
    auVar16._4_4_ = fVar15;
    auVar16._8_4_ = auVar16._0_4_;
    auVar16._12_4_ = fVar15;
    auVar17 = NEON_ext(ZEXT816(0),auVar16,8,1);
    auVar17 = NEON_ext(auVar17,auVar17,8,1);
    fVar15 = auVar17._0_4_ * auVar17._0_4_;
    fVar19 = auVar17._4_4_ * auVar17._4_4_;
    fVar20 = auVar17._8_4_ * auVar17._8_4_;
    fVar21 = auVar17._12_4_ * auVar17._12_4_;
    auVar17._0_4_ = fVar15 + fVar19;
    auVar17._4_4_ = fVar20 + fVar21;
    auVar17._8_4_ = fVar15 + fVar19;
    auVar17._12_4_ = fVar20 + fVar21;
    auVar17 = NEON_ext(auVar17,auVar17,4,1);
    if (SQRT(auVar17._0_4_ + auVar17._4_4_) < *(float *)(param_1 + 0x234)) goto LAB_00d3c9c4;
  }
  *(ulong *)(param_1 + 0x248) = uVar11 & 0xffffffff;
  *(undefined8 *)(param_1 + 0x240) = uVar22;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined2 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar10 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar10;
  lVar10 = *(long *)(lVar10 + 0x70);
  if (lVar10 != 0) {
    fVar15 = (float)uVar22 + 0.0;
    fVar19 = (float)((ulong)uVar22 >> 0x20) + *(float *)(param_1 + 0x228) * 0.5;
    auVar18._0_8_ = CONCAT44(fVar19,fVar15);
    auVar18._8_4_ = fVar23 + 0.0;
    auVar18._12_4_ = 0;
    uVar22._0_4_ = fVar15 + 0.0;
    uVar22._4_4_ = *(float *)(param_1 + 0x230) + fVar19;
    uStack_58 = (ulong)(uint)(auVar18._8_4_ + 0.0);
    local_60 = (undefined1  [8])uVar22;
    uStack_48 = (ulong)(uint)(auVar18._8_4_ - 0.0);
    local_50 = CONCAT44(fVar19 - *(float *)(param_1 + 0x230),fVar15 - 0.0);
    if (*(char *)(param_1 + 0x171) != '\0') {
      uStack_7e = 0;
      local_80 = 0;
      uVar11 = FUN_00d6fedc(lVar10,*(undefined4 *)(param_1 + 0x174),param_1 + 0x120,1,&local_80);
      auVar18._12_4_ = 0;
      if ((uVar11 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x170) = 1;
        FUN_00cee2cc(&local_80,auVar18,param_1 + 0x120);
        auVar18._12_4_ = 0;
        *(long **)(param_1 + 0x168) = local_78;
      }
    }
    if (*(char *)(param_1 + 0x1c2) != '\0') {
      uStack_7e = 0;
      local_80 = 0;
      uVar11 = FUN_00d6fedc(auVar18,(float)uVar22,lVar10,*(undefined4 *)(param_1 + 0x174),
                            param_1 + 0x180,1,&local_80);
      if ((uVar11 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x1c0) = 1;
        FUN_00ceecf8(&local_80,param_1 + 0x1b8);
        lVar12 = CONCAT53(uStack_7d,CONCAT12(uStack_7e,local_80));
        if ((lVar12 != -0x1de43b866783d01f) &&
           (*(undefined1 *)(param_1 + 0x1c1) = 1, lVar12 == 0x79228c20812a84ae)) {
          if (*(long *)(param_1 + 0x1a8) == 0) {
            FUN_00ef827c(&local_a0,*(undefined4 *)(param_1 + 0x1a4));
          }
          else {
            FUN_00d7c05c(&local_a0);
          }
          puVar4 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            if (*(short *)((long)local_a0 + 0x1a) != 0) {
              psVar1 = (short *)((long)local_a0 + 0x1a);
              sVar13 = *(short *)((long)local_a0 + 0x1a);
              do {
                sVar5 = *psVar1;
                if (sVar5 == sVar13) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar7) {
                    *psVar1 = sVar13 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 != '\0') goto LAB_00d3ca90;
                  bVar7 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_00d3ca90:
                  bVar7 = false;
                }
                if (bVar7) {
                  plVar14 = (long *)0x0;
                  if (local_a0[2] != 0) {
                    plVar14 = (long *)(local_a0[2] + -0x28);
                  }
                  goto LAB_00d3cab8;
                }
                sVar13 = sVar5;
              } while (sVar5 != 0);
            }
            plVar14 = (long *)0x0;
LAB_00d3cab8:
            psVar1 = (short *)(local_a0 + 3);
            do {
              sVar13 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar13 == 1) {
              piVar2 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar7) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar12;
                local_28 = *puVar4;
                FUN_00c44438(lVar12 + 0x8040,&local_28);
              }
            }
            else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
            if (plVar14 != (long *)0x0) {
              local_a0 = (undefined8 *)0x52ec21a95c35d0f2;
              pcStack_98 = "IgnoreLanding";
              local_90 = 0xd;
              local_88 = (long *)0x0;
              bVar8 = FUN_00cb86ec(plVar14,&local_a0);
              *(byte *)(param_1 + 0x1c1) = ~bVar8 & 1;
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              lVar12 = plVar14[6];
              psVar1 = (short *)(lVar12 + 0x1a);
              do {
                sVar13 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar13 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar13 == 1) {
                *(undefined8 *)(lVar12 + 0x10) = 0;
                (**(code **)(*plVar14 + 0x50))(plVar14);
              }
              else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
          }
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    if (*(char *)(param_1 + 0x221) != '\0') {
      pauVar3 = (undefined1 (*) [16])local_60;
      if (*(char *)(param_1 + 0x1c0) != '\0') {
        pauVar3 = (undefined1 (*) [16])(param_1 + 0x180);
      }
      puVar4 = &local_50;
      if (*(char *)(param_1 + 0x170) != '\0') {
        puVar4 = (undefined8 *)(param_1 + 0x120);
      }
      uStack_7e = 0;
      local_80 = 0;
      uVar11 = FUN_00d6fedc(*pauVar3,(int)*puVar4,lVar10,*(undefined4 *)(param_1 + 0x224),
                            param_1 + 0x1d0,1,&local_80);
      if ((uVar11 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x220) = 1;
        FUN_00cee2cc(&local_80,param_1 + 0x1d0);
        *(long **)(param_1 + 0x218) = local_78;
      }
    }
  }
LAB_00d3c9c4:
  *(undefined8 *)(param_1 + 0x250) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 600));
  return;
}


