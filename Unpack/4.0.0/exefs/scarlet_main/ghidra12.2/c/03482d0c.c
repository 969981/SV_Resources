/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03482d0c; name: FUN_03482d0c
 */


bool FUN_03482d0c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x18);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  return puVar1 != (undefined8 *)0x0;
}


