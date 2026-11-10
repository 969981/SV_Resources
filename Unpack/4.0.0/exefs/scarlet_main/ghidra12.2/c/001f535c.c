/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f535c; name: FUN_001f535c
 */


undefined8 FUN_001f535c(long *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  size_t sVar3;
  byte *pbVar4;
  void *__dest;
  size_t *psVar5;
  ulong uVar6;
  size_t *psVar7;
  
  if (param_3 == 0) {
    uVar1 = 0;
    *param_1 = 0;
  }
  else {
    lVar2 = 0;
    pbVar4 = (byte *)(param_2 + 0x20);
    uVar6 = param_3;
    do {
      if ((*pbVar4 >> 1 & 1) == 0) {
        lVar2 = lVar2 + *(long *)(pbVar4 + -0x10) + 1;
      }
      if ((*pbVar4 >> 2 & 1) == 0) {
        lVar2 = lVar2 + *(long *)(pbVar4 + -8) + 1;
      }
      uVar6 = uVar6 - 1;
      pbVar4 = pbVar4 + 0x28;
    } while (uVar6 != 0);
    lVar2 = FUN_001f45a0(param_4,lVar2 + param_3 * 0x28);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xfffffc7b;
    }
    else {
      uVar6 = 0;
      __dest = (void *)(lVar2 + param_3 * 0x28);
      psVar5 = (size_t *)(param_2 + 0x10);
      psVar7 = (size_t *)(lVar2 + 0x10);
      do {
        *(char *)(psVar7 + 2) = (char)psVar5[2];
        if (((byte)psVar5[2] >> 1 & 1) == 0) {
          if (*psVar5 != 0) {
            memcpy(__dest,(void *)psVar5[-2],*psVar5);
          }
          psVar7[-2] = (size_t)__dest;
          sVar3 = *psVar5;
          *psVar7 = sVar3;
          *(undefined1 *)((long)__dest + sVar3) = 0;
          FUN_001ed574(psVar7[-2],*psVar7);
          __dest = (void *)((long)__dest + *psVar5 + 1);
        }
        else {
          psVar7[-2] = psVar5[-2];
          *psVar7 = *psVar5;
        }
        if (((byte)psVar5[2] >> 2 & 1) == 0) {
          if (psVar5[1] != 0) {
            memcpy(__dest,(void *)psVar5[-1],psVar5[1]);
          }
          psVar7[-1] = (size_t)__dest;
          sVar3 = psVar5[1];
          psVar7[1] = sVar3;
          *(undefined1 *)((long)__dest + sVar3) = 0;
          __dest = (void *)((long)__dest + psVar5[1] + 1);
        }
        else {
          psVar7[-1] = psVar5[-1];
          psVar7[1] = psVar5[1];
        }
        uVar6 = uVar6 + 1;
        psVar5 = psVar5 + 5;
        psVar7 = psVar7 + 5;
      } while (uVar6 < param_3);
      uVar1 = 0;
    }
  }
  return uVar1;
}


