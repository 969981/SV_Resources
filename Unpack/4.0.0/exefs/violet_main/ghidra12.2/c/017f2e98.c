/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f2e98; name: FUN_017f2e98
 */


int FUN_017f2e98(long param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xb);
  if ((uVar4 & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if (uVar2 < 0x3d && (1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0) {
      iVar5 = 0;
    }
    else {
      sVar1 = *(short *)(param_1 + 0xb6);
      iVar5 = -10;
      if ((sVar1 != 0xc) && (sVar1 != 0xa5)) {
        if (sVar1 == 0x9c) {
          iVar5 = -0xc;
        }
        else {
          iVar5 = 0;
        }
      }
      iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
      if (iVar3 == 1) {
        iVar3 = iVar5 + -10;
        if (*(short *)(param_1 + 0xc2) != 0xa5) {
          iVar3 = iVar5;
        }
        return iVar3;
      }
    }
  }
  else {
    iVar5 = -10;
  }
  return iVar5;
}


