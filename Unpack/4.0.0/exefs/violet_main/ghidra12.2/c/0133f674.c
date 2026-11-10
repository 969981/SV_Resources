/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133f674; name: FUN_0133f674
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133f674(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  FUN_00d1a22c(param_1,8);
  *param_1 = &PTR_FUN_04568468;
  param_1[4] = &PTR_LAB_045685b0;
  param_1[5] = &DAT_045686d8;
  param_1[6] = &PTR_LAB_04568730;
  plVar4 = param_1 + 7;
  *plVar4 = (long)&PTR_LAB_04568758;
  *(undefined1 *)((long)param_1 + 0x11e) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x29) = 0x3d4ccccd;
  uVar3 = _UNK_03cabe68;
  uVar2 = _DAT_03cabe60;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2b] = uVar3;
  param_1[0x2a] = uVar2;
  if ((*(char *)(param_1 + 0xb) == '\0') && (*(char *)((long)param_1 + 0x59) == '\n')) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x59) = 10;
  if (param_1[9] != 0) {
    FUN_00c6a584(param_1[9],plVar4);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,uVar1);
  return;
}


