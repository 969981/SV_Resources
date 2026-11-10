/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01243e3c; name: FUN_01243e3c
 */


void FUN_01243e3c(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ushort local_78 [12];
  
  lVar9 = *param_3;
  bVar2 = *(byte *)(lVar9 + 0xa6);
  uVar16 = (ulong)bVar2;
  if (uVar16 != 0) {
    lVar14 = 0;
    uVar11 = uVar16;
    while( true ) {
      if ((uint)lVar14 < (uint)uVar11) {
        uVar8 = *(undefined8 *)(lVar9 + lVar14 * 8);
      }
      else {
        uVar8 = 0;
      }
      uVar6 = FUN_01244194(*(undefined8 *)(param_1 + 0x38),uVar8,1);
      local_78[lVar14] = uVar6;
      if (uVar16 - 1 == lVar14) break;
      lVar9 = *param_3;
      lVar14 = lVar14 + 1;
      uVar11 = (ulong)*(byte *)(lVar9 + 0xa6);
    }
    uVar15 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar15 = 1;
    }
    uVar11 = 1;
    uVar17 = 0;
    do {
      uVar1 = uVar17 + 1;
      if (uVar1 < uVar16) {
        uVar6 = local_78[uVar17];
        uVar3 = local_78[uVar11];
        if (uVar6 < uVar3) {
LAB_01243ef0:
          if ((uVar17 < 0xb) && (((uint)uVar11 & 0xff) < 0xb)) {
            lVar10 = *param_3;
            uVar12 = uVar11 & 0xff;
            lVar9 = lVar10 + 0x58;
            lVar14 = lVar10 + 0x90;
            uVar8 = *(undefined8 *)(lVar10 + uVar17 * 8);
            uVar4 = *(undefined2 *)(lVar9 + uVar17 * 2);
            uVar5 = *(undefined2 *)(lVar14 + uVar17 * 2);
            *(undefined8 *)(lVar10 + uVar17 * 8) = *(undefined8 *)(lVar10 + uVar12 * 8);
            *(undefined2 *)(lVar9 + uVar17 * 2) = *(undefined2 *)(lVar9 + uVar12 * 2);
            *(undefined2 *)(lVar14 + uVar17 * 2) = *(undefined2 *)(lVar14 + uVar12 * 2);
            *(undefined8 *)(lVar10 + uVar12 * 8) = uVar8;
            *(undefined2 *)(lVar9 + uVar12 * 2) = uVar4;
            *(undefined2 *)(lVar14 + uVar12 * 2) = uVar5;
          }
          local_78[uVar17] = uVar3;
          local_78[uVar11] = uVar6;
        }
        else if (uVar6 == uVar3) {
          uVar8 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
          iVar7 = FUN_012440f0(uVar8,2);
          if (iVar7 != 0) goto LAB_01243ef0;
        }
        uVar12 = uVar11 + 1;
        if (uVar12 != uVar16) {
          uVar6 = local_78[uVar17];
          uVar3 = local_78[uVar12];
          if (uVar6 < uVar3) {
LAB_01243f70:
            if ((uVar17 < 0xb) && (((uint)uVar12 & 0xff) < 0xb)) {
              lVar10 = *param_3;
              uVar13 = uVar12 & 0xff;
              lVar9 = lVar10 + 0x58;
              lVar14 = lVar10 + 0x90;
              uVar8 = *(undefined8 *)(lVar10 + uVar17 * 8);
              uVar4 = *(undefined2 *)(lVar9 + uVar17 * 2);
              uVar5 = *(undefined2 *)(lVar14 + uVar17 * 2);
              *(undefined8 *)(lVar10 + uVar17 * 8) = *(undefined8 *)(lVar10 + uVar13 * 8);
              *(undefined2 *)(lVar9 + uVar17 * 2) = *(undefined2 *)(lVar9 + uVar13 * 2);
              *(undefined2 *)(lVar14 + uVar17 * 2) = *(undefined2 *)(lVar14 + uVar13 * 2);
              *(undefined8 *)(lVar10 + uVar13 * 8) = uVar8;
              *(undefined2 *)(lVar9 + uVar13 * 2) = uVar4;
              *(undefined2 *)(lVar14 + uVar13 * 2) = uVar5;
            }
            local_78[uVar17] = uVar3;
            local_78[uVar12] = uVar6;
          }
          else if (uVar6 == uVar3) {
            uVar8 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
            iVar7 = FUN_012440f0(uVar8,2);
            if (iVar7 != 0) goto LAB_01243f70;
          }
          for (uVar12 = uVar11 + 2; uVar12 != uVar16; uVar12 = uVar12 + 1) {
            uVar6 = local_78[uVar17];
            uVar3 = local_78[uVar12];
            if (uVar6 < uVar3) {
LAB_01244060:
              if ((uVar17 < 0xb) && (((uint)uVar12 & 0xff) < 0xb)) {
                lVar10 = *param_3;
                uVar13 = uVar12 & 0xff;
                lVar9 = lVar10 + 0x58;
                lVar14 = lVar10 + 0x90;
                uVar8 = *(undefined8 *)(lVar10 + uVar17 * 8);
                uVar4 = *(undefined2 *)(lVar9 + uVar17 * 2);
                uVar5 = *(undefined2 *)(lVar14 + uVar17 * 2);
                *(undefined8 *)(lVar10 + uVar17 * 8) = *(undefined8 *)(lVar10 + uVar13 * 8);
                *(undefined2 *)(lVar9 + uVar17 * 2) = *(undefined2 *)(lVar9 + uVar13 * 2);
                *(undefined2 *)(lVar14 + uVar17 * 2) = *(undefined2 *)(lVar14 + uVar13 * 2);
                *(undefined8 *)(lVar10 + uVar13 * 8) = uVar8;
                *(undefined2 *)(lVar9 + uVar13 * 2) = uVar4;
                *(undefined2 *)(lVar14 + uVar13 * 2) = uVar5;
              }
              local_78[uVar17] = uVar3;
              local_78[uVar12] = uVar6;
            }
            else if (uVar6 == uVar3) {
              uVar8 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
              iVar7 = FUN_012440f0(uVar8,2);
              if (iVar7 != 0) goto LAB_01244060;
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar17 = uVar1;
    } while (uVar1 != uVar15);
  }
  return;
}


