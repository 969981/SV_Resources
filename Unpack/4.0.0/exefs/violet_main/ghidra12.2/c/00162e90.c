/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00162e90; name: FUN_00162e90
 */


int FUN_00162e90(long param_1,uint param_2,long *param_3,ulong *param_4,long *param_5,long param_6)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  
  if (7 < (long)param_4 - (long)param_3) {
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar6 = *(long *)(param_1 + 0x28) +
              (ulong)((param_2 >> (ulong)(*(uint *)(param_1 + 0x20) & 0x1f)) << 4) * 4;
      uVar4 = param_2 * -0x24d264a7;
      uVar9 = (uVar4 >> 0x17) + uVar4;
      uVar2 = uVar9 + (uVar4 >> 0x17);
      if ((*(uint *)(lVar6 + (ulong)(uVar4 >> 5 & 0xf) * 4) >> (ulong)(uVar4 & 0x1f) &
           *(uint *)(lVar6 + (ulong)(uVar9 >> 5 & 0xf) * 4) >> (ulong)(uVar9 & 0x1f) &
           *(uint *)(lVar6 + (ulong)(uVar2 >> 5 & 0xf) * 4) >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
        return 0;
      }
    }
    uVar10 = (ulong)(param_2 >> ((ulong)*(uint *)(param_1 + 0x68) & 0x3f));
    iVar5 = *(int *)(*(long *)(param_1 + 0x50) + uVar10 * 4);
    lVar6 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar6 = *(long *)(param_1 + 8);
    }
    puVar8 = (uint *)(lVar6 + (long)iVar5 * 8);
    uVar9 = *puVar8;
    if (uVar9 <= param_2) {
      iVar5 = *(int *)(*(long *)(param_1 + 0x50) + uVar10 * 4 + 4) - iVar5;
      if (iVar5 != 0) {
        uVar12 = (ulong)(long)iVar5 >> 1;
        puVar7 = puVar8;
        uVar10 = (long)iVar5;
        if (uVar12 != 0) {
          do {
            puVar8 = puVar7 + uVar12 * 2;
            uVar11 = uVar10 - uVar12;
            lVar6 = (uVar10 & 0x7ffffffffffffffc) * 2;
            Hint_Prefetch((long)puVar7 + lVar6,0,0,0);
            Hint_Prefetch((long)puVar8 + lVar6,0,0,0);
            if (param_2 <= *puVar8) {
              puVar8 = puVar7;
            }
            uVar12 = uVar11 >> 1;
            puVar7 = puVar8;
            uVar10 = uVar11;
          } while (uVar12 != 0);
          uVar9 = *puVar8;
        }
        puVar8 = puVar8 + (ulong)(uVar9 < param_2) * 2;
        uVar9 = *puVar8;
      }
      if (uVar9 != param_2) {
        *param_5 = param_6;
        return 0;
      }
      puVar1 = (ulong *)(param_3 + 1);
      if (puVar1 <= param_4 + -1) {
        iVar5 = 0;
LAB_00163090:
        plVar3 = (long *)(*(long *)(param_1 + 0x40) + (ulong)puVar8[1]);
        if (*param_3 == *plVar3) {
          puVar15 = (ulong *)(plVar3 + 1);
          uVar10 = *puVar15 ^ *puVar1;
          if (uVar10 == 0) {
            puVar16 = (ulong *)(param_3 + 2);
            do {
              puVar14 = puVar16;
              if (param_4 + -1 < puVar14) {
                uVar12 = (ulong)(int)((long)puVar14 - (long)puVar1);
                puVar16 = (ulong *)((long)puVar1 + uVar12);
                uVar10 = (long)puVar14 - (long)puVar1;
                if (puVar16 < param_4) goto LAB_00163148;
                goto LAB_00163120;
              }
              uVar10 = *(ulong *)((long)puVar14 + ((long)puVar15 - (long)puVar1)) ^ *puVar14;
              puVar16 = puVar14 + 1;
            } while (uVar10 == 0);
          }
          else {
            puVar14 = puVar1;
          }
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = (ulong)(((int)puVar14 - (int)puVar1) +
                          ((uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3));
LAB_00163120:
          iVar13 = (int)uVar10 + 8;
          goto joined_r0x00163178;
        }
        iVar13 = 0;
        if (iVar5 < 1) goto LAB_001630cc;
        goto LAB_00163084;
      }
      iVar5 = 0;
      do {
        plVar3 = (long *)(*(long *)(param_1 + 0x40) + (ulong)puVar8[1]);
        if (*param_3 == *plVar3) {
          if (puVar1 < param_4) {
            lVar6 = 0;
            puVar15 = puVar1;
            do {
              if ((char)*puVar15 != *(char *)((long)plVar3 + lVar6 + 8)) goto LAB_00163060;
              iVar13 = (int)lVar6;
              lVar6 = (long)(iVar13 + 1);
              puVar15 = (ulong *)((long)puVar1 + lVar6);
            } while (puVar15 < param_4);
            iVar13 = iVar13 + 9;
          }
          else {
            lVar6 = 0;
LAB_00163060:
            iVar13 = (int)lVar6 + 8;
          }
          if (iVar5 <= iVar13) goto LAB_0016303c;
        }
        else {
          iVar13 = 0;
          if (iVar5 < 1) {
LAB_0016303c:
            lVar6 = (long)param_3 - (long)plVar3;
            if (lVar6 < param_6) {
              param_6 = lVar6;
              iVar5 = iVar13;
              if (0xff < iVar13) {
LAB_00163188:
                *param_5 = lVar6;
                return iVar13;
              }
            }
          }
        }
        puVar8 = puVar8 + 2;
        if (*puVar8 != param_2) {
LAB_00163180:
          *param_5 = param_6;
          return iVar5;
        }
      } while( true );
    }
  }
  return 0;
  while( true ) {
    iVar13 = (int)uVar12;
    uVar12 = (ulong)(iVar13 + 1);
    puVar16 = (ulong *)((long)puVar1 + uVar12);
    if (param_4 <= puVar16) break;
LAB_00163148:
    uVar10 = uVar12;
    if ((char)*puVar16 != *(char *)((long)puVar15 + uVar12)) goto LAB_00163120;
  }
  iVar13 = iVar13 + 9;
joined_r0x00163178:
  if (iVar5 <= iVar13) {
LAB_001630cc:
    lVar6 = (long)param_3 - (long)plVar3;
    if (lVar6 < param_6) {
      param_6 = lVar6;
      iVar5 = iVar13;
      if (0xff < iVar13) goto LAB_00163188;
    }
  }
LAB_00163084:
  puVar8 = puVar8 + 2;
  if (*puVar8 != param_2) goto LAB_00163180;
  goto LAB_00163090;
}


