/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ec824; name: FUN_034ec824
 */


void FUN_034ec824(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_047c5af0;
    puVar1[1] = 0;
  }
  return;
}


