/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f1de0; name: FUN_017f1de0
 */


undefined8 FUN_017f1de0(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if ((*(short *)(param_1 + 0xb6) != 0x24) && (*(short *)(param_1 + 0xb6) != 0xa1)) {
    uVar1 = *(ushort *)(param_1 + 0xb4);
    if (uVar1 < 0x1e6) {
      uVar2 = uVar1 - 0x121;
      if (((0x3e < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x4000000000000009U) == 0)) &&
         ((uVar1 != 0x84 && (uVar1 != 0x1a5)))) {
        return 0;
      }
    }
    else if (uVar1 < 0x237) {
      if ((uVar1 != 0x1e6) && (uVar1 != 0x1ed)) {
        return 0;
      }
    }
    else if (((uVar1 != 0x237) && (uVar1 != 0x23b)) && (uVar1 != 0x2a9)) {
      return 0;
    }
  }
  return 0xfffffff6;
}


