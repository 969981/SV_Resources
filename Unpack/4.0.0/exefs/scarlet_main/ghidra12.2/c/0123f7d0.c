/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123f7d0; name: FUN_0123f7d0
 */


void FUN_0123f7d0(long param_1,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar6 = *param_3;
  pbVar1 = (byte *)(lVar6 + 0x2420);
  if ((ulong)*pbVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(char *)(lVar6 + lVar4 + 0x91) == '\0') {
        local_48 = lVar6;
        FUN_0123ea20(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1800),auStack_50,&local_48);
        bVar2 = *pbVar1;
        if (bVar2 == 0) {
          return;
        }
        do {
          uVar5 = 0;
          lVar4 = 0x91;
          while (*(char *)(lVar6 + lVar4) != '\0') {
            uVar5 = uVar5 + 1;
            lVar4 = lVar4 + 0x8c;
            if (bVar2 == uVar5) {
              return;
            }
          }
          uVar5 = uVar5 & 0xff;
          if ((**(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\b') &&
             (*(int *)(lVar6 + uVar5 * 0x8c + 0xc) != 4)) {
            *(undefined1 *)(lVar6 + uVar5 * 0x8c + 0x91) = 1;
          }
          else {
            local_48 = lVar6 + uVar5 * 0x8c + 8;
            FUN_0123f94c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x14c0),auStack_50,&local_48);
          }
          cVar3 = **(char **)(*(long *)(param_1 + 0x40) + 0x28);
          if (cVar3 != '\0' && cVar3 != '\b') {
            return;
          }
          if ((ulong)*pbVar1 == 0) {
            return;
          }
          lVar4 = 0;
          while (*(char *)(lVar6 + lVar4 + 0x91) != '\0') {
            lVar4 = lVar4 + 0x8c;
            if ((ulong)*pbVar1 * 0x8c == lVar4) {
              return;
            }
          }
          local_48 = lVar6;
          FUN_0123ea20(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1800),auStack_50,&local_48);
          bVar2 = *pbVar1;
        } while (bVar2 != 0);
        return;
      }
      lVar4 = lVar4 + 0x8c;
    } while ((ulong)*pbVar1 * 0x8c != lVar4);
  }
  return;
}


