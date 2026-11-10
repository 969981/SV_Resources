/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e643c8; name: FUN_01e643c8
 */


void FUN_01e643c8(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if ((((bVar1 == 0x86) || ((bVar1 & 0xfe) == 0x84)) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
    FUN_01e62368(bVar1,param_2);
    return;
  }
  *param_1 = 1;
  return;
}


