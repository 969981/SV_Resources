/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c9e98; name: FUN_015c9e98
 */


void FUN_015c9e98(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[7] != *(long *)(param_2 + 0x38)) {
    FUN_015cb824(param_1);
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_02761574(param_1 + 1);
    }
    param_1[1] = 0;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x28);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = lVar2;
  param_1[2] = lVar3;
  param_1[3] = lVar1;
  lVar3 = *(long *)(param_2 + 0x38);
  lVar1 = *(long *)(param_2 + 0x40);
  lVar2 = *(long *)(param_2 + 0x50);
  param_1[9] = *(long *)(param_2 + 0x48);
  param_1[10] = lVar2;
  param_1[7] = lVar3;
  param_1[8] = lVar1;
  return;
}


