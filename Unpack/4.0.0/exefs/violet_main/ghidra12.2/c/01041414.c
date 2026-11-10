/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01041414; name: FUN_01041414
 */


void FUN_01041414(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_2 == param_3) {
    return;
  }
  uVar1 = FUN_01041500(param_3,*(undefined8 *)(param_1 + 8),param_2);
  FUN_0104145c(param_1,uVar1);
  return;
}


