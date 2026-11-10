/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143ed90; name: FUN_0143ed90
 */


/* WARNING: Removing unreachable block (ram,0x0143eec8) */

bool FUN_0143ed90(long param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long local_78;
  byte *pbStack_70;
  byte local_64 [4];
  
  plVar18 = (long *)(param_1 + 0x428);
  lVar15 = *plVar18;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar15) {
    plVar18 = (long *)0x0;
    bVar5 = true;
  }
  else {
    lVar10 = nn::os::GetCurrentThread();
    do {
      if (*plVar18 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x430));
          while (*plVar18 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *plVar18 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0143ede0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0143ede0:
    bVar5 = false;
  }
  if (*(char *)(param_1 + 0x440) == '\x01') {
    bVar8 = false;
joined_r0x0143f120:
    if (!bVar5) {
      *plVar18 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
    }
    return bVar8;
  }
  pbStack_70 = local_64;
  *(undefined1 *)(param_1 + 0x44f) = 0;
  local_64[0] = 1;
  local_78 = param_1;
  if (*(char *)(param_1 + 0x440) != '\x02') {
    FUN_02b4fc84(&local_78);
LAB_0143f10c:
    bVar8 = local_64[0] != 0;
    *(byte *)(param_1 + 0x44f) = local_64[0] ^ 1;
    goto joined_r0x0143f120;
  }
  *(undefined1 *)(param_1 + 0x440) = 0;
  *(undefined1 *)(param_1 + 1099) = 0;
  *(undefined1 *)(param_1 + 0x448) = 0;
  if (*(char *)(param_1 + 1099) != '\0') {
    *(undefined1 *)(param_1 + 1099) = 0;
    lVar10 = param_1;
    while ((*(long *)(lVar10 + 0x1c8) != 0 &&
           (lVar15 = *(long *)(*(long *)(lVar10 + 0x1c8) + 0x10), lVar15 != 0))) {
      lVar10 = lVar15 + -0x28;
      psVar1 = (short *)(lVar15 + 0x3f8);
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = *psVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x68))();
  }
  plVar16 = *(long **)(param_1 + 0x2c8);
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar14;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    (**(code **)(*plVar16 + 0x70))(plVar16,param_1);
    lVar10 = plVar16[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar2 == 0) goto LAB_0143f1bc;
  }
  plVar16 = *(long **)(param_1 + 0x290);
  plVar17 = *(long **)(param_1 + 0x298);
  do {
    while( true ) {
      do {
        if (plVar17 == plVar16) {
          *(long **)(param_1 + 0x298) = plVar16;
          FUN_02b4fc84(&local_78);
          plVar17 = *(long **)(param_1 + 0x338);
          plVar16 = *(long **)(param_1 + 0x340);
          goto LAB_0143ef5c;
        }
        plVar17 = plVar17 + -1;
        plVar11 = (long *)*plVar17;
      } while (plVar11 == (long *)0x0);
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 != 1) break;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
  } while (sVar2 != 0);
LAB_0143f1bc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
LAB_0143ef5c:
  do {
    if (plVar16 == plVar17) {
      plVar16 = (long *)(param_1 + 0x40);
      *(long **)(param_1 + 0x340) = plVar17;
      uVar12 = (**(code **)(*plVar16 + 0x70))(plVar16);
      if ((uVar12 & 1) == 0) {
        plVar17 = (long *)(param_1 + 0x48);
        lVar15 = *plVar17;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 == lVar15) {
          plVar17 = (long *)0x0;
          bVar8 = true;
        }
        else {
          lVar10 = nn::os::GetCurrentThread();
          do {
            if (*plVar17 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
                while (*plVar17 == 0) {
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar8) {
                    *plVar17 = lVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_0143eff0;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar8) {
              *plVar17 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_0143eff0:
          bVar8 = false;
        }
        puVar7 = PTR_DAT_047d39b8;
        puVar6 = PTR_DAT_047d39b0;
        plVar3 = *(long **)(param_1 + 0x68);
        for (plVar11 = *(long **)(param_1 + 0x60); plVar11 != plVar3; plVar11 = plVar11 + 1) {
          lVar10 = *plVar11;
          FUN_00f1fcc0(lVar10);
          if ((*(long *)(lVar10 + 0x5a0) != 0) &&
             (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x5a0) + 0x10),
             puVar13 != (undefined8 *)0x0)) {
            puVar13 = (undefined8 *)(**(code **)*puVar13)();
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
                *(undefined8 *)PTR_DAT_047d39c8 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar7 = PTR_DAT_047d39c8;
              __cxa_guard_release(puVar6);
            }
            for (; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)*puVar13) {
              if (puVar13 == (undefined8 *)puVar7) {
                if ((*(long **)(lVar10 + 0x5b0) != (long *)0x0) &&
                   (*(long **)(lVar10 + 0x5b0) != plVar16)) {
                  FUN_02b520d8();
                }
                break;
              }
            }
          }
        }
        if (!bVar8) {
          *plVar17 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
        }
      }
      FUN_02b6189c(plVar16);
      FUN_00e60020(param_1 + 0xf0);
      goto LAB_0143f10c;
    }
    plVar16 = plVar16 + -1;
    plVar11 = (long *)*plVar16;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 != 1) break;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
  } while( true );
  if (sVar2 == 0) goto LAB_0143f1bc;
  goto LAB_0143ef5c;
}


