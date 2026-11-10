/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049bf60; name: FUN_0049bf60
 */


bool FUN_0049bf60(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  size_t __n;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == param_4) {
    lVar6 = 0;
    do {
      lVar5 = lVar6;
      if (param_2 + lVar5 == 0) goto LAB_0049bfb8;
      bVar2 = *(byte *)((long)param_1 + lVar5 + (param_2 - 1));
      uVar4 = (uint)bVar2;
    } while ((bVar2 != 0x40) &&
            (lVar6 = lVar5 + -1, *(char *)((long)param_3 + lVar5 + (param_2 - 1)) != '@'));
    if (lVar5 == 1) {
LAB_0049bfac:
      __n = (param_2 + lVar5) - 1;
      if (__n == 0) {
LAB_0049bfb8:
        __n = param_2;
      }
      iVar3 = memcmp(param_1,param_3,__n);
      return iVar3 == 0;
    }
    if (bVar2 != 0) {
      lVar6 = lVar5;
      do {
        bVar2 = *(byte *)((long)param_3 + lVar6 + (param_2 - 1));
        if (bVar2 != uVar4) {
          uVar1 = uVar4 + 0x20;
          if (0x19 < (uVar4 - 0x41 & 0xff)) {
            uVar1 = uVar4;
          }
          uVar4 = bVar2 + 0x20;
          if (0x19 < bVar2 - 0x41) {
            uVar4 = (uint)bVar2;
          }
          if ((uVar1 & 0xff) != (uVar4 & 0xff)) {
            return false;
          }
        }
        if (lVar6 == 0) goto LAB_0049bfac;
        uVar4 = (uint)*(byte *)((long)param_1 + lVar6 + param_2);
        lVar6 = lVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  return false;
}


