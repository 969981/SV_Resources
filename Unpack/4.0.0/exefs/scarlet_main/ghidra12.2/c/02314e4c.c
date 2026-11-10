/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02314e4c; name: FUN_02314e4c
 */


void FUN_02314e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_047de450;
  if (DAT_048476c0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_02316f94(param_2,puVar1,0);
  FUN_016739b0(param_1);
  return;
}


