/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f2bdc; name: FUN_014f2bdc
 */


void FUN_014f2bdc(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  bool bVar16;
  long *plVar17;
  long *local_60;
  long *local_58;
  
  *param_1 = &DAT_045ecdd0;
  param_1[4] = &PTR_LAB_045ecf20;
  param_1[5] = &DAT_045ed048;
  plVar11 = param_1 + 0x24;
  param_1[6] = &PTR_LAB_045ed0a0;
  param_1[7] = &PTR_LAB_045ed0c8;
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar3 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar16) {
      *plVar11 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_014f2c3c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x25));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x25));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar16) {
            *plVar11 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_014f2c3c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar16) {
      *plVar11 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_014f2c3c:
  if (*(char *)((long)param_1 + 0x482) == '\0') {
    FUN_011403c0(param_1);
  }
  FUN_00c9e664(&local_60,param_1 + 0x1d);
  if (local_60 != (long *)0x0) {
    if (local_58 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = local_58[9];
    }
    plVar11 = (long *)(lVar8 + 0x110);
    lVar15 = *plVar11;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar15) {
      lVar9 = nn::os::GetCurrentThread();
      bVar16 = false;
LAB_014f3410:
      if (*plVar11 == 0) goto code_r0x014f3418;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
      bVar16 = false;
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
            while (*plVar11 == 0) {
              cVar3 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar16) {
                *plVar11 = lVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar16 = false;
              if (cVar3 == '\0') goto LAB_014f2c7c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_014f2c7c;
    }
    bVar16 = true;
LAB_014f2c7c:
    puVar6 = PTR_DAT_047d8d48;
    puVar5 = PTR_DAT_047d8d40;
    plVar11 = *(long **)(lVar8 + 0x128);
    plVar17 = *(long **)(lVar8 + 0x130);
    if (plVar11 != plVar17) {
      do {
        lVar9 = *plVar11;
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar13 = FUN_0168ea04();
            *(undefined8 *)puVar6 = uVar13;
            __cxa_guard_release(puVar5);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar6) {
              uVar12 = (**(code **)(*(long *)*plVar11 + 0xc0))();
              if (((uVar12 & 1) == 0) && (param_1[0x91] == lVar9 + -0x20)) goto LAB_014f2d4c;
              break;
            }
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar17);
      plVar11 = plVar17;
LAB_014f2d4c:
      if (plVar11 != *(long **)(lVar8 + 0x130)) {
        (**(code **)(*(long *)*plVar11 + 0xa8))();
        *(undefined **)(lVar8 + 0x1b0) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar8 + 0x1b8) = 0;
      }
    }
    plVar11 = *(long **)(lVar8 + 0x160);
    plVar17 = *(long **)(lVar8 + 0x168);
    if (plVar11 != plVar17) {
      do {
        lVar9 = *plVar11;
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar13 = FUN_0168ea04();
            *(undefined8 *)puVar6 = uVar13;
            __cxa_guard_release(puVar5);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar6) {
              uVar12 = (**(code **)(*(long *)*plVar11 + 0xc0))();
              if (((uVar12 & 1) == 0) && (param_1[0x91] == lVar9 + -0x20)) goto LAB_014f2df0;
              break;
            }
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar17);
      plVar11 = plVar17;
LAB_014f2df0:
      if (plVar11 != *(long **)(lVar8 + 0x168)) {
        (**(code **)(*(long *)*plVar11 + 0xa8))();
        *(undefined **)(lVar8 + 0x1b0) = PTR_FUN_047d9428;
        *(undefined8 *)(lVar8 + 0x1b8) = 0;
      }
    }
    if ((*(byte *)(lVar8 + 0x360) & 7) != 0) {
      pcVar14 = *(code **)(lVar8 + 0x1b0);
      if ((*(ulong *)(lVar8 + 0x1b8) & 1) != 0) {
        pcVar14 = *(code **)(pcVar14 +
                            *(long *)(lVar8 + 0x108 + ((long)*(ulong *)(lVar8 + 0x1b8) >> 1)));
      }
      (*pcVar14)();
    }
    if (!bVar16) {
      *(undefined8 *)(lVar8 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x118));
    }
  }
  if (local_58 != (long *)0x0) {
    plVar11 = local_58 + 5;
    do {
      lVar8 = *plVar11;
      iVar7 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar16) {
        *(int *)plVar11 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_014f31bc;
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  plVar11 = (long *)param_1[0x91];
  param_1[0x91] = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x60))();
  }
  param_1[0x24] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x25));
  lVar8 = param_1[0xb2];
  if (lVar8 != 0) {
    lVar9 = param_1[0xb4];
    param_1[0xb3] = lVar8;
    plVar11 = (long *)param_1[0xb5];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,lVar9 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar8,lVar9 - lVar8,8);
    }
  }
  plVar11 = (long *)param_1[0xab];
  if (plVar11 != (long *)0x0) {
    plVar10 = (long *)param_1[0xac];
    plVar17 = plVar11;
    if (plVar10 != plVar11) {
      FUN_01185de0(plVar10 + -8);
      plVar17 = (long *)plVar10[-9];
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x20))();
      }
      if (plVar10 + -9 != plVar11) {
        FUN_01185de0(plVar10 + -0x11);
        plVar17 = (long *)plVar10[-0x12];
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x20))();
        }
        if (plVar10 + -0x12 != plVar11) {
          do {
            FUN_01185de0(plVar10 + -0x1a);
            if ((long *)plVar10[-0x1b] != (long *)0x0) {
              (**(code **)(*(long *)plVar10[-0x1b] + 0x20))();
            }
            plVar10 = plVar10 + -9;
          } while (plVar11 + 0x12 != plVar10);
        }
      }
      plVar17 = (long *)param_1[0xab];
    }
    lVar8 = param_1[0xad];
    param_1[0xac] = plVar11;
    plVar11 = (long *)param_1[0xae];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar17,lVar8 - (long)plVar17,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar17,lVar8 - (long)plVar17,8);
    }
  }
  lVar8 = param_1[0xa4];
  if (lVar8 != 0) {
    lVar9 = param_1[0xa6];
    param_1[0xa5] = lVar8;
    plVar11 = (long *)param_1[0xa7];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,lVar9 - lVar8,4);
    }
    else {
      FUN_00c48fe8(plVar11,lVar8,lVar9 - lVar8,4);
    }
  }
  plVar11 = (long *)param_1[0xa2];
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_014f312c;
  }
  plVar11 = (long *)param_1[0x9b];
  while (plVar11 != (long *)0x0) {
    plVar17 = (long *)*plVar11;
    if ((long *)plVar11[6] != (long *)0x0) {
      (**(code **)(*(long *)plVar11[6] + 0x18))();
    }
    if ((long *)plVar11[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar11[5] + 0x20))();
    }
    plVar10 = (long *)param_1[0x9c];
    uVar12 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar12 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar11,0x38,8);
      plVar11 = plVar17;
    }
    else {
      FUN_00c48fe8(plVar10,plVar11,0x38,8);
      plVar11 = plVar17;
    }
  }
  lVar8 = param_1[0x95];
  param_1[0x95] = 0;
  if (lVar8 != 0) {
    lVar9 = param_1[0x96];
    plVar11 = (long *)param_1[0x97];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,lVar9 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar8,lVar9 << 3,8);
    }
  }
  plVar11 = (long *)param_1[0x94];
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_014f312c;
  }
  plVar11 = (long *)param_1[0x93];
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_014f312c;
  }
  plVar11 = (long *)param_1[0x92];
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_014f312c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if ((long *)param_1[0x91] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x91] + 0x60))();
  }
  FUN_014f35d0(param_1 + 0x83,param_1[0x89]);
  lVar8 = param_1[0x83];
  param_1[0x83] = 0;
  if (lVar8 != 0) {
    lVar9 = param_1[0x84];
    plVar11 = (long *)param_1[0x85];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,lVar9 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar8,lVar9 << 3,8);
    }
  }
  FUN_01185de0(param_1 + 0x7b);
  if ((long *)param_1[0x7a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7a] + 0x20))();
  }
  if ((long *)param_1[0x71] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x71] + 0x20))();
  }
  plVar11 = (long *)param_1[0x6d];
  if (plVar11 != (long *)0x0) {
    plVar17 = plVar11 + 5;
    do {
      lVar8 = *plVar17;
      iVar7 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar16) {
        *(int *)plVar17 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_014f31bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  pcVar14 = (code *)param_1[0x5d];
  if (pcVar14 != (code *)0x0) {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar14)(param_1 + 0x60);
  }
  pcVar14 = (code *)param_1[0x4d];
  if (pcVar14 != (code *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar14)(param_1 + 0x50);
  }
  pcVar14 = (code *)param_1[0x3b];
  if (pcVar14 != (code *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (*pcVar14)(param_1 + 0x3e);
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x20))();
  }
  if ((long *)param_1[0x32] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x32] + 0x20))();
  }
  FUN_011add78(param_1 + 0x27);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x25));
  FUN_00e6bfa4(param_1);
  return;
code_r0x014f3418:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar4) {
    *plVar11 = lVar9;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_014f2c7c;
  goto LAB_014f3410;
}


