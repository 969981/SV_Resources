/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034828bc; name: FUN_034828bc
 */


long FUN_034828bc(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  bVar2 = *param_2;
  if (((bVar2 != 0xff) || (param_2[8] != 0xff)) || (*(long *)(param_2 + 0x10) != 0)) {
    uVar5 = *(uint *)(param_1 + 0x18);
    if (uVar5 != 0) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 + (uVar5 >> 1);
        bVar3 = *(byte *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x28 + 0x20);
        if (bVar3 == bVar2) {
          lVar4 = *(long *)(param_1 + 0x10) + (long)iVar1 * 0x28;
          goto LAB_03482994;
        }
        if (bVar3 < bVar2) {
          iVar6 = iVar1 + 1;
        }
        uVar5 = uVar5 - (bVar3 < bVar2) >> 1;
      } while (uVar5 != 0);
    }
    if (bVar2 != 0xff) {
      *param_2 = 0xff;
      uVar5 = *(uint *)(param_1 + 0x18);
      if (uVar5 != 0) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + (uVar5 >> 1);
          if (*(char *)(*(long *)(param_1 + 0x10) + (long)iVar6 * 0x28 + 0x20) == -1) {
            lVar4 = *(long *)(param_1 + 0x10) + (long)iVar6 * 0x28;
LAB_03482994:
            lVar4 = FUN_034829c8(lVar4,param_2 + 8);
            if (lVar4 != 0) {
              return lVar4;
            }
            break;
          }
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 - 1 >> 1;
        } while (uVar5 != 0);
      }
    }
  }
  param_2[8] = 0xff;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  lVar4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar4 = param_1 + 8;
  }
  return lVar4;
}


