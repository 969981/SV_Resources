/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cd884; name: FUN_019cd884
 */


void FUN_019cd884(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  bool bVar20;
  long *plVar21;
  
  plVar21 = (long *)(param_1 + 0x10);
  lVar19 = *plVar21;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar19) {
    lVar7 = nn::os::GetCurrentThread();
LAB_019cd8bc:
    if (*plVar21 == 0) goto code_r0x019cd8c4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x18));
    do {
      if (*plVar21 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x18));
          while (*plVar21 == 0) {
            cVar4 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar20) {
              *plVar21 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_019cd8cc;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar20) {
        *plVar21 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_019cd8cc:
    bVar20 = false;
    goto LAB_019cd8d0;
  }
  plVar21 = (long *)0x0;
  bVar20 = true;
LAB_019cd8d0:
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar7 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar7;
  plVar8 = *(long **)(*(long *)(lVar7 + 0x38) + 0x40);
  (**(code **)(*plVar8 + 0x70))(plVar8,*param_2);
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    lVar19 = *param_2;
    uVar11 = *(ulong *)(lVar7 + 0x38);
    uVar10 = (ulong)(lVar19 != 0);
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar17 = (int)uVar11 + 1 & uVar10;
      }
      else {
        uVar17 = uVar10;
        if (uVar11 <= uVar10) {
          uVar17 = 0;
          if (uVar11 != 0) {
            uVar17 = uVar10 / uVar11;
          }
          uVar17 = uVar10 - uVar17 * uVar11;
        }
      }
      lVar13 = *(long *)(lVar7 + 0x30);
      puVar14 = *(undefined8 **)(lVar13 + uVar17 * 8);
      if ((puVar14 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar14, plVar8 != (long *)0x0)) {
        uVar15 = uVar11 - 1;
        if (uVar12 < 2) {
          do {
            if (plVar8[1] == uVar10) {
              if (plVar8[2] == lVar19) goto LAB_019cdac4;
            }
            else if ((plVar8[1] & uVar15) != uVar17) break;
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar8[1];
            if (uVar18 == uVar10) {
              if (plVar8[2] == lVar19) goto LAB_019cdac4;
            }
            else {
              if (uVar11 <= uVar18) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar18 / uVar11;
                }
                uVar18 = uVar18 - uVar5 * uVar11;
              }
              if (uVar18 != uVar17) break;
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_019cd9b0;
code_r0x019cd8c4:
  cVar4 = '\x01';
  bVar20 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar20) {
    *plVar21 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_019cd8cc;
  goto LAB_019cd8bc;
LAB_019cdac4:
  if (uVar12 < 2) {
    uVar10 = uVar15 & uVar10;
  }
  else if (uVar11 <= uVar10) {
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar17 = uVar10 / uVar11;
    }
    uVar10 = uVar10 - uVar17 * uVar11;
  }
  plVar9 = *(long **)(lVar13 + uVar10 * 8);
  do {
    plVar16 = plVar9;
    plVar9 = (long *)*plVar16;
  } while ((long *)*plVar16 != plVar8);
  if (plVar16 == (long *)(lVar7 + 0x48)) {
LAB_019cdc38:
    if (*plVar8 != 0) {
      uVar17 = *(ulong *)(*plVar8 + 8);
      if (uVar12 < 2) {
        uVar17 = uVar17 & uVar15;
      }
      else if (uVar11 <= uVar17) {
        uVar18 = 0;
        if (uVar11 != 0) {
          uVar18 = uVar17 / uVar11;
        }
        uVar17 = uVar17 - uVar18 * uVar11;
      }
      if (uVar17 == uVar10) goto LAB_019cdb10;
    }
    *(undefined8 *)(lVar13 + uVar10 * 8) = 0;
  }
  else {
    uVar17 = plVar16[1];
    if (uVar12 < 2) {
      uVar17 = uVar17 & uVar15;
    }
    else if (uVar11 <= uVar17) {
      uVar18 = 0;
      if (uVar11 != 0) {
        uVar18 = uVar17 / uVar11;
      }
      uVar17 = uVar17 - uVar18 * uVar11;
    }
    if (uVar17 != uVar10) goto LAB_019cdc38;
  }
LAB_019cdb10:
  lVar19 = *plVar8;
  if (lVar19 != 0) {
    uVar17 = *(ulong *)(lVar19 + 8);
    if (uVar12 < 2) {
      uVar17 = uVar17 & uVar15;
    }
    else if (uVar11 <= uVar17) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar17 / uVar11;
      }
      uVar17 = uVar17 - uVar12 * uVar11;
    }
    if (uVar17 != uVar10) {
      *(long **)(*(long *)(lVar7 + 0x30) + uVar17 * 8) = plVar16;
      lVar19 = *plVar8;
    }
  }
  *plVar16 = lVar19;
  *plVar8 = 0;
  *(long *)(lVar7 + 0x58) = *(long *)(lVar7 + 0x58) + -1;
  plVar9 = (long *)plVar8[2];
  if (plVar9 != (long *)0x0) {
    lVar19 = plVar9[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar9 = *(long **)(lVar7 + 0x50);
  uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar10 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x18,8);
  }
  else {
    FUN_00c48fe8(plVar9,plVar8,0x18,8);
  }
LAB_019cd9b0:
  if (!bVar20) {
    *plVar21 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
  }
  FUN_00e60020(*param_2 + 0x40);
  return;
}


