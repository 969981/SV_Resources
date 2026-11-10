/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aacb30; name: FUN_01aacb30
 */


bool FUN_01aacb30(long param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = FUN_01aacb90();
  if (uVar3 == 0) {
    bVar2 = true;
  }
  else {
    uVar5 = 0;
    uVar4 = (ulong)uVar3;
    do {
      sVar1 = *(short *)(param_1 + uVar5 * 2);
      if ((sVar1 != 0x3000) && (sVar1 != 0x20)) goto LAB_01aacb74;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    uVar5 = uVar4;
LAB_01aacb74:
    bVar2 = uVar5 == uVar4;
  }
  return bVar2;
}


