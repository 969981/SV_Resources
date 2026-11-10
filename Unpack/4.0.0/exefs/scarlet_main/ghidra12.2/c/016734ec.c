/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016734ec; name: FUN_016734ec
 */


void FUN_016734ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_047de450;
  if (DAT_04847648 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0167352c(param_2,puVar1,0);
  FUN_016739b0(param_1);
  return;
}


