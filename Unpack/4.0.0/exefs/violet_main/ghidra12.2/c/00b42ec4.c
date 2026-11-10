/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b42ec4; name: FUN_00b42ec4
 */


void FUN_00b42ec4(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_214;
  long *local_210;
  long *local_208;
  long *local_200;
  long *local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  long *local_1d0 [12];
  undefined1 *local_170;
  code *local_168;
  code *local_160;
  undefined1 *local_158;
  long *local_150 [12];
  long *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long *aplStack_d0 [14];
  
  plVar10 = (long *)*param_2;
  *param_2 = 0;
  plVar12 = *(long **)(*param_1 + 8);
  local_210 = (long *)((ulong)local_210 & 0xffffffff00000000);
  if (plVar10 == (long *)0x0) {
    local_208 = (long *)0x0;
  }
  else {
    lVar11 = plVar10[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00b438c4;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00b438e4;
    lVar11 = plVar10[6];
    local_208 = plVar10;
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00b438c4;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00b438e4;
    lVar11 = plVar10[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00b438c4;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00b438e4;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00b43934:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1d0,0x10);
  if (plVar7 == (long *)0x0) {
LAB_00b43938:
    (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_e0 = FUN_00b43bb4;
  local_f0 = (long *)&LAB_00b439e0;
  local_e8 = FUN_00b43b3c;
  local_d8 = &LAB_00b43c74;
  local_170 = &LAB_00b43c84;
  local_168 = FUN_00b43dec;
  local_160 = FUN_00b43e64;
  local_158 = &LAB_00b43f24;
  local_150[0] = local_208;
  local_1f0 = &LAB_00b43f34;
  local_1e8 = FUN_00b43f48;
  local_208 = (long *)0x0;
  local_1e0 = FUN_00b43fc0;
  local_1d8 = &LAB_00b44080;
  local_1d0[0] = plVar10;
  aplStack_d0[0] = plVar10;
  FUN_01749d60(plVar7,&local_210,&local_f0,&local_170,&local_1f0);
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(local_1d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar5)(local_150);
  }
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar5)(aplStack_d0);
  }
  *(undefined4 *)(plVar7 + 3) = 0x1001d0;
  plVar7[1] = (long)plVar12;
  plVar7[2] = (long)plVar7;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  lVar11 = plVar7[6];
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00b438c4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar11 + 0x1a);
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
    uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    *(undefined8 *)(lVar11 + 8) = uVar9;
    *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_00b438e4;
  if (local_208 != (long *)0x0) {
    lVar11 = local_208[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_208 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00b4390c;
  }
  local_208 = (long *)param_1[1];
  lVar11 = plVar7[6];
  local_200 = plVar7;
  if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00b438c4;
  psVar1 = (short *)(lVar11 + 0x1a);
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
    uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    *(undefined8 *)(lVar11 + 8) = uVar9;
    *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_00b438e4;
  local_1f8 = plVar10;
  if (plVar10 == (long *)0x0) {
    local_210 = (long *)0x0;
  }
  else {
    lVar11 = plVar10[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00b438c4;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00b438e4;
    lVar11 = plVar10[6];
    local_210 = plVar10;
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00b438c4;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00b438e4;
    lVar11 = plVar10[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00b438c4;
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar9;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00b438e4;
  }
  plVar12 = *(long **)(*param_1 + 8);
  local_214 = 1;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00b43934;
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1d0,0x10);
  if (plVar8 == (long *)0x0) goto LAB_00b43938;
  local_e0 = (code *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  FUN_00b44090(aplStack_d0,&local_208);
  local_f0 = (long *)&LAB_00b441c8;
  local_e8 = FUN_00b44674;
  local_150[0] = local_210;
  local_e0 = (code *)&LAB_00b4473c;
  local_d8 = &LAB_00b4474c;
  local_160 = (code *)0x0;
  local_158 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  if (local_210 != (long *)0x0) {
    lVar13 = local_210[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00b438c4;
    psVar1 = (short *)(lVar13 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar9;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00b438e4;
  }
  local_170 = &LAB_00b44830;
  local_168 = FUN_00b44998;
  local_160 = FUN_00b44a10;
  local_158 = &LAB_00b44ad0;
  local_1e0 = (code *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1d0[0] = plVar10;
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00b438c4;
    psVar1 = (short *)(lVar13 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar9;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00b438e4;
  }
  local_1f0 = &LAB_00b44ae0;
  local_1e8 = FUN_00b44af4;
  local_1e0 = FUN_00b44b6c;
  local_1d8 = &LAB_00b44c2c;
  FUN_01749d60(plVar8,&local_214,&local_f0,&local_170,&local_1f0);
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(local_1d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar5)(local_150);
  }
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar5)(aplStack_d0);
  }
  plVar8[1] = (long)plVar12;
  plVar8[2] = (long)plVar8;
  *(undefined4 *)(plVar8 + 3) = 0x1001d0;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  lVar11 = plVar8[6];
  local_f0 = plVar8;
  if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00b438c4;
  psVar1 = (short *)(lVar11 + 0x1a);
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
    uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    *(undefined8 *)(lVar11 + 8) = uVar9;
    *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
LAB_00b438e4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  lVar11 = *param_1;
  FUN_019b05e0(lVar11 + 0xf0,&local_f0);
  if (*(int *)(lVar11 + 0x48) - 1U < 3) {
    FUN_0174a3b8(lVar11);
  }
  if (local_f0 != (long *)0x0) {
    lVar11 = local_f0[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_f0 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00b4390c;
  }
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar2 == 0) goto LAB_00b4390c;
  }
  if (local_210 != (long *)0x0) {
    lVar11 = local_210[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_210 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00b4390c;
  }
  if (local_1f8 != (long *)0x0) {
    lVar11 = local_1f8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_1f8 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00b4390c;
  }
  if (local_200 != (long *)0x0) {
    lVar11 = local_200[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_200 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00b4390c;
  }
  lVar11 = plVar7[6];
  psVar1 = (short *)(lVar11 + 0x1a);
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
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar7 + 0x50))(plVar7);
  }
  else if (sVar2 == 0) goto LAB_00b4390c;
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar2 == 0) {
LAB_00b4390c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


