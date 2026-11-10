/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea13ac; name: FUN_01ea13ac
 */


void FUN_01ea13ac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_01d0e1a8(param_1 + 0x20,param_2 + 0x18);
  FUN_01d0e1a8(param_1 + 0x40,param_2 + 0x38);
  return;
}


