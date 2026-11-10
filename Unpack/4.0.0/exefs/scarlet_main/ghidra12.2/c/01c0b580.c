/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c0b580; name: FUN_01c0b580
 */


void FUN_01c0b580(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
    FUN_01c0b5b0(param_1 + 8);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_01c0b508(param_1 + 8);
    return;
  }
  return;
}


