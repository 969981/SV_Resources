/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e3a814; name: FUN_00e3a814
 */


void FUN_00e3a814(undefined8 *param_1)

{
  undefined2 uVar1;
  long *plVar2;
  
  FUN_00d1a240(param_1,0x80008080);
  *param_1 = &PTR_FUN_0459fd88;
  param_1[4] = &PTR_LAB_0459fec8;
  param_1[5] = &DAT_0459fff0;
  param_1[6] = &PTR_LAB_045a0048;
  plVar2 = param_1 + 7;
  *plVar2 = (long)&PTR_LAB_045a0070;
  param_1[0x48] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)((long)param_1 + 0x254) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x49,0,1);
  param_1[0x4b] = 0;
  *(undefined4 *)((long)param_1 + 0x26c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x4c,0,1);
  if ((*(char *)(param_1 + 0xb) == -0x7d) && (*(char *)((long)param_1 + 0x59) == -0x7d)) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0x8383;
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar2);
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
  return;
}


