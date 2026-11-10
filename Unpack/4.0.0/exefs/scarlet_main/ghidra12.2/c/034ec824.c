/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


