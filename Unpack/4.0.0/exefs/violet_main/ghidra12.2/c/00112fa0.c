/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00112fa0; name: FUN_00112fa0
 */


void FUN_00112fa0(byte *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  if (param_3[4] == 0) {
    uVar9 = **(uint **)(param_3 + 2);
    uVar15 = uVar9 >> 1;
    *param_3 = uVar15;
    *(uint **)(param_3 + 2) = *(uint **)(param_3 + 2) + 1;
    uVar8 = 0x1f;
    param_3[4] = 0x1f;
  }
  else {
    uVar9 = *param_3;
    uVar15 = uVar9 >> 1;
    uVar6 = param_3[4] - 1;
    uVar8 = (ulong)uVar6;
    *param_3 = uVar15;
    param_3[4] = uVar6;
  }
  uVar6 = (uint)uVar8;
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
    if (8 < (int)param_4) {
      iVar16 = param_4 - 8;
      if (7 < uVar6) goto LAB_00113014;
      do {
        uVar17 = (uint)uVar8;
        uVar6 = **(uint **)(param_3 + 2);
        uVar15 = *param_3;
        *param_3 = uVar6 >> (ulong)(8 - uVar17 & 0x1f);
        param_3[4] = uVar17 + 0x18;
        uVar15 = uVar15 | uVar6 << (ulong)(uVar17 & 0x1f);
        *(uint **)(param_3 + 2) = *(uint **)(param_3 + 2) + 1;
        while( true ) {
          uVar9 = (uVar15 & 0xff) << (ulong)(param_2 & 0x1f) | uVar9;
          uVar15 = param_2 + 8;
          if (7 < param_2 + 8) {
            *param_1 = (byte)uVar9;
            uVar9 = uVar9 >> 8;
            uVar15 = param_2;
            param_1 = param_1 + 1;
          }
          param_2 = uVar15;
          if (iVar16 < 9) {
            param_4 = (param_4 - (param_4 - 9 & 0xfffffff8)) - 8;
            goto LAB_0011330c;
          }
          uVar6 = param_3[4];
          uVar8 = (ulong)uVar6;
          iVar16 = iVar16 + -8;
          if (uVar6 < 8) break;
LAB_00113014:
          uVar15 = *param_3;
          param_3[4] = uVar6 - 8;
          *param_3 = uVar15 >> 8;
        }
      } while( true );
    }
LAB_0011330c:
    if (param_4 != 0) {
      uVar15 = param_3[4];
      if (param_4 < uVar15 || param_4 - uVar15 == 0) {
        uVar6 = *param_3 & 0xffffffffU >> (ulong)(-param_4 & 0x1f);
        param_3[4] = uVar15 - param_4;
        *param_3 = *param_3 >> (ulong)(param_4 & 0x1f);
      }
      else {
        uVar17 = **(uint **)(param_3 + 2);
        uVar6 = *param_3;
        *param_3 = uVar17 >> (ulong)(param_4 - uVar15 & 0x1f);
        param_3[4] = (0x20 - param_4) + uVar15;
        uVar6 = (uVar6 | uVar17 << (ulong)(uVar15 & 0x1f)) & 0xffffffffU >> (ulong)(-param_4 & 0x1f)
        ;
        *(uint **)(param_3 + 2) = *(uint **)(param_3 + 2) + 1;
      }
      *param_1 = (byte)(uVar6 << (ulong)(param_2 & 0x1f)) | (byte)uVar9;
    }
  }
  else {
    uVar13 = (ulong)uVar15;
    puVar10 = *(uint **)(param_3 + 2);
    if (param_4 != 0) {
      uVar9 = 0;
      iVar16 = 0;
      uVar17 = 0;
      do {
        iVar7 = (int)uVar8;
        puVar12 = puVar10;
        if (uVar6 == 0) {
          puVar12 = puVar10 + 1;
          uVar13 = (ulong)*puVar10;
          iVar7 = 0x20;
        }
        uVar14 = uVar13 >> 1 & 0x7fffffff;
        uVar15 = iVar7 - 1;
        uVar8 = (ulong)uVar15;
        if ((uVar13 & 1) == 0) {
          puVar11 = puVar12;
          if (iVar16 == 3) {
            uVar9 = uVar9 ^ 1;
          }
          else {
            if (uVar15 == 0) {
              puVar11 = puVar12 + 1;
              uVar14 = (ulong)*puVar12;
              uVar15 = 0x20;
            }
            uVar9 = (uint)uVar14 & 1;
            uVar14 = (ulong)((uint)uVar14 >> 1);
            uVar8 = (ulong)(uVar15 - 1);
          }
          uVar1 = param_2 & 0x1f;
          uVar15 = param_4 - 1;
          uVar4 = param_2 + 1;
          uVar6 = (uint)uVar8;
          puVar10 = puVar11;
          if (uVar15 < 4) {
            if (uVar6 < uVar15) {
              puVar10 = puVar11 + 1;
              Hint_Prefetch(puVar11 + 0x100,0,0,0);
              uVar6 = uVar6 + 0x20;
              uVar14 = (ulong)*puVar11 << (uVar8 & 0x3f) | uVar14;
            }
            uVar3 = 0;
            uVar6 = uVar6 - uVar15;
            uVar5 = 0xffffffffU >> (ulong)(0x21 - param_4 & 0x1f) & (uint)uVar14;
            uVar14 = uVar14 >> ((ulong)uVar15 & 0x3f);
          }
          else {
            if (uVar6 < 4) {
              puVar10 = puVar11 + 1;
              Hint_Prefetch(puVar11 + 0x100,0,0,0);
              uVar6 = uVar6 + 0x20;
              uVar14 = (ulong)*puVar11 << (uVar8 & 0x3f) | uVar14;
            }
            uVar5 = (uint)uVar14 & 0xf;
            uVar14 = uVar14 >> 4;
            uVar6 = uVar6 - 4;
            uVar3 = param_4 - 5;
            param_4 = 5;
          }
          uVar15 = (uint)uVar14;
          uVar8 = (ulong)uVar6;
          param_2 = param_4 + param_2;
          uVar17 = uVar9 << (ulong)uVar1 | uVar17 | uVar5 << (ulong)(uVar4 & 0x1f);
          if (7 < param_2) {
            *param_1 = (byte)uVar17;
            iVar16 = 2;
LAB_001130d0:
            uVar17 = uVar17 >> 8;
            param_2 = param_2 - 8;
            param_1 = param_1 + 1;
            goto LAB_001130d4;
          }
          iVar16 = 2;
          uVar13 = uVar14;
          param_4 = uVar3;
        }
        else {
          puVar10 = puVar12;
          if (param_4 < 4) {
            uVar6 = 2;
joined_r0x001132fc:
            if (iVar16 != 3) goto LAB_001131ac;
LAB_0011311c:
            uVar3 = uVar6 + 1;
            uVar9 = uVar9 ^ 1;
          }
          else {
            if (7 < param_4) {
              uVar6 = 4;
              if (0xf < param_4) {
                uVar6 = 5;
              }
              goto joined_r0x001132fc;
            }
            uVar6 = 4;
            if (iVar16 == 3) goto LAB_0011311c;
LAB_001131ac:
            uVar3 = uVar6 + 2;
            if (uVar15 == 0) {
              puVar10 = puVar12 + 1;
              uVar14 = (ulong)*puVar12;
              uVar15 = 0x20;
            }
            uVar9 = (uint)uVar14 & 1;
            uVar14 = (ulong)((uint)uVar14 >> 1);
            uVar8 = (ulong)(uVar15 - 1);
          }
          uVar15 = (uint)uVar8;
          uVar4 = param_4;
          if (uVar3 <= param_4) {
            uVar4 = uVar3;
          }
          if (param_4 - uVar4 == 0) {
            uVar3 = 0;
          }
          else {
            puVar12 = puVar10;
            if (uVar15 < uVar6) {
              puVar12 = puVar10 + 1;
              Hint_Prefetch(puVar10 + 0x100,0,0,0);
              uVar15 = uVar15 + 0x20;
              uVar14 = (ulong)*puVar10 << (uVar8 & 0x3f) | uVar14;
            }
            uVar1 = 0xffffffffU >> (ulong)(-uVar6 & 0x1f) & (uint)uVar14;
            uVar14 = uVar14 >> uVar6;
            uVar3 = (param_4 - uVar4) - uVar1;
            uVar8 = (ulong)(uVar15 - uVar6);
            uVar4 = uVar1 + uVar4;
            iVar16 = 3;
            if (uVar1 == ~(-1 << uVar6)) {
              iVar16 = 1;
            }
            puVar10 = puVar12;
          }
          if (8 < uVar4) {
            pbVar2 = param_1;
            uVar15 = uVar4;
            do {
              uVar6 = uVar17 | (-uVar9 & 0xff) << (ulong)(param_2 & 0x1f);
              uVar15 = uVar15 - 8;
              uVar17 = uVar6 >> 8;
              param_1 = pbVar2 + 1;
              *pbVar2 = (byte)uVar6;
              pbVar2 = param_1;
            } while (8 < uVar15);
            uVar4 = (uVar4 - (uVar4 - 9 & 0xfffffff8)) - 8;
          }
          uVar15 = param_2 & 0x1f;
          param_2 = uVar4 + param_2;
          uVar17 = (-uVar9 & 0xff & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)) << (ulong)uVar15 |
                   uVar17;
          if (7 < param_2) {
            *param_1 = (byte)uVar17;
            goto LAB_001130d0;
          }
LAB_001130d4:
          uVar6 = (uint)uVar8;
          uVar15 = (uint)uVar14;
          uVar13 = uVar14;
          param_4 = uVar3;
        }
        if (param_4 == 0) goto LAB_00113364;
        uVar6 = (uint)uVar8;
      } while( true );
    }
    uVar17 = 0;
LAB_00113364:
    *(uint **)(param_3 + 2) = puVar10;
    *param_3 = uVar15;
    param_3[4] = uVar6;
    if (param_2 != 0) {
      *param_1 = (byte)uVar17;
      return;
    }
  }
  return;
}


