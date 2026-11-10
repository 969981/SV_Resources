/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c387c; name: FUN_019c387c
 */


uint FUN_019c387c(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (((param_2 & 3) != 0) && ((char)param_1[5] != '\0')) {
    return 0;
  }
  uVar3 = param_1[1];
  uVar2 = 0;
  if ((4 < uVar3) && (param_2 <= uVar3 - 4)) {
    uVar1 = *(uint *)(*param_1 + param_2);
    if ((int)uVar1 < 1) {
      return 0;
    }
    uVar2 = 0;
    if (uVar1 + param_2 <= uVar3 - 1) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}


