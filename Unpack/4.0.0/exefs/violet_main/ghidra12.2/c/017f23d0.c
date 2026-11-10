/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f23d0; name: FUN_017f23d0
 */


int FUN_017f23d0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xc);
  iVar4 = -10;
  if ((uVar3 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if (uVar1 < 0x3d && (1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) != 0) {
      iVar4 = 0;
    }
    else {
      iVar2 = -0xc;
      if (*(short *)(param_1 + 0xb6) != 0x9c) {
        iVar2 = 0;
      }
      iVar4 = -10;
      if (*(short *)(param_1 + 0xb6) != 0xa5) {
        iVar4 = iVar2;
      }
      iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
      if (iVar2 == 1) {
        iVar2 = iVar4 + -10;
        if (*(short *)(param_1 + 0xc2) != 0xa5) {
          iVar2 = iVar4;
        }
        return iVar2;
      }
    }
  }
  return iVar4;
}


