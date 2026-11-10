/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024940ac; name: FUN_024940ac
 */


void FUN_024940ac(undefined1 param_1 [16],long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_3 * 0x30);
  puVar1[1] = param_1._8_8_;
  *puVar1 = param_1._0_8_;
  return;
}


