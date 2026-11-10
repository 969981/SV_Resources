/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f0b50; name: FUN_017f0b50
 */


int FUN_017f0b50(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6);
    iVar4 = -8;
    if ((uVar3 & 1) == 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = -10;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2);
  iVar1 = iVar4 + -10;
  if ((uVar3 & 1) == 0) {
    iVar1 = iVar4;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar3 & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((0x3c < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) == 0)) {
      iVar4 = iVar1 + -0xc;
      if (*(short *)(param_1 + 0xb6) != 0x9c) {
        iVar4 = iVar1;
      }
      iVar1 = iVar1 + -10;
      if (*(short *)(param_1 + 0xb6) != 0x14) {
        iVar1 = iVar4;
      }
    }
  }
  else if (*(ushort *)(param_1 + 0x9e) != 0x97) {
    iVar1 = iVar1 + -10;
  }
  return iVar1;
}


