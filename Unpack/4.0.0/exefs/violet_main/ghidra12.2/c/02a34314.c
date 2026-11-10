/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a34314; name: FUN_02a34314
 */


undefined8 FUN_02a34314(long param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x738) + param_2;
  if (3 < param_2) {
    puVar1 = (undefined8 *)(param_1 + 0x738);
  }
  return *puVar1;
}


