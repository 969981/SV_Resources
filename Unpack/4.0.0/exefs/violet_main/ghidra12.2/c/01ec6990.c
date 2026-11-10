/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec6990; name: FUN_01ec6990
 */


void FUN_01ec6990(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  int local_18 [2];
  
  FUN_01ec6a1c(local_18);
  if (local_18[0] == 0) {
    lVar2 = param_3[2];
    bVar1 = *(byte *)(*param_3 + lVar2);
    param_3[2] = lVar2 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*param_3 + lVar2 + 1);
        param_3[2] = lVar2 + 2;
      }
      *(byte *)(param_2 + 2) = bVar1;
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


