/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03411878; name: FUN_03411878
 */


void FUN_03411878(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_047bf440;
  FUN_034771d0();
  if ((undefined8 *)param_1[0x12] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    if (param_1 + 0xe != (undefined8 *)param_1[0x12]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    if (param_1 + 0x14 != (undefined8 *)param_1[0x16]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1 + 4 != (undefined8 *)param_1[8]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (param_1 + 10 != (undefined8 *)param_1[0xc]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    }
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  *param_1 = &PTR_LAB_047bf468;
  if (param_1[2] == 0) {
    uVar6 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar6 = param_1[2];
  }
  puVar2 = PTR_DAT_047e6958;
  lVar5 = param_1[3];
  puVar1 = (undefined8 *)(PTR_DAT_047e6958 + 0x10);
  if (*(undefined8 **)(PTR_DAT_047e6958 + 0x10) != param_1) {
    puVar1 = (undefined8 *)(lVar5 + 0x10);
  }
  *puVar1 = uVar6;
  if (*(undefined8 **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar5;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  lVar5 = tpidr_el0;
  plVar7 = *(long **)(lVar5 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar7,param_1,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03411a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1,0,8);
  return;
}


