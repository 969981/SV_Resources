/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013af50; name: FUN_0013af50
 */


void FUN_0013af50(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x18);
    while (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
      FUN_0012d6c0(param_1,lVar1,0x40);
      if (lVar3 == 0) {
        return;
      }
      lVar1 = *(long *)(lVar3 + 0x18);
      *(long *)(lVar3 + 0x10) = lVar2;
      lVar2 = lVar3;
    }
  }
  return;
}


