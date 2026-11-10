/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008afcec; name: FUN_008afcec
 */


void FUN_008afcec(ushort *param_1,long param_2)

{
  ushort uVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xe0ff;
    return;
  }
  uVar1 = (ushort)*(byte *)((long)param_1 + 1) << 8;
  *(long *)(param_1 + 4) = param_2;
  *param_1 = uVar1 | 0x90;
  *param_1 = uVar1 & 0xe0ff | 0x90;
  return;
}


