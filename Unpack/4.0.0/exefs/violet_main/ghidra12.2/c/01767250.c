/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01767250; name: FUN_01767250
 */


void FUN_01767250(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  long *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  undefined1 auStack_28 [8];
  
  FUN_01767840();
  *param_1 = &PTR_LAB_0456ada8;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = &PTR_LAB_0456add8;
  *(undefined2 *)(param_1 + 0xd) = 0;
  plVar11 = param_1 + 6;
  *plVar11 = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_0176781c(param_1 + 0x10);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  lVar8 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar8 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x29] = lVar6;
  param_1[0x2a] = 0x38e38e38e38e38e;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar8 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x30] = lVar6;
  param_1[0x31] = 0xfffffffffffffff;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  local_60 = (long *)0x88a93e1a8489cbf5;
  puStack_58 = PTR_s_DynamicAOEnable_047db098;
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  plVar7 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  (**(code **)(*plVar7 + 0x30))(plVar7,&local_60,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015b5d14(param_1,0);
  local_60 = (long *)0x0;
  lVar8 = FUN_0145b26c(auStack_28,param_1[1],&local_60);
  if (lVar8 != 0) {
    FUN_00f1b0c8(lVar8);
    lVar6 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar6 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar9;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar10 = *(code **)(lVar8 + 0x388);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x390) = 0;
    *(undefined8 *)(lVar8 + 0x398) = 0;
    *(undefined8 *)(lVar8 + 0x380) = 0;
    *(undefined8 *)(lVar8 + 0x388) = 0;
    (*pcVar10)(lVar8 + 0x3a0);
  }
  *(code **)(lVar8 + 0x380) = FUN_00f5f090;
  *(undefined1 **)(lVar8 + 0x390) = &LAB_02a42604;
  *(undefined8 **)(lVar8 + 0x3a0) = param_1;
  *(undefined1 **)(lVar8 + 0x388) = &LAB_02a42600;
  plVar7 = (long *)(lVar8 + 0x1d0);
  *(undefined1 **)(lVar8 + 0x398) = &LAB_02a42610;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01767474;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x1d8));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x1d8));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01767474;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01767474:
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_015ccff4(&local_60);
  FUN_00e220f4(lVar8,local_60,0);
  plVar7 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01767720;
  }
  *plVar11 = lVar8;
  if (local_60 != (long *)0x0) {
    lVar6 = local_60[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_01767720:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(lVar8 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x1d8));
  return;
}


