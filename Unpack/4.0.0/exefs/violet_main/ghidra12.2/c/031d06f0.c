/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d06f0; name: FUN_031d06f0
 */


void FUN_031d06f0(long *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = (ulong)param_3;
    do {
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_4);
      uVar2 = uVar2 - 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}


