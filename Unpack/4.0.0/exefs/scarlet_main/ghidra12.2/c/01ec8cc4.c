/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec8cc4; name: FUN_01ec8cc4
 */


void FUN_01ec8cc4(long param_1,uint param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((*param_3 != 0) && (*(short *)(*param_3 + 0x1a) != 0)) {
    uVar2 = 0;
    if ((*param_3 != 0) && (lVar3 = *(long *)(*param_3 + 0x10), uVar2 = 0, lVar3 != 0)) {
      iVar1 = FUN_013fcabc(lVar3 + -0x28);
      uVar2 = iVar1 << 0x10;
    }
    if (*(char *)(param_1 + 0x1f8) == '\0') {
      *(uint *)(param_1 + 0x1fa) = uVar2 | param_2 & 0xff;
      *(undefined1 *)(param_1 + 0x1f8) = 1;
    }
    else {
      *(uint *)(param_1 + 0x1fa) = uVar2 | param_2 & 0xff;
    }
  }
  return;
}


