/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eada6c; name: FUN_01eada6c
 */


void FUN_01eada6c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xd0);
  for (pcVar1 = *(char **)(param_1 + 200); pcVar1 != pcVar2; pcVar1 = pcVar1 + 0x68) {
    if ((*pcVar1 != '\0') && (FUN_00de97a4(pcVar1 + 8), *pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
  }
  return;
}


