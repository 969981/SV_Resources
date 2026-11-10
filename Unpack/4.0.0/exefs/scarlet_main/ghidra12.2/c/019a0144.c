/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a0144; name: FUN_019a0144
 */


void FUN_019a0144(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    FUN_019a0174(param_1 + 8);
    return;
  }
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_01cbe7f4(param_1 + 8);
    return;
  }
  return;
}


