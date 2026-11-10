/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01134b68; name: FUN_01134b68
 */


uint FUN_01134b68(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x99) != '\0') {
    lVar1 = *(long *)(param_1 + 0x40);
    if ((lVar1 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      if ((param_2 & 3) != 0) {
        FUN_01134bd4(param_1);
        lVar1 = *(long *)(param_1 + 0x40);
      }
      FUN_00c4cf3c(lVar1);
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      param_2 = param_2 | 3;
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
  }
  return param_2;
}


