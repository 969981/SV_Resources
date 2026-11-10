/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333d108; name: FUN_0333d108
 */


void FUN_0333d108(long *param_1,uint param_2,long *param_3,int param_4,undefined8 *param_5,
                 undefined8 param_6)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong *puVar16;
  byte bVar17;
  
  if ((param_2 >> 4 & 1) != 0) {
    puVar2 = (ulong *)(**(code **)(*param_1 + 0x18))(param_1,0x40);
    uVar7 = param_1[0x12];
    puVar2[5] = (ulong)"hkArray";
    puVar2[6] = 0x80018;
    *puVar2 = 0x30000f;
    puVar2[1] = 0;
    puVar2[2] = 8;
    puVar2[3] = 0;
    puVar2[4] = uVar7;
    puVar2[7] = 0;
    FUN_0333d108(param_1,param_2 & 0xffffffef,param_3,0,puVar2 + 3,param_6);
    goto LAB_0333d3b0;
  }
  if ((param_2 >> 5 & 1) != 0) {
    puVar2 = (ulong *)(**(code **)(*param_1 + 0x18))(param_1,0x68);
    puVar2[7] = 0;
    *puVar2 = 0x30800f;
    puVar2[1] = 0;
    uVar10 = 8;
    if (param_4 != 0) {
      uVar10 = 0x28;
    }
    puVar2[5] = (ulong)&DAT_03bec20a;
    puVar16 = puVar2 + 2;
    *puVar16 = (long)(int)(uVar10 | param_4 << 8);
    puVar6 = puVar2 + 3;
    *puVar6 = 0;
    puVar2[4] = (ulong)PTR_DAT_047e66f8;
    puVar2[0xb] = 1;
    puVar2[0xc] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[6] = (ulong)(puVar2 + 10);
    puVar2[0xd] = (ulong)&DAT_03c4f61e;
    FUN_0333d108(param_1,param_2 & 0xffffffdf,param_3,0,puVar6,param_6);
    puVar6 = (ulong *)*puVar6;
    puVar12 = puVar6;
    do {
      uVar10 = (uint)*puVar12;
      if ((uVar10 >> 0x14 & 1) != 0) {
        uVar11 = 0;
        if (puVar12 != (ulong *)0x0) {
          uVar10 = uVar10 & 0xfffff;
          uVar11 = (uint)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                       POPCOUNT((char)(uVar10 >> 8)) +
                                                      POPCOUNT((char)(uVar10 >> 0x10))) + 2];
        }
        goto LAB_0333d2e0;
      }
      if ((*puVar12 & 1) != 0) {
        uVar11 = 0;
        goto LAB_0333d2e0;
      }
      puVar12 = (ulong *)puVar12[1];
    } while (puVar12 != (ulong *)0x0);
    uVar11 = 0;
LAB_0333d2e0:
    while( true ) {
      uVar10 = (uint)*puVar6;
      if ((uVar10 >> 0x14 & 1) != 0) break;
      if (((*puVar6 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
      goto LAB_0333d328;
    }
    if (puVar6 != (ulong *)0x0) {
      uVar10 = uVar10 & 0xfffff;
      uVar10 = (uint)puVar6[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                         POPCOUNT((char)(uVar10 >> 0x10))) + 2] & 0xfff0000;
      goto LAB_0333d32c;
    }
LAB_0333d328:
    uVar10 = 0;
LAB_0333d32c:
    uVar4 = (uint)*puVar2;
    uVar15 = uVar4 & 0xfffff;
    bVar17 = POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
             POPCOUNT((char)(uVar15 >> 0x10));
    if ((uVar4 >> 0x14 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)puVar16[bVar17] & 0xf0000000;
    }
    puVar16[bVar17] = (ulong)(uVar10 | uVar11 * param_4 & 0xffff | uVar15);
    puVar12 = puVar2;
    if ((uVar4 >> 0xf & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
        uVar4 = (uint)*puVar12;
      } while ((uVar4 >> 0xf & 1) == 0);
    }
    uVar7 = puVar12[(ulong)(byte)(POPCOUNT((char)(uVar4 & 0x7fff)) +
                                 POPCOUNT((char)((uVar4 & 0x7fff) >> 8))) + 2];
    puVar9 = (undefined *)puVar2[3];
LAB_0333d3ac:
    *(undefined **)(uVar7 + 0x10) = puVar9;
LAB_0333d3b0:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    *param_5 = puVar2;
    return;
  }
  switch(param_2) {
  case 0:
switchD_0333d160_caseD_0:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = PTR_DAT_047e5da8;
    break;
  case 1:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = PTR_DAT_047e6280;
    break;
  case 2:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = PTR_DAT_047e6270;
    break;
  case 3:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = PTR_DAT_047e6268;
    break;
  case 4:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = PTR_DAT_047e6240;
    break;
  case 5:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = &DAT_047ac980;
    break;
  case 6:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = PTR_DAT_047e5a48;
    break;
  case 7:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = PTR_DAT_047e5840;
    break;
  case 8:
    uVar10 = 0x30800f;
    puVar2 = (ulong *)(**(code **)(*param_1 + 0x18))(param_1,0x70);
    puVar2[3] = 0x22222222;
    *puVar2 = 0x30800f;
    puVar2[1] = 0;
    puVar2[2] = 6;
    puVar9 = PTR_DAT_047e66c0;
    puVar2[7] = 0x80008;
    puVar2[8] = 0;
    puVar2[0xb] = 1;
    puVar2[0xc] = 0x22222222;
    puVar2[4] = (ulong)puVar9;
    puVar2[5] = (ulong)&DAT_03c62cc9;
    puVar2[10] = 0;
    puVar2[6] = (ulong)(puVar2 + 10);
    puVar2[0xd] = (ulong)&DAT_03c4f61e;
    puVar2[4] = param_1[0x14];
    puVar12 = puVar2;
    if (*param_3 == param_3[1]) {
      puVar2[3] = (ulong)PTR_DAT_047e5da8;
    }
    else {
      iVar1 = FUN_0333d8d0(param_6,param_3);
      if (-1 < iVar1) {
        lVar3 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),param_3,iVar1);
        uVar10 = *(uint *)((long)param_1 + 100);
        if (0 < (int)uVar10) {
          uVar11 = (int)lVar3 * -0x61c8864f;
          uVar15 = (int)((ulong)lVar3 >> 0x20) * -0x61c8864f;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
          uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
          uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
          uVar7 = (ulong)((uVar11 + (uVar11 >> 2) + uVar15 * 0x40 + 0x9e3779b9 ^ uVar15) & uVar10);
          lVar13 = param_1[0xb];
          lVar14 = *(long *)(lVar13 + uVar7 * 0x10);
          if (lVar14 != -1) {
            if (lVar14 != lVar3) {
              do {
                uVar7 = (ulong)((int)uVar7 + 1U & uVar10);
                lVar14 = *(long *)(lVar13 + uVar7 * 0x10);
                if (lVar14 == -1) goto LAB_0333d700;
              } while (lVar14 != lVar3);
            }
            uVar7 = *(ulong *)(lVar13 + uVar7 * 0x10 + 8);
            iVar5 = (int)uVar7;
            if (((-1 < iVar5) && (iVar5 != 0x50000000)) &&
               (puVar12 = *(ulong **)(param_1[9] + (uVar7 & 0xffffffff) * 8),
               puVar12 != (ulong *)0x0)) {
              uVar7 = *puVar12;
              puVar2[3] = uVar7;
              uVar10 = (uint)*puVar2;
              puVar12 = puVar2;
              if ((uVar10 >> 0xf & 1) == 0) {
                do {
                  puVar12 = (ulong *)puVar12[1];
                  uVar10 = (uint)*puVar12;
                } while ((uVar10 >> 0xf & 1) == 0);
              }
              *(ulong *)(puVar12[(ulong)(byte)(POPCOUNT((char)(uVar10 & 0x7fff)) +
                                              POPCOUNT((char)((uVar10 & 0x7fff) >> 8))) + 2] + 0x10)
                   = uVar7;
              goto LAB_0333d3b0;
            }
          }
        }
LAB_0333d700:
        iVar5 = (int)param_1[0x18];
        lVar3 = (long)iVar5;
        if ((int)(*(uint *)((long)param_1 + 0xc4) & 0x7fffffff) <= iVar5) {
          FUN_03340ab8(param_1 + 0x17,lVar3 + 1);
          iVar5 = (int)param_1[0x18];
        }
        puVar8 = (undefined8 *)(param_1[0x17] + (long)iVar5 * 0x20);
        *(int *)(param_1 + 0x18) = (int)(lVar3 + 1);
        *puVar8 = 0;
        lVar3 = FUN_031ca644(puVar8,*param_3,param_3[1]);
        *(int *)(lVar3 + 8) = iVar1;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(ulong **)(lVar3 + 0x18) = puVar2 + 3;
        iVar5 = (int)param_1[0x18];
        lVar3 = (long)iVar5;
        if ((int)(*(uint *)((long)param_1 + 0xc4) & 0x7fffffff) <= iVar5) {
          FUN_03340ab8(param_1 + 0x17,lVar3 + 1);
          iVar5 = (int)param_1[0x18];
        }
        puVar8 = (undefined8 *)(param_1[0x17] + (long)iVar5 * 0x20);
        *(int *)(param_1 + 0x18) = (int)(lVar3 + 1);
        *puVar8 = 0;
        puVar12 = puVar2;
        do {
          uVar10 = (uint)*puVar12;
          if ((uVar10 >> 0xf & 1) != 0) {
            uVar7 = CONCAT44(uVar10,uVar10) & 0x7fff00007fff;
            uVar7 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2]
            ;
            goto LAB_0333d88c;
          }
          if ((*puVar12 & 9) != 0) {
            uVar7 = 0;
            goto LAB_0333d88c;
          }
          puVar12 = (ulong *)puVar12[1];
        } while (puVar12 != (ulong *)0x0);
        uVar7 = 0;
LAB_0333d88c:
        lVar3 = FUN_031ca644(puVar8,*param_3,param_3[1]);
        *(int *)(lVar3 + 8) = iVar1;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(ulong *)(lVar3 + 0x18) = uVar7 + 0x10;
        goto LAB_0333d3b0;
      }
      puVar2[3] = (ulong)PTR_DAT_047e5da8;
      uVar10 = (uint)*puVar2;
      if ((uVar10 >> 0xf & 1) == 0) {
        do {
          puVar12 = (ulong *)puVar12[1];
          uVar10 = (uint)*puVar12;
        } while ((uVar10 >> 0xf & 1) == 0);
      }
    }
    uVar7 = puVar12[(ulong)(byte)(POPCOUNT((char)(uVar10 & 0x7fff)) +
                                 POPCOUNT((char)((uVar10 & 0x7fff) >> 8))) + 2];
    puVar9 = PTR_DAT_047e5da8;
    goto LAB_0333d3ac;
  case 9:
    if ((*param_3 == param_3[1]) || (iVar1 = FUN_0333d8d0(param_6,param_3), iVar1 < 0))
    goto switchD_0333d160_caseD_0;
    lVar3 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),param_3,iVar1);
    uVar10 = *(uint *)((long)param_1 + 100);
    if ((int)uVar10 < 1) {
LAB_0333d7b0:
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = 0x22222222;
      }
      iVar5 = (int)param_1[0x18];
      lVar3 = (long)iVar5;
      if ((int)(*(uint *)((long)param_1 + 0xc4) & 0x7fffffff) <= iVar5) {
        FUN_03340ab8(param_1 + 0x17,lVar3 + 1);
        iVar5 = (int)param_1[0x18];
      }
      puVar8 = (undefined8 *)(param_1[0x17] + (long)iVar5 * 0x20);
      *(int *)(param_1 + 0x18) = (int)(lVar3 + 1);
      *puVar8 = 0;
      lVar3 = FUN_031ca644(puVar8,*param_3,param_3[1]);
      *(int *)(lVar3 + 8) = iVar1;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 **)(lVar3 + 0x18) = param_5;
      return;
    }
    uVar11 = (int)lVar3 * -0x61c8864f;
    uVar15 = (int)((ulong)lVar3 >> 0x20) * -0x61c8864f;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
    uVar7 = (ulong)((uVar11 + (uVar11 >> 2) + uVar15 * 0x40 + 0x9e3779b9 ^ uVar15) & uVar10);
    lVar13 = param_1[0xb];
    lVar14 = *(long *)(lVar13 + uVar7 * 0x10);
    if (lVar14 == -1) goto LAB_0333d7b0;
    if (lVar14 != lVar3) {
      do {
        uVar7 = (ulong)((int)uVar7 + 1U & uVar10);
        lVar14 = *(long *)(lVar13 + uVar7 * 0x10);
        if (lVar14 == -1) goto LAB_0333d7b0;
      } while (lVar14 != lVar3);
    }
    uVar7 = *(ulong *)(lVar13 + uVar7 * 0x10 + 8);
    iVar5 = (int)uVar7;
    if (((iVar5 < 0) || (iVar5 == 0x50000000)) ||
       (puVar8 = *(undefined8 **)(param_1[9] + (uVar7 & 0xffffffff) * 8),
       puVar8 == (undefined8 *)0x0)) goto LAB_0333d7b0;
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = (undefined *)*puVar8;
    break;
  case 10:
    if (param_5 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = PTR_DAT_047e5c80;
    break;
  case 0xb:
    FUN_0333b7ac(param_1,param_5,param_3,param_6);
    return;
  default:
    goto switchD_0333d160_default;
  }
  *param_5 = puVar9;
switchD_0333d160_default:
  return;
}


