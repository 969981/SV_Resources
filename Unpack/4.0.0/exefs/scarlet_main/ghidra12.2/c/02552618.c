/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02552618; name: FUN_02552618
 */


void FUN_02552618(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = &LAB_0255a094;
  if (DAT_04850ac0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0255a2b4(param_2,puVar1,0);
  *param_1 = 1;
  FUN_0255a328(param_1 + 8);
  return;
}


