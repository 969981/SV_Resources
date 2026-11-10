/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a68f0; name: FUN_003a68f0
 */


void FUN_003a68f0(char *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[7];
  param_1[7] = (char)(bVar1 + 1);
  if ((((bVar1 + 1 >> 8 != 0) &&
       (bVar1 = param_1[6], param_1[6] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0)) &&
      (bVar1 = param_1[5], param_1[5] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0)) &&
     (((bVar1 = param_1[4], param_1[4] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0 &&
       (bVar1 = param_1[3], param_1[3] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0)) &&
      ((bVar1 = param_1[2], param_1[2] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0 &&
       (bVar1 = param_1[1], param_1[1] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0)))))) {
    *param_1 = *param_1 + '\x01';
  }
  return;
}


