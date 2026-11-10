/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f3d60; name: FUN_017f3d60
 */


int FUN_017f3d60(long param_1)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  
  cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  cVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7);
  iVar8 = -10;
  if ((uVar7 & 1) == 0) {
    if (cVar4 == '\x01') {
      bVar3 = cVar5 == '\0';
    }
    else {
      if (cVar4 != '\0') {
        uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
        if ((uVar2 < 0x3d) && ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0)) {
          return 0;
        }
        sVar1 = *(short *)(param_1 + 0xb6);
        iVar8 = -10;
        if ((sVar1 != 0xc) && (sVar1 != 0xa5)) {
          if (sVar1 == 0x9c) {
            iVar8 = -0xc;
          }
          else {
            iVar8 = 0;
          }
        }
        iVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
        if (iVar6 != 1) {
          return iVar8;
        }
        iVar6 = iVar8 + -10;
        if (*(short *)(param_1 + 0xc2) != 0xa5) {
          iVar6 = iVar8;
        }
        return iVar6;
      }
      bVar3 = cVar5 == '\x01';
    }
    iVar8 = 0;
    if (!bVar3) {
      iVar8 = -10;
    }
  }
  return iVar8;
}


