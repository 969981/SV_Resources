/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010c5018; name: FUN_010c5018
 */


/* WARNING: Removing unreachable block (ram,0x010c51dc) */
/* WARNING: Removing unreachable block (ram,0x010c529c) */

void FUN_010c5018(long param_1)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  char cVar6;
  byte *pbVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  bool bVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  
  plVar22 = (long *)(param_1 + 0x2a0);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar22 == 0) {
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar17) {
      *plVar22 = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_010c5058;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
  do {
    if (*plVar22 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
        while (*plVar22 == 0) {
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar17) {
            *plVar22 = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010c5058;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar17) {
      *plVar22 = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010c5058:
  puVar10 = PTR_DAT_047d90e8;
  puVar9 = PTR_DAT_047d90e0;
  plVar22 = *(long **)(param_1 + 0x120);
  plVar21 = *(long **)(param_1 + 0x128);
  pbVar7 = PTR_DAT_047d8c00;
  plVar13 = (long *)PTR_DAT_047d8c08;
  plVar8 = (long *)PTR_DAT_047d8c10;
  do {
    PTR_DAT_047d8c00 = pbVar7;
    PTR_DAT_047d8c08 = (undefined *)plVar13;
    PTR_DAT_047d8c10 = (undefined *)plVar8;
    if (plVar22 == plVar21) {
      for (plVar22 = *(long **)(param_1 + 0x238); plVar22 != (long *)0x0; plVar22 = (long *)*plVar22
          ) {
        lVar12 = plVar22[0x216];
        lVar20 = plVar22[0x217];
        if (lVar12 != lVar20) {
          if (((*pbVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar7), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d8d08,plVar13,&PTR_LOOP_04483000);
            __cxa_guard_release(pbVar7);
          }
          lVar19 = *plVar13;
          *plVar8 = lVar19;
          FUN_010c564c(*(undefined8 *)(lVar19 + 0x70),lVar12);
          if (lVar12 + 0x10 != lVar20) {
            if (((*pbVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar7), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d8d08,plVar13,&PTR_LOOP_04483000);
              __cxa_guard_release(pbVar7);
            }
            lVar19 = *plVar13;
            *plVar8 = lVar19;
            FUN_010c564c(*(undefined8 *)(lVar19 + 0x70),lVar12 + 0x10);
            for (lVar12 = lVar12 + 0x20; lVar12 != lVar20; lVar12 = lVar12 + 0x10) {
              if (((*pbVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar7), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d8d08,plVar13,&PTR_LOOP_04483000);
                __cxa_guard_release(pbVar7);
              }
              lVar19 = *plVar13;
              *plVar8 = lVar19;
              FUN_010c564c(*(undefined8 *)(lVar19 + 0x70),lVar12);
            }
          }
        }
        *(undefined4 *)(plVar22 + 4) = *(undefined4 *)(plVar22 + 3);
        *(undefined4 *)((long)plVar22 + 0x24) = 0;
        memset(plVar22 + 0x205,0,0x88);
      }
      if (*(long *)(param_1 + 0x260) != 0) {
        plVar22 = *(long **)(param_1 + 0x238);
        if (plVar22 != (long *)0x0) {
          plVar21 = (long *)*plVar22;
          FUN_0108a8e4(plVar22 + 0x216);
          plVar13 = *(long **)(param_1 + 0x240);
          uVar15 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar15 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,plVar22,0x10e8,8);
          }
          else {
            FUN_00c48fe8(plVar13,plVar22,0x10e8,8);
          }
          while (plVar21 != (long *)0x0) {
            plVar13 = (long *)*plVar21;
            FUN_0108a8e4(plVar21 + 0x216);
            plVar22 = *(long **)(param_1 + 0x240);
            uVar15 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar15 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,plVar21,0x10e8,8);
              plVar21 = plVar13;
            }
            else {
              FUN_00c48fe8(plVar22,plVar21,0x10e8,8);
              plVar21 = plVar13;
            }
          }
        }
        lVar12 = *(long *)(param_1 + 0x210);
        *(undefined8 *)(param_1 + 0x238) = 0;
        if ((((lVar12 != 0) && (**(undefined8 **)(param_1 + 0x208) = 0, lVar12 != 1)) &&
            (*(undefined8 *)(*(long *)(param_1 + 0x208) + 8) = 0, lVar12 != 2)) &&
           ((*(undefined8 *)(*(long *)(param_1 + 0x208) + 0x10) = 0, lVar12 != 3 &&
            (*(undefined8 *)(*(long *)(param_1 + 0x208) + 0x18) = 0, lVar12 != 4)))) {
          lVar20 = 4;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x208) + lVar20 * 8) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar12 != lVar20);
        }
        *(undefined8 *)(param_1 + 0x260) = 0;
      }
      plVar22 = *(long **)(param_1 + 0x120);
      plVar21 = *(long **)(param_1 + 0x128);
      do {
        while( true ) {
          do {
            if (plVar21 == plVar22) {
              *(long **)(param_1 + 0x128) = plVar22;
              *(undefined8 *)(param_1 + 0x2a0) = 0;
              nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a8));
              return;
            }
            plVar21 = plVar21 + -1;
            plVar13 = (long *)*plVar21;
          } while (plVar13 == (long *)0x0);
          lVar12 = plVar13[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 != 1) break;
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))();
        }
      } while (sVar4 != 0);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    lVar12 = *plVar22;
    puVar14 = (undefined8 *)
              (*(code *)**(undefined8 **)(lVar12 + 0x28))((undefined8 *)(lVar12 + 0x28));
    if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
      uVar16 = FUN_00d52ff0();
      *(undefined8 *)puVar10 = uVar16;
      __cxa_guard_release(puVar9);
    }
    for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
      if (puVar14 == (undefined8 *)puVar10) {
        plVar13 = (long *)(lVar12 + 0xb0);
        lVar20 = nn::os::GetCurrentThread();
        goto LAB_010c51a4;
      }
    }
LAB_010c52ac:
    uVar5 = *(uint *)(*plVar22 + 0x74);
    if (uVar5 < 3) {
      *(undefined4 *)(*plVar22 + 0x74) = *(undefined4 *)(&DAT_03d6348c + (long)(int)uVar5 * 4);
    }
    plVar22 = plVar22 + 1;
    pbVar7 = PTR_DAT_047d8c00;
    plVar13 = (long *)PTR_DAT_047d8c08;
    plVar8 = (long *)PTR_DAT_047d8c10;
  } while( true );
LAB_010c51a4:
  if (*plVar13 == 0 && *(long *)(lVar12 + 0xb8) == 0) goto code_r0x010c51b0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xc0));
  do {
    if (*plVar13 != 0 || *(long *)(lVar12 + 0xb8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xc0));
        while (*plVar13 == 0 && *(long *)(lVar12 + 0xb8) == 0) {
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar17) {
            *plVar13 = lVar20;
            *(undefined8 *)(lVar12 + 0xb8) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010c51b8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar17) {
      *plVar13 = lVar20;
      *(undefined8 *)(lVar12 + 0xb8) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010c51b8:
  pcVar18 = *(code **)(lVar12 + 0x348);
  if (pcVar18 != (code *)0x0) {
    *(undefined8 *)(lVar12 + 0x350) = 0;
    *(undefined8 *)(lVar12 + 0x358) = 0;
    *(undefined8 *)(lVar12 + 0x340) = 0;
    *(undefined8 *)(lVar12 + 0x348) = 0;
    (*pcVar18)(lVar12 + 0x360);
  }
  do {
    lVar20 = *plVar13;
    lVar19 = *(long *)(lVar12 + 0xb8);
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar17) {
      *plVar13 = lVar20;
      *(long *)(lVar12 + 0xb8) = lVar19;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar2 = *plVar13;
    lVar3 = *(long *)(lVar12 + 0xb8);
    if (lVar2 != lVar20 || lVar3 != lVar19) {
      bVar17 = false;
      ClearExclusiveLocal();
      goto LAB_010c5288;
    }
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar17) {
      *plVar13 = 0;
      *(long *)(lVar12 + 0xb4) = lVar19;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar17 = true;
LAB_010c5288:
  if (!bVar17) {
    do {
      lVar20 = *plVar13;
      lVar19 = *(long *)(lVar12 + 0xb8);
      if (lVar20 != lVar2 || lVar19 != lVar3) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto joined_r0x010c55b4;
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar17) {
        *plVar13 = 0;
        *(long *)(lVar12 + 0xb4) = lVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar17 = true;
joined_r0x010c55b4:
    if (!bVar17) {
      do {
        lVar2 = *plVar13;
        lVar3 = *(long *)(lVar12 + 0xb8);
        if (lVar2 != lVar20 || lVar3 != lVar19) {
          bVar17 = false;
          ClearExclusiveLocal();
          lVar20 = lVar2;
          lVar19 = lVar3;
          goto joined_r0x010c55b4;
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar17) {
          *plVar13 = 0;
          *(long *)(lVar12 + 0xb4) = lVar19;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar17 = true;
      lVar20 = lVar2;
      lVar19 = lVar3;
      goto joined_r0x010c55b4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xc0));
  goto LAB_010c52ac;
code_r0x010c51b0:
  cVar6 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar17) {
    *plVar13 = lVar20;
    *(undefined8 *)(lVar12 + 0xb8) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_010c51b8;
  goto LAB_010c51a4;
}


