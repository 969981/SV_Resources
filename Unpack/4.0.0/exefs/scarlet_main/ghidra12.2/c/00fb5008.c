/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb5008; name: FUN_00fb5008
 */


byte FUN_00fb5008(long param_1)

{
  if (((((*(long *)(param_1 + 0x348) == 0) ||
        ((*(byte *)(*(long *)(param_1 + 0x348) + 0x1e8) & 1) == 0)) ||
       (*(long *)(param_1 + 0x388) == 0)) ||
      ((((*(byte *)(*(long *)(param_1 + 0x388) + 0x1e8) & 1) == 0 ||
        (*(long *)(param_1 + 0x3c8) == 0)) ||
       (((*(byte *)(*(long *)(param_1 + 0x3c8) + 0x1e8) & 1) == 0 ||
        ((*(long *)(param_1 + 0x408) == 0 ||
         ((*(byte *)(*(long *)(param_1 + 0x408) + 0x1e8) & 1) == 0)))))))) ||
     ((*(long *)(param_1 + 0x448) == 0 ||
      ((((((*(byte *)(*(long *)(param_1 + 0x448) + 0x1e8) & 1) == 0 ||
          (*(long *)(param_1 + 0x488) == 0)) ||
         ((*(byte *)(*(long *)(param_1 + 0x488) + 0x1e8) & 1) == 0)) ||
        ((*(long *)(param_1 + 0x4c8) == 0 ||
         ((*(byte *)(*(long *)(param_1 + 0x4c8) + 0x1e8) & 1) == 0)))) ||
       (*(long *)(param_1 + 0x508) == 0)))))) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x508) + 0x1e8) & 1;
}


