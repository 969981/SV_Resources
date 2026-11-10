/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01806cdc; name: FUN_01806cdc
 */


void FUN_01806cdc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long ****local_f8;
  long ****pppplStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined4 local_d0;
  long ****local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long ****local_78;
  long ****pppplStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_50;
  undefined4 local_48;
  long *local_28;
  
  local_78 = (long ****)0x0;
  lVar7 = FUN_0145b26c(&local_f8,*(undefined8 *)(param_1 + 8),&local_78);
  if (lVar7 != 0) {
    FUN_00f1b0c8(lVar7);
    lVar12 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_01807288:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
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
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar10;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_018072a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar8 != (long *)0x0) {
    lVar12 = plVar8[6];
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
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_018071cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x28) = lVar7;
  pcVar11 = *(code **)(lVar7 + 0x388);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x390) = 0;
    *(undefined8 *)(lVar7 + 0x398) = 0;
    *(undefined8 *)(lVar7 + 0x380) = 0;
    *(undefined8 *)(lVar7 + 0x388) = 0;
    (*pcVar11)(lVar7 + 0x3a0);
  }
  *(undefined1 **)(lVar7 + 0x380) = &LAB_00ff80ac;
  *(undefined1 **)(lVar7 + 0x388) = &LAB_02a1672c;
  *(undefined1 **)(lVar7 + 0x390) = &LAB_02a16730;
  *(long *)(lVar7 + 0x3a0) = param_1;
  *(undefined1 **)(lVar7 + 0x398) = &LAB_02a1673c;
  lVar12 = *(long *)(param_1 + 0x28);
  plVar8 = (long *)(lVar12 + 0x1d0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01806dcc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01806dcc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01806dcc:
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_015ccff4(&local_28);
  FUN_00e220f4(lVar12,local_28,0);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  local_78 = (long ****)&local_78;
  local_48 = 0;
  local_68 = 0;
  local_58 = (long *)&DAT_1fffffffffffffff;
  local_50 = 0;
  pppplStack_70 = local_78;
  FUN_018072d0(param_1 + 0x30,&local_78);
  FUN_00ff84dc(&local_78);
  local_90 = DAT_0455fb08;
  puStack_88 = PTR_s_world_data_food_skill_foodSkillD_0455fb10;
  local_80 = DAT_0455fb18;
  local_a8 = DAT_0455fb20;
  puStack_a0 = PTR_s__bfbs_0455fb28;
  local_98 = DAT_0455fb30;
  local_b0 = DAT_0455fb48;
  local_c0 = DAT_0455fb38;
  puStack_b8 = PTR_DAT_0455fb40;
  FUN_011b604c(&local_c8,&local_90,&local_a8);
  FUN_011a6b30(&local_78,&local_c8);
  uVar9 = FUN_00dc5c18(param_1 + 0x68,1,&local_78,0,0);
  if (((uVar9 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x88), plVar8 != (long *)0x0)) {
    lVar7 = plVar8[6];
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_01807288;
    psVar1 = (short *)(lVar7 + 0x1a);
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
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar10;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_018072a8;
    lVar7 = plVar8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) goto LAB_018071cc;
  }
  FUN_011b604c(&local_f8,&local_90,&local_c0);
  pppplVar5 = local_c8;
  local_c8 = (long ****)0x0;
  if (pppplVar5 != (long ****)0x0) {
    (*(code *)(*pppplVar5)[4])();
  }
  local_c8 = local_f8;
  FUN_011a6b30(&local_f8,&local_c8);
  pppplVar5 = local_78;
  local_78 = (long ****)0x0;
  if (pppplVar5 != (long ****)0x0) {
    (*(code *)(*pppplVar5)[4])();
  }
  plVar8 = local_58;
  local_78 = local_f8;
  local_f8 = (long ****)0x0;
  pppplStack_70 = pppplStack_f0;
  local_68 = local_e8;
  uStack_60 = uStack_e0;
  local_58 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  local_58 = local_d8;
  local_d8 = (long *)0x0;
  local_50 = CONCAT44(local_50._4_4_,local_d0);
  if (local_f8 != (long ****)0x0) {
    (*(code *)(*local_f8)[4])();
  }
  uVar9 = FUN_00dc5c18(param_1 + 0xa8,1,&local_78,0,0);
  if (((uVar9 & 1) != 0) && (plVar8 = *(long **)(param_1 + 200), plVar8 != (long *)0x0)) {
    lVar7 = plVar8[6];
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_01807288;
    psVar1 = (short *)(lVar7 + 0x1a);
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
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar10;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_018072a8;
    lVar7 = plVar8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) goto LAB_018071cc;
  }
  *(undefined4 *)(param_1 + 0x164) = 0;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78 != (long ****)0x0) {
    (*(code *)(*local_78)[4])();
  }
  if (local_c8 != (long ****)0x0) {
    (*(code *)(*local_c8)[4])();
  }
  if (local_28 == (long *)0x0) {
LAB_01806fa8:
    *(undefined8 *)(lVar12 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
    return;
  }
  lVar7 = local_28[6];
  psVar1 = (short *)(lVar7 + 0x1a);
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
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*local_28 + 0x50))();
    goto LAB_01806fa8;
  }
  if (sVar2 != 0) goto LAB_01806fa8;
  goto LAB_018071cc;
}


