/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210c76c; name: FUN_0210c76c
 */


uint FUN_0210c76c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x30) + 0x90);
  lVar2 = *(long *)(lVar3 + 0x50);
  if (*(char *)(lVar3 + 0x48) != '\0') {
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_0210c7b4;
    }
    lVar2 = FUN_01091070(lVar3 + 0x30,lVar2,0);
  }
  if (lVar2 < 1) {
    lVar2 = 0;
  }
LAB_0210c7b4:
  uVar1 = (int)*(short *)(*(long *)(*(long *)(param_1 + 0x40) + 0x1b0) + 8) + (int)lVar2;
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}


