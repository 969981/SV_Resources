/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


