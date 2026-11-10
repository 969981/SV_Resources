/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02443560; name: FUN_02443560
 */


void FUN_02443560(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 local_30 [16];
  
  puVar1 = PTR_FUN_047de9e0;
  if (DAT_04849238 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30 = FUN_0244430c(param_2,puVar1,0);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


