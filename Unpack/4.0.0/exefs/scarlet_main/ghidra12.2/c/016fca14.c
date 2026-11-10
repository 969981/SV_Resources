/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016fca14; name: FUN_016fca14
 */


void FUN_016fca14(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[2] = param_2;
  param_1[3] = 0x3fffffffffffffff;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0x3fffffffffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  memset(param_1 + 0xd,0,0x4e28);
  lVar3 = 0;
  do {
    uVar1 = (&DAT_03d6abe6)[lVar3];
    puVar2 = (undefined1 *)FUN_010af09c(param_1);
    lVar3 = lVar3 + 4;
    *puVar2 = uVar1;
  } while (lVar3 != 0x340);
  return;
}


