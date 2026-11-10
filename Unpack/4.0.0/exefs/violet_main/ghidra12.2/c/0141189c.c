/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0141189c; name: FUN_0141189c
 */


void FUN_0141189c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 byte param_5)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  
  FUN_00d1a240(param_4,0x80008080);
  *param_4 = &PTR_LAB_04569988;
  param_4[4] = &PTR_LAB_04569ac8;
  param_4[5] = &DAT_04569bf0;
  param_4[6] = &PTR_LAB_04569c48;
  plVar3 = param_4 + 7;
  *plVar3 = (long)&PTR_LAB_04569c70;
  puVar2 = PTR_DAT_047d9318;
  *(undefined4 *)((long)param_4 + 0x174) = 0x60042;
  param_4[0x2d] = 0;
  *(undefined2 *)(param_4 + 0x2e) = 0x100;
  param_4[0x2b] = 0;
  param_4[0x2c] = puVar2 + 0x10;
  param_4[0x42] = puVar2 + 0x10;
  *(undefined4 *)((long)param_4 + 0x224) = 4;
  param_4[0x37] = 0;
  *(undefined2 *)(param_4 + 0x38) = 0;
  *(undefined1 *)((long)param_4 + 0x1c2) = 1;
  param_4[0x41] = 0;
  param_4[0x43] = 0;
  *(undefined2 *)(param_4 + 0x44) = 0x100;
  *(undefined4 *)(param_4 + 0x45) = param_1;
  *(byte *)((long)param_4 + 0x22c) = param_5 & 1;
  *(undefined4 *)(param_4 + 0x46) = param_2;
  *(undefined4 *)((long)param_4 + 0x234) = param_3;
  param_4[0x4a] = 0;
  *(undefined4 *)((long)param_4 + 0x264) = 1;
  nn::os::InitializeLightEvent(param_4 + 0x4b,0,1);
  if ((*(char *)(param_4 + 0xb) == '\0') && (*(char *)((long)param_4 + 0x59) == '\n')) {
    return;
  }
  uVar1 = *(undefined2 *)(param_4 + 0xb);
  *(undefined2 *)(param_4 + 0xb) = 0xa00;
  if (param_4[9] != 0) {
    FUN_00c6a584(param_4[9],plVar3);
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,uVar1);
  return;
}


