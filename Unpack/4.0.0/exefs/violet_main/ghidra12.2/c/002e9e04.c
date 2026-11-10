/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e9e04; name: FUN_002e9e04
 */


long FUN_002e9e04(long *param_1,char param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_1[1];
  if (uVar3 <= param_3) {
    return -1;
  }
  lVar1 = *param_1;
  do {
    if (*(char *)(lVar1 + param_3) == param_2) {
      lVar2 = (lVar1 + param_3) - lVar1;
      if (lVar1 + param_3 == lVar1 + uVar3) {
        lVar2 = -1;
      }
      return lVar2;
    }
    param_3 = param_3 + 1;
  } while (uVar3 != param_3);
  return -1;
}


