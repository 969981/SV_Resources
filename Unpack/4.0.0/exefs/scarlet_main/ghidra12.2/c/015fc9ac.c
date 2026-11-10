/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fc9ac; name: FUN_015fc9ac
 */


undefined8 FUN_015fc9ac(long *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    lVar2 = param_1[2];
    bVar1 = *(byte *)(*param_1 + lVar2);
    param_1[2] = lVar2 + 1;
    if (((bVar1 == 0x84) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
      if (bVar1 == 0x84) {
        bVar1 = *(byte *)(*param_1 + lVar2 + 1);
        param_1[2] = lVar2 + 2;
      }
      *param_2 = bVar1;
      return 1;
    }
  }
  return 0;
}


