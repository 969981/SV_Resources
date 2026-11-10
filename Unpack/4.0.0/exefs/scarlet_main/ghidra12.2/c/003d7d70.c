/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d7d70; name: FUN_003d7d70
 */


int FUN_003d7d70(long param_1,undefined8 param_2,undefined2 *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (param_4 != 0) {
    iVar3 = 0;
    do {
      lVar2 = FUN_003d62c0(*param_3);
      iVar1 = FUN_003d7b40(param_1,0x5000b,lVar2);
      if (iVar1 != 0) {
        iVar1 = FUN_003a26e0(param_2,*param_3,2);
        if (iVar1 == 0) {
          return 0;
        }
        if ((((iVar3 == 0) &&
             ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0)) &&
            (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
          if (*(int *)(lVar2 + 0x14) == 6) {
            iVar3 = 0;
          }
          else {
            iVar3 = 0;
            if ((*(int *)(lVar2 + 0xc) != 0x40) && (*(int *)(lVar2 + 0xc) != 0x2a3))
            goto LAB_003d7da4;
          }
        }
        else {
LAB_003d7da4:
          iVar3 = 1;
        }
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  FUN_004806c0(0x14,0x215,0x76,"external/openssl/ssl/t1_lib.c",0x6b8);
  return 0;
}


