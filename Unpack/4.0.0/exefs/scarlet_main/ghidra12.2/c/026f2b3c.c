/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f2b3c; name: FUN_026f2b3c
 */


void FUN_026f2b3c(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if ((((bVar1 & 0xfc) == 0x84) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
    FUN_026f2f20(bVar1,param_2);
    return;
  }
  *param_1 = 1;
  return;
}


