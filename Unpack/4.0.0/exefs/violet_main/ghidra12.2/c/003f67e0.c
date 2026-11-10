/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f67e0; name: FUN_003f67e0
 */


undefined8 FUN_003f67e0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(DAT_047f1830 + param_1 * 0x18);
  *param_2 = *puVar1;
  *param_3 = puVar1[2];
  return puVar1[1];
}


