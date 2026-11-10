/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035ea70; name: FUN_0035ea70
 */


int FUN_0035ea70(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0038db40(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      if ((*(int *)(lVar1 + 0xf8) == 0) && (uVar2 = uVar2 + 1, param_2 < uVar2)) {
        iVar3 = 0;
        do {
          lVar1 = *(long *)(lVar1 + 0xf0);
          iVar3 = iVar3 + 1;
        } while (lVar1 != 0);
        goto LAB_0035ead0;
      }
      lVar1 = *(long *)(lVar1 + 0xe8);
    } while (lVar1 != 0);
  }
  iVar3 = 0;
LAB_0035ead0:
  FUN_0038db60(param_1 + 0x18);
  return iVar3;
}


