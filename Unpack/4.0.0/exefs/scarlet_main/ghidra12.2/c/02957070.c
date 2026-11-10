/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02957070; name: FUN_02957070
 */


void FUN_02957070(long param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x78);
  lVar5 = *(long *)(lVar3 + 0x20);
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  if (iVar4 == param_2) {
    lVar3 = *(long *)(lVar3 + 0x98);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar3 + 0xc);
    }
    uVar2 = FUN_02956fb0(uVar1);
    if (((((uVar2 & 1) != 0) &&
         (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x248), lVar3 != 0)) &&
        (*(byte *)(lVar3 + 10) < 2)) &&
       (*(undefined4 *)(lVar3 + 0xc) = 1, *(byte *)(lVar3 + 10) == 1)) {
      *(undefined1 *)(lVar3 + 10) = 2;
    }
  }
  return;
}


