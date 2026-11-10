/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0118f8f8; name: FUN_0118f8f8
 */


long FUN_0118f8f8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  lVar2 = param_2 + 0x18;
  lVar3 = param_2;
  if (lVar2 != lVar4) {
    lVar3 = *param_1;
    FUN_00d48230(param_2,lVar2);
    *(undefined1 *)(lVar3 + (param_2 - lVar3 >> 3) * 8 + 0x10) = *(undefined1 *)(param_2 + 0x28);
    if (param_2 + 0x30 == lVar4) {
      lVar3 = lVar2;
    }
    else {
      do {
        lVar3 = lVar2 + 0x18;
        FUN_00d48230(lVar2,lVar3);
        *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar2 + 0x28);
        lVar1 = lVar2 + 0x30;
        lVar2 = lVar3;
      } while (lVar1 != lVar4);
    }
  }
  FUN_0119007c(param_1,lVar3);
  return param_2;
}


