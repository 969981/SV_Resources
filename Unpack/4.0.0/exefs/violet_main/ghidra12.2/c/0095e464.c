/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0095e464; name: FUN_0095e464
 */


void FUN_0095e464(long param_1,byte param_2)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x18) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x18) = param_2 & 1;
    if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x19) != '\0')) {
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x120);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x210) == '\0')) {
        *(undefined1 *)(lVar1 + 0x210) = 1;
        return;
      }
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x120);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x210) != '\0')) {
        *(undefined1 *)(lVar1 + 0x210) = 0;
        return;
      }
    }
  }
  return;
}


