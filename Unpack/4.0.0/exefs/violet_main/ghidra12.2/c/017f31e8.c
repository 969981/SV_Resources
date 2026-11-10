/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f31e8; name: FUN_017f31e8
 */


int FUN_017f31e8(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(param_1 + 0xb6);
  uVar3 = uVar1 - 0x79;
  uVar2 = *(ushort *)(param_1 + 0xb4);
  iVar4 = -10;
  if ((0x37 < uVar3 || (1L << ((ulong)uVar3 & 0x3f) & 0x80000010000001U) == 0) && uVar1 != 0x19) {
    iVar4 = 0;
  }
  if (uVar2 < 0x1e6) {
    if (uVar2 < 0x124) {
      if (uVar2 == 0x84) goto LAB_017f3298;
      if (uVar2 == 0x121) goto LAB_017f32b8;
    }
    else if (((uVar2 == 0x124) || (uVar2 == 0x15f)) || (uVar2 == 0x1a5)) {
LAB_017f3298:
      return iVar4 + -10;
    }
  }
  else if (uVar2 < 0x237) {
    if (uVar2 == 0x1e6) goto LAB_017f32b8;
    if (uVar2 == 0x1ed) goto LAB_017f3298;
  }
  else {
    if (uVar2 == 0x237) goto LAB_017f32b8;
    if ((uVar2 == 0x2a9) || (uVar2 == 0x23b)) goto LAB_017f3298;
  }
  if (((uVar1 != 0x36) && (uVar1 != 0x81)) && (uVar1 != 0x70)) {
    return iVar4;
  }
LAB_017f32b8:
  return iVar4 + -0xc;
}


