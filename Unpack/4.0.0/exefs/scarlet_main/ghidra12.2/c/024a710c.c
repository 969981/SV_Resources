/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a710c; name: FUN_024a710c
 */


void FUN_024a710c(long *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)param_1[2];
  if ((*pcVar1 == '\0') &&
     (FUN_024a7164(*(long *)(*(long *)(*param_1 + 0x10) + 0x20) + 0xf8,
                   **(undefined8 **)(pcVar1 + 0x110),**(undefined8 **)(pcVar1 + 0x118)),
     *pcVar1 == '\0')) {
    *pcVar1 = '\x01';
  }
  return;
}


