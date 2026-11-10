/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c88bb0; name: FUN_00c88bb0
 */


undefined * FUN_00c88bb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)FUN_02192b2c(*(undefined8 *)(param_1 + 0x30));
  puVar1 = &DAT_045a0098;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  return puVar1;
}


