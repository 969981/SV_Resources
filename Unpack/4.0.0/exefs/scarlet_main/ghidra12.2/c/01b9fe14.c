/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b9fe14; name: FUN_01b9fe14
 */


uint FUN_01b9fe14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  long *local_78;
  long *local_70;
  long local_68;
  
  FUN_01513dec(&local_78,*(undefined8 *)(param_5 + 0x1e8));
  plVar10 = local_78;
  if (local_78 != (long *)0x0) {
    if (*(short *)((long)local_78 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_78 + 0x1a);
      sVar11 = *(short *)((long)local_78 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01b9feb8;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01b9feb8:
          bVar6 = false;
        }
        if (bVar6) {
          plVar12 = (long *)0x0;
          if (local_78[2] != 0) {
            plVar12 = (long *)(local_78[2] + -0x28);
          }
          goto LAB_01b9fee0;
        }
        sVar11 = sVar4;
      } while (sVar4 != 0);
    }
    plVar12 = (long *)0x0;
LAB_01b9fee0:
    plVar14 = local_78 + 3;
    do {
      sVar11 = (short)*plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(short *)plVar14 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_68 = *plVar10;
        FUN_00c44438(lVar15 + 0x8040,&local_68);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar12 != (long *)0x0) {
      auVar16 = FUN_01dfe72c(plVar12);
      auVar17 = FUN_01514278(plVar12);
      bVar6 = false;
      if ((auVar16._0_8_ >> 0x20 != 0) && (auVar16._0_4_ != 0)) {
        bVar6 = auVar16._8_4_ != 0;
      }
      lVar15 = 4;
      if (!bVar6) {
        lVar15 = -1;
      }
      lVar3 = 0xc;
      if (!bVar6) {
        lVar3 = 8;
      }
      if (((((auVar17._4_4_ == 0 || auVar17._0_4_ == 0) || auVar17._8_4_ == 0) || auVar17._0_4_ == 4
           ) || auVar17._4_4_ == 4) || auVar17._8_4_ == 4) {
        lVar3 = lVar15;
      }
      if (lVar3 == -1) {
        uVar7 = 0;
      }
      else {
        FUN_00c9e664(&local_78,param_5 + 0xe8);
        if (local_70 == (long *)0x0) {
          lVar15 = 0;
        }
        else {
          lVar15 = local_70[9];
        }
        plVar10 = (long *)(lVar15 + 0x110);
        lVar13 = *plVar10;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 != lVar13) {
          lVar9 = nn::os::GetCurrentThread();
LAB_01b9ffa8:
          if (*plVar10 == 0) goto code_r0x01b9ffb0;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
          do {
            if (*plVar10 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x118));
                while (*plVar10 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar6) {
                    *plVar10 = lVar9;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_01b9ffb8;
                }
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_01b9ffb8:
          bVar6 = false;
          goto LAB_01b9ffbc;
        }
        bVar6 = true;
LAB_01b9ffbc:
        plVar10 = (long *)FUN_00c943e0(*(undefined8 *)(lVar15 + 0x128),
                                       *(undefined8 *)(lVar15 + 0x130));
        if ((*(long **)(lVar15 + 0x130) == plVar10) || (*plVar10 == 0)) {
          plVar10 = (long *)FUN_00c943e0(*(undefined8 *)(lVar15 + 0x160),
                                         *(undefined8 *)(lVar15 + 0x168));
          if (*(long **)(lVar15 + 0x168) == plVar10) {
            plVar14 = (long *)0x0;
          }
          else {
            plVar14 = (long *)0x0;
            if (*plVar10 != 0) {
              plVar14 = (long *)(*plVar10 + -0x20);
            }
          }
        }
        else {
          plVar14 = (long *)(*plVar10 + -0x20);
        }
        if (!bVar6) {
          *(undefined8 *)(lVar15 + 0x110) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x118));
        }
        if (local_70 != (long *)0x0) {
          plVar10 = local_70 + 5;
          do {
            lVar15 = *plVar10;
            iVar8 = (int)lVar15 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_70 + 0x10))(param_1);
          }
          else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x60))(param_1);
        }
        if (plVar14 == (long *)0x0) {
          iVar8 = 0xe;
        }
        else {
          uVar7 = (**(code **)(*plVar14 + 0x130))(param_1,plVar14);
          if ((uVar7 & 0xff) < 4) {
            iVar8 = (uVar7 & 0xff) + 0xd;
          }
          else {
            iVar8 = 0;
          }
        }
        uVar7 = FUN_019565cc(param_1,param_2,param_3,param_4,param_5,param_6,lVar3,iVar8,4);
      }
      lVar15 = plVar12[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_01b9fe60;
    }
  }
  uVar7 = 0;
LAB_01b9fe60:
  return uVar7 & 1;
code_r0x01b9ffb0:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar6) {
    *plVar10 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01b9ffb8;
  goto LAB_01b9ffa8;
}


