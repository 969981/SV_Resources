/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f54d4; name: FUN_001f54d4
 */


undefined8 FUN_001f54d4(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (uint *)(param_1 + 4);
    do {
      switch(puVar2[-1]) {
      case 2:
        uVar1 = *puVar2;
        goto joined_r0x001f5540;
      case 4:
        if ((int)*puVar2 < 0) {
          return 0;
        }
        break;
      case 5:
        if (0x3fe < *puVar2 - 0x4000 >> 0xe) {
          return 0;
        }
        break;
      case 8:
        uVar1 = *puVar2;
joined_r0x001f5540:
        if (1 < uVar1) {
          return 0;
        }
      }
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 2;
    } while (param_2 != 0);
  }
  return 1;
}


