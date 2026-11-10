/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02291748; name: FUN_02291748
 */


void FUN_02291748(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  puVar1 = &LAB_02298824;
  if (DAT_04843bb0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_02298a28(auStack_80,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x30);
  FUN_02298aa4(param_1 + 8,auStack_50);
  return;
}


