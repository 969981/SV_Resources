/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00faf970; name: FUN_00faf970
 */


/* WARNING: Removing unreachable block (ram,0x00fafd50) */
/* WARNING: Removing unreachable block (ram,0x00fafd74) */
/* WARNING: Removing unreachable block (ram,0x00fafd78) */
/* WARNING: Removing unreachable block (ram,0x00fafd80) */
/* WARNING: Removing unreachable block (ram,0x00fafd88) */
/* WARNING: Removing unreachable block (ram,0x00fafd9c) */
/* WARNING: Removing unreachable block (ram,0x00fafd8c) */
/* WARNING: Removing unreachable block (ram,0x00fafd90) */
/* WARNING: Removing unreachable block (ram,0x00fafd5c) */
/* WARNING: Removing unreachable block (ram,0x00fafd94) */
/* WARNING: Removing unreachable block (ram,0x00fafd70) */

void FUN_00faf970(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x118) == 0) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x118) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00faf9b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x120));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x118) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x120));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x118) == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x118) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00faf9b8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x118) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00faf9b8:
  if (param_3 != -1) {
    if ((ulong)(long)param_3 <
        (ulong)((*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 3) * 0x6db6db6db6db6db7))
    {
      lVar6 = DAT_0485a0d8 + 0x38;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0xd0) + (long)param_3 * 0x38);
      plVar12 = (long *)*puVar11;
      puVar11 = puVar11 + 1;
      plVar13 = (long *)*puVar11;
      if (plVar12 == plVar13) {
LAB_00fafae4:
        plVar9 = plVar12;
        if (plVar12 != plVar13) {
          while (plVar9 = plVar9 + 1, plVar9 != plVar13) {
            plVar10 = *(long **)(*plVar9 + 0x30);
            if (plVar10 == (long *)0x0) {
              if (*param_2 != 0) goto LAB_00fafc98;
LAB_00fafc48:
              FUN_00fafdac(*plVar9,lVar6);
            }
            else {
              plVar14 = plVar10 + 5;
              do {
                lVar8 = *plVar14;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar7) {
                  *(int *)plVar14 = (int)lVar8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((int)lVar8 == -1) {
LAB_00fafd28:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
              plVar15 = (long *)*param_2;
              do {
                lVar8 = *plVar14;
                iVar5 = (int)lVar8 + -1;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar7) {
                  *(int *)plVar14 = iVar5;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar5 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
              else if ((int)lVar8 == 0) goto LAB_00fafb88;
              if (plVar10 == plVar15) goto LAB_00fafc48;
LAB_00fafc98:
              plVar10 = (long *)*plVar12;
              *plVar12 = 0;
              if (plVar10 != (long *)0x0) {
                plVar14 = plVar10 + 5;
                do {
                  lVar8 = *plVar14;
                  iVar5 = (int)lVar8 + -1;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar7) {
                    *(int *)plVar14 = iVar5;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar5 == 0) {
                  (**(code **)(*plVar10 + 0x10))();
                }
                else if ((int)lVar8 == 0) goto LAB_00fafb88;
              }
              lVar8 = *plVar9;
              *plVar9 = 0;
              *plVar12 = lVar8;
              plVar12 = plVar12 + 1;
            }
          }
        }
      }
      else {
        do {
          plVar9 = *(long **)(*plVar12 + 0x30);
          if (plVar9 == (long *)0x0) {
            if (*param_2 == 0) {
LAB_00fafad8:
              FUN_00fafdac(*plVar12,lVar6);
              goto LAB_00fafae4;
            }
          }
          else {
            plVar10 = plVar9 + 5;
            do {
              lVar8 = *plVar10;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *(int *)plVar10 = (int)lVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((int)lVar8 == -1) goto LAB_00fafd28;
            plVar14 = (long *)*param_2;
            do {
              lVar8 = *plVar10;
              iVar5 = (int)lVar8 + -1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *(int *)plVar10 = iVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
            else if ((int)lVar8 == 0) goto LAB_00fafb88;
            if (plVar9 == plVar14) goto LAB_00fafad8;
          }
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar13);
        plVar12 = plVar13;
      }
      plVar13 = (long *)*puVar11;
      if (plVar12 != plVar13) {
        while (plVar13 != plVar12) {
          plVar13 = plVar13 + -1;
          plVar9 = (long *)*plVar13;
          if (plVar9 != (long *)0x0) {
            plVar10 = plVar9 + 5;
            do {
              lVar6 = *plVar10;
              iVar5 = (int)lVar6 + -1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *(int *)plVar10 = iVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
            else if ((int)lVar6 == 0) {
LAB_00fafb88:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        *puVar11 = plVar12;
      }
    }
  }
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x118);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x118) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x118);
    if (lVar2 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00fafbf0;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x114) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00fafbf0:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x118);
      if (lVar6 != lVar2 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00fafce8;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x114) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00fafce8:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x118);
        if (lVar2 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar8 = lVar3;
          goto joined_r0x00fafce8;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x114) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar2;
      lVar8 = lVar3;
      goto joined_r0x00fafce8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x120));
  return;
}


