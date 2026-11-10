/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344940; name: FUN_00344940
 */


void FUN_00344940(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00343d90();
  }
  uVar1 = FUN_003438f0(param_2);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}


