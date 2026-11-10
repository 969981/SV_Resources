/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2d0d0; name: FUN_01a2d0d0
 */


void FUN_01a2d0d0(long param_1,undefined8 param_2)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  size_t sVar14;
  long lVar15;
  code *pcVar16;
  byte *pbVar17;
  short sVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined1 *puVar23;
  code *local_130;
  code *local_128;
  undefined1 *local_120;
  long *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long *local_100;
  uint *puStack_f8;
  long **local_f0;
  undefined8 *puStack_e8;
  byte **local_e0;
  long local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 *local_78 [2];
  byte *local_68;
  uint local_5c;
  undefined8 local_58;
  
  uVar21 = *(undefined8 *)(param_1 + 8);
  local_130 = (code *)0x261133e138a7696b;
  local_128 = (code *)0x3c71d7f;
  local_120 = (undefined1 *)0x6;
  local_118 = (long *)0x0;
  uVar9 = FUN_01470908(param_2,&local_130);
  local_5c = (uint)(uVar9 >> 0x20);
  if ((uVar9 & 0xff) == 0) {
    local_5c = 0xffffffff;
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (-1 < (int)local_5c) {
    if (local_5c < 0x1a) {
      local_68 = (&PTR_DAT_04594d60)[(int)local_5c];
    }
    else {
      local_68 = &DAT_03c886bc;
    }
    puVar10 = (undefined8 *)FUN_0140f310(param_2);
    local_98 = *puVar10;
    uStack_90 = puVar10[1];
    local_88 = puVar10[2];
    local_80 = (long *)puVar10[3];
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
    FUN_0140f318(local_78,param_2,&local_98);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if ((local_78[0] == (undefined8 *)0x0) || (*(short *)((long)local_78[0] + 0x1a) == 0)) {
LAB_01a2d1b4:
      local_a0 = (long *)0x0;
    }
    else {
      psVar2 = (short *)((long)local_78[0] + 0x1a);
      sVar18 = *(short *)((long)local_78[0] + 0x1a);
LAB_01a2d2b4:
      sVar5 = *psVar2;
      if (sVar5 == sVar18) {
        cVar6 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar22) {
          *psVar2 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01a2d2d8;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a2d2d8:
        bVar22 = false;
      }
      if (!bVar22) goto code_r0x01a2d2e0;
      lVar15 = local_78[0][2];
      if (lVar15 == 0) goto LAB_01a2d1b4;
      local_a0 = (long *)(lVar15 + -0x28);
      lVar15 = FUN_016c7830(local_a0,*(undefined8 *)(lVar15 + -0x20));
      pbVar19 = local_68;
      if (local_68 == (byte *)0x0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        puVar23 = *(undefined1 **)PTR_DAT_047d3e30;
        pbVar19 = *(byte **)(PTR_DAT_047d3e30 + 8);
        sVar14 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
        plVar13 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      else {
        puVar23 = &DAT_cbf29ce484222645;
        sVar14 = strlen((char *)local_68);
        bVar4 = *pbVar19;
        pbVar17 = pbVar19;
        while (bVar4 != 0) {
          pbVar17 = pbVar17 + 1;
          puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar17;
        }
        plVar13 = (long *)0x0;
      }
      *(undefined1 **)(lVar15 + 0xf0) = puVar23;
      *(byte **)(lVar15 + 0xf8) = pbVar19;
      *(size_t *)(lVar15 + 0x100) = sVar14;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      plVar11 = *(long **)(lVar15 + 0x108);
      *(long **)(lVar15 + 0x108) = plVar13;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      local_a8 = FUN_02132b7c(lVar15);
      plVar11 = local_a0;
      plVar13 = local_a0 + 0x22;
      lVar20 = *plVar13;
      lVar15 = nn::os::GetCurrentThread();
      if (lVar15 != lVar20) {
        lVar15 = nn::os::GetCurrentThread();
        bVar22 = false;
LAB_01a2d728:
        if (*plVar13 == 0) goto code_r0x01a2d730;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x23));
        bVar22 = false;
        do {
          if (*plVar13 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x23));
              while (*plVar13 == 0) {
                cVar6 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar22) {
                  *plVar13 = lVar15;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                bVar22 = false;
                if (cVar6 == '\0') goto LAB_01a2d388;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_01a2d388;
      }
      bVar22 = true;
LAB_01a2d388:
      plVar12 = (long *)FUN_02132b90(plVar11[0x25],plVar11[0x26]);
      if (((long *)plVar11[0x26] == plVar12) || (*plVar12 == 0)) {
        plVar12 = (long *)FUN_02132b90(plVar11[0x2c],plVar11[0x2d]);
        if ((long *)plVar11[0x2d] == plVar12) {
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          if (*plVar12 != 0) {
            lVar15 = *plVar12 + -0x20;
          }
        }
      }
      else {
        lVar15 = *plVar12 + -0x20;
      }
      if (!bVar22) {
        plVar11[0x22] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x23));
      }
      local_b0 = lVar15;
      if (lVar15 != 0) {
        lVar20 = *plVar13;
        lVar15 = nn::os::GetCurrentThread();
        if (lVar15 == lVar20) {
          bVar22 = true;
LAB_01a2d3fc:
          plVar13 = (long *)FUN_02132cb0(plVar11[0x25],plVar11[0x26]);
          if (((long *)plVar11[0x26] == plVar13) || (*plVar13 == 0)) {
            plVar13 = (long *)FUN_02132cb0(plVar11[0x2c],plVar11[0x2d]);
            if ((long *)plVar11[0x2d] == plVar13) {
              lVar15 = 0;
            }
            else {
              lVar15 = 0;
              if (*plVar13 != 0) {
                lVar15 = *plVar13 + -0x20;
              }
            }
          }
          else {
            lVar15 = *plVar13 + -0x20;
          }
          if (!bVar22) {
            plVar11[0x22] = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x23));
          }
          if (lVar15 == 0) goto LAB_01a2d554;
          uStack_108 = *(undefined8 *)(param_1 + 0x10);
          local_100 = &local_b0;
          puStack_f8 = &local_5c;
          puStack_e8 = &local_a8;
          local_f0 = &local_a0;
          local_e0 = &local_68;
          local_130 = FUN_017bc0b8;
          local_128 = FUN_02b23600;
          local_120 = &LAB_02b24034;
          local_118 = (long *)&LAB_02b24048;
          puVar10 = *(undefined8 **)(lVar15 + 0x178);
          puVar3 = *(undefined8 **)(lVar15 + 0x180);
          pcVar16 = FUN_02b23600;
          local_110 = uVar21;
          if (puVar10 == puVar3) {
LAB_01a2d538:
            local_120 = (undefined1 *)0x0;
            local_118 = (long *)0x0;
            local_130 = (code *)0x0;
            local_128 = (code *)0x0;
            (*pcVar16)(&local_110);
          }
          else {
            local_58 = *puVar10;
            FUN_017bc0b8(&local_110,&local_58);
            if (puVar10 + 1 != puVar3) {
              local_58 = puVar10[1];
              (*local_130)(&local_110,&local_58);
              if (puVar10 + 2 != puVar3) {
                local_58 = puVar10[2];
                (*local_130)(&local_110,&local_58);
                if (puVar10 + 3 != puVar3) {
                  local_58 = puVar10[3];
                  (*local_130)(&local_110,&local_58);
                  for (puVar10 = puVar10 + 4; puVar10 != puVar3; puVar10 = puVar10 + 1) {
                    local_58 = *puVar10;
                    (*local_130)(&local_110,&local_58);
                  }
                }
              }
            }
            pcVar16 = local_128;
            if (local_128 != (code *)0x0) goto LAB_01a2d538;
          }
          plVar11 = local_a0;
          if (local_a0 != (long *)0x0) goto LAB_01a2d554;
          goto LAB_01a2d1b8;
        }
        lVar15 = nn::os::GetCurrentThread();
        while (*plVar13 == 0) {
          cVar6 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar22) {
            *plVar13 = lVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01a2d3f8;
        }
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x23));
        do {
          if (*plVar13 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x23));
              while (*plVar13 == 0) {
                cVar6 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar22) {
                  *plVar13 = lVar15;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_01a2d3f8;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar22) {
            *plVar13 = lVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_01a2d3f8:
        bVar22 = false;
        goto LAB_01a2d3fc;
      }
LAB_01a2d554:
      (**(code **)(*plVar11 + 0x60))(plVar11);
    }
LAB_01a2d1b8:
    if (local_78[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_78[0] + 3);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar22) {
          *psVar2 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar1 = (int *)((long)local_78[0] + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar6 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar22) {
            *piVar1 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_130 = (code *)*local_78[0];
          FUN_00c44438(lVar15 + 0x8040,&local_130);
        }
      }
      else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01a2d2e0:
  sVar18 = sVar5;
  if (sVar5 == 0) goto LAB_01a2d1b4;
  goto LAB_01a2d2b4;
code_r0x01a2d730:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar7) {
    *plVar13 = lVar15;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01a2d388;
  goto LAB_01a2d728;
}


