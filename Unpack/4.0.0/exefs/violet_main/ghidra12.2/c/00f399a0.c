/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f399a0; name: FUN_00f399a0
 */


void FUN_00f399a0(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  short sVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined8 uVar20;
  ushort *puVar21;
  ulong uVar22;
  short sVar23;
  long lVar24;
  long *plVar25;
  bool bVar26;
  uint *puVar27;
  long *plVar28;
  long *plVar29;
  undefined1 *puVar30;
  long *plVar31;
  uint *puVar32;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar11 = PTR_DAT_047d4df8;
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  puVar13 = PTR_DAT_047d4e08;
  puVar12 = PTR_DAT_047d4e00;
  uVar20 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar20;
  if (param_1[0x2a] == 0) {
    return;
  }
  if ((*(byte *)(param_1[0x2a] + 0x1e8) & 1) == 0) {
    return;
  }
  puVar27 = *(uint **)(param_1[0x2a] + 0x1f0);
  uVar5 = *puVar27;
  piVar2 = (int *)((long)puVar27 + (ulong)uVar5);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
     (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar17 == 0)) {
    *(undefined1 *)((long)param_1 + 0x44d) = 0;
LAB_00f39a40:
    if ((char)param_1[0x8a] == '\0') {
      return;
    }
  }
  else {
    cVar7 = *(char *)((long)piVar2 + uVar17);
    *(bool *)((long)param_1 + 0x44d) = cVar7 != '\0';
    if (cVar7 == '\0') goto LAB_00f39a40;
  }
  if ((((0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar17 != 0)) &&
      (*(char *)((long)piVar2 + uVar17) != '\0')) &&
     ((lVar15 = param_1[0x39], lVar15 != 0 && (*(short *)(lVar15 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar15 + 0x1a);
    sVar23 = *(short *)(lVar15 + 0x1a);
    do {
      sVar9 = *psVar1;
      if (sVar9 == sVar23) {
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar26) {
          *psVar1 = sVar23 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00f3a13c;
        bVar26 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f3a13c:
        bVar26 = false;
      }
      if (bVar26) {
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 != 0) {
          plVar25 = (long *)(lVar15 + -0x28);
          lVar15 = *(long *)(lVar15 + 0x1a0);
          if ((lVar15 == 0) || (*(short *)(lVar15 + 0x1a) == 0)) goto LAB_00f3a3f8;
          psVar1 = (short *)(lVar15 + 0x1a);
          sVar23 = *(short *)(lVar15 + 0x1a);
          goto LAB_00f3a424;
        }
        break;
      }
      sVar23 = sVar9;
    } while (sVar9 != 0);
  }
  goto LAB_00f39a90;
code_r0x00f39ab4:
  cVar7 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar26) {
    *plVar25 = lVar15;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f39abc;
  goto LAB_00f39aac;
code_r0x00f39f8c:
  cVar7 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar15;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f39f94;
  goto LAB_00f39f84;
code_r0x00f39c90:
  cVar7 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
  if (bVar26) {
    *plVar31 = lVar15;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f39c98;
  goto LAB_00f39c88;
  while (sVar23 = sVar9, sVar9 != 0) {
LAB_00f3a424:
    sVar9 = *psVar1;
    if (sVar9 == sVar23) {
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar26) {
        *psVar1 = sVar23 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_00f3a448;
      bVar26 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f3a448:
      bVar26 = false;
    }
    if (bVar26) {
      if (*(long *)(lVar15 + 0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar15 + 0x10) + -0x28) + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00f3a49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar25 + 0x60))(plVar25);
        return;
      }
      break;
    }
  }
LAB_00f3a3f8:
  (**(code **)(*plVar25 + 0x60))(plVar25);
LAB_00f39a90:
  plVar25 = param_1 + 0x85;
  lVar24 = *plVar25;
  lVar15 = nn::os::GetCurrentThread();
  if (lVar15 != lVar24) {
    lVar15 = nn::os::GetCurrentThread();
LAB_00f39aac:
    if (*plVar25 == 0) goto code_r0x00f39ab4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x86));
    do {
      if (*plVar25 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x86));
          while (*plVar25 == 0) {
            cVar7 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar26) {
              *plVar25 = lVar15;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00f39abc;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar26) {
        *plVar25 = lVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_00f39abc:
    if ((char)param_1[0x88] != '\0') {
      param_1[0x85] = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x86));
      return;
    }
    *(undefined1 *)(param_1 + 0x88) = 1;
    param_1[0x85] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x86));
    goto LAB_00f39adc;
  }
  if ((char)param_1[0x88] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
LAB_00f39adc:
  puVar21 = (ushort *)((long)piVar2 - (long)*piVar2);
  lVar15 = -(long)*piVar2;
  uVar8 = *puVar21;
  if (uVar8 < 0x15) {
LAB_00f3a1ac:
    if (0xc < uVar8) goto LAB_00f39b08;
LAB_00f3a1b4:
    puVar32 = (uint *)0x0;
  }
  else {
    uVar17 = (ulong)puVar21[10];
    if ((uVar17 != 0) && (*(int *)((long)piVar2 + uVar17) != 0)) {
      if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      uVar16 = *(undefined8 *)puVar12;
      *(undefined8 *)puVar13 = uVar16;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x15) {
        iVar14 = 0;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
        iVar14 = 0;
        if (uVar17 != 0) {
          iVar14 = *(int *)((long)piVar2 + uVar17);
        }
      }
      lVar15 = FUN_00f3b774(uVar16,param_1,(long)iVar14);
      param_1[0x79] = lVar15;
      lVar15 = -(long)*piVar2;
      uVar8 = *(ushort *)((long)piVar2 - (long)*piVar2);
      goto LAB_00f3a1ac;
    }
LAB_00f39b08:
    uVar17 = (ulong)*(ushort *)((long)piVar2 + lVar15 + 0xc);
    if (uVar17 == 0) goto LAB_00f3a1b4;
    puVar32 = (uint *)((long)piVar2 + uVar17);
    puVar32 = (uint *)((long)puVar32 + (ulong)*puVar32);
  }
  plVar25 = (long *)param_1[0x59];
  if (plVar25 == (long *)0x0) {
    if (puVar32 != (uint *)0x0) {
LAB_00f39b2c:
      plVar28 = (long *)0x0;
      bVar26 = true;
LAB_00f39b34:
      if (*puVar32 != 0) {
        lVar15 = (ulong)*puVar32 << 2;
        do {
          puVar32 = puVar32 + 1;
          local_70 = 0;
          uStack_68 = 0;
          local_78 = 0;
          local_88 = param_1 + 8;
          local_80 = plVar25;
          FUN_00f3a4a0(&local_88,(long)puVar32 + (ulong)*puVar32);
          lVar15 = lVar15 + -4;
        } while (lVar15 != 0);
      }
      if (!bVar26) {
        *plVar28 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar28 + 1));
      }
    }
  }
  else {
    lVar15 = plVar25[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_00f3a358;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar26) {
        *psVar1 = sVar23 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar16;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar23 == -1) goto LAB_00f3a378;
    if (puVar32 != (uint *)0x0) {
      plVar28 = plVar25 + 0xc;
      lVar24 = *plVar28;
      lVar15 = nn::os::GetCurrentThread();
      if (lVar15 != lVar24) {
        lVar15 = nn::os::GetCurrentThread();
LAB_00f39f84:
        if (*plVar28 == 0) goto code_r0x00f39f8c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar25 + 0xd));
        do {
          if (*plVar28 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar25 + 0xd));
              while (*plVar28 == 0) {
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar26) {
                  *plVar28 = lVar15;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_00f39f94;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar26) {
            *plVar28 = lVar15;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00f39f94:
        bVar26 = false;
        goto LAB_00f39b34;
      }
      goto LAB_00f39b2c;
    }
  }
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
     (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar17 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar30 = *(undefined1 **)PTR_DAT_047d3e30;
    plVar28 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
  }
  else {
    uVar22 = (ulong)*(uint *)((long)piVar2 + uVar17);
    bVar6 = *(byte *)((long)((long)piVar2 + uVar17) + uVar22 + 4);
    puVar30 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      pbVar19 = (byte *)((long)puVar27 + uVar22 + uVar17 + (ulong)uVar5 + 5);
      do {
        puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (bVar6 != 0);
    }
    plVar28 = (long *)0x0;
  }
  if (((*PTR_DAT_047d8858 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8858), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dd600,PTR_DAT_047d8860,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8858);
  }
  lVar15 = *(long *)PTR_DAT_047d8860;
  *(long *)PTR_DAT_047d8868 = lVar15;
  puVar18 = *(undefined8 **)(lVar15 + 0x28);
  lVar15 = *(long *)(lVar15 + 0x30) - (long)puVar18;
  if (lVar15 != 0) {
    uVar22 = lVar15 >> 5;
    uVar17 = 0;
    if (uVar22 < 2) {
      uVar22 = 1;
    }
    do {
      if ((undefined1 *)*puVar18 == puVar30) {
        iVar14 = (int)uVar17 + 2;
        goto LAB_00f39c64;
      }
      uVar17 = uVar17 + 1;
      puVar18 = puVar18 + 4;
    } while (uVar22 != uVar17);
  }
  iVar14 = 1;
LAB_00f39c64:
  *(int *)(param_1 + 0x78) = iVar14;
  plVar31 = param_1 + 0x3b;
  lVar24 = *plVar31;
  lVar15 = nn::os::GetCurrentThread();
  if (lVar15 != lVar24) {
    lVar15 = nn::os::GetCurrentThread();
LAB_00f39c88:
    if (*plVar31 == 0) goto code_r0x00f39c90;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c));
    do {
      if (*plVar31 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c));
          while (*plVar31 == 0) {
            cVar7 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar26) {
              *plVar31 = lVar15;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00f39c98;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar26) {
        *plVar31 = lVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_00f39c98:
    bVar26 = false;
    goto LAB_00f39c9c;
  }
  plVar31 = (long *)0x0;
  bVar26 = true;
LAB_00f39c9c:
  plVar4 = (long *)param_1[0x3f];
  for (plVar29 = (long *)param_1[0x3e]; plVar29 != plVar4; plVar29 = plVar29 + 1) {
    lVar15 = 0;
    if (*(long *)(*plVar29 + 0x1b8) != 0) {
      lVar15 = *(long *)(*plVar29 + 0x1b8) + 0x20;
    }
    FUN_00f3aa48(&local_90,uVar20,lVar15);
    if (local_90 != (long *)0x0) {
      lVar15 = local_90[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar23 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar23 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar23 == 0) goto LAB_00f39e44;
    }
  }
  if (!bVar26) {
    *plVar31 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar31 + 1));
  }
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
  if (plVar25 != (long *)0x0) {
    lVar15 = plVar25[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar26) {
        *psVar1 = sVar23 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar25 + 0x50))(plVar25);
    }
    else if (sVar23 == 0) goto LAB_00f39e44;
  }
  if (((*PTR_DAT_047d89c8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar15 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar15;
  lVar15 = *(long *)(lVar15 + 0x30);
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  uVar20 = *(undefined8 *)(*(long *)(lVar15 + 0x340) + 8);
  if (((*PTR_DAT_047d8c58 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar16 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar16;
  FUN_00cbf5d4(&local_98,uVar16,uVar20);
  local_88 = local_98;
  if (local_98 != (long *)0x0) {
    lVar24 = local_98[6];
    if (*(long *)(lVar24 + 0x10) == 0) {
LAB_00f3a358:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar26) {
        *psVar1 = sVar23 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
      *(undefined8 *)(lVar24 + 8) = uVar20;
      *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
    }
    else if (sVar23 == -1) {
LAB_00f3a378:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  lVar24 = *(long *)(lVar15 + 0x340);
  local_80 = param_1;
  if (*(int *)(lVar15 + 0x348) == 0) {
    FUN_00f3b77c(lVar24,&local_88);
  }
  else {
    lVar15 = *(long *)(lVar24 + 0x1b0);
    while( true ) {
      lVar3 = lVar24;
      if (lVar15 != 0) {
        lVar3 = lVar15;
      }
      if (lVar3 == lVar24) break;
      lVar15 = *(long *)(lVar3 + 0x1b0);
      lVar24 = lVar3;
    }
    if ((*(byte *)(lVar24 + 0x1b8) >> 4 & 1) != 0) {
      FUN_00f3a870(lVar24 + 0x290,&local_88);
    }
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if (local_88 != (long *)0x0) {
    lVar15 = local_88[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar26) {
        *psVar1 = sVar23 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_88 + 0x50))();
    }
    else if (sVar23 == 0) goto LAB_00f39e44;
  }
  if (local_98 != (long *)0x0) {
    lVar15 = local_98[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar7 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar26) {
        *psVar1 = sVar23 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_98 + 0x50))();
    }
    else if (sVar23 == 0) {
LAB_00f39e44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


