/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00437660; name: FUN_00437660
 */


void FUN_00437660(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (&DAT_03cf54f4)[param_1[1]];
  *param_1 = (&DAT_03cf54f4)[*param_1];
  bVar2 = (&DAT_03cf54f4)[param_1[3]];
  param_1[1] = bVar1;
  param_1[3] = bVar2;
  param_1[4] = (&DAT_03cf54f4)[param_1[4]];
  param_1[5] = (&DAT_03cf54f4)[param_1[5]];
  bVar1 = (&DAT_03cf54f4)[param_1[6]];
  param_1[2] = (&DAT_03cf54f4)[param_1[2]];
  bVar2 = (&DAT_03cf54f4)[param_1[7]];
  param_1[6] = bVar1;
  param_1[7] = bVar2;
  return;
}


