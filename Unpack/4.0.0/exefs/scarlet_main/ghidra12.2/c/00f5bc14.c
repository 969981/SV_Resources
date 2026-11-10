/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5bc14; name: FUN_00f5bc14
 */


void FUN_00f5bc14(undefined8 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  FUN_00d1a240(param_1,0x800d8080);
  *param_1 = &PTR_FUN_045a34e0;
  param_1[4] = &PTR_LAB_045a3620;
  param_1[5] = &DAT_045a3748;
  param_1[6] = &PTR_LAB_045a37a0;
  puVar3 = param_1 + 7;
  *puVar3 = &PTR_LAB_045a37c8;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_00f5bd10(param_1,param_1[1],param_2);
  *param_1 = &PTR_FUN_045a31c0;
  param_1[4] = &PTR_LAB_045a3300;
  param_1[5] = &DAT_045a3428;
  param_1[6] = &PTR_LAB_045a3480;
  *puVar3 = &PTR_LAB_045a34a8;
  if ((*(char *)(param_1 + 0xb) == -0x7e) && (*(char *)((long)param_1 + 0x59) == -0x7e)) {
    return;
  }
  uVar1 = *(undefined2 *)(param_1 + 0xb);
  *(undefined2 *)(param_1 + 0xb) = 0x8282;
  if (param_1[9] == 0) {
    ppuVar2 = &PTR_LAB_045a34a8;
  }
  else {
    FUN_00c6a584(param_1[9],puVar3);
    ppuVar2 = (undefined **)*puVar3;
  }
  (*(code *)ppuVar2[4])(puVar3,uVar1);
  return;
}


