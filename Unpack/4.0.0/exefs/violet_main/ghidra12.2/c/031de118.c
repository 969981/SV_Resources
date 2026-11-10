/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031de118; name: FUN_031de118
 */


void FUN_031de118(ulong *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  short *psVar11;
  ulong uVar12;
  
  if (param_1 != (ulong *)0x0) {
    do {
      while( true ) {
        uVar6 = *param_1;
        uVar3 = (uint)uVar6;
        if ((uVar6 & 1) != 0) break;
        param_1 = (ulong *)param_1[1];
      }
      puVar9 = param_1;
      if ((uVar3 >> 0x18 & 1) == 0) {
        uVar10 = uVar6;
        do {
          if (((uVar10 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
          goto LAB_031de1ec;
          uVar10 = *puVar9;
          uVar3 = (uint)uVar10;
        } while ((uVar3 >> 0x18 & 1) == 0);
      }
      if (puVar9 != (ulong *)0x0) {
        uVar10 = CONCAT44(uVar3,uVar3) & 0xffffff00ffffff;
        uVar10 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                     POPCOUNT((char)(uVar10 >> 0x10))) + 2];
        if (uVar10 != 0) {
          iVar4 = (int)param_2[1];
          lVar7 = (long)iVar4;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar4) {
            FUN_031de564(param_2,lVar7 + 1);
            iVar4 = (int)param_2[1];
          }
          plVar1 = (long *)(*param_2 + (long)iVar4 * 0x10);
          *(int *)(param_2 + 1) = (int)(lVar7 + 1);
          *plVar1 = param_3;
          plVar1[1] = uVar10;
          uVar6 = *param_1;
        }
      }
LAB_031de1ec:
      puVar9 = param_1;
      if ((uVar6 & 1) == 0) {
        do {
          puVar9 = (ulong *)puVar9[1];
        } while ((*puVar9 & 1) == 0);
      }
      if ((param_1 != (ulong *)0x0) && ((puVar9[2] & 0x1f) == 8)) {
        puVar9 = param_1;
        if ((uVar6 & 1) == 0) {
          do {
            puVar9 = (ulong *)puVar9[1];
            if (puVar9 == (ulong *)0x0) goto LAB_031de2f0;
          } while ((*puVar9 & 1) == 0);
        }
        uVar6 = puVar9[2] >> 8;
        if (0 < (int)(puVar9[2] >> 8)) {
          do {
            iVar4 = (int)uVar6;
            uVar3 = iVar4 - 1;
            uVar6 = (ulong)uVar3;
            puVar9 = param_1;
            do {
              if (((byte)*puVar9 >> 1 & 1) != 0) {
                uVar10 = puVar9[3];
                goto LAB_031de278;
              }
              puVar9 = (ulong *)puVar9[1];
            } while (puVar9 != (ulong *)0x0);
            uVar10 = 0;
LAB_031de278:
            puVar9 = param_1;
            do {
              if (((byte)*puVar9 >> 1 & 1) != 0) {
                puVar9 = (ulong *)puVar9[3];
                goto LAB_031de294;
              }
              puVar9 = (ulong *)puVar9[1];
            } while (puVar9 != (ulong *)0x0);
            puVar9 = (ulong *)0x0;
LAB_031de294:
            do {
              uVar8 = (uint)*puVar9;
              if ((uVar8 >> 0x14 & 1) != 0) {
                uVar5 = 0;
                if (puVar9 != (ulong *)0x0) {
                  uVar12 = CONCAT44(uVar8,uVar8) & 0xfffff000fffff;
                  uVar5 = (uint)(ushort)puVar9[(ulong)(byte)(POPCOUNT((char)uVar12) +
                                                             POPCOUNT((char)(uVar12 >> 8)) +
                                                            POPCOUNT((char)(uVar12 >> 0x10))) + 2];
                }
                goto LAB_031de2d8;
              }
              if ((*puVar9 & 1) != 0) {
                uVar5 = 0;
                goto LAB_031de2d8;
              }
              puVar9 = (ulong *)puVar9[1];
            } while (puVar9 != (ulong *)0x0);
            uVar5 = 0;
LAB_031de2d8:
            FUN_031de118(uVar10,param_2,param_3 + (int)(uVar5 * uVar3));
          } while (1 < iVar4);
        }
      }
LAB_031de2f0:
      if ((char)*(byte *)((long)param_1 + 2) < '\0') {
        uVar6 = CONCAT44((int)*param_1,(int)*param_1) & 0x7fffff007fffff;
        psVar11 = (short *)param_1[(ulong)(byte)(POPCOUNT((char)uVar6) +
                                                 POPCOUNT((char)(uVar6 >> 8)) +
                                                POPCOUNT((char)(uVar6 >> 0x10))) + 2];
        if ((psVar11 != (short *)0x0) && ((long)*psVar11 != 0)) {
          lVar7 = (long)*psVar11 << 3;
          do {
            puVar2 = *(undefined8 **)((long)psVar11 + lVar7);
            uVar3 = (uint)*puVar2;
            if ((uVar3 >> 0x11 & 1) == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = CONCAT44(uVar3,uVar3) & 0x1ffff0001ffff;
              uVar6 = (ulong)*(ushort *)
                              (puVar2 + (ulong)(byte)(POPCOUNT((char)uVar6) +
                                                      POPCOUNT((char)(uVar6 >> 8)) +
                                                     POPCOUNT((char)(uVar6 >> 0x10))) + 2);
            }
            FUN_031de118(puVar2,param_2,uVar6 + param_3);
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      param_1 = (ulong *)param_1[1];
    } while (param_1 != (ulong *)0x0);
  }
  return;
}


