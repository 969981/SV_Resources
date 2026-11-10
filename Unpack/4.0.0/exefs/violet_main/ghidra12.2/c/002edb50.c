/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002edb50; name: FUN_002edb50
 */


void FUN_002edb50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_04493c60;
    puVar1[1] = 1;
    puVar1[2] = "FakeTransportSecurity";
  }
  return;
}


