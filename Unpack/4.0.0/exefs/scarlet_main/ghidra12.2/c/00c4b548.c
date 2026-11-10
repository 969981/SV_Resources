/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4b548; name: FUN_00c4b548
 */


void FUN_00c4b548(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long *local_68;
  
  if ((param_2 & 1) == 0) {
    plVar12 = *(long **)(param_1 + 0x50);
    plVar18 = *(long **)(param_1 + 0x58);
    if (plVar12 == plVar18) {
      return;
    }
    bVar9 = *(char *)(*plVar12 + 0x19b) != '\0';
    if (plVar12 + 1 != plVar18 && *(char *)(*plVar12 + 0x19b) == '\0') {
      plVar12 = plVar12 + 2;
      do {
        plVar5 = plVar12 + -1;
        bVar9 = (bool)(bVar9 | *(char *)(*plVar5 + 0x19b) != '\0');
        if (plVar18 == plVar12) break;
        plVar12 = plVar12 + 1;
      } while (*(char *)(*plVar5 + 0x19b) == '\0');
    }
    if (!bVar9) {
      return;
    }
  }
  plVar12 = (long *)(*(long *)(*(long *)(param_1 + 0x90) + -8) + 0x30);
  uVar10 = (**(code **)(*plVar12 + 0x38))(plVar12,param_1 + 0x50,0x7f);
  if (*(long *)(param_1 + 0xc0) == 0) {
    (**(code **)(*DAT_0485a020 + 0xc0))(&local_68);
    plVar12 = local_68;
  }
  else {
    plVar12 = *(long **)(*(long *)(param_1 + 0xc0) + 0x3a0);
    if (plVar12 != (long *)0x0) {
      plVar18 = plVar12 + 5;
      do {
        lVar15 = *plVar18;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar9) {
          *(int *)plVar18 = (int)lVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
  }
  plVar18 = *(long **)(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar18 != plVar5) {
    lVar15 = *plVar18;
    uVar10 = (uVar10 >> 2 ^ 0xffffffff) & 1;
    uVar7 = (undefined1)uVar10;
    if (*(byte *)(lVar15 + 0x199) != uVar10) {
      *(undefined1 *)(lVar15 + 0x199) = uVar7;
      *(undefined1 *)(lVar15 + 0x19a) = 1;
    }
    if (plVar18 + 1 != plVar5) {
      lVar15 = plVar18[1];
      if (*(byte *)(lVar15 + 0x199) != uVar10) {
        *(undefined1 *)(lVar15 + 0x199) = uVar7;
        *(undefined1 *)(lVar15 + 0x19a) = 1;
      }
      for (plVar18 = plVar18 + 2; plVar18 != plVar5; plVar18 = plVar18 + 1) {
        lVar15 = *plVar18;
        if (*(byte *)(lVar15 + 0x199) != uVar10) {
          *(undefined1 *)(lVar15 + 0x199) = uVar7;
          *(undefined1 *)(lVar15 + 0x19a) = 1;
        }
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar18 = *(long **)(param_1 + 0x50);
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar18 != plVar5) {
      plVar1 = plVar12 + 6;
      do {
        lVar19 = *plVar18;
        plVar2 = (long *)(lVar19 + 0x70);
        lVar15 = nn::os::GetCurrentThread();
        do {
          lVar13 = *plVar2;
          lVar14 = *(long *)(lVar19 + 0x78);
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar13;
            *(long *)(lVar19 + 0x78) = lVar14;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_00c4b670:
        while ((lVar13 != 0 && (lVar15 != lVar13))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x80));
          do {
            lVar13 = *plVar2;
            lVar14 = *(long *)(lVar19 + 0x78);
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar13;
              *(long *)(lVar19 + 0x78) = lVar14;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          lVar4 = *plVar2;
          if (lVar4 != lVar13 || *(long *)(lVar19 + 0x78) != lVar14) {
            bVar9 = false;
            ClearExclusiveLocal();
            goto LAB_00c4b6a0;
          }
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar13;
            *(long *)(lVar19 + 0x74) = lVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar9 = true;
LAB_00c4b6a0:
        if (!bVar9) {
          lVar13 = lVar4;
          lVar14 = *(long *)(lVar19 + 0x78);
          goto LAB_00c4b670;
        }
        lVar15 = *(long *)(lVar19 + 0x30);
        if ((int)((ulong)(*(long *)(lVar19 + 0x38) - lVar15) >> 3) != 0) {
          uVar16 = 0;
          do {
            uVar17 = *(undefined8 *)(*(long *)(lVar15 + uVar16 * 8) + 200);
            uVar11 = (**(code **)(*plVar1 + 0x28))(plVar1);
            (**(code **)(*plVar1 + 0x20))(&local_68,plVar1);
            FUN_00c4b998(uVar17,3,uVar11,&local_68);
            if (local_68 != (long *)0x0) {
              plVar3 = local_68 + 5;
              do {
                lVar15 = *plVar3;
                iVar8 = (int)lVar15 + -1;
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar9) {
                  *(int *)plVar3 = iVar8;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*local_68 + 0x10))();
              }
              else if ((int)lVar15 == 0) goto LAB_00c4b948;
            }
            lVar15 = *(long *)(lVar19 + 0x30);
            uVar16 = uVar16 + 1;
          } while (uVar16 < ((ulong)(*(long *)(lVar19 + 0x38) - lVar15) >> 3 & 0xffffffff));
        }
        do {
          lVar15 = *plVar2;
          lVar13 = *(long *)(lVar19 + 0x78);
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar15;
            *(long *)(lVar19 + 0x78) = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          lVar14 = *plVar2;
          lVar4 = *(long *)(lVar19 + 0x78);
          if (lVar14 != lVar15 || lVar4 != lVar13) {
            bVar9 = false;
            ClearExclusiveLocal();
            goto joined_r0x00c4b790;
          }
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar15;
            *(long *)(lVar19 + 0x74) = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar9 = true;
joined_r0x00c4b790:
        if (!bVar9) {
          do {
            lVar15 = *plVar2;
            lVar13 = *(long *)(lVar19 + 0x78);
            if (lVar15 != lVar14 || lVar13 != lVar4) {
              bVar9 = false;
              ClearExclusiveLocal();
              lVar14 = lVar15;
              lVar4 = lVar13;
              goto joined_r0x00c4b790;
            }
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar14;
              *(long *)(lVar19 + 0x74) = lVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar9 = true;
          lVar14 = lVar15;
          lVar4 = lVar13;
          goto joined_r0x00c4b790;
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x80));
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar5);
    }
  }
  plVar18 = *(long **)(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x58);
  if ((plVar18 != plVar5) && (*(undefined1 *)(*plVar18 + 0x19b) = 0, plVar18 + 1 != plVar5)) {
    *(undefined1 *)(plVar18[1] + 0x19b) = 0;
    for (plVar18 = plVar18 + 2; plVar18 != plVar5; plVar18 = plVar18 + 1) {
      *(undefined1 *)(*plVar18 + 0x19b) = 0;
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar18 = plVar12 + 5;
    do {
      lVar15 = *plVar18;
      iVar8 = (int)lVar15 + -1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar9) {
        *(int *)plVar18 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar15 == 0) {
LAB_00c4b948:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


