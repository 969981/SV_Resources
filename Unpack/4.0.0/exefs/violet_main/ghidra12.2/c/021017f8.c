/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021017f8; name: FUN_021017f8
 */


void FUN_021017f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_02101824();
  uVar1 = FUN_016fc954();
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}


