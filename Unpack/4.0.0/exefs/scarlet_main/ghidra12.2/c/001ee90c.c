/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ee90c; name: FUN_001ee90c
 */


int FUN_001ee90c(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001edb18();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0xdc) != 3)) {
    if ((((param_2 & 1) != 0) &&
        (((*(char *)(param_1 + 0x9aa) == '\0' && (lVar2 = *(long *)(param_1 + 0x138), lVar2 != 0))
         && (iVar1 = *(int *)(lVar2 + 8), iVar1 <= (int)param_2)))) &&
       (param_2 < *(uint *)(param_1 + 0x930))) {
      while (iVar1 < (int)param_2) {
        lVar2 = *(long *)(lVar2 + 0x88);
        if (lVar2 == 0) goto LAB_001ee99c;
        iVar1 = *(int *)(lVar2 + 8);
      }
      if ((iVar1 <= (int)param_2) && (*(char *)(lVar2 + 0x7c) == '\0')) {
        *(undefined4 *)(lVar2 + 0x78) = param_3;
        *(undefined1 *)(lVar2 + 0x7c) = 1;
        return 0;
      }
    }
LAB_001ee99c:
    lVar2 = FUN_001f45a0(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN_001f9154();
      FUN_001f475c(lVar2,param_2,param_3);
      iVar1 = FUN_001ee7d8(param_1,lVar2);
      if (iVar1 != 0) {
        FUN_001f477c(lVar2);
        FUN_001f45b0(param_1 + 0x890,lVar2);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


