/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00aff268; name: FUN_00aff268
 */


void FUN_00aff268(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined4 local_22c;
  long *local_228;
  long local_220;
  long lStack_218;
  long local_210;
  long *plStack_208;
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
  code *local_d8;
  long *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *plStack_b0;
  long *local_a8;
  long *local_a0;
  
  plVar11 = (long *)*param_2;
  *param_2 = 0;
  plVar13 = *(long **)(*param_1 + 8);
  local_228 = (long *)((ulong)local_228 & 0xffffffff00000000);
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
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
    else if (sVar2 == -1) goto LAB_00affd48;
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
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
    else if (sVar2 == -1) goto LAB_00affd48;
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
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
    else if (sVar2 == -1) goto LAB_00affd48;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00affd98:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x1d0,0x10);
  if (plVar8 == (long *)0x0) {
LAB_00affd9c:
    (**(code **)(*plVar13 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_f0 = (long *)&LAB_00afffcc;
  local_e8 = FUN_00b00128;
  local_e0 = FUN_00b001a0;
  local_1e0 = FUN_00b005ac;
  local_d8 = (code *)&LAB_00b00260;
  local_170 = &LAB_00b00270;
  local_168 = FUN_00b003d8;
  local_160 = FUN_00b00450;
  local_158 = &LAB_00b00510;
  local_1f0 = &LAB_00b00520;
  local_1e8 = FUN_00b00534;
  local_1d8 = &LAB_00b0066c;
  local_1d0[0] = plVar11;
  local_150[0] = plVar11;
  local_d0 = plVar11;
  FUN_01749d60(plVar8,&local_228,&local_f0,&local_170,&local_1f0);
  pcVar6 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar6)(local_1d0);
  }
  pcVar6 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar6)(local_150);
  }
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar6)(&local_d0);
  }
  *(undefined4 *)(plVar8 + 3) = 0x1001d0;
  plVar8[1] = (long)plVar13;
  plVar8[2] = (long)plVar8;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  lVar12 = plVar8[6];
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_00affd28:
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
  else if (sVar2 == -1) goto LAB_00affd48;
  local_228 = (long *)param_1[1];
  if (local_228 != (long *)0x0) {
    lVar12 = local_228[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
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
    else if (sVar2 == -1) goto LAB_00affd48;
  }
  local_220 = param_1[2];
  lStack_218 = param_1[3];
  local_210 = param_1[4];
  plStack_208 = (long *)param_1[5];
  if (plStack_208 != (long *)0x0) {
    (**(code **)(*plStack_208 + 0x18))();
  }
  lVar12 = plVar8[6];
  local_200 = plVar8;
  if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
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
  else if (sVar2 == -1) goto LAB_00affd48;
  local_1f8 = plVar11;
  if (plVar11 == (long *)0x0) {
    bVar4 = true;
  }
  else {
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
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
    else if (sVar2 == -1) goto LAB_00affd48;
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
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
    else if (sVar2 == -1) goto LAB_00affd48;
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
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
      bVar4 = false;
      *(undefined8 *)(lVar12 + 8) = uVar10;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else {
      if (sVar2 == -1) goto LAB_00affd48;
      bVar4 = false;
    }
  }
  plVar13 = *(long **)(*param_1 + 8);
  local_22c = 1;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00affd98;
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x1d0,0x10);
  if (plVar9 == (long *)0x0) goto LAB_00affd9c;
  local_d0 = local_228;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  if (local_228 != (long *)0x0) {
    lVar14 = local_228[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00affd28;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar10;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00affd48;
  }
  local_c8 = local_220;
  lStack_c0 = lStack_218;
  local_b8 = local_210;
  plStack_b0 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    (**(code **)(*plStack_208 + 0x18))();
  }
  local_a8 = local_200;
  if (local_200 != (long *)0x0) {
    lVar14 = local_200[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00affd28;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar10;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00affd48;
  }
  local_a0 = local_1f8;
  if (local_1f8 != (long *)0x0) {
    lVar14 = local_1f8[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00affd28;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar10;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00affd48;
  }
  local_f0 = (long *)&LAB_00b0067c;
  local_e8 = thunk_FUN_00affeac;
  local_e0 = FUN_00b00ccc;
  local_d8 = FUN_00b00e8c;
  local_160 = (code *)0x0;
  local_158 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_150[0] = plVar11;
  if (!bVar4) {
    lVar14 = plVar11[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00affd28;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar10;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00affd48;
  }
  local_170 = &LAB_00b00f98;
  local_168 = FUN_00b01100;
  local_160 = FUN_00b01178;
  local_158 = &LAB_00b01238;
  local_1e0 = (code *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1d0[0] = plVar11;
  if (!bVar4) {
    lVar14 = plVar11[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00affd28;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar10;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00affd48;
  }
  local_1f0 = &LAB_00b01248;
  local_1e8 = FUN_00b0125c;
  local_1e0 = FUN_00b012d4;
  local_1d8 = &LAB_00b01394;
  FUN_01749d60(plVar9,&local_22c,&local_f0,&local_170,&local_1f0);
  pcVar6 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar6)(local_1d0);
  }
  pcVar6 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar6)(local_150);
  }
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar6)(&local_d0);
  }
  plVar9[1] = (long)plVar13;
  plVar9[2] = (long)plVar9;
  *(undefined4 *)(plVar9 + 3) = 0x1001d0;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  lVar12 = plVar9[6];
  local_f0 = plVar9;
  if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00affd28;
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
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
LAB_00affd48:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  FUN_01749fb8(*param_1,&local_f0);
  if (local_f0 != (long *)0x0) {
    lVar12 = local_f0[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_f0 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00affd70;
  }
  if (!bVar4) {
    lVar12 = plVar11[6];
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
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar2 == 0) goto LAB_00affd70;
    lVar12 = plVar11[6];
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
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar2 == 0) goto LAB_00affd70;
  }
  FUN_00affeac(&local_228);
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
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else if (sVar2 == 0) goto LAB_00affd70;
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[6];
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
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar2 == 0) {
LAB_00affd70:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


