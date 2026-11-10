/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01553da8; name: FUN_01553da8
 */


void FUN_01553da8(uint *param_1,ulong param_2,int param_3)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  bool bVar17;
  short sVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar21 = *(long *)(param_1 + 2);
  uVar12 = *(ulong *)(lVar21 + 0xe8);
  if (uVar12 != 0) {
    uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar4 = *param_1;
    uVar10 = (ulong)uVar4;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = (ulong)((int)uVar12 - 1U & uVar4);
    }
    else {
      uVar15 = uVar10;
      if (uVar12 <= uVar10) {
        uVar15 = 0;
        if (uVar12 != 0) {
          uVar15 = uVar10 / uVar12;
        }
        uVar15 = uVar10 - uVar15 * uVar12;
      }
    }
    plVar16 = *(long **)(*(long *)(lVar21 + 0xe0) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar10) {
            if (*(uint *)(plVar16 + 2) == uVar4) goto LAB_01553e58;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar10) {
            if (*(uint *)(plVar16 + 2) == uVar4) goto LAB_01553e58;
          }
          else {
            if (uVar12 <= uVar14) {
              uVar7 = 0;
              if (uVar12 != 0) {
                uVar7 = uVar14 / uVar12;
              }
              uVar14 = uVar14 - uVar7 * uVar12;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  goto LAB_01553e6c;
LAB_01553e58:
  FUN_00f53cf4(&local_48,plVar16[3]);
  if (local_48 != (undefined8 *)0x0) {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar18 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar18) {
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_0155408c;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0155408c:
          bVar17 = false;
        }
        if (bVar17) {
          lVar9 = local_48[2];
          if (lVar9 != 0) {
            uVar11 = 3;
            if ((param_3 == 0) && ((param_2 >> 0x20 & 0xff) != 0)) {
              FUN_0221ea38(*(undefined8 *)(lVar9 + 0x18),lVar21 + 0x28);
              FUN_0221ea44(*(undefined8 *)(lVar9 + 0x18),lVar21 + 0x60);
              FUN_0221eabc(*(undefined8 *)(lVar9 + 0x18),lVar9 + 0x60);
              FUN_01137bc4(*(undefined8 *)(lVar9 + 0x18),lVar9 + 0x20);
              uVar11 = 2;
            }
            lVar21 = *(long *)(lVar9 + 8);
            psVar1 = (short *)(lVar21 + 0x1a);
            *(undefined4 *)(lVar9 + 200) = uVar11;
            do {
              sVar18 = *psVar1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar17) {
                *psVar1 = sVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar18 == 1) {
              *(undefined8 *)(lVar21 + 0x10) = 0;
              (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
            }
            else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar18 = sVar5;
      } while (sVar5 != 0);
    }
    puVar19 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48 + 3);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)local_48 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar17) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_38 = *puVar19;
          FUN_00c44438(lVar21 + 0x8040,&local_38);
        }
      }
      else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_01553e6c:
  lVar21 = *(long *)(param_1 + 4);
  if ((*(byte *)(lVar21 + 0x61) & 1) != 0) {
    return;
  }
  plVar16 = (long *)(lVar21 + 0x68);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar16 == 0) {
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar17) {
      *plVar16 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01553e98;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x70));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x70));
        while (*plVar16 == 0) {
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar17) {
            *plVar16 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01553e98;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar17) {
      *plVar16 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01553e98:
  puVar19 = *(undefined8 **)(lVar21 + 0x80);
  puVar3 = *(undefined8 **)(lVar21 + 0x88);
  if (puVar19 != puVar3) {
    if ((*(byte *)(lVar21 + 0x61) & 1) == 0) {
      (*(code *)*puVar19)(puVar19 + 4);
    }
    if ((*(byte *)(lVar21 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar19[0x10])();
      *(int *)(lVar21 + 100) = *(int *)(lVar21 + 100) + 1;
    }
    while (puVar19 = puVar19 + 0x12, puVar19 != puVar3) {
      if ((*(byte *)(lVar21 + 0x61) & 1) == 0) {
        (*(code *)*puVar19)(puVar19 + 4);
      }
      if ((*(byte *)(lVar21 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar19[0x10])();
        *(int *)(lVar21 + 100) = *(int *)(lVar21 + 100) + 1;
      }
    }
    puVar19 = *(undefined8 **)(lVar21 + 0x80);
    puVar3 = *(undefined8 **)(lVar21 + 0x88);
    if (puVar3 != puVar19) {
      pcVar13 = (code *)puVar3[-0x11];
      puVar20 = puVar3 + -0x12;
      if (pcVar13 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar20 = 0;
        puVar3[-0x11] = 0;
        (*pcVar13)(puVar3 + -0xe);
      }
      while (puVar3 = puVar20, puVar3 != puVar19) {
        pcVar13 = (code *)puVar3[-0x11];
        puVar20 = puVar3 + -0x12;
        if (pcVar13 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar13)(puVar3 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar21 + 0x88) = puVar19;
  *(undefined1 *)(lVar21 + 0x60) = 1;
  if ((*(byte *)(lVar21 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar21 + 0x40),lVar21);
    *(byte *)(lVar21 + 0x50) = 1;
  }
  *(undefined8 *)(lVar21 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x70));
  return;
}


