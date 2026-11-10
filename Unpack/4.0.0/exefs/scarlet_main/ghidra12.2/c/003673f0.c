/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003673f0; name: FUN_003673f0
 */


void FUN_003673f0(undefined8 *param_1,char *param_2)

{
  undefined *puVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  puVar1 = PTR_DAT_047cc5d0;
  param_1[2] = param_2;
  *param_1 = puVar1;
  param_1[1] = sVar2;
  return;
}


