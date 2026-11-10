/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188ab70; name: FUN_0188ab70
 */


long * FUN_0188ab70(long *param_1,long *param_2)

{
  ulong uVar1;
  
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        (*(code *)**(undefined8 **)(*param_1 + 8))();
        uVar1 = FUN_02317680();
        if (((uVar1 & 1) != 0) &&
           (uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar1 & 1) == 0)) {
          return param_1;
        }
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


