/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e03310; name: FUN_00e03310
 */


long * FUN_00e03310(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    do {
      if (((*param_1 != 0) && (lVar1 = FUN_011c8920(*param_1 + 8), lVar1 != 0)) &&
         (uVar2 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar2 & 1) == 0)) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


