/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e9520; name: FUN_019e9520
 */


int FUN_019e9520(long *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((*param_1 == 0) || (iVar1 = FUN_0196c63c(), iVar1 == 0)) {
LAB_019e9584:
    iVar1 = 0;
  }
  else {
    uVar4 = 0;
    iVar1 = 0;
    do {
      uVar3 = (uint)*(ushort *)(*(long *)(*param_1 + 0x30) + uVar4 * 2);
      if (9 < uVar3 - 0x30) goto LAB_019e9584;
      iVar1 = uVar3 + iVar1 * 10 + -0x30;
      uVar4 = uVar4 + 1;
      uVar2 = FUN_0196c63c();
    } while (uVar4 < (uVar2 & 0xffffffff));
  }
  return iVar1;
}


