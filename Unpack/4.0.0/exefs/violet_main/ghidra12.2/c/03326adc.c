/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03326adc; name: FUN_03326adc
 */


void FUN_03326adc(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong *puVar3;
  short *psVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  short *psVar12;
  ulong uVar13;
  
  puVar1 = PTR_PTR_047d1a50;
  puVar11 = *(ulong **)(param_1 + 8);
  puVar3 = puVar11;
  if ((*puVar11 & 1) == 0) {
    do {
      puVar3 = (ulong *)puVar3[1];
    } while ((*puVar3 & 1) == 0);
  }
  if ((puVar11 != (ulong *)0x0) && ((puVar3[2] & 0x1f) == 7)) {
    do {
      puVar3 = puVar11;
      do {
        uVar6 = (uint)*puVar3;
        if ((uVar6 >> 0x17 & 1) != 0) {
          uVar6 = uVar6 & 0x7fffff;
          psVar4 = (short *)puVar3[(ulong)(byte)(POPCOUNT((char)uVar6) +
                                                 POPCOUNT((char)(uVar6 >> 8)) +
                                                POPCOUNT((char)(uVar6 >> 0x10))) + 2];
          if (psVar4 != (short *)0x0) {
            psVar12 = psVar4 + 4;
            psVar4 = psVar12 + ((long)psVar4[1] + (long)*psVar4) * 4;
            goto LAB_03326b9c;
          }
          break;
        }
        if ((*puVar3 & 1) != 0) {
          psVar12 = (short *)0x0;
          psVar4 = (short *)0x0;
          goto LAB_03326b9c;
        }
        puVar3 = (ulong *)puVar3[1];
      } while (puVar3 != (ulong *)0x0);
      psVar4 = (short *)0x0;
      psVar12 = (short *)0x0;
LAB_03326b9c:
      if (0 < (int)((ulong)((long)psVar4 - (long)psVar12) >> 3)) {
        uVar13 = 0;
        do {
          puVar3 = *(ulong **)(psVar12 + uVar13 * 4);
          uVar7 = *puVar3;
          uVar6 = (uint)uVar7;
          if ((uVar6 >> 0x11 & 1) == 0) {
            if (puVar3 != (ulong *)0x0) goto LAB_03326bf0;
          }
          else if ((puVar3 != (ulong *)0x0) &&
                  (uVar9 = uVar6 & 0x1ffff,
                  ((uint)puVar3[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                             POPCOUNT((char)(uVar9 >> 0x10))) + 2] >> 0x10 & 1) == 0
                  )) {
LAB_03326bf0:
            puVar8 = puVar3;
            uVar9 = uVar6;
            if ((uVar6 >> 0x10 & 1) == 0) {
              uVar10 = uVar7;
              do {
                if (((uVar10 & 1) != 0) || (puVar8 = (ulong *)puVar8[1], puVar8 == (ulong *)0x0))
                goto LAB_03326cb8;
                uVar10 = *puVar8;
                uVar9 = (uint)uVar10;
              } while ((uVar9 >> 0x10 & 1) == 0);
            }
            uVar10 = CONCAT44(uVar9,uVar9) & 0xffff0000ffff;
            if (puVar8[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2] !=
                0) {
              if (puVar3 == (ulong *)0x0) {
LAB_03326c7c:
                uVar7 = 0;
              }
              else {
                while ((uVar6 >> 0x10 & 1) == 0) {
                  if (((uVar7 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
                  goto LAB_03326c7c;
                  uVar7 = *puVar3;
                  uVar6 = (uint)uVar7;
                }
                uVar7 = CONCAT44(uVar6,uVar6) & 0xffff0000ffff;
                uVar7 = puVar3[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) +
                               2];
              }
              iVar2 = (int)param_2[1];
              lVar5 = (long)iVar2;
              if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar2) {
                FUN_0333530c(param_2,puVar1,lVar5 + 1);
                iVar2 = (int)param_2[1];
              }
              *(int *)(param_2 + 1) = (int)(lVar5 + 1);
              *(ulong *)(*param_2 + (long)iVar2 * 8) = uVar7;
            }
          }
LAB_03326cb8:
          uVar13 = uVar13 + 1;
        } while (uVar13 != ((ulong)((long)psVar4 - (long)psVar12) >> 3 & 0xffffffff));
      }
      do {
        uVar13 = *puVar11;
        puVar11 = (ulong *)puVar11[1];
      } while ((uVar13 & 1) == 0);
    } while (puVar11 != (ulong *)0x0);
  }
  return;
}


