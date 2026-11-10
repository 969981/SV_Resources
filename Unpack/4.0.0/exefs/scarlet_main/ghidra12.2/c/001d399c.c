/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d399c; name: FUN_001d399c
 */


int FUN_001d399c(long *param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x1e8);
  *(byte *)(lVar1 + 0x1260) = *(byte *)(lVar1 + 0x1260) & 0xfd;
  *(byte *)(lVar1 + 0x1280) = *(byte *)(lVar1 + 0x1280) & 0xfd;
  FUN_001d6414();
  param_1[0xa0] = *(long *)(lVar1 + 0x6f0);
  param_1[0xa1] = *(long *)(lVar1 + 0x778);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x210) != 0) {
      FUN_001d4730(lVar2 + 0x210);
    }
    FUN_001d76ac(param_1,param_3 & 1);
    FUN_001cb790(lVar2 + 0x28);
    if (param_2 != 0) {
      return param_2;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if ((((*(byte *)((long)param_1 + 0x3fd) >> 5 & 1) == 0) &&
        ((*(byte *)(lVar1 + 0xf44) >> 6 & 1) == 0)) &&
       (*(long *)(lVar1 + 0x110) + *(long *)(lVar1 + 0x100) <= *(long *)(lVar1 + 0x118))) {
      FUN_001db9c8(lVar1,"Empty reply from server");
      return 0x34;
    }
  }
  return 0;
}


