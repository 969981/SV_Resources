/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01829524; name: FUN_01829524
 */


void FUN_01829524(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *local_88 [4];
  long *local_68;
  char *local_58;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar12 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar12;
  plVar14 = *(long **)(lVar12 + 0x58);
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_01829a94;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar11;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01829ab4;
  }
  local_88[0] = (long *)0x0;
  lVar12 = FUN_0145b26c(&local_58,*(undefined8 *)(param_1 + 8),local_88);
  if (lVar12 != 0) {
    FUN_00f1b0c8(lVar12);
    lVar15 = *(long *)(lVar12 + 0x30);
    if (*(long *)(lVar15 + 0x10) == 0) {
LAB_01829a94:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar11;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_01829ab4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar13 = *(code **)(lVar12 + 0x388);
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(lVar12 + 0x390) = 0;
    *(undefined8 *)(lVar12 + 0x398) = 0;
    *(undefined8 *)(lVar12 + 0x380) = 0;
    *(undefined8 *)(lVar12 + 0x388) = 0;
    (*pcVar13)(lVar12 + 0x3a0);
  }
  *(undefined1 **)(lVar12 + 0x380) = &LAB_00ddf69c;
  *(undefined1 **)(lVar12 + 0x388) = &LAB_00aa1bc0;
  *(undefined1 **)(lVar12 + 0x390) = &LAB_00aa5184;
  *(long *)(lVar12 + 0x3a0) = param_1;
  *(undefined1 **)(lVar12 + 0x398) = &LAB_00aa5190;
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(local_88);
  plVar16 = local_88[0];
  plVar10 = (long *)(**(code **)local_88[0][5])(local_88[0] + 5);
  if ((*PTR_DAT_047d9100 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_047d9100);
    puVar7 = PTR_DAT_047d3ab0;
    if (iVar9 != 0) {
      if ((*PTR_DAT_047d3aa8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_047d3aa8);
        puVar5 = PTR_DAT_047d39b8;
        if (iVar9 != 0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar6 = PTR_DAT_047d39c8;
            if (iVar9 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
                *(undefined8 *)puVar6 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar5 = puVar6;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
      }
      *(undefined **)PTR_DAT_047d9108 = puVar7;
      __cxa_guard_release(PTR_DAT_047d9100);
    }
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    if (plVar10 == (long *)PTR_DAT_047d9108) goto LAB_018296c4;
  }
  plVar16 = (long *)0x0;
LAB_018296c4:
  if (local_88[0] != (long *)0x0) {
    lVar15 = local_88[0][6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_88[0] + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0182987c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar10 = (long *)(lVar12 + 0x1d0);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0182970c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0182970c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0182970c:
  FUN_00e220f4(lVar12,plVar14,0);
  if (((*PTR_DAT_047d89c8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar15 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar15;
  FUN_00e220f4(lVar12,0,*(undefined8 *)(lVar15 + 0x38));
  FUN_00e220f4(lVar12,0,plVar16);
  plVar10 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0182987c;
  }
  *(long *)(param_1 + 0xf8) = lVar12;
  local_58 = "world/obj_template/parts/event/event_field_popup/field_popup_/field_popup.trsot";
  FUN_00e52f24(local_88,&local_58);
  FUN_01699cf4(&local_58,local_88);
  plVar10 = *(long **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0182987c;
  }
  pcVar8 = local_58;
  local_58 = (char *)0x0;
  *(char **)(param_1 + 0x108) = pcVar8;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88[0] != (long *)0x0) {
    (**(code **)(*local_88[0] + 0x20))();
  }
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar12 = plVar14[6];
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))(plVar14);
    return;
  }
  if (sVar2 != 0) {
    return;
  }
  goto LAB_0182987c;
}


