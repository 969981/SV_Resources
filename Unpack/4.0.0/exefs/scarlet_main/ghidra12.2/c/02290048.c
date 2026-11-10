/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02290048; name: FUN_02290048
 */


void FUN_02290048(undefined1 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = FUN_02296704;
  if (DAT_04843b90 == '\0') {
    pcVar1 = (code *)0x0;
  }
  FUN_02296934(param_2,pcVar1,0);
  *param_1 = 1;
  FUN_022969a8(param_1 + 8);
  return;
}


