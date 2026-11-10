/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f3110; name: FUN_017f3110
 */


int FUN_017f3110(long param_1)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if (uVar2 < 0x3d && (1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = -10;
    if (*(short *)(param_1 + 0xb6) != 0x3c) {
      iVar5 = 0;
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar3 & 1) == 0) || (*(short *)(param_1 + 0x9e) == 0x97)) {
    sVar1 = *(short *)(param_1 + 0xb4);
    if (sVar1 == 0x1e7) {
      lVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
      if (lVar4 == 0xf2fe6b1eb04f534) {
        return iVar5 + -10;
      }
      return iVar5;
    }
    if ((sVar1 != 0x289) && (sVar1 != 0x1ed)) {
      return iVar5;
    }
  }
  return iVar5 + -10;
}


