/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dd638; name: FUN_031dd638
 */


void FUN_031dd638(ulong *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  ulong *puVar9;
  short *psVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  if (param_1 != (ulong *)0x0) {
    do {
      while( true ) {
        uVar6 = *param_1;
        uVar3 = (uint)uVar6;
        if ((uVar6 & 1) != 0) break;
        param_1 = (ulong *)param_1[1];
      }
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
            if (puVar9 == (ulong *)0x0) goto LAB_031dd788;
          } while ((*puVar9 & 1) == 0);
        }
        uVar6 = puVar9[2] >> 8;
        if (0 < (int)(puVar9[2] >> 8)) {
          do {
            iVar5 = (int)uVar6;
            uVar3 = iVar5 - 1;
            uVar6 = (ulong)uVar3;
            puVar9 = param_1;
            do {
              if (((byte)*puVar9 >> 1 & 1) != 0) {
                uVar1 = puVar9[3];
                goto LAB_031dd70c;
              }
              puVar9 = (ulong *)puVar9[1];
            } while (puVar9 != (ulong *)0x0);
            uVar1 = 0;
LAB_031dd70c:
            puVar9 = param_1;
            do {
              if (((byte)*puVar9 >> 1 & 1) != 0) {
                puVar9 = (ulong *)puVar9[3];
                goto LAB_031dd728;
              }
              puVar9 = (ulong *)puVar9[1];
            } while (puVar9 != (ulong *)0x0);
            puVar9 = (ulong *)0x0;
LAB_031dd728:
            do {
              uVar8 = (uint)*puVar9;
              if ((uVar8 >> 0x14 & 1) != 0) {
                uVar4 = 0;
                if (puVar9 != (ulong *)0x0) {
                  uVar13 = CONCAT44(uVar8,uVar8) & 0xfffff000fffff;
                  uVar4 = (uint)(ushort)puVar9[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                             POPCOUNT((char)(uVar13 >> 8)) +
                                                            POPCOUNT((char)(uVar13 >> 0x10))) + 2];
                }
                goto LAB_031dd76c;
              }
              if ((*puVar9 & 1) != 0) {
                uVar4 = 0;
                goto LAB_031dd76c;
              }
              puVar9 = (ulong *)puVar9[1];
            } while (puVar9 != (ulong *)0x0);
            uVar4 = 0;
LAB_031dd76c:
            FUN_031dd638(uVar1,param_2,param_3 + (int)(uVar4 * uVar3));
          } while (1 < iVar5);
          uVar3 = (uint)*param_1;
        }
      }
LAB_031dd788:
      if ((uVar3 >> 0x17 & 1) != 0) {
        uVar6 = CONCAT44((int)*param_1,(int)*param_1) & 0x7fffff007fffff;
        psVar10 = (short *)param_1[(ulong)(byte)(POPCOUNT((char)uVar6) +
                                                 POPCOUNT((char)(uVar6 >> 8)) +
                                                POPCOUNT((char)(uVar6 >> 0x10))) + 2];
        if ((psVar10 != (short *)0x0) && ((long)*psVar10 != 0)) {
          lVar11 = (long)*psVar10 << 3;
          do {
            puVar2 = *(undefined8 **)((long)psVar10 + lVar11);
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
            FUN_031dd638(puVar2,param_2,uVar6 + param_3);
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
          uVar3 = (uint)*param_1;
        }
      }
      if ((((uVar3 >> 0xe & 1) != 0) &&
          (uVar6 = CONCAT44((int)*param_1,(int)*param_1) & 0x3fff00003fff,
          piVar7 = (int *)param_1[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))
                                               ) + 2], piVar7 != (int *)0x0)) &&
         (iVar5 = *piVar7, 0 < iVar5)) {
        plVar12 = (long *)(piVar7 + (long)iVar5 * 4);
        lVar11 = (long)iVar5 + 1;
        do {
          FUN_031dd638(plVar12[-1],param_2,*plVar12 + param_3);
          lVar11 = lVar11 + -1;
          plVar12 = plVar12 + -2;
        } while (1 < lVar11);
      }
      uVar6 = 0;
      puVar9 = param_1;
      do {
        uVar3 = (uint)*puVar9;
        if ((uVar3 >> 0x15 & 1) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = CONCAT44(uVar3,uVar3) & 0x1fffff001fffff;
          uVar1 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar1) + POPCOUNT((char)(uVar1 >> 8)) +
                                      POPCOUNT((char)(uVar1 >> 0x10))) + 2];
        }
        uVar6 = uVar1 | uVar6;
      } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
      if (((uint)uVar6 >> 7 & 1) != 0) {
        iVar5 = (int)param_2[1];
        lVar11 = (long)iVar5;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar5) {
          FUN_031ddae4(param_2,lVar11 + 1);
          iVar5 = (int)param_2[1];
        }
        plVar12 = (long *)(*param_2 + (long)iVar5 * 0x10);
        *(int *)(param_2 + 1) = (int)(lVar11 + 1);
        *plVar12 = param_3;
        plVar12[1] = 0;
      }
      param_1 = (ulong *)param_1[1];
    } while (param_1 != (ulong *)0x0);
  }
  return;
}


