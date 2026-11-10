/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03444f98; name: FUN_03444f98
 */


void FUN_03444f98(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_047c0408;
  if (param_1[4] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
    param_1[4] = 0;
  }
  *param_1 = &PTR_LAB_047c0430;
  if (param_1[2] == 0) {
    uVar6 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar6 = param_1[2];
  }
  puVar2 = PTR_DAT_047e6d58;
  lVar5 = param_1[3];
  puVar1 = (undefined8 *)(PTR_DAT_047e6d58 + 0x10);
  if (*(undefined8 **)(PTR_DAT_047e6d58 + 0x10) != param_1) {
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
                    /* WARNING: Could not recover jumptable at 0x03445094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1,0,8);
  return;
}


