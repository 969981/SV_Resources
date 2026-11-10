/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


