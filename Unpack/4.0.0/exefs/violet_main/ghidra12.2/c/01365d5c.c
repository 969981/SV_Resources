/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01365d5c; name: FUN_01365d5c
 */


void FUN_01365d5c(undefined8 *param_1)

{
  short *psVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  code *pcVar18;
  ulong uVar19;
  short sVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  undefined1 *puVar25;
  ulong uVar26;
  long *plVar27;
  int *piVar28;
  size_t local_a8;
  char *local_a0;
  long local_98;
  long *local_90 [4];
  long *local_70;
  
  lVar13 = param_1[2];
  if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar20 = *(short *)(lVar13 + 0x1a);
    do {
      sVar6 = *psVar1;
      if (sVar6 == sVar20) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar20 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_01365f34;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01365f34:
        bVar8 = false;
      }
      if (bVar8) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 != 0) {
          plVar21 = (long *)(lVar13 + -0x28);
          if ((*(long *)(lVar13 + 0x90) == 0) ||
             ((*(byte *)(*(long *)(lVar13 + 0x90) + 0x1e8) & 1) == 0)) goto LAB_01365f64;
          if ((*(long *)(lVar13 + 0x90) == 0) ||
             ((*(byte *)(*(long *)(lVar13 + 0x90) + 0x1e8) & 1) == 0)) {
            piVar24 = (int *)0x0;
          }
          else {
            puVar11 = (uint *)(**(code **)(**(long **)(lVar13 + 0x90) + 0x70))();
            piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
          uVar14 = (ulong)*(ushort *)((long)piVar24 + (4 - (long)*piVar24));
          uVar26 = (ulong)*(uint *)((long)piVar24 + uVar14);
          puVar2 = (uint *)((long)((long)piVar24 + uVar14) + uVar26);
          puVar11 = puVar2 + 1;
          if (**(char **)(lVar13 + 0x70) == '\0') {
            uVar4 = *puVar11;
            piVar28 = (int *)((long)puVar11 + (ulong)uVar4);
            if ((*(ushort *)((long)piVar28 - (long)*piVar28) < 5) ||
               (uVar15 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2], uVar15 == 0)) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              local_a8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              puVar25 = *(undefined1 **)PTR_DAT_047d3e30;
              local_a0 = *(char **)(PTR_DAT_047d3e30 + 8);
              plVar27 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (plVar27 != (long *)0x0) {
                (**(code **)(*plVar27 + 0x18))(plVar27);
              }
            }
            else {
              puVar11 = (uint *)((long)piVar28 + uVar15);
              uVar19 = (ulong)*puVar11;
              puVar25 = &DAT_cbf29ce484222645;
              local_a0 = (char *)((long)puVar11 + uVar19 + 4);
              local_a8 = strlen(local_a0);
              bVar5 = *(byte *)((long)puVar11 + uVar19 + 4);
              if (bVar5 != 0) {
                pbVar16 = (byte *)((long)piVar24 +
                                  uVar19 + uVar15 + (ulong)uVar4 + uVar26 + uVar14 + 9);
                do {
                  puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
              plVar27 = (long *)0x0;
            }
            *(undefined1 **)(lVar13 + 0x68) = puVar25;
            *(char **)(lVar13 + 0x70) = local_a0;
            plVar12 = *(long **)(lVar13 + 0x80);
            *(size_t *)(lVar13 + 0x78) = local_a8;
            *(undefined8 *)(lVar13 + 0x80) = 0;
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x20))();
            }
            *(long **)(lVar13 + 0x80) = plVar27;
            goto LAB_0136624c;
          }
          uVar15 = (ulong)*puVar2;
          if (uVar15 == 0) goto LAB_01365f64;
          puVar2 = puVar11 + uVar15;
          lVar10 = (long)piVar24 + uVar26 + uVar14 + 9;
          goto LAB_013660a4;
        }
        break;
      }
      sVar20 = sVar6;
    } while (sVar6 != 0);
  }
  goto LAB_01365d84;
LAB_0136624c:
  if (*(ushort *)((long)piVar28 - (long)*piVar28) < 9) {
    lVar10 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[4];
    lVar10 = 0;
    if (uVar14 != 0) {
      puVar11 = (uint *)((long)piVar28 + uVar14);
      lVar10 = (long)puVar11 + (ulong)*puVar11;
    }
  }
  *(long *)(lVar13 + 0x110) = lVar10 + 4;
  if (*(ushort *)((long)piVar28 - (long)*piVar28) < 7) {
    local_98 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[3];
    local_98 = 0;
    if (uVar14 != 0) {
      puVar11 = (uint *)((long)piVar28 + uVar14);
      local_98 = (long)puVar11 + (ulong)*puVar11;
    }
  }
  FUN_00e83e2c(local_90,lVar13 + 0x18,&local_98,&DAT_03c886bc);
  FUN_01044660(plVar21,local_90,*param_1,*(undefined4 *)(param_1 + 1));
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90[0] != (long *)0x0) {
    (**(code **)(*local_90[0] + 0x20))();
  }
  goto LAB_01365f64;
  while( true ) {
    puVar11 = puVar11 + 1;
    lVar10 = lVar10 + 4;
    if (puVar11 == puVar2) break;
LAB_013660a4:
    piVar28 = (int *)((long)puVar11 + (ulong)*puVar11);
    if ((*(ushort *)((long)piVar28 - (long)*piVar28) < 5) ||
       (uVar14 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2], uVar14 == 0)) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar25 = *(undefined1 **)PTR_DAT_047d3e30;
      plVar27 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (plVar27 == (long *)0x0) goto LAB_0136611c;
      (**(code **)(*plVar27 + 0x18))(plVar27);
      puVar17 = *(undefined1 **)(lVar13 + 0x68);
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
    else {
      uVar26 = (ulong)*(uint *)((long)piVar28 + uVar14);
      bVar5 = *(byte *)((long)((long)piVar28 + uVar14) + uVar26 + 4);
      puVar25 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        puVar25 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)(lVar10 + uVar26 + uVar14 + (ulong)*puVar11);
        do {
          puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar5 != 0);
      }
LAB_0136611c:
      puVar17 = *(undefined1 **)(lVar13 + 0x68);
    }
    if (puVar17 == puVar25) goto LAB_0136624c;
  }
LAB_01365f64:
  lVar13 = *(long *)(lVar13 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar20 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar20 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar20 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar21 + 0x50))(plVar21);
  }
  else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01365d84:
  lVar13 = param_1[5];
  if ((*(byte *)(lVar13 + 0x61) & 1) != 0) {
    return;
  }
  plVar21 = (long *)(lVar13 + 0x68);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar21 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar8) {
      *plVar21 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_01365db0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x70));
  do {
    if (*plVar21 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x70));
        while (*plVar21 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *plVar21 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_01365db0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar8) {
      *plVar21 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_01365db0:
  puVar22 = *(undefined8 **)(lVar13 + 0x80);
  puVar3 = *(undefined8 **)(lVar13 + 0x88);
  if (puVar22 != puVar3) {
    if ((*(byte *)(lVar13 + 0x61) & 1) == 0) {
      (*(code *)*puVar22)(puVar22 + 4);
    }
    if ((*(byte *)(lVar13 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar22[0x10])();
      *(int *)(lVar13 + 100) = *(int *)(lVar13 + 100) + 1;
    }
    while (puVar22 = puVar22 + 0x12, puVar22 != puVar3) {
      if ((*(byte *)(lVar13 + 0x61) & 1) == 0) {
        (*(code *)*puVar22)(puVar22 + 4);
      }
      if ((*(byte *)(lVar13 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar22[0x10])();
        *(int *)(lVar13 + 100) = *(int *)(lVar13 + 100) + 1;
      }
    }
    puVar22 = *(undefined8 **)(lVar13 + 0x80);
    puVar3 = *(undefined8 **)(lVar13 + 0x88);
    if (puVar3 != puVar22) {
      pcVar18 = (code *)puVar3[-0x11];
      puVar23 = puVar3 + -0x12;
      if (pcVar18 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar23 = 0;
        puVar3[-0x11] = 0;
        (*pcVar18)(puVar3 + -0xe);
      }
      while (puVar3 = puVar23, puVar3 != puVar22) {
        pcVar18 = (code *)puVar3[-0x11];
        puVar23 = puVar3 + -0x12;
        if (pcVar18 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar18)(puVar3 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar13 + 0x88) = puVar22;
  *(undefined1 *)(lVar13 + 0x60) = 1;
  if ((*(byte *)(lVar13 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar13 + 0x40),lVar13);
    *(byte *)(lVar13 + 0x50) = 1;
  }
  *(undefined8 *)(lVar13 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x70));
  return;
}


