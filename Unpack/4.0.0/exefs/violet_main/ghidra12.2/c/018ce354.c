/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ce354; name: FUN_018ce354
 */


void FUN_018ce354(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_018ce3ac(param_3);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = FUN_01243584(param_1);
  FUN_0124b0ac(uVar2,param_2,param_3);
  return;
}


