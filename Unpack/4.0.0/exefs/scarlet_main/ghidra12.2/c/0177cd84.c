/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177cd84; name: FUN_0177cd84
 */


void FUN_0177cd84(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  long lVar14;
  long *local_58;
  undefined1 auStack_38 [8];
  
  FUN_0177d424();
  *param_1 = &PTR_LAB_04569118;
  param_1[4] = &PTR_LAB_04569148;
  param_1[5] = 0;
  FUN_0177d260(param_1 + 6);
  param_1[0x12] = 0;
  param_1[0x10] = param_1 + 0x10;
  param_1[0x11] = param_1 + 0x10;
  FUN_0177d2ac(param_1 + 0x13);
  param_1[0x17] = 0x1e;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_58 = (long *)0x0;
  DAT_0483af70 = param_1;
  lVar9 = FUN_0145b26c(auStack_38,param_1[1],&local_58);
  if (lVar9 != 0) {
    FUN_00f1b0c8(lVar9);
    lVar14 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar14 + 0x1a);
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
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar11;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar13 = *(code **)(lVar9 + 0x388);
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x390) = 0;
    *(undefined8 *)(lVar9 + 0x398) = 0;
    *(undefined8 *)(lVar9 + 0x380) = 0;
    *(undefined8 *)(lVar9 + 0x388) = 0;
    (*pcVar13)(lVar9 + 0x3a0);
  }
  *(undefined1 **)(lVar9 + 0x380) = &LAB_0193e044;
  *(undefined1 **)(lVar9 + 0x390) = &LAB_02a32210;
  *(undefined8 **)(lVar9 + 0x3a0) = param_1;
  *(undefined1 **)(lVar9 + 0x388) = &LAB_02a3220c;
  plVar10 = (long *)(lVar9 + 0x1d0);
  *(undefined1 **)(lVar9 + 0x398) = &LAB_02a3221c;
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0177ceac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1d8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar14;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0177ceac;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0177ceac:
  if (((*PTR_DAT_047d89c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar14 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar14;
  FUN_00e220f4(lVar9,0,*(undefined8 *)(lVar14 + 0x38));
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_58);
  plVar12 = local_58;
  plVar10 = (long *)(**(code **)local_58[5])(local_58 + 5);
  if ((*PTR_DAT_047d9100 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_047d9100);
    puVar7 = PTR_DAT_047d3ab0;
    if (iVar8 != 0) {
      if ((*PTR_DAT_047d3aa8 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_047d3aa8);
        puVar5 = PTR_DAT_047d39b8;
        if (iVar8 != 0) {
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar6 = PTR_DAT_047d39c8;
            if (iVar8 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar8 != 0)) {
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
    if (plVar10 == (long *)PTR_DAT_047d9108) goto LAB_0177cf60;
  }
  plVar12 = (long *)0x0;
LAB_0177cf60:
  FUN_00e220f4(lVar9,0,plVar12);
  if (local_58 != (long *)0x0) {
    lVar14 = local_58[6];
    psVar1 = (short *)(lVar14 + 0x1a);
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
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0177d158;
  }
  plVar10 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar10 != (long *)0x0) {
    lVar14 = plVar10[6];
    psVar1 = (short *)(lVar14 + 0x1a);
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
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0177d158:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[5] = lVar9;
  *(undefined8 *)(lVar9 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1d8));
  return;
}


