/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d147c8; name: FUN_01d147c8
 */


void FUN_01d147c8(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_8;
  
  puVar1 = PTR_LAB_047d7298;
  if (DAT_0482ccf0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_8 = FUN_01d14f2c(param_2,puVar1,0);
  *param_1 = 1;
  FUN_01cf38a0(param_1 + 8,&local_8);
  return;
}


