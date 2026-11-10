/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289e16c; name: FUN_0289e16c
 */


void FUN_0289e16c(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  int local_18 [2];
  
  FUN_0289e1f8(local_18);
  if (local_18[0] == 0) {
    lVar2 = param_3[2];
    bVar1 = *(byte *)(*param_3 + lVar2);
    param_3[2] = lVar2 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*param_3 + lVar2 + 1);
        param_3[2] = lVar2 + 2;
      }
      *(byte *)(param_2 + 0xc4) = bVar1;
      *param_1 = 0;
    }
    else {
      *param_1 = 1;
    }
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


