/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352ced4; name: FUN_0352ced4
 */


void FUN_0352ced4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  
  if ((param_4 & 1) == 0) {
    for (lVar16 = *(long *)(param_2 + 0x150); lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x180)) {
      FUN_034a43c0(param_1,lVar16 + 0x160,param_3,0);
      uVar10 = *(uint *)(lVar16 + 0x168);
      if (uVar10 == 0) {
        *(undefined1 *)(lVar16 + 0x50) = 0;
      }
      else {
        uVar14 = (ulong)uVar10 * 0x18 - 0x18;
        lVar13 = *(long *)(lVar16 + 0x160);
        uVar9 = ((uint)(uVar14 / 0x18) & 0xfffffff) + 1;
        lVar12 = lVar13;
        if ((uVar9 & 7) == 0) {
          fVar17 = 1.0;
        }
        else {
          fVar17 = 1.0;
          lVar15 = -((ulong)uVar9 & 7);
          do {
            pfVar1 = (float *)(lVar12 + 0x10);
            lVar12 = lVar12 + 0x18;
            fVar17 = *pfVar1 * fVar17;
            bVar11 = lVar15 != -1;
            lVar15 = lVar15 + 1;
          } while (bVar11);
        }
        if (0xa7 < uVar14) {
          do {
            pfVar1 = (float *)(lVar12 + 0x10);
            pfVar2 = (float *)(lVar12 + 0x28);
            pfVar3 = (float *)(lVar12 + 0x40);
            pfVar4 = (float *)(lVar12 + 0x70);
            pfVar5 = (float *)(lVar12 + 0x58);
            pfVar6 = (float *)(lVar12 + 0x88);
            pfVar7 = (float *)(lVar12 + 0xb8);
            pfVar8 = (float *)(lVar12 + 0xa0);
            lVar12 = lVar12 + 0xc0;
            fVar17 = *pfVar1 * fVar17 * *pfVar2 * *pfVar3 * *pfVar5 * *pfVar4 * *pfVar6 *
                     *pfVar8 * *pfVar7;
          } while (lVar13 + (ulong)uVar10 * 0x18 != lVar12);
        }
        *(bool *)(lVar16 + 0x50) = fVar17 == 0.0;
        if (fVar17 == 0.0) {
          FUN_0344c49c(*(undefined8 *)(lVar16 + 0xb8),lVar16);
        }
      }
    }
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    for (lVar16 = *(long *)(*(long *)(param_2 + 0x90) + 0x10); lVar16 != 0;
        lVar16 = *(long *)(lVar16 + 0x48)) {
      FUN_034a43c0(param_1,lVar16 + 0x1d8,param_3,0);
      (**(code **)(*(long *)(lVar16 + -0x18) + 0x70))((long *)(lVar16 + -0x18));
    }
  }
  return;
}


