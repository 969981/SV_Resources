/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2275c; name: FUN_00f2275c
 */


void FUN_00f2275c(undefined8 *param_1,long param_2,ulong *param_3,long *param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  if (param_4[1] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  plVar3 = (long *)(param_2 + 0xb200);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar19 = *plVar3;
    lVar13 = *(long *)(param_2 + 0xb208);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar19;
      *(long *)(param_2 + 0xb208) = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00f227dc:
  while ((lVar19 != 0 && (lVar10 != lVar19))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xb210));
    do {
      lVar19 = *plVar3;
      lVar13 = *(long *)(param_2 + 0xb208);
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar19;
        *(long *)(param_2 + 0xb208) = lVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar4 = *plVar3;
    if (lVar4 != lVar19 || *(long *)(param_2 + 0xb208) != lVar13) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00f2280c;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar19;
      *(long *)(param_2 + 0xb204) = lVar13 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
LAB_00f2280c:
  if (!bVar11) {
    lVar19 = lVar4;
    lVar13 = *(long *)(param_2 + 0xb208);
    goto LAB_00f227dc;
  }
  uVar16 = *(ulong *)(param_2 + 0xb228);
  if (uVar16 != 0) {
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar12 = *param_3;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar17 = uVar16 - 1 & uVar12;
    }
    else if (uVar12 < uVar16) {
      uVar17 = uVar12;
    }
    else {
      uVar17 = 0;
      if (uVar16 != 0) {
        uVar17 = uVar12 / uVar16;
      }
      uVar17 = uVar12 - uVar17 * uVar16;
    }
    plVar15 = *(long **)(*(long *)(param_2 + 0xb220) + uVar17 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (1 < uVar14) {
        do {
          uVar14 = plVar15[1];
          if (uVar14 == uVar12) {
            if (plVar15[2] == uVar12) goto LAB_00f22928;
          }
          else {
            if (uVar16 <= uVar14) {
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar14 / uVar16;
              }
              uVar14 = uVar14 - uVar7 * uVar16;
            }
            if (uVar14 != uVar17) goto LAB_00f228bc;
          }
          plVar15 = (long *)*plVar15;
          plVar20 = (long *)0x0;
          plVar18 = (long *)0x0;
        } while (plVar15 != (long *)0x0);
        goto LAB_00f22944;
      }
      do {
        if (plVar15[1] == uVar12) {
          if (plVar15[2] == uVar12) goto LAB_00f22928;
        }
        else if ((plVar15[1] & uVar16 - 1) != uVar17) break;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
LAB_00f228bc:
  plVar18 = (long *)0x0;
  plVar20 = (long *)0x0;
  goto LAB_00f22944;
LAB_00f22928:
  plVar18 = plVar15;
  do {
    plVar18 = (long *)*plVar18;
    if (plVar18 == (long *)0x0) break;
  } while (plVar18[2] == uVar12);
  plVar20 = plVar15;
LAB_00f22944:
  for (; plVar20 != plVar18; plVar20 = (long *)*plVar20) {
    uVar16 = (**(code **)(*param_4 + 0x10))(param_4,plVar20[3]);
    if ((uVar16 & 1) != 0) {
      lVar19 = plVar20[3];
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      FUN_00c43ef0(&local_60,lVar19 + 0x30);
      *param_1 = 0;
      param_1[1] = 0;
      lVar10 = 0;
      if (lVar19 != 0) {
        lVar10 = lVar19 + 0x28;
      }
      if (local_60[2] == lVar10) {
        FUN_00f5d3e8(param_1,&local_60);
      }
      puVar8 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar5 = *psVar1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar11) {
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_38 = *puVar8;
            FUN_00c44438(lVar10 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      goto LAB_00f229b4;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00f229b4:
  do {
    lVar10 = *plVar3;
    lVar19 = *(long *)(param_2 + 0xb208);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar10;
      *(long *)(param_2 + 0xb208) = lVar19;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar13 = *plVar3;
    lVar4 = *(long *)(param_2 + 0xb208);
    if (lVar13 != lVar10 || lVar4 != lVar19) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00f229f0;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar10;
      *(long *)(param_2 + 0xb204) = lVar19 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
LAB_00f229f0:
  if (!bVar11) {
    do {
      lVar10 = *plVar3;
      lVar19 = *(long *)(param_2 + 0xb208);
      if (lVar10 != lVar13 || lVar19 != lVar4) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f22ae0;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar13;
        *(long *)(param_2 + 0xb204) = lVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
joined_r0x00f22ae0:
    if (!bVar11) {
      do {
        lVar13 = *plVar3;
        lVar4 = *(long *)(param_2 + 0xb208);
        if (lVar13 != lVar10 || lVar4 != lVar19) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar13;
          lVar19 = lVar4;
          goto joined_r0x00f22ae0;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *plVar3 = lVar10;
          *(long *)(param_2 + 0xb204) = lVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
      lVar10 = lVar13;
      lVar19 = lVar4;
      goto joined_r0x00f22ae0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xb210));
  return;
}


