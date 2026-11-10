/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c63d8; name: FUN_031c63d8
 */


bool FUN_031c63d8(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  ulong __n;
  
  __n = param_2[1] - (long)*param_2;
  if ((ulong)(param_1[1] - (long)*param_1) < __n) {
    bVar1 = false;
  }
  else {
    iVar2 = memcmp((void *)*param_1,(void *)*param_2,__n);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


