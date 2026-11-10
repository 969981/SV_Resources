/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea99a8; name: FUN_00ea99a8
 */


void FUN_00ea99a8(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  FUN_00d1a240(param_1,0x8009809e);
  *param_1 = &PTR_FUN_045ddb98;
  param_1[4] = &PTR_LAB_045ddd18;
  param_1[5] = &DAT_045dde40;
  param_1[6] = &PTR_LAB_045dde98;
  puVar3 = param_1 + 7;
  *puVar3 = &PTR_LAB_045ddec0;
  param_1[0x24] = 0;
  param_1[0x25] = &PTR_LAB_045ddef8;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x10001ffffffff;
  *(undefined4 *)((long)param_1 + 0x14c) = 0xffffffff;
  param_1[0xc] = param_1[0xc] | 0xe;
  if ((*(char *)(param_1 + 0xb) == '\0') && (*(char *)((long)param_1 + 0x59) == '\x05')) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0x500;
  if (param_1[9] == 0) {
    ppuVar2 = &PTR_LAB_045ddec0;
  }
  else {
    FUN_00c6a584(param_1[9],puVar3);
    ppuVar2 = (undefined **)*puVar3;
  }
  (*(code *)ppuVar2[4])(puVar3,uVar1);
  return;
}


