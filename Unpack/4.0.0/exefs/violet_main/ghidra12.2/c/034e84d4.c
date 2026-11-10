/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e84d4; name: FUN_034e84d4
 */


undefined4 FUN_034e84d4(float param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  byte bVar13;
  uint uVar14;
  ushort uVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined8 local_90;
  undefined1 local_88;
  
  uVar4 = DAT_048b07d0;
  if ((uint)DAT_048b07d0 < (DAT_048b0730 - DAT_048b07a8) + 1U) {
    if (DAT_048b07c8 == 0) {
      lVar12 = 0;
      fVar18 = 101.0;
      bVar3 = 0;
      uVar15 = 0;
      uVar14 = 2;
    }
    else {
      plVar2 = DAT_048b07c0 + DAT_048b07c8;
      fVar18 = 101.0;
      uVar15 = 0;
      bVar3 = 0;
      lVar12 = 0;
      uVar14 = 2;
      plVar16 = DAT_048b07c0;
      do {
        lVar17 = *plVar16;
        puVar1 = (uint *)(lVar17 + 699);
        uVar8 = *puVar1;
        if (((uVar8 >> 0x10 & 1) == 0) &&
           ((uVar8 & 0x6000000) == 0 && (*(ushort *)(lVar17 + 0x1b0) & 0x100) == 0)) {
          fVar19 = *(float *)(lVar17 + 0x2c0);
          uVar15 = uVar15 + 1;
          if (fVar19 <= param_1) {
            if ((uVar8 >> 7 & 1) == 0) {
              uVar8 = uVar8 | 0x80;
              *puVar1 = uVar8;
              plVar5 = *(long **)(lVar17 + 0x188);
              plVar10 = plVar5;
              if ((*(byte *)((long)plVar5 + 0xdb) >> 4 & 1) == 0) {
                do {
                  plVar11 = (long *)plVar10[0x13];
                  if (plVar11 == (long *)0x0) break;
                  plVar10 = plVar11;
                } while ((*(byte *)((long)plVar11 + 0xdb) >> 4 & 1) == 0);
              }
              bVar13 = *(byte *)(plVar10 + 0x1e);
              uVar7 = *(byte *)((long)plVar10 + 0xf1) & 0xf;
              if (uVar7 == 3) {
                uVar6 = (**(code **)(*plVar5 + 0x230))(plVar5,*(undefined8 *)(lVar17 + 0x240));
                uVar7 = 1;
                if ((uVar6 & 1) != 0) {
                  uVar7 = 2;
                }
                uVar8 = *puVar1;
              }
              *puVar1 = bVar13 >> 3 & 7 | uVar7 << 3 | uVar8 & 0xffffff80;
            }
            else {
              uVar7 = uVar8 >> 3 & 0xf;
            }
            if (uVar7 != 0) {
              lVar12 = lVar17;
              uVar14 = uVar7;
              fVar18 = fVar19;
            }
            bVar3 = bVar3 | (uVar15 <= uVar4 && uVar7 == 0);
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar2);
    }
    if (uVar4 <= uVar15) {
      if ((param_1 <= fVar18) || (lVar12 == 0)) {
        bVar13 = 0;
      }
      else if (uVar14 == 1) {
        uVar14 = *(uint *)(lVar12 + 699);
        if ((uVar14 >> 0x10 & 1) == 0) {
          *(uint *)(lVar12 + 699) = uVar14 & 0xfff00000 | uVar14 & 0xffff | 0x50000;
        }
        local_90 = 0x400000000;
        local_88 = 0;
        bVar13 = 1;
        FUN_034a30a4(lVar12,&local_90,1);
      }
      else {
        bVar13 = 1;
      }
      uVar9 = 0x50;
      if ((bool)(bVar3 | bVar13)) {
        uVar9 = 1;
      }
      return uVar9;
    }
  }
  return 1;
}


