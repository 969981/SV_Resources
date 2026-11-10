/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00533420; name: FUN_00533420
 */


void FUN_00533420(ulong param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  
  if (param_1 >> 0x20 == 0) {
    FUN_00533270(param_1 & 0xffffffff);
    return;
  }
  puVar4 = (undefined2 *)FUN_00533420(param_1 / 1000000000);
  param_1 = param_1 % 1000000000;
  uVar3 = (int)param_1 + (int)(param_1 / 10000000) * -10000000;
  uVar2 = uVar3 >> 5;
  *puVar4 = *(undefined2 *)(&DAT_03d09a97 + (param_1 / 10000000) * 2);
  uVar3 = uVar3 + (uVar2 / 0xc35) * -100000;
  puVar4[1] = *(undefined2 *)(&DAT_03d09a97 + ((ulong)uVar2 / 0xc35) * 2);
  uVar2 = uVar3 % 1000;
  puVar4[2] = *(undefined2 *)(&DAT_03d09a97 + ((ulong)uVar3 / 1000) * 2);
  uVar1 = *(undefined2 *)(&DAT_03d09a97 + ((ulong)uVar2 / 10) * 2);
  *(char *)(puVar4 + 4) = (char)(uVar2 % 10) + '0';
  puVar4[3] = uVar1;
  *(undefined1 *)((long)puVar4 + 9) = 0;
  return;
}


