/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edadc8; name: FUN_01edadc8
 */


void FUN_01edadc8(undefined1 *param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x7ee9);
  *param_1 = 0;
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x7ee0);
    *param_1 = 1;
  }
  return;
}


