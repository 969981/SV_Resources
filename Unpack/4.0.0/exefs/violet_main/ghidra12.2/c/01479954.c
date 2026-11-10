/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01479954; name: FUN_01479954
 */


void FUN_01479954(long param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  byte *pbVar19;
  int *piVar20;
  int iVar21;
  ushort *puVar22;
  undefined1 *puVar23;
  long *plVar24;
  undefined1 *puVar25;
  long lVar26;
  long lVar27;
  byte *pbVar28;
  long *plVar29;
  undefined1 *puVar30;
  int *piVar31;
  undefined4 uVar32;
  
  pbVar28 = PTR_DAT_047d82d8;
  if (((*PTR_DAT_047d82d8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d82d8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d8aa0,PTR_DAT_047d82e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d82d8);
  }
  puVar9 = PTR_DAT_047d82e8;
  plVar29 = (long *)PTR_DAT_047d82e0;
  lVar26 = *(long *)PTR_DAT_047d82e0;
  *(long *)PTR_DAT_047d82e8 = lVar26;
  plVar24 = *(long **)(lVar26 + 0x1c0);
  plVar15 = (long *)PTR_DAT_047d8b70;
  if (plVar24 != (long *)0x0) {
    plVar15 = plVar24 + 6;
  }
  puVar25 = (undefined1 *)*plVar15;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  piVar20 = *(int **)(lVar26 + 0x188);
  iVar10 = 4;
  lVar11 = *(long *)(lVar26 + 400) - (long)piVar20;
  if (lVar11 != 0) {
    iVar21 = *(int *)(lVar26 + 0x1c8);
    uVar18 = lVar11 >> 2;
    uVar13 = uVar18;
    if (uVar18 < 2) {
      uVar13 = 1;
    }
    iVar10 = 4;
    if (*piVar20 <= iVar21) {
      iVar10 = 1;
    }
    if (1 < uVar18) {
      if (piVar20[1] <= iVar21) {
        iVar10 = 2;
      }
      if (uVar13 != 2) {
        if (piVar20[2] <= iVar21) {
          iVar10 = 3;
        }
        if (uVar13 != 3) {
          if (piVar20[3] <= iVar21) {
            iVar10 = 4;
          }
          if (uVar13 != 4) {
            if (piVar20[4] <= iVar21) {
              iVar10 = 5;
            }
            if (uVar13 != 5) {
              uVar18 = 5;
              do {
                piVar31 = piVar20 + uVar18;
                uVar18 = uVar18 + 1;
                if (*piVar31 <= iVar21) {
                  iVar10 = (int)uVar18;
                }
              } while (uVar13 != uVar18);
            }
          }
        }
      }
    }
  }
  puVar14 = *(undefined8 **)(param_1 + 0xe8);
  puVar30 = &DAT_cbf29ce484222645;
  if (puVar14 == *(undefined8 **)(param_1 + 0xf0)) {
    piVar20 = (int *)0x0;
  }
  else {
    uVar16 = 0xffffffff;
    piVar31 = (int *)0x0;
    do {
      piVar20 = (int *)*puVar14;
      puVar22 = (ushort *)((long)piVar20 - (long)*piVar20);
      if ((*puVar22 < 9) || ((ulong)puVar22[4] == 0)) {
        lVar26 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar20 + (ulong)puVar22[4]);
        lVar26 = (long)puVar1 + (ulong)*puVar1;
      }
      bVar2 = *(byte *)(lVar26 + 4);
      puVar23 = &DAT_cbf29ce484222645;
      if (bVar2 != 0) {
        puVar23 = &DAT_cbf29ce484222645;
        pbVar19 = (byte *)(lVar26 + 5);
        do {
          puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar2 != 0);
      }
      if (*puVar22 < 0xb) {
        iVar21 = 0;
      }
      else {
        iVar21 = 0;
        if ((ulong)puVar22[5] != 0) {
          iVar21 = *(int *)((long)piVar20 + (ulong)puVar22[5]);
        }
      }
      uVar3 = (uint)(puVar23 == puVar25) << 1 | (uint)(iVar21 == iVar10);
      puVar14 = puVar14 + 1;
      if ((int)uVar3 <= (int)uVar16) {
        piVar20 = piVar31;
        uVar3 = uVar16;
      }
      uVar16 = uVar3;
      piVar31 = piVar20;
    } while (puVar14 != *(undefined8 **)(param_1 + 0xf0));
  }
  if ((*(int **)(param_1 + 0x120) != (int *)0x0) && (*(int **)(param_1 + 0x120) == piVar20))
  goto LAB_01479b50;
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  lVar26 = *(long *)(param_1 + 0x28);
  if (lVar26 != 0) {
    plVar15 = (long *)(lVar26 + 0x158);
    lVar27 = *plVar15;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 != lVar27) {
      lVar11 = nn::os::GetCurrentThread();
LAB_01479d28:
      if (*plVar15 == 0) goto code_r0x01479d30;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x160));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x160));
            while (*plVar15 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01479d38;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01479d38:
      *(undefined1 *)(lVar26 + 0x150) = 1;
      *(undefined8 *)(lVar26 + 0x158) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x160));
      pbVar28 = PTR_DAT_047d82d8;
      plVar29 = (long *)PTR_DAT_047d82e0;
      goto LAB_01479b88;
    }
    *(undefined1 *)(lVar26 + 0x150) = 1;
    pbVar28 = PTR_DAT_047d82d8;
  }
LAB_01479b88:
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0119ff60(param_1);
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    uVar12 = *(undefined8 *)PTR_DAT_047d8288;
    *(undefined8 *)PTR_DAT_047d8290 = uVar12;
    FUN_013ec58c(uVar12,*(undefined4 *)(param_1 + 0x24));
  }
  puVar6 = PTR_DAT_047d82a0;
  if (*(int *)(param_1 + 0x20) != 0) {
    if (((*PTR_DAT_047d82a0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d82a0), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d8a98,PTR_DAT_047d82a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d82a0);
    }
    puVar8 = PTR_DAT_047d82b0;
    puVar7 = PTR_DAT_047d82a8;
    uVar12 = *(undefined8 *)PTR_DAT_047d82a8;
    *(undefined8 *)PTR_DAT_047d82b0 = uVar12;
    FUN_0147a158(uVar12,*(undefined4 *)(param_1 + 0x20));
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d82a0), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d8a98,PTR_DAT_047d82a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d82a0);
    }
    uVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar12;
    FUN_0147a020(uVar12,*(undefined4 *)(param_1 + 0x20));
  }
  *(int **)(param_1 + 0x120) = piVar20;
  puVar22 = (ushort *)((long)piVar20 - (long)*piVar20);
  if ((*puVar22 < 7) || ((ulong)puVar22[3] == 0)) {
    lVar26 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar20 + (ulong)puVar22[3]);
    lVar26 = (long)puVar1 + (ulong)*puVar1;
  }
  bVar2 = *(byte *)(lVar26 + 4);
  if (bVar2 != 0) {
    pbVar19 = (byte *)(lVar26 + 5);
    do {
      puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar2 != 0);
  }
  uVar32 = 0;
  if ((0xc < *puVar22) && ((ulong)puVar22[6] != 0)) {
    uVar32 = *(undefined4 *)((long)piVar20 + (ulong)puVar22[6]);
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar32;
  if (*(ushort *)((long)piVar20 - (long)*piVar20) < 0xf) {
    uVar32 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[7];
    uVar32 = 0;
    if (uVar13 != 0) {
      uVar32 = *(undefined4 *)((long)piVar20 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0x1a8) = uVar32;
  if (((*pbVar28 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d82d8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d8aa0,PTR_DAT_047d82e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d82d8);
  }
  lVar26 = *plVar29;
  *(long *)puVar9 = lVar26;
  puVar25 = *(undefined1 **)(lVar26 + 0x80);
  if (puVar25 != (undefined1 *)0x0) {
    uVar13 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar23 = (undefined1 *)((ulong)(puVar25 + -1) & (ulong)puVar30);
    }
    else {
      puVar23 = puVar30;
      if (puVar25 <= puVar30) {
        uVar18 = 0;
        if (puVar25 != (undefined1 *)0x0) {
          uVar18 = (ulong)puVar30 / (ulong)puVar25;
        }
        puVar23 = puVar30 + -(uVar18 * (long)puVar25);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar26 + 0x78) + (long)puVar23 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == puVar30) {
            if ((undefined1 *)plVar15[2] == puVar30) goto LAB_01479cbc;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar25 + -1)) != puVar23) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (undefined1 *)plVar15[1];
          if (puVar17 == puVar30) {
            if ((undefined1 *)plVar15[2] == puVar30) goto LAB_01479cbc;
          }
          else {
            if (puVar25 <= puVar17) {
              uVar13 = 0;
              if (puVar25 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar17 / (ulong)puVar25;
              }
              puVar17 = puVar17 + -(uVar13 * (long)puVar25);
            }
            if (puVar17 != puVar23) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
LAB_01479cd0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
LAB_01479b50:
  if (plVar24 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01479d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar24 + 0x20))(plVar24);
  return;
code_r0x01479d30:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar5) {
    *plVar15 = lVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01479d38;
  goto LAB_01479d28;
LAB_01479cbc:
  lVar26 = plVar15[6];
  *(long *)(param_1 + 0x18) = lVar26;
  if (lVar26 != 0) {
    FUN_012267bc(param_1);
  }
  goto LAB_01479cd0;
}


