/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01283c00; name: FUN_01283c00
 */


long * FUN_01283c00(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((param_1 != param_2) && (uVar2 = (**(code **)(*(long *)*param_1 + 0x80))(), (uVar2 & 1) == 0))
  {
    do {
      if (param_2 + -1 == param_1) {
        return param_2;
      }
      plVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar2 = (**(code **)(*(long *)*plVar1 + 0x80))();
    } while ((uVar2 & 1) == 0);
  }
  plVar1 = param_1;
  if (param_1 != param_2) {
    while (plVar1 = plVar1 + 1, plVar1 != param_2) {
      uVar2 = (**(code **)(*(long *)*plVar1 + 0x80))();
      if ((uVar2 & 1) == 0) {
        plVar3 = (long *)*param_1;
        *param_1 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        lVar4 = *plVar1;
        *plVar1 = 0;
        *param_1 = lVar4;
        param_1 = param_1 + 1;
      }
    }
  }
  return param_1;
}


