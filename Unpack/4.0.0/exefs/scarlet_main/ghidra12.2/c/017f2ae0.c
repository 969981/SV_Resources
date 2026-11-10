/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f2ae0; name: FUN_017f2ae0
 */


int FUN_017f2ae0(long param_1)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar4 = -10;
  if (lVar2 != 0) {
    iVar4 = 0;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar3 & 1) == 0) || (*(short *)(param_1 + 0x9e) == 0x97)) {
    sVar1 = *(short *)(param_1 + 0xb4);
    if (sVar1 == 0x1e7) {
      lVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
      if (lVar2 == 0xf2fe6b1eb04f534) {
        return iVar4 + -10;
      }
      return iVar4;
    }
    if ((sVar1 != 0x289) && (sVar1 != 0x1ed)) {
      return iVar4;
    }
  }
  return iVar4 + -10;
}


