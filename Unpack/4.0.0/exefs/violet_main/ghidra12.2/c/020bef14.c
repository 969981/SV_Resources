/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020bef14; name: FUN_020bef14
 */


undefined8 FUN_020bef14(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x68);
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x60);
  }
  return *puVar1;
}


