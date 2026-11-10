/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029499e0; name: FUN_029499e0
 */


void FUN_029499e0(long param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar4 = *(long *)(lVar3 + 0x20);
  iVar1 = 0;
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0xc);
  }
  if (iVar1 == param_2) {
    lVar3 = *(long *)(lVar3 + 0xb8);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0xc);
    }
    if ((uVar2 & 0xff) == (param_3 & 0xff)) {
      iVar1 = FUN_02945210(param_1);
      fVar5 = 0.5;
      if (iVar1 < -99) {
        fVar5 = -0.5;
      }
      FUN_01453738(*(undefined8 *)(param_1 + 0x38),0x34,
                   (int)(fVar5 + (float)(iVar1 * 0x1000 + 0x64000)) / 100);
      return;
    }
  }
  return;
}


