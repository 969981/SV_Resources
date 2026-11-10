/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01803d48; name: FUN_01803d48
 */


void FUN_01803d48(long param_1)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_e8;
  long *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  
  puVar9 = PTR_LAB_047d4e10;
  puVar7 = PTR_DAT_047d4e08;
  puVar6 = PTR_DAT_047d4e00;
  puVar8 = PTR_DAT_047d4df8;
  lVar17 = 0;
  do {
    local_d0 = 0;
    uStack_c8 = 0;
    lVar1 = param_1 + lVar17 * 0x30 + 0x28;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8,lVar1), iVar10 != 0)) {
      FUN_00100190(puVar9,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar8);
    }
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar11;
    FUN_011794fc(&local_e8,uVar11,lVar1,&local_e0);
    pcVar15 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = (long *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar15)(auStack_c0);
    }
    lVar1 = param_1 + lVar17 * 8;
    plVar12 = *(long **)(lVar1 + 0x538);
    *(undefined8 *)(lVar1 + 0x538) = 0;
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[6];
      psVar2 = (short *)(lVar14 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_01803e38;
    }
    lVar17 = lVar17 + 1;
    *(undefined8 *)(lVar1 + 0x538) = local_e8;
  } while (lVar17 != 0x1b);
  local_e0 = (long *)0x0;
  plVar12 = (long *)FUN_0145b26c(&local_e8,*(undefined8 *)(param_1 + 8),&local_e0);
  if (plVar12 != (long *)0x0) {
    FUN_00f1b0c8(plVar12);
    lVar17 = plVar12[6];
    if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar11;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar15 = (code *)plVar12[0x71];
  if (pcVar15 != (code *)0x0) {
    plVar12[0x72] = 0;
    plVar12[0x73] = 0;
    plVar12[0x70] = 0;
    plVar12[0x71] = 0;
    (*pcVar15)(plVar12 + 0x74);
  }
  plVar12[0x70] = (long)&LAB_015b66cc;
  plVar12[0x71] = (long)&LAB_02a3f088;
  plVar12[0x72] = (long)&LAB_02a3f08c;
  plVar12[0x74] = param_1;
  plVar12[0x73] = (long)&LAB_02a3f098;
  if (((*PTR_DAT_047d6c20 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_e0);
  plVar16 = local_e0;
  plVar13 = (long *)(**(code **)local_e0[5])(local_e0 + 5);
  if ((*PTR_DAT_047d9100 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_047d9100);
    puVar8 = PTR_DAT_047d3ab0;
    if (iVar10 != 0) {
      if ((*PTR_DAT_047d3aa8 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_047d3aa8);
        puVar6 = PTR_DAT_047d39b8;
        if (iVar10 != 0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar10 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar7 = PTR_DAT_047d39c8;
            if (iVar10 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar10 != 0)) {
                *(undefined8 *)puVar7 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)puVar6 = puVar7;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
      }
      *(undefined **)PTR_DAT_047d9108 = puVar8;
      __cxa_guard_release(PTR_DAT_047d9100);
    }
  }
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (plVar13 == (long *)PTR_DAT_047d9108) goto LAB_01803f84;
  }
  plVar16 = (long *)0x0;
LAB_01803f84:
  if (local_e0 != (long *)0x0) {
    lVar17 = local_e0[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*local_e0 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01803e38:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar13 = plVar12 + 0x3a;
  lVar17 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01803fcc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x3b));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x3b));
        while (*plVar13 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar17;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01803fcc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01803fcc:
  if (((*PTR_DAT_047d89c8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar17 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar17;
  FUN_00e220f4(plVar12,0,*(undefined8 *)(lVar17 + 0x38));
  FUN_00e220f4(plVar12,0,plVar16);
  plVar13 = *(long **)(param_1 + 0x610);
  *(undefined8 *)(param_1 + 0x610) = 0;
  if (plVar13 == (long *)0x0) {
LAB_01804044:
    *(long **)(param_1 + 0x610) = plVar12;
    (**(code **)(*plVar12 + 0x68))(plVar12,0);
    plVar12[0x3a] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x3b));
    return;
  }
  lVar17 = plVar13[6];
  psVar2 = (short *)(lVar17 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar5) {
      *psVar2 = sVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))();
    goto LAB_01804044;
  }
  if (sVar3 != 0) goto LAB_01804044;
  goto LAB_01803e38;
}


