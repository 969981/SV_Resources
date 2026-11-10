/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bd200; name: FUN_016bd200
 */


ulong FUN_016bd200(long param_1,ulong *param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  ulong local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  int local_24;
  
  plVar1 = (long *)(param_1 + 0x230);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x238) == 0) {
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x238) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_016bd240;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x240));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x238) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x240));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x238) == 0) {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar9;
            *(undefined8 *)(param_1 + 0x238) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_016bd240;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_1 + 0x238) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_016bd240:
  uVar13 = *(ulong *)(param_1 + 0x70);
  if (uVar13 == 0) {
LAB_016bd454:
    plVar16 = (long *)(param_1 + 0x30);
    iVar17 = (int)(*(long *)(param_1 + 0x38) - *plVar16 >> 3) * -0x49249249;
    local_24 = iVar17;
    FUN_016bd9b0((long *)(param_1 + 0x68),param_2,&local_24);
    local_60 = *(undefined8 *)(param_1 + 8);
    local_78 = 0;
    local_70 = 0;
    local_58 = 0x7ffffffffffffff;
    uStack_50 = 0;
    local_48 = 0;
    local_68 = 0;
    FUN_016bd620(plVar16,&local_78);
    FUN_016be5a0(&local_78);
    plVar16 = (long *)(*plVar16 + (long)iVar17 * 0x38);
    lVar9 = *plVar16;
    lVar6 = plVar16[1];
    local_78 = local_78 & 0xffffffffffffff00;
    local_60 = CONCAT71(local_60._1_7_,1);
    FUN_016bd5f8(plVar16,&local_78);
    if ((char)local_78 != '\0') {
      if (local_70 != 0) {
        psVar2 = (short *)(local_70 + 0x18);
        do {
          sVar5 = *psVar2;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar10) {
            *psVar2 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          FUN_0116e168();
        }
        else if (sVar5 == 0) {
LAB_016bd418:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      local_78 = local_78 & 0xffffffffffffff00;
    }
    uVar14 = lVar6 - lVar9 >> 5;
  }
  else {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar11 = *param_2;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar11;
    }
    else if (uVar11 < uVar13) {
      uVar15 = uVar11;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar11 / uVar13;
      }
      uVar15 = uVar11 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x68) + uVar15 * 8);
    if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
    goto LAB_016bd454;
    if (1 < uVar14) {
      do {
        uVar14 = plVar16[1];
        if (uVar14 == uVar11) {
          if (plVar16[2] == uVar11) goto LAB_016bd2c8;
        }
        else {
          if (uVar13 <= uVar14) {
            uVar8 = 0;
            if (uVar13 != 0) {
              uVar8 = uVar14 / uVar13;
            }
            uVar14 = uVar14 - uVar8 * uVar13;
          }
          if (uVar14 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
      goto LAB_016bd454;
    }
    while( true ) {
      if (plVar16[1] != uVar11) {
        if ((plVar16[1] & uVar13 - 1) == uVar15) goto LAB_016bd44c;
        goto LAB_016bd454;
      }
      if (plVar16[2] == uVar11) break;
LAB_016bd44c:
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) goto LAB_016bd454;
    }
LAB_016bd2c8:
    plVar16 = (long *)(*(long *)(param_1 + 0x30) + (long)(int)plVar16[3] * 0x38);
    lVar9 = plVar16[1] - *plVar16;
    uVar13 = lVar9 >> 5;
    if (lVar9 == 0) {
LAB_016bd310:
      local_78 = local_78 & 0xffffffffffffff00;
      local_60 = CONCAT71(local_60._1_7_,1);
      FUN_016bd5f8(plVar16,&local_78);
      if ((char)local_78 != '\0') {
        if (local_70 != 0) {
          psVar2 = (short *)(local_70 + 0x18);
          do {
            sVar5 = *psVar2;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar10) {
              *psVar2 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            FUN_0116e168();
          }
          else if (sVar5 == 0) goto LAB_016bd418;
        }
        local_78 = local_78 & 0xffffffffffffff00;
      }
      uVar14 = uVar13;
    }
    else {
      uVar14 = 0;
      pcVar12 = (char *)(*plVar16 + 0x18);
      uVar11 = uVar13;
      if (uVar13 < 2) {
        uVar11 = 1;
      }
      while (*pcVar12 != '\0') {
        uVar14 = uVar14 + 1;
        pcVar12 = pcVar12 + 0x20;
        if (uVar11 == uVar14) goto LAB_016bd310;
      }
      *pcVar12 = '\x01';
    }
  }
  do {
    lVar9 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x238);
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x238) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x238);
    if (lVar3 != lVar9 || lVar4 != lVar6) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_016bd3d0;
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x234) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar10 = true;
LAB_016bd3d0:
  if (!bVar10) {
    do {
      lVar9 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x238);
      if (lVar9 != lVar3 || lVar6 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x016bd578;
      }
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x234) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar10 = true;
joined_r0x016bd578:
    if (!bVar10) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x238);
        if (lVar3 != lVar9 || lVar4 != lVar6) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x016bd578;
        }
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x234) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar10 = true;
      lVar9 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x016bd578;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x240));
  return uVar14;
}


