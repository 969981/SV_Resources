/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02954300; name: FUN_02954300
 */


undefined8 FUN_02954300(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  iVar3 = 0;
  if (*(long *)(lVar2 + 0x28) != 0) {
    iVar3 = *(int *)(*(long *)(lVar2 + 0x28) + 0xc);
  }
  if (iVar3 == param_2) {
    iVar3 = 0;
    if (*(long *)(lVar2 + 0x20) != 0) {
      iVar3 = *(int *)(*(long *)(lVar2 + 0x20) + 0xc);
    }
    if (iVar3 != param_2) {
      if (*(long *)(lVar2 + 0x98) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(*(long *)(lVar2 + 0x98) + 0xc);
      }
      uVar1 = FUN_021fe16c(uVar4);
      if (((((uVar1 & 1) != 0) && (uVar1 = FUN_01796310(uVar4), (uVar1 & 1) == 0)) &&
          (lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x240), lVar2 != 0)) &&
         (*(byte *)(lVar2 + 10) < 2)) {
        *(undefined4 *)(lVar2 + 0xc) = 1;
        if (*(byte *)(lVar2 + 10) == 1) {
          *(undefined1 *)(lVar2 + 10) = 2;
          return 1;
        }
        return 1;
      }
    }
  }
  return 0;
}


