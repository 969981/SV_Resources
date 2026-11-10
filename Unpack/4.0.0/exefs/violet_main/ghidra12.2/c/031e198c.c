/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e198c; name: FUN_031e198c
 */


ulong * FUN_031e198c(ulong *param_1,void *param_2,long param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  size_t __n;
  char *pcVar8;
  undefined8 *puVar9;
  
  if (param_1 != (ulong *)0x0) {
    __n = param_3 - (long)param_2;
    if ((param_4 & 1) == 0) {
      for (; (*param_1 & 1) == 0; param_1 = (ulong *)param_1[1]) {
      }
      while( true ) {
        uVar4 = (uint)*param_1;
        if ((uVar4 >> 0x17 & 1) != 0) break;
        if ((*param_1 & 1) != 0) {
          return (ulong *)0x0;
        }
        param_1 = (ulong *)param_1[1];
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
      }
      if (param_1 != (ulong *)0x0) {
        uVar4 = uVar4 & 0x7fffff;
        uVar6 = param_1[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)) +
                                     POPCOUNT((char)(uVar4 >> 0x10))) + 2];
        if ((uVar6 != 0) && (sVar1 = *(short *)(uVar6 + 4), (long)sVar1 != 0)) {
          puVar9 = (undefined8 *)(uVar6 + 8);
          do {
            puVar5 = (ulong *)*puVar9;
            if (puVar5 != (ulong *)0x0) {
              puVar7 = puVar5;
              do {
                uVar4 = (uint)*puVar7;
                if ((uVar4 >> 0x10 & 1) != 0) {
                  uVar4 = uVar4 & 0xffff;
                  pcVar8 = (char *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                       POPCOUNT((char)(uVar4 >> 8))) + 2];
                  if (pcVar8 != (char *)0x0) {
                    sVar3 = strlen(pcVar8);
                    if ((sVar3 == __n) && (iVar2 = memcmp(param_2,pcVar8,__n), iVar2 == 0)) {
                      return puVar5;
                    }
                    goto LAB_031e1b80;
                  }
                  break;
                }
              } while (((*puVar7 & 1) == 0) && (puVar7 = (ulong *)puVar7[1], puVar7 != (ulong *)0x0)
                      );
            }
            if (__n == 0) {
              return puVar5;
            }
LAB_031e1b80:
            puVar9 = puVar9 + 1;
            if (puVar9 == (undefined8 *)(uVar6 + (long)sVar1 * 8 + 8)) {
              return (ulong *)0x0;
            }
          } while( true );
        }
      }
    }
    else {
      do {
        for (; (*param_1 & 1) == 0; param_1 = (ulong *)param_1[1]) {
        }
        puVar5 = param_1;
        while( true ) {
          uVar4 = (uint)*puVar5;
          if ((uVar4 >> 0x17 & 1) != 0) break;
          if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
          goto LAB_031e1aa0;
        }
        if (puVar5 != (ulong *)0x0) {
          uVar4 = uVar4 & 0x7fffff;
          uVar6 = puVar5[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)) +
                                      POPCOUNT((char)(uVar4 >> 0x10))) + 2];
          if ((uVar6 != 0) && (sVar1 = *(short *)(uVar6 + 4), (long)sVar1 != 0)) {
            puVar9 = (undefined8 *)(uVar6 + 8);
            do {
              puVar5 = (ulong *)*puVar9;
              if (puVar5 != (ulong *)0x0) {
                puVar7 = puVar5;
                do {
                  uVar4 = (uint)*puVar7;
                  if ((uVar4 >> 0x10 & 1) != 0) {
                    uVar4 = uVar4 & 0xffff;
                    pcVar8 = (char *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                         POPCOUNT((char)(uVar4 >> 8))) + 2];
                    if (pcVar8 != (char *)0x0) {
                      sVar3 = strlen(pcVar8);
                      if ((sVar3 == __n) && (iVar2 = memcmp(param_2,pcVar8,__n), iVar2 == 0)) {
                        return puVar5;
                      }
                      goto LAB_031e1a94;
                    }
                    break;
                  }
                } while (((*puVar7 & 1) == 0) &&
                        (puVar7 = (ulong *)puVar7[1], puVar7 != (ulong *)0x0));
              }
              if (__n == 0) {
                return puVar5;
              }
LAB_031e1a94:
              puVar9 = puVar9 + 1;
            } while (puVar9 != (undefined8 *)(uVar6 + (long)sVar1 * 8 + 8));
          }
        }
LAB_031e1aa0:
        param_1 = (ulong *)param_1[1];
      } while (param_1 != (ulong *)0x0);
    }
  }
  return (ulong *)0x0;
}


