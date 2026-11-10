/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb21a4; name: FUN_02fb21a4
 */


void FUN_02fb21a4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04611b08;
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[0x22] = 0x7fffffffffffffff;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((long)param_1 + 300) = 0x5f7ffff05f7ffff0;
  *(undefined8 *)((long)param_1 + 0x124) = 0x5f7ffff05f7ffff0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  puVar4 = PTR_PTR_047d1a50;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x29],(ulong)*(uint *)((long)param_1 + 0x154) << 2);
  }
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x144)) && (param_1[0x27] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  }
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 0x80000000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x20],(ulong)*(uint *)((long)param_1 + 0x10c) << 2);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x1c],(ulong)*(uint *)((long)param_1 + 0xec) << 2);
  }
  plVar5 = (long *)param_1[0x1b];
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x19],(ulong)*(uint *)((long)param_1 + 0xd4) << 1);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x17],(ulong)*(uint *)((long)param_1 + 0xc4) << 1);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x15],(ulong)*(uint *)((long)param_1 + 0xb4) << 5);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x13],(ulong)*(uint *)((long)param_1 + 0xa4) << 5);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x11],(ulong)*(uint *)((long)param_1 + 0x94) << 6);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0xf],(ulong)*(uint *)((long)param_1 + 0x84) << 6);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) * 0x28);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) * 0xc);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) * 0x70);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 5);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[1],(ulong)*(uint *)((long)param_1 + 0x14) << 4);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


