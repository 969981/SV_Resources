/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d6290; name: FUN_015d6290
 */


void FUN_015d6290(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 *local_190;
  code *local_188;
  code *local_180;
  long *local_178;
  long *local_170;
  undefined1 *local_168;
  undefined1 *puStack_160;
  long local_158;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined1 local_11c;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined8 local_108;
  long *local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  long *local_48;
  
  param_1[0x22] = *param_2;
  param_1[0x23] = param_2[1];
  param_1[0x24] = param_2[2];
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x25];
  param_1[0x25] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x26] = param_2[4];
  param_1[0x27] = param_2[5];
  param_1[0x28] = param_2[6];
  plVar6 = (long *)param_2[7];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x29];
  param_1[0x29] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x2a] = param_2[8];
  param_1[0x2b] = param_2[9];
  param_1[0x2c] = param_2[10];
  plVar6 = (long *)param_2[0xb];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x2d];
  param_1[0x2d] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x2e] = param_2[0xc];
  param_1[0x2f] = param_2[0xd];
  param_1[0x30] = param_2[0xe];
  plVar6 = (long *)param_2[0xf];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x31];
  param_1[0x31] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x32] = param_2[0x10];
  param_1[0x33] = param_2[0x11];
  param_1[0x34] = param_2[0x12];
  plVar6 = (long *)param_2[0x13];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x35];
  param_1[0x35] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x36] = param_2[0x14];
  param_1[0x37] = param_2[0x15];
  param_1[0x38] = param_2[0x16];
  plVar6 = (long *)param_2[0x17];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x39];
  param_1[0x39] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x3a] = param_2[0x18];
  param_1[0x3b] = param_2[0x19];
  param_1[0x3c] = param_2[0x1a];
  plVar6 = (long *)param_2[0x1b];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x3d];
  param_1[0x3d] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x3e] = param_2[0x1c];
  param_1[0x3f] = param_2[0x1d];
  param_1[0x40] = param_2[0x1e];
  plVar6 = (long *)param_2[0x1f];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x41];
  param_1[0x41] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x42] = param_2[0x20];
  param_1[0x43] = param_2[0x21];
  param_1[0x44] = param_2[0x22];
  plVar6 = (long *)param_2[0x23];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x45];
  param_1[0x45] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x46] = param_2[0x24];
  param_1[0x47] = param_2[0x25];
  param_1[0x48] = param_2[0x26];
  plVar6 = (long *)param_2[0x27];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x49];
  param_1[0x49] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  param_1[0x4a] = param_2[0x28];
  param_1[0x4b] = param_2[0x29];
  param_1[0x4c] = param_2[0x2a];
  plVar6 = (long *)param_2[0x2b];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = (long *)param_1[0x4d];
  param_1[0x4d] = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  lVar7 = param_1[1];
  FUN_015d6c44(&local_48,param_1 + 8);
  plVar8 = local_48;
  plVar3 = (long *)PTR_DAT_047d8b70;
  plVar4 = (long *)PTR_PTR_047d4508;
  plVar6 = (long *)PTR_DAT_047d8b70;
  if (local_48 != (long *)0x0) {
    plVar6 = local_48 + 6;
  }
  local_190 = (undefined1 *)*plVar6;
  plVar6 = (long *)PTR_PTR_047d4508;
  if (local_48 != (long *)0x0) {
    plVar6 = local_48 + 7;
  }
  local_188 = (code *)*plVar6;
  if (local_48 == (long *)0x0) {
    local_180 = (code *)0x0;
  }
  else {
    local_180 = (code *)local_48[8];
  }
  local_178 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  local_178 = plVar8;
  lVar7 = FUN_0174d218(param_1,lVar7,&local_190);
  param_1[0x7b] = lVar7;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (*(char *)param_1[0x7e] != '\0') {
    FUN_01516688(param_1[0x7b],param_1 + 0x7d);
  }
  local_138 = 0;
  local_134 = 0;
  local_12c = 0;
  local_168 = &DAT_cbf29ce484222645;
  puStack_160 = &DAT_03c886bc;
  local_124 = 0;
  local_11c = 0;
  local_64 = 0;
  local_68 = 0;
  local_158 = 0;
  local_150 = (long *)0x0;
  local_148 = 0;
  uStack_140 = 0;
  local_118 = &DAT_cbf29ce484222645;
  puStack_110 = &DAT_03c886bc;
  local_108 = 0;
  local_100 = (long *)0x0;
  local_f8 = &DAT_cbf29ce484222645;
  puStack_f0 = &DAT_03c886bc;
  local_e8 = 0;
  local_e0 = (long *)0x0;
  local_d8 = &DAT_cbf29ce484222645;
  puStack_d0 = &DAT_03c886bc;
  local_c8 = 0;
  local_c0 = (long *)0x0;
  local_b8 = &DAT_cbf29ce484222645;
  puStack_b0 = &DAT_03c886bc;
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_98 = &DAT_cbf29ce484222645;
  puStack_90 = &DAT_03c886bc;
  local_88 = 0;
  local_80 = (long *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_188 = (code *)param_1[0x2a];
  local_190 = (undefined1 *)0x200000000;
  local_180 = (code *)param_1[0x2b];
  local_178 = (long *)param_1[0x2c];
  local_170 = (long *)0x0;
  plVar6 = (long *)param_1[0x2d];
  if (plVar6 == (long *)0x0) {
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (local_170 != (long *)0x0) {
      lVar7 = *local_170;
      local_170 = plVar6;
      (**(code **)(lVar7 + 0x20))();
      plVar6 = local_170;
    }
  }
  local_170 = plVar6;
  local_168 = (undefined1 *)param_1[0x2a];
  puStack_160 = (undefined1 *)param_1[0x2b];
  local_158 = param_1[0x2c];
  plVar6 = (long *)param_1[0x2d];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (local_150 != (long *)0x0) {
    lVar7 = *local_150;
    local_150 = plVar6;
    (**(code **)(lVar7 + 0x20))();
    plVar6 = local_150;
  }
  local_150 = plVar6;
  local_12c = 0;
  local_124 = 0;
  FUN_015d6d58(param_1[0x7b],&local_190);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  lVar7 = param_1[0x7b];
  local_190 = &LAB_014e1b04;
  local_188 = FUN_02b2ff98;
  local_180 = FUN_02b2ff9c;
  local_178 = (long *)&LAB_02b2ffa8;
  pcVar5 = *(code **)(lVar7 + 0x158);
  local_170 = param_1;
  if (pcVar5 == (code *)0x0) {
LAB_015d668c:
    (*local_180)(&local_170,lVar7 + 0x170);
    *(long **)(lVar7 + 0x168) = local_178;
    *(undefined8 *)(lVar7 + 0x150) = local_190;
    *(code **)(lVar7 + 0x158) = local_188;
    *(code **)(lVar7 + 0x160) = local_180;
  }
  else {
    *(undefined8 *)(lVar7 + 0x160) = 0;
    *(undefined8 *)(lVar7 + 0x168) = 0;
    *(undefined8 *)(lVar7 + 0x150) = 0;
    *(undefined8 *)(lVar7 + 0x158) = 0;
    (*pcVar5)(lVar7 + 0x170);
    if (local_180 != (code *)0x0) goto LAB_015d668c;
  }
  pcVar5 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (code *)0x0;
    local_178 = (long *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar5)(&local_170);
  }
  lVar7 = param_1[0x7b];
  local_190 = &LAB_02b2ffb4;
  local_188 = FUN_02b30198;
  local_180 = FUN_02b3019c;
  local_178 = (long *)&LAB_02b301a8;
  pcVar5 = *(code **)(lVar7 + 0x6d8);
  local_170 = param_1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x6e0) = 0;
    *(undefined8 *)(lVar7 + 0x6e8) = 0;
    *(undefined8 *)(lVar7 + 0x6d0) = 0;
    *(undefined8 *)(lVar7 + 0x6d8) = 0;
    (*pcVar5)(lVar7 + 0x6f0);
    if (local_180 == (code *)0x0) goto LAB_015d6750;
  }
  (*local_180)(&local_170,lVar7 + 0x6f0);
  *(long **)(lVar7 + 0x6e8) = local_178;
  *(undefined8 *)(lVar7 + 0x6d0) = local_190;
  *(code **)(lVar7 + 0x6d8) = local_188;
  *(code **)(lVar7 + 0x6e0) = local_180;
LAB_015d6750:
  pcVar5 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (code *)0x0;
    local_178 = (long *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar5)(&local_170);
  }
  plVar8 = (long *)param_1[0x7b];
  plVar6 = plVar8 + 0x1b;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_015d6788;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x1c));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x1c));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar7;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_015d6788;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_015d6788:
  if (*(char *)((long)plVar8 + 0x82) != '\0') {
    *(undefined1 *)((long)plVar8 + 0x82) = 0;
    (**(code **)(*plVar8 + 0xd8))(plVar8,0);
  }
  plVar8[0x1b] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x1c));
  lVar7 = param_1[1];
  FUN_015d6ccc(&local_48,param_1 + 8);
  plVar6 = local_48;
  if (local_48 != (long *)0x0) {
    plVar4 = local_48 + 7;
    plVar3 = local_48 + 6;
  }
  local_190 = (undefined1 *)*plVar3;
  local_188 = (code *)*plVar4;
  if (local_48 == (long *)0x0) {
    local_180 = (code *)0x0;
  }
  else {
    local_180 = (code *)local_48[8];
  }
  local_178 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  local_178 = plVar6;
  lVar7 = FUN_015d7000(param_1,lVar7,&local_190);
  param_1[0x7c] = lVar7;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  lVar7 = param_1[0x7c];
  FUN_00f1ed2c(&local_190);
  FUN_014fa814(lVar7,&local_190);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  plVar4 = (long *)param_1[0x7c];
  plVar6 = plVar4 + 0x1b;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_015d684c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar4 + 0x1c));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar4 + 0x1c));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar7;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_015d684c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_015d684c:
  if (*(char *)((long)plVar4 + 0x82) != '\0') {
    *(undefined1 *)((long)plVar4 + 0x82) = 0;
    (**(code **)(*plVar4 + 0xd8))(plVar4,0);
  }
  plVar4[0x1b] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar4 + 0x1c));
  param_1[0xc] = param_1[8];
  *(long *)(param_1[0x7b] + 0x60) = param_1[8];
  *(long *)(param_1[0x7c] + 0x60) = param_1[8];
  return;
}


