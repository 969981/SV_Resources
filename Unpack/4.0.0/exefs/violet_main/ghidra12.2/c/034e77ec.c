/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e77ec; name: FUN_034e77ec
 */


undefined4 FUN_034e77ec(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(uint *)(param_2 + 0x18) == 0) {
    return 0x501502f9;
  }
  plVar4 = *(long **)(param_2 + 0x10);
  uVar10 = 0x501502f9;
  plVar1 = plVar4 + *(uint *)(param_2 + 0x18);
  uVar2 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
  do {
    if (uVar2 != 0) {
      uVar3 = 0;
      uVar5 = (uint)*plVar4;
      if (uVar2 != 0) {
        uVar3 = uVar5 / uVar2;
      }
      for (plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                              (ulong)(uVar5 - uVar3 * uVar2) * 8); plVar8 != (long *)0x0;
          plVar8 = (long *)*plVar8) {
        if (plVar8[1] == *plVar4) {
          if ((plVar8[2] != 0) &&
             (lVar6 = *(long *)(plVar8[2] + 0x40), lVar6 != 0 && *(ushort *)(param_1 + 3) != 0)) {
            uVar7 = (ulong)*(ushort *)(param_1 + 3);
            pfVar9 = (float *)(*param_1 + 0x20);
            do {
              fVar12 = *(float *)(lVar6 + 0x7c) - pfVar9[-1];
              fVar13 = *(float *)(lVar6 + 0x80) - *pfVar9;
              fVar11 = *(float *)(lVar6 + 0x78) - pfVar9[-2];
              uVar10 = NEON_fminnm(uVar10,SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13)
                                          * (1.0 / *(float *)(lVar6 + 0x84)));
              uVar7 = uVar7 - 1;
              pfVar9 = pfVar9 + 10;
            } while (uVar7 != 0);
          }
          break;
        }
      }
    }
    plVar4 = plVar4 + 1;
    if (plVar4 == plVar1) {
      return uVar10;
    }
  } while( true );
}


