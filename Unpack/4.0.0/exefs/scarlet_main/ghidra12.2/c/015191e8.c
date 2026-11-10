/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015191e8; name: FUN_015191e8
 */


void FUN_015191e8(long param_1,ushort param_2,byte param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  short sVar19;
  ulong uVar20;
  undefined8 uVar21;
  long *local_60;
  byte local_58 [4];
  ushort local_54 [2];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_3 == 3) {
    return;
  }
  plVar13 = (long *)(param_1 + 0x3c0);
  local_58[0] = param_3;
  local_54[0] = param_2;
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01519234;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01519234;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01519234:
  lVar10 = *(long *)(param_1 + 0x240);
  if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_0151923c;
  psVar1 = (short *)(lVar10 + 0x1a);
  sVar19 = *(short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar1;
    if (sVar4 == sVar19) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_015192dc;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_015192dc:
      bVar6 = false;
    }
    if (bVar6) {
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) goto LAB_0151923c;
      uVar18 = *(ulong *)(param_1 + 0x350);
      if (uVar18 == 0) goto LAB_015195ec;
      uVar15 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar17 = (ulong)local_54[0];
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      plVar13 = (long *)(param_1 + 0x348);
      if (uVar15 < 2) {
        uVar20 = (int)uVar18 - 1 & uVar17;
      }
      else {
        uVar20 = uVar17;
        if (uVar18 <= uVar17) {
          uVar20 = 0;
          if (uVar18 != 0) {
            uVar20 = uVar17 / uVar18;
          }
          uVar20 = uVar17 - uVar20 * uVar18;
        }
      }
      plVar16 = *(long **)(*plVar13 + uVar20 * 8);
      if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
      goto LAB_015195ec;
      if (uVar15 < 2) {
        do {
          if (plVar16[1] == uVar17) {
            if (*(ushort *)(plVar16 + 2) == local_54[0]) goto LAB_0151938c;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar20) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
        goto LAB_015195ec;
      }
      break;
    }
    sVar19 = sVar4;
    if (sVar4 == 0) goto LAB_0151923c;
  } while( true );
  do {
    uVar15 = plVar16[1];
    if (uVar15 != uVar17) {
      if (uVar18 <= uVar15) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar15 / uVar18;
        }
        uVar15 = uVar15 - uVar8 * uVar18;
      }
      if (uVar15 == uVar20) goto LAB_01519458;
      break;
    }
    if (*(ushort *)(plVar16 + 2) == local_54[0]) goto LAB_0151938c;
LAB_01519458:
    plVar16 = (long *)*plVar16;
  } while (plVar16 != (long *)0x0);
  goto LAB_015195ec;
LAB_015194ec:
  uVar11 = FUN_011c1df8(plVar13,local_54);
  lVar12 = FUN_012092b8(uVar11,local_58);
  if (*(long *)(lVar12 + 8) == 0) {
    FUN_01e25c34(param_1,local_54[0],local_58[0]);
  }
  else {
    lVar12 = FUN_01104bd8(lVar10 + 0xe0,auStack_48);
    if (lVar12 != 0) {
      local_60 = (long *)FUN_01df7f84();
      local_60 = (long *)*local_60;
      if (local_60 != (long *)0x0) {
        plVar16 = local_60 + 5;
        do {
          lVar12 = *plVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = (int)lVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar12 == -1) goto LAB_0151961c;
      }
      plVar16 = (long *)(param_1 + 0x3b0);
      if (*(long *)(param_1 + 0x3b0) == 0) {
        *plVar16 = 0;
      }
      else {
        FUN_010418d4(*(long *)(param_1 + 0x3b0),&local_60);
        plVar14 = (long *)*plVar16;
        *plVar16 = 0;
        if (plVar14 != (long *)0x0) {
          plVar3 = plVar14 + 5;
          do {
            lVar12 = *plVar3;
            iVar7 = (int)lVar12 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *(int *)plVar3 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
          else if ((int)lVar12 == 0) goto LAB_01519694;
        }
      }
      uVar21 = *(undefined8 *)(param_1 + 8);
      uVar11 = FUN_011c1df8(plVar13,local_54);
      lVar12 = FUN_012092b8(uVar11,local_58);
      lVar12 = *(long *)(lVar12 + 8);
      uVar11 = FUN_011c1df8(plVar13,local_54);
      uVar11 = FUN_012092b8(uVar11,local_58);
      lVar12 = FUN_013e5740(auStack_50,uVar21,lVar12 + 0x210,uVar11);
      if (lVar12 != 0) {
        piVar2 = (int *)(lVar12 + 0x28);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == -1) {
LAB_0151961c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar13 = (long *)*plVar16;
      *plVar16 = 0;
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 5;
        do {
          lVar9 = *plVar14;
          iVar7 = (int)lVar9 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar13 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_01519694;
      }
      *plVar16 = lVar12;
      uVar11 = FUN_01e25e68();
      FUN_01187dc0(lVar12,uVar11,&local_60);
      if (local_60 != (long *)0x0) {
        plVar13 = local_60 + 5;
        do {
          lVar12 = *plVar13;
          iVar7 = (int)lVar12 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *(int *)plVar13 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
        else if ((int)lVar12 == 0) {
LAB_01519694:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
  }
  goto LAB_015195ec;
LAB_0151938c:
  uVar18 = plVar16[4];
  if (uVar18 != 0) {
    uVar15 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar17 = (ulong)local_58[0];
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar20 = (int)uVar18 - 1 & uVar17;
    }
    else {
      uVar20 = uVar17;
      if (uVar18 <= uVar17) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = uVar17 / uVar18;
        }
        uVar20 = uVar17 - uVar20 * uVar18;
      }
    }
    plVar16 = *(long **)(plVar16[3] + uVar20 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar16[1] == uVar17) {
            if (*(byte *)(plVar16 + 2) == local_58[0]) goto LAB_015194ec;
          }
          else if ((plVar16[1] & uVar18 - 1) != uVar20) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar16[1];
          if (uVar15 != uVar17) {
            if (uVar18 <= uVar15) {
              uVar8 = 0;
              if (uVar18 != 0) {
                uVar8 = uVar15 / uVar18;
              }
              uVar15 = uVar15 - uVar8 * uVar18;
            }
            if (uVar15 == uVar20) goto LAB_01519434;
            break;
          }
          if (*(byte *)(plVar16 + 2) == local_58[0]) goto LAB_015194ec;
LAB_01519434:
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_015195ec:
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
LAB_0151923c:
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3c8));
  return;
}


