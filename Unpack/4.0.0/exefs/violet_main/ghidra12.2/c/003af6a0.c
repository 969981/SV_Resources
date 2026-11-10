/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003af6a0; name: FUN_003af6a0
 */


undefined * FUN_003af6a0(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_1 < 9) {
    puVar1 = &DAT_03cdc584 + param_1 * 8;
  }
  return puVar1;
}


