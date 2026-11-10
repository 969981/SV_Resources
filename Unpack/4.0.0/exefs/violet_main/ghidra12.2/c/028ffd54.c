/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ffd54; name: FUN_028ffd54
 */


bool FUN_028ffd54(long *param_1,uint *param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (long)param_2 - *param_1;
  if (((uVar2 & 3) == 0) || ((char)param_1[5] == '\0')) {
    uVar3 = param_1[1];
    if (uVar3 < 5) {
      return false;
    }
    if (uVar3 - 4 < uVar2) {
      return false;
    }
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = 0x7fffffff / param_3;
    }
    if (*param_2 < uVar1) {
      uVar1 = *param_2 * param_3 + 4;
      if (param_4 != (long *)0x0) {
        *param_4 = uVar1 + uVar2;
        uVar3 = param_1[1];
      }
      return uVar1 < uVar3 && uVar2 <= uVar3 - uVar1;
    }
  }
  return false;
}


