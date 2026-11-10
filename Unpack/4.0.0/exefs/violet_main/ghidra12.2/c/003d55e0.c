/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d55e0; name: FUN_003d55e0
 */


undefined4 * FUN_003d55e0(ushort param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if ((ushort)(param_1 - 1) < 0x1e) {
    puVar1 = &DAT_03cdd004 + (ulong)(param_1 - 1) * 3;
  }
  return puVar1;
}


