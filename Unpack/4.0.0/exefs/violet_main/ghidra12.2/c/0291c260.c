/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291c260; name: FUN_0291c260
 */


void FUN_0291c260(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  FUN_010a9ba8(*(undefined8 *)(param_1 + 0x30));
  uVar1 = FUN_012440f0(*(undefined8 *)(param_1 + 0x30),100);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return;
}


