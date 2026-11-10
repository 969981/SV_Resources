/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec63ac; name: FUN_01ec63ac
 */


void FUN_01ec63ac(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  int local_18 [2];
  
  cVar1 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar1 == -0x47) {
    FUN_01ec645c(local_18);
    if (local_18[0] == 0) {
      lVar3 = param_3[2];
      bVar2 = *(byte *)(*param_3 + lVar3);
      param_3[2] = lVar3 + 1;
      if (0x80 < bVar2) {
        *param_1 = 1;
        return;
      }
      if (bVar2 == 0x80) {
        bVar2 = *(byte *)(*param_3 + lVar3 + 1);
        param_3[2] = lVar3 + 2;
      }
      *(byte *)(param_2 + 0x28) = bVar2;
      *param_1 = 0;
      return;
    }
  }
  else {
    local_18[0] = 1;
  }
  *param_1 = local_18[0];
  return;
}


