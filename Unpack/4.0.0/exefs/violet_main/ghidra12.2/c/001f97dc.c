/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f97dc; name: FUN_001f97dc
 */


void FUN_001f97dc(long param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  iVar1 = FUN_001f9a90(*(undefined8 *)(param_1 + 0x70),param_1);
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


