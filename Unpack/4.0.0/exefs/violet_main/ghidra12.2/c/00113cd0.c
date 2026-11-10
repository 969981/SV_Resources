/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00113cd0; name: FUN_00113cd0
 */


void FUN_00113cd0(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint local_60 [4];
  
  uVar2 = param_1[4];
  puVar4 = *(uint **)(param_1 + 2);
  puVar6 = puVar4;
  puVar7 = puVar4 + 1;
  if (uVar2 != 0) {
    puVar6 = param_1;
    puVar7 = puVar4;
  }
  uVar15 = 0x1f;
  if (uVar2 != 0) {
    uVar15 = uVar2 - 1;
  }
  uVar5 = (ulong)uVar15;
  uVar2 = *puVar6;
  iVar8 = 0;
  uVar9 = (ulong)(uVar2 >> 1);
  uVar1 = 4;
  if ((uVar2 & 1) != 0) {
    uVar1 = 1;
  }
  do {
    uVar10 = 0;
    puVar6 = puVar7;
    do {
      uVar15 = (uint)uVar5;
      uVar13 = uVar9 & 0xffffffff;
      uVar14 = (uint)uVar9;
      if (uVar15 < 0x10) {
        uVar13 = (ulong)(*puVar6 << (ulong)(uVar15 & 0x1f) | uVar14);
      }
      puVar7 = puVar6;
      if ((uVar13 & 0xf) == 0) {
        switch((uint)uVar13 >> 4 & 0x1f) {
        case 0:
          uVar11 = (uint)uVar13 & 0xffff;
          if ((uVar13 & 0xffff) != 0) {
            uVar13 = uVar9 & 0xffffffff;
            uVar11 = (uint)LZCOUNT(uVar11 & -uVar11);
            uVar14 = uVar11 * -2 + 0x3f;
            if (uVar15 < uVar14) {
              puVar7 = puVar6 + 1;
              Hint_Prefetch(puVar6 + 0x100,0,0,0);
              uVar15 = uVar15 + 0x20;
              uVar13 = (ulong)*puVar6 << (uVar5 & 0x3f) | uVar13;
            }
            uVar9 = uVar13 >> ((ulong)uVar14 & 0x3f);
            uVar5 = (ulong)(uVar15 - uVar14);
            uVar15 = ((0x80000000U >> (ulong)(uVar11 & 0x1f)) +
                     ((0xffffffffU >> (ulong)(-uVar14 & 0x1f) & (uint)uVar13) >>
                     (ulong)(0x20 - uVar11 & 0x1f))) - 1;
            uVar15 = -(uVar15 & 1) ^ (int)uVar15 >> 1;
            goto LAB_00113e04;
          }
          if (uVar15 < 0x10) {
            uVar5 = (ulong)(*puVar6 >> (0x10 - uVar5 & 0x3f));
            uVar11 = uVar15 + 0x10;
            puVar7 = puVar6 + 1;
          }
          else {
            uVar11 = uVar15 - 0x10;
            uVar5 = (ulong)(uVar14 >> 0x10);
            if (uVar11 < 0x10) {
              puVar7 = puVar6 + 1;
              Hint_Prefetch(puVar6 + 0x100,0,0,0);
              uVar5 = (ulong)*puVar6 << ((ulong)uVar11 & 0x3f) | uVar5;
              uVar11 = uVar15 + 0x10;
            }
          }
          uVar9 = uVar5 >> 0x10;
          uVar14 = ((uint)uVar5 & 0xffff) + 0xffff;
          uVar5 = (ulong)(uVar11 - 0x10);
          goto LAB_00113fd4;
        default:
          uVar9 = uVar9 & 0xffffffff;
          if (uVar15 < 9) {
            puVar7 = puVar6 + 1;
            Hint_Prefetch(puVar6 + 0x100,0,0,0);
            uVar15 = uVar15 + 0x20;
            uVar9 = (ulong)*puVar6 << (uVar5 & 0x3f) | uVar9;
          }
          uVar14 = (uint)uVar9 >> 5 & 0xf | 0x10;
          uVar9 = uVar9 >> 9;
          uVar5 = (ulong)(uVar15 - 9);
          break;
        case 2:
        case 6:
        case 10:
        case 0xe:
        case 0x12:
        case 0x16:
        case 0x1a:
        case 0x1e:
          uVar9 = uVar9 & 0xffffffff;
          if (uVar15 < 0xb) {
            puVar7 = puVar6 + 1;
            Hint_Prefetch(puVar6 + 0x100,0,0,0);
            uVar15 = uVar15 + 0x20;
            uVar9 = (ulong)*puVar6 << (uVar5 & 0x3f) | uVar9;
          }
          uVar14 = (uint)uVar9 >> 6 & 0x1f | 0x20;
          uVar9 = uVar9 >> 0xb;
          uVar5 = (ulong)(uVar15 - 0xb);
          break;
        case 4:
        case 0xc:
        case 0x14:
        case 0x1c:
          uVar9 = uVar9 & 0xffffffff;
          if (uVar15 < 0xd) {
            puVar7 = puVar6 + 1;
            Hint_Prefetch(puVar6 + 0x100,0,0,0);
            uVar15 = uVar15 + 0x20;
            uVar9 = (ulong)*puVar6 << (uVar5 & 0x3f) | uVar9;
          }
          uVar14 = (uint)uVar9 >> 7 & 0x3f | 0x40;
          uVar9 = uVar9 >> 0xd;
          uVar5 = (ulong)(uVar15 - 0xd);
          break;
        case 8:
        case 0x18:
          uVar9 = uVar9 & 0xffffffff;
          if (uVar15 < 0xf) {
            puVar7 = puVar6 + 1;
            Hint_Prefetch(puVar6 + 0x100,0,0,0);
            uVar15 = uVar15 + 0x20;
            uVar9 = (ulong)*puVar6 << (uVar5 & 0x3f) | uVar9;
          }
          uVar14 = (uint)uVar9 >> 8 & 0x7f | 0x80;
          uVar9 = uVar9 >> 0xf;
          uVar5 = (ulong)(uVar15 - 0xf);
          break;
        case 0x10:
          uVar9 = uVar9 & 0xffffffff;
          if (uVar15 < 0x11) {
            puVar7 = puVar6 + 1;
            Hint_Prefetch(puVar6 + 0x100,0,0,0);
            uVar15 = uVar15 + 0x20;
            uVar9 = (ulong)*puVar6 << (uVar5 & 0x3f) | uVar9;
          }
          uVar14 = (uint)uVar9 >> 9 & 0xff | 0x100;
          uVar9 = uVar9 >> 0x11;
          uVar5 = (ulong)(uVar15 - 0x11);
        }
        uVar14 = uVar14 - 1;
LAB_00113fd4:
        uVar15 = -(uVar14 & 1) ^ uVar14 >> 1;
      }
      else {
        uVar11 = (byte)(&DAT_03cb5a5c)[uVar13 & 0x7f] & 7;
        if (uVar15 < uVar11) {
          uVar14 = *puVar6 >> (ulong)(uVar11 - uVar15 & 0x1f);
          uVar15 = uVar15 + 0x20;
          puVar7 = puVar6 + 1;
        }
        else {
          uVar14 = uVar14 >> (ulong)uVar11;
        }
        uVar9 = (ulong)uVar14;
        uVar5 = (ulong)(uVar15 - uVar11);
        uVar15 = (int)((uint)(byte)(&DAT_03cb5a5c)[uVar13 & 0x7f] << 0x18) >> 0x1b;
      }
LAB_00113e04:
      local_60[uVar10] = uVar15;
      uVar10 = uVar10 + 1;
      puVar6 = puVar7;
    } while (uVar10 < uVar1);
    if ((uVar2 & 1) == 0) {
      if ((param_4 & 0x88) == 0) {
        if ((param_4 >> 5 & 1) == 0) {
          uVar14 = param_2[-6];
          uVar15 = param_3[4];
          uVar11 = uVar15;
          uVar3 = uVar14;
          if ((int)uVar15 <= (int)uVar14) {
            uVar11 = uVar14;
            uVar3 = uVar15;
          }
          uVar12 = param_3[-2];
          if ((int)param_3[-2] <= (int)uVar3) {
            uVar12 = uVar3;
          }
          if ((int)uVar12 <= (int)uVar11) {
            uVar11 = uVar12;
          }
          uVar11 = uVar11 + local_60[0];
          uVar3 = uVar11;
          if ((int)uVar15 <= (int)uVar11) {
            uVar3 = uVar15;
            uVar15 = uVar11;
          }
          uVar12 = param_3[6];
          if ((int)param_3[6] <= (int)uVar3) {
            uVar12 = uVar3;
          }
          if ((int)uVar12 <= (int)uVar15) {
            uVar15 = uVar12;
          }
          uVar3 = uVar11;
          if ((int)uVar14 <= (int)uVar11) {
            uVar3 = uVar14;
            uVar14 = uVar11;
          }
          uVar12 = param_2[-2];
          if ((int)param_2[-2] <= (int)uVar3) {
            uVar12 = uVar3;
          }
          if ((int)uVar12 <= (int)uVar14) {
            uVar14 = uVar12;
          }
          *param_2 = uVar11;
          goto LAB_00114204;
        }
        uVar12 = *param_3;
        uVar3 = param_3[4];
        uVar11 = param_3[6];
        uVar15 = uVar12;
        uVar14 = uVar3;
        if ((int)uVar3 <= (int)uVar12) {
          uVar15 = uVar3;
          uVar14 = uVar12;
        }
        uVar12 = uVar11;
        if ((int)uVar11 <= (int)uVar15) {
          uVar12 = uVar15;
        }
        if ((int)uVar12 <= (int)uVar14) {
          uVar14 = uVar12;
        }
        uVar14 = uVar14 + local_60[0];
        uVar15 = uVar3;
        uVar12 = uVar14;
        if ((int)uVar3 <= (int)uVar14) {
          uVar15 = uVar14;
          uVar12 = uVar3;
        }
        if ((int)uVar11 <= (int)uVar12) {
          uVar11 = uVar12;
        }
        if ((int)uVar11 <= (int)uVar15) {
          uVar15 = uVar11;
        }
        uVar15 = uVar15 + local_60[1];
        *param_2 = uVar14;
        param_2[2] = uVar15;
        uVar12 = uVar14;
        if ((int)uVar15 <= (int)uVar14) {
          uVar12 = uVar15;
          uVar15 = uVar14;
        }
        if ((int)uVar3 <= (int)uVar12) {
          uVar3 = uVar12;
        }
        uVar14 = uVar15;
        if ((int)uVar3 <= (int)uVar15) {
          uVar14 = uVar3;
        }
        uVar14 = uVar14 + local_60[2];
        param_2[4] = uVar14;
      }
      else {
        if ((param_4 >> 5 & 1) == 0) {
          uVar14 = param_2[-8];
          uVar12 = param_2[-6];
          uVar3 = param_2[-2];
          uVar15 = uVar14;
          uVar11 = uVar12;
          if ((int)uVar12 <= (int)uVar14) {
            uVar15 = uVar12;
            uVar11 = uVar14;
          }
          uVar14 = uVar3;
          if ((int)uVar3 <= (int)uVar15) {
            uVar14 = uVar15;
          }
          if ((int)uVar14 <= (int)uVar11) {
            uVar11 = uVar14;
          }
          uVar11 = uVar11 + local_60[0];
          uVar14 = uVar12;
          uVar15 = uVar11;
          if ((int)uVar12 <= (int)uVar11) {
            uVar14 = uVar11;
            uVar15 = uVar12;
          }
          if ((int)uVar3 <= (int)uVar15) {
            uVar3 = uVar15;
          }
          if ((int)uVar3 <= (int)uVar14) {
            uVar14 = uVar3;
          }
          uVar14 = uVar14 + local_60[2];
          uVar15 = uVar14;
          uVar3 = uVar11;
          if ((int)uVar14 <= (int)uVar11) {
            uVar15 = uVar11;
            uVar3 = uVar14;
          }
          if ((int)uVar12 <= (int)uVar3) {
            uVar12 = uVar3;
          }
          if ((int)uVar12 <= (int)uVar15) {
            uVar15 = uVar12;
          }
          uVar15 = uVar15 + local_60[1];
          *param_2 = uVar11;
          param_2[4] = uVar14;
          param_2[2] = uVar15;
        }
        else {
          *param_2 = local_60[0];
          uVar11 = local_60[0];
          uVar15 = local_60[0];
          uVar14 = local_60[0];
LAB_00114204:
          uVar14 = local_60[2] + uVar14;
          uVar15 = local_60[1] + uVar15;
          param_2[2] = uVar15;
          param_2[4] = uVar14;
        }
        uVar12 = uVar11;
        if ((int)uVar15 <= (int)uVar11) {
          uVar12 = uVar15;
          uVar15 = uVar11;
        }
      }
      if ((int)uVar14 <= (int)uVar12) {
        uVar14 = uVar12;
      }
      if ((int)uVar14 <= (int)uVar15) {
        uVar15 = uVar14;
      }
      uVar15 = uVar15 + local_60[3];
    }
    else {
      if ((param_4 & 0x88) == 0) {
        if ((param_4 >> 5 & 1) == 0) {
          uVar11 = param_2[-6];
          uVar15 = param_3[4];
          uVar14 = param_3[-2];
        }
        else {
          uVar11 = *param_3;
          uVar15 = param_3[4];
          uVar14 = param_3[6];
        }
LAB_00113d68:
        uVar3 = uVar11;
        if ((int)uVar15 <= (int)uVar11) {
          uVar3 = uVar15;
          uVar15 = uVar11;
        }
        if ((int)uVar14 <= (int)uVar3) {
          uVar14 = uVar3;
        }
        if ((int)uVar14 <= (int)uVar15) {
          uVar15 = uVar14;
        }
        uVar15 = uVar15 + local_60[0];
      }
      else {
        uVar15 = local_60[0];
        if ((param_4 >> 5 & 1) == 0) {
          uVar11 = param_2[-8];
          uVar15 = param_2[-6];
          uVar14 = param_2[-2];
          goto LAB_00113d68;
        }
      }
      *param_2 = uVar15;
      param_2[2] = uVar15;
      param_2[4] = uVar15;
    }
    iVar8 = iVar8 + 1;
    param_2[6] = uVar15;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    if (iVar8 == 2) {
      *(uint **)(param_1 + 2) = puVar7;
      *param_1 = (uint)uVar9;
      param_1[4] = (uint)uVar5;
      return;
    }
  } while( true );
}


