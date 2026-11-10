/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f27a8; name: FUN_026f27a8
 */


void FUN_026f27a8(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    uVar3 = 0xffffff80;
    if (0xff < (param_2 & 0xffff)) {
      uVar3 = 0xffffff81;
    }
    uVar1 = param_2;
    if (0x7f < (param_2 & 0xffff)) {
      uVar1 = uVar3;
    }
    lVar2 = FUN_0111b030(uVar1);
    if ((ulong)(*(long *)(lVar4 + 0x18) + lVar2) <= *(ulong *)(lVar4 + 0x10)) {
      *(char *)(*(long *)(lVar4 + 8) + *(long *)(lVar4 + 0x18)) = (char)uVar1;
      lVar2 = *(long *)(lVar4 + 0x18) + 1;
      *(long *)(lVar4 + 0x18) = lVar2;
      if ((uVar1 & 0xff) == 0x81) {
        *(short *)(*(long *)(lVar4 + 8) + lVar2) = (short)param_2;
        lVar2 = *(long *)(lVar4 + 0x18) + 2;
      }
      else {
        if ((uVar1 & 0xff) != 0x80) {
          return;
        }
        *(char *)(*(long *)(lVar4 + 8) + lVar2) = (char)param_2;
        lVar2 = *(long *)(lVar4 + 0x18) + 1;
      }
      *(long *)(lVar4 + 0x18) = lVar2;
    }
  }
  return;
}


