/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012dbbf8; name: FUN_012dbbf8
 */


void FUN_012dbbf8(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined4 local_104;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [88];
  long *local_80;
  long *local_68;
  
  FUN_012dd654();
  *param_2 = (long)&PTR_FUN_045ab5b0;
  param_2[4] = (long)&PTR_LAB_045ab5e0;
  *(undefined4 *)((long)param_2 + 0x44) = 1;
  param_2[5] = param_3;
  param_2[6] = 0;
  nn::os::InitializeLightEvent(param_2 + 7,0,1);
  param_2[9] = (long)&PTR_LAB_045ab548;
  plVar9 = param_2 + 0xd;
  param_2[10] = 0;
  param_2[0xb] = param_4;
  *(undefined4 *)(param_2 + 0xc) = 0x10;
  memset(plVar9,0,0x6c);
  *(undefined8 *)((long)param_2 + 0xd4) = 0x3e99999a00000002;
  FUN_012dcc8c(auStack_d8,0,0);
  local_80 = param_2 + 9;
  FUN_012de380(auStack_d8);
  puVar5 = PTR_DAT_047ddb98;
  FUN_012dca9c(PTR_DAT_047ddb98);
  FUN_012dca9c(PTR_DAT_047ddba0);
  FUN_012dca9c(PTR_DAT_047ddba8);
  iVar6 = FUN_012dca9c(puVar5);
  if ((((((-1 < iVar6) && (iVar6 = FUN_012dca9c(PTR_DAT_047ddba0), -1 < iVar6)) &&
        (iVar6 = FUN_012dca9c(PTR_DAT_047ddbb0), -1 < iVar6)) &&
       ((iVar6 = FUN_012dca9c(PTR_DAT_047ddbb8), -1 < iVar6 &&
        (iVar6 = FUN_012dca9c(PTR_DAT_047ddbc0), -1 < iVar6)))) &&
      ((iVar6 = FUN_012dca9c(PTR_DAT_047ddbc8), -1 < iVar6 &&
       ((iVar6 = FUN_012dca9c(PTR_DAT_047ddbd0), -1 < iVar6 &&
        (iVar6 = FUN_012dca9c(PTR_DAT_047ddbd8), -1 < iVar6)))))) &&
     (iVar6 = FUN_015fd190(), -1 < iVar6)) {
    FUN_012dca9c(PTR_DAT_047ddba8);
  }
  puVar5 = PTR_DAT_047d1a08;
  local_120 = 0x60;
  lVar7 = (**(code **)PTR_DAT_047d1a08)(0,&local_120,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(lVar7,"hkDynamicBlockStreamAllocator");
  }
  FUN_012dcd30(lVar7,0x100000,0);
  plVar8 = (long *)*plVar9;
  *plVar9 = lVar7;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar9 = plVar8 + 2;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  local_e8 = 0x40;
  local_f0 = 0;
  local_e0 = 0;
  local_120 = 0x390;
  lVar7 = (**(code **)puVar5)(0,&local_120,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(lVar7,"hkDefaultTaskQueue");
  }
  FUN_012de734(lVar7,&local_f0);
  plVar9 = (long *)param_2[0x18];
  param_2[0x18] = lVar7;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar8 = plVar9 + 2;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  FUN_012dcb20(&local_120);
  local_120 = CONCAT44(2,(undefined4)local_120);
  local_104 = 0;
  local_140 = (long *)0x188;
  plVar9 = (long *)(**(code **)puVar5)(0,&local_140,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar9,"hkCpuThreadPool");
  }
  FUN_012de020(plVar9,&local_120,0);
  plVar8 = (long *)param_2[0x19];
  param_2[0x19] = (long)plVar9;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar9 = plVar8 + 2;
      do {
        lVar7 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    plVar9 = (long *)param_2[0x19];
  }
  (**(code **)(*plVar9 + 0x28))(plVar9,param_2[0x18]);
  FUN_012dd340(&local_140,param_2[1]);
  plVar9 = local_140;
  local_140 = (long *)0x0;
  lVar7 = param_2[0xe];
  param_2[0xe] = (long)plVar9;
  if (lVar7 == 0) {
    param_2[0x10] = local_130;
    param_2[0x11] = local_128;
    param_2[0xf] = local_138;
    local_140 = (long *)0x0;
  }
  else {
    FUN_0221a42c(param_2 + 0xf);
    plVar9 = local_140;
    param_2[0xf] = local_138;
    param_2[0x10] = local_130;
    param_2[0x11] = local_128;
    local_140 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_0221a42c(&local_138);
    }
  }
  local_68 = (long *)param_2[0xd];
  lVar7 = param_2[0xe];
  if (local_68 != (long *)0x0) {
    FUN_012dcb00();
  }
  local_148 = (long *)param_2[0x18];
  if (local_148 != (long *)0x0) {
    FUN_012dcb00();
  }
  iVar6 = (**(code **)(*(long *)param_2[0x19] + 0x50))();
  FUN_012dee14(param_1,lVar7,param_4,&local_68,param_5,&local_148,iVar6 + 1);
  if ((local_148 != (long *)0x0) && (local_148[1] != 0)) {
    plVar9 = local_148 + 2;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_148 + 0x18))();
    }
  }
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar9 = local_68 + 2;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  local_150 = (long *)0x0;
  local_140 = (long *)FUN_0145b26c(&local_158,param_4,&local_150);
  if (local_140 == (long *)0x0) {
    local_140 = (long *)0x0;
  }
  else {
    local_140[0x37] = local_140[0x37] | 8;
    lVar7 = local_140[6];
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_012dca54;
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
    else if (sVar2 == -1) goto LAB_012dca74;
  }
  plVar9 = local_140;
  pcVar11 = (code *)local_140[0x71];
  if (pcVar11 != (code *)0x0) {
    local_140[0x72] = 0;
    local_140[0x73] = 0;
    local_140[0x70] = 0;
    local_140[0x71] = 0;
    (*pcVar11)(local_140 + 0x74);
  }
  plVar9[0x74] = (long)param_2;
  plVar9[0x76] = 0;
  plVar9[0x75] = (long)FUN_00c5b41c;
  plVar9[0x70] = (long)&LAB_02b77aec;
  plVar9[0x71] = (long)&LAB_02b77b08;
  plVar9[0x72] = (long)&LAB_02b77b0c;
  plVar9[0x73] = (long)&LAB_02b77b20;
  local_158 = param_2;
  FUN_012dcda8(&local_150,param_4,&local_158);
  plVar9 = (long *)param_2[0x12];
  param_2[0x12] = 0;
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[6];
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
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012dc95c;
  }
  param_2[0x12] = (long)local_150;
  local_158 = (long *)0x0;
  local_150 = (long *)FUN_0145b26c(&local_160,param_4,&local_158);
  if (local_150 == (long *)0x0) {
    local_150 = (long *)0x0;
  }
  else {
    local_150[0x37] = local_150[0x37] | 8;
    lVar7 = local_150[6];
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_012dca54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
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
    else if (sVar2 == -1) {
LAB_012dca74:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar9 = local_150;
  pcVar11 = (code *)local_150[0x71];
  if (pcVar11 != (code *)0x0) {
    local_150[0x72] = 0;
    local_150[0x73] = 0;
    local_150[0x70] = 0;
    local_150[0x71] = 0;
    (*pcVar11)(local_150 + 0x74);
  }
  plVar9[0x74] = (long)param_2;
  plVar9[0x76] = 0;
  plVar9[0x75] = (long)&LAB_02b7764c;
  plVar9[0x70] = (long)&LAB_02b77aec;
  plVar9[0x71] = (long)&LAB_02b77b08;
  plVar9[0x72] = (long)&LAB_02b77b0c;
  plVar9[0x73] = (long)&LAB_02b77b20;
  FUN_012dce88(&local_158,param_4,&local_140,&local_150);
  plVar9 = (long *)param_2[0x17];
  param_2[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[6];
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
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_012dc95c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_2[0x17] = (long)local_158;
  local_158 = (long *)&DAT_0000000c;
  FUN_012dcf6c(&local_160,param_4,&local_158);
  plVar8 = local_160;
  *(undefined4 *)(local_160 + 0x6b) = 0;
  plVar9 = local_160;
  if ((long *)local_160[0x36] != (long *)0x0) {
    plVar9 = (long *)local_160[0x36];
  }
  *(undefined4 *)(plVar9 + 0x6b) = 0;
  pcVar11 = (code *)local_160[0x71];
  if (pcVar11 != (code *)0x0) {
    local_160[0x72] = 0;
    local_160[0x73] = 0;
    local_160[0x70] = 0;
    local_160[0x71] = 0;
    (*pcVar11)(local_160 + 0x74);
  }
  plVar8[0x70] = (long)&LAB_00cad624;
  plVar8[0x72] = (long)&LAB_02b784e4;
  plVar8[0x71] = (long)&LAB_02b784e0;
  plVar8[0x73] = (long)&LAB_02b784e8;
  plVar9 = plVar8 + 0x3a;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012dc1a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012dc1a4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012dc1a4:
  lVar12 = param_2[0x17];
  lVar7 = lVar12;
  if (*(long *)(lVar12 + 0x1a8) != 0) {
    lVar7 = *(long *)(lVar12 + 0x1a8);
  }
  if (*(long *)(lVar12 + 0x1b0) != 0) {
    lVar12 = *(long *)(lVar12 + 0x1b0);
  }
  if (lVar7 == lVar12) {
LAB_012dca34:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("input != output","InsertDependencyToTarget",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
               ,700);
  }
  FUN_00da3100(plVar8);
  FUN_012dcb50(param_2 + 0x13,local_160);
  plVar8[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x3b));
  if (local_160 != (long *)0x0) {
    lVar7 = local_160[6];
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
      (**(code **)(*local_160 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012dc95c;
  }
  FUN_012dd150(&local_160,param_4,&local_158);
  plVar8 = local_160;
  *(undefined4 *)(local_160 + 0x6b) = 0;
  plVar9 = local_160;
  if ((long *)local_160[0x36] != (long *)0x0) {
    plVar9 = (long *)local_160[0x36];
  }
  *(undefined4 *)(plVar9 + 0x6b) = 0;
  pcVar11 = (code *)local_160[0x71];
  if (pcVar11 != (code *)0x0) {
    local_160[0x72] = 0;
    local_160[0x73] = 0;
    local_160[0x70] = 0;
    local_160[0x71] = 0;
    (*pcVar11)(local_160 + 0x74);
  }
  plVar8[0x70] = (long)&LAB_00dcc284;
  plVar8[0x71] = (long)&LAB_02b78804;
  plVar8[0x72] = (long)&LAB_02b78808;
  plVar8[0x73] = (long)&LAB_02b7880c;
  plVar9 = plVar8 + 0x3a;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012dc290;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012dc290;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012dc290:
  lVar12 = param_2[0x17];
  lVar7 = lVar12;
  if (*(long *)(lVar12 + 0x1a8) != 0) {
    lVar7 = *(long *)(lVar12 + 0x1a8);
  }
  if (*(long *)(lVar12 + 0x1b0) != 0) {
    lVar12 = *(long *)(lVar12 + 0x1b0);
  }
  if (lVar7 == lVar12) goto LAB_012dca34;
  FUN_00da3100(plVar8);
  FUN_012dcb50(param_2 + 0x14,local_160);
  FUN_00e220f4(plVar8,param_2[0x13],0);
  plVar8[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x3b));
  if (local_160 != (long *)0x0) {
    lVar7 = local_160[6];
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
      (**(code **)(*local_160 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012dc95c;
  }
  lVar12 = param_2[0x12];
  plVar9 = (long *)(lVar12 + 0x1d0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012dc330;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012dc330;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012dc330:
  lVar13 = param_2[0x17];
  lVar7 = lVar13;
  if (*(long *)(lVar13 + 0x1a8) != 0) {
    lVar7 = *(long *)(lVar13 + 0x1a8);
  }
  if (*(long *)(lVar13 + 0x1b0) != 0) {
    lVar13 = *(long *)(lVar13 + 0x1b0);
  }
  if (lVar7 == lVar13) goto LAB_012dca34;
  FUN_00da3100(lVar12);
  FUN_00e220f4(lVar12,param_2[0x14],0);
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  FUN_012dcf6c(&local_160,param_4,&local_158);
  plVar8 = local_160;
  *(undefined4 *)(local_160 + 0x6b) = 0;
  plVar9 = local_160;
  if ((long *)local_160[0x36] != (long *)0x0) {
    plVar9 = (long *)local_160[0x36];
  }
  *(undefined4 *)(plVar9 + 0x6b) = 0;
  pcVar11 = (code *)local_160[0x71];
  if (pcVar11 != (code *)0x0) {
    local_160[0x72] = 0;
    local_160[0x73] = 0;
    local_160[0x70] = 0;
    local_160[0x71] = 0;
    (*pcVar11)(local_160 + 0x74);
  }
  plVar8[0x70] = (long)&LAB_00c6abc0;
  plVar8[0x71] = (long)&LAB_02b78810;
  plVar8[0x72] = (long)&LAB_02b78814;
  plVar8[0x73] = (long)&LAB_02b78818;
  plVar9 = plVar8 + 0x3a;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012dc3f4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012dc3f4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012dc3f4:
  lVar12 = param_2[0x17];
  lVar7 = lVar12;
  if (*(long *)(lVar12 + 0x1a8) != 0) {
    lVar7 = *(long *)(lVar12 + 0x1a8);
  }
  if (*(long *)(lVar12 + 0x1b0) != 0) {
    lVar12 = *(long *)(lVar12 + 0x1b0);
  }
  if (lVar7 == lVar12) goto LAB_012dca34;
  FUN_00da3100(plVar8);
  FUN_012dcb50(param_2 + 0x15,local_160);
  FUN_00e220f4(plVar8,param_2[0x12],0);
  plVar8[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x3b));
  if (local_160 != (long *)0x0) {
    lVar7 = local_160[6];
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
      (**(code **)(*local_160 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012dc95c;
  }
  FUN_012dd150(&local_160,param_4,&local_158);
  plVar8 = local_160;
  *(undefined4 *)(local_160 + 0x6b) = 0;
  plVar9 = local_160;
  if ((long *)local_160[0x36] != (long *)0x0) {
    plVar9 = (long *)local_160[0x36];
  }
  *(undefined4 *)(plVar9 + 0x6b) = 0;
  pcVar11 = (code *)local_160[0x71];
  if (pcVar11 != (code *)0x0) {
    local_160[0x72] = 0;
    local_160[0x73] = 0;
    local_160[0x70] = 0;
    local_160[0x71] = 0;
    (*pcVar11)(local_160 + 0x74);
  }
  plVar8[0x70] = (long)&LAB_00d4ed88;
  plVar8[0x71] = (long)&LAB_02b7881c;
  plVar8[0x72] = (long)&LAB_02b78820;
  plVar8[0x73] = (long)&LAB_02b78824;
  plVar9 = plVar8 + 0x3a;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012dc4f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012dc4f0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012dc4f0:
  lVar12 = param_2[0x17];
  lVar7 = lVar12;
  if (*(long *)(lVar12 + 0x1a8) != 0) {
    lVar7 = *(long *)(lVar12 + 0x1a8);
  }
  if (*(long *)(lVar12 + 0x1b0) != 0) {
    lVar12 = *(long *)(lVar12 + 0x1b0);
  }
  if (lVar7 == lVar12) goto LAB_012dca34;
  FUN_00da3100(plVar8);
  FUN_012dcb50(param_2 + 0x16,local_160);
  FUN_00e220f4(plVar8,param_2[0x15],0);
  FUN_00e220f4(plVar8,0,local_150);
  plVar8[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x3b));
  if (local_160 != (long *)0x0) {
    lVar7 = local_160[6];
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
      (**(code **)(*local_160 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012dc95c;
  }
  local_160 = param_2;
  FUN_012dd8f0(param_2[5],&local_160);
  if (local_150 != (long *)0x0) {
    lVar7 = local_150[6];
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
      (**(code **)(*local_150 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_012dc95c;
  }
  if (local_140 == (long *)0x0) {
LAB_012dc5a0:
    FUN_012dccdc(&local_120);
    return;
  }
  lVar7 = local_140[6];
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
    (**(code **)(*local_140 + 0x50))();
    goto LAB_012dc5a0;
  }
  if (sVar2 != 0) goto LAB_012dc5a0;
  goto LAB_012dc95c;
}


