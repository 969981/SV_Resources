/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f52004; name: FUN_01f52004
 */


char FUN_01f52004(long param_1)

{
  return (*(long *)(param_1 + 0x100) != 0 && *(char *)(param_1 + 0x108) != '\0') +
         (*(long *)(param_1 + 0xd0) != 0 && *(char *)(param_1 + 0xd8) != '\0') +
         (*(long *)(param_1 + 0x130) != 0 && *(char *)(param_1 + 0x138) != '\0') +
         (*(long *)(param_1 + 0x160) != 0 && *(char *)(param_1 + 0x168) != '\0');
}


