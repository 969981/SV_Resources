/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294bbe0; name: FUN_0294bbe0
 */


void FUN_0294bbe0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar4 = *(long *)(lVar2 + 0x20);
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  if (iVar3 == param_2) {
    lVar2 = *(long *)(lVar2 + 0xb8);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0xc);
    }
    if (((uVar1 & 0xff) == (param_3 & 0xff)) && (*(int *)(*(long *)(param_1 + 0x48) + 0x48) == 1)) {
      FUN_01453738(*(long *)(param_1 + 0x38),0x34,0x14cd);
      return;
    }
  }
  return;
}


