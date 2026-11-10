/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087b010; name: FUN_0087b010
 */


void FUN_0087b010(float param_1,float param_2,float param_3,float param_4,float param_5,
                 long *param_6)

{
  undefined4 *puVar1;
  long lVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar4 = *(uint *)((long)param_6 + 0xc);
  fVar5 = -param_4;
  fVar6 = -param_5;
  if (((uVar4 & 1) != 0) && (pfVar3 = (float *)*param_6, pfVar3 != (float *)0x0)) {
    fVar8 = fVar5 * param_3;
    pfVar3[0x15] = fVar8;
    fVar9 = param_4 * param_4;
    *pfVar3 = param_1;
    pfVar3[1] = param_1;
    pfVar3[2] = param_1;
    pfVar3[3] = param_1;
    pfVar3[4] = 0.0;
    pfVar3[5] = 0.0;
    pfVar3[6] = 0.0;
    pfVar3[8] = 0.0;
    pfVar3[9] = 0.0;
    pfVar3[0xc] = 0.0;
    pfVar3[0x10] = param_2;
    pfVar3[0x14] = param_3;
    fVar7 = fVar6 * param_2;
    pfVar3[0x16] = fVar8 * fVar5 + fVar6 * param_3;
    fVar10 = param_3 - param_2 * param_4;
    pfVar3[0x19] = fVar9 - param_5;
    pfVar3[0x17] = fVar8 * (fVar6 + fVar6) - fVar8 * fVar5 * param_4;
    pfVar3[0x11] = fVar10;
    fVar10 = fVar7 - param_4 * fVar10;
    pfVar3[0x12] = fVar10;
    pfVar3[0x1a] = fVar9 * fVar5 - param_4 * param_5 * -2.0;
    fVar11 = param_2 - param_1 * param_4;
    pfVar3[7] = fVar11;
    pfVar3[10] = fVar11;
    pfVar3[0xd] = fVar11;
    fVar8 = param_5 * param_4;
    pfVar3[0x18] = fVar5;
    pfVar3[0x13] = fVar6 * param_3 - param_4 * (fVar10 + fVar7);
    pfVar3[0x1c] = fVar6;
    pfVar3[0x1d] = fVar8;
    fVar10 = param_3 - (fVar11 * param_4 + param_1 * param_5);
    pfVar3[0xf] = (fVar7 + param_1 * fVar8) - param_4 * fVar10;
    pfVar3[0x1b] = (param_5 * param_5 + fVar9 * param_5 * -3.0) - param_4 * fVar9 * fVar5;
    pfVar3[0x1e] = fVar8 * fVar5 + param_5 * param_5;
    pfVar3[0xb] = fVar10;
    pfVar3[0xe] = fVar10;
    pfVar3[0x1f] = fVar8 * param_5 * -2.0 - fVar8 * fVar5 * param_4;
    uVar4 = *(uint *)((long)param_6 + 0xc);
  }
  if (((uVar4 >> 1 & 1) != 0) && (*param_6 != 0)) {
    fVar7 = param_2 - param_1 * param_4;
    puVar1 = (undefined4 *)(*param_6 + (ulong)((uVar4 & 1) << 5) * 4);
    *puVar1 = 0;
    puVar1[5] = fVar7;
    puVar1[7] = fVar7;
    fVar7 = param_3 - param_2 * param_4;
    puVar1[9] = fVar7;
    puVar1[0xb] = fVar7;
    puVar1[0xd] = fVar5 * param_3;
    puVar1[0xf] = fVar5 * param_3;
    fVar7 = param_4 * param_4 - param_5;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    puVar1[3] = param_1;
    puVar1[4] = param_1;
    puVar1[6] = param_1;
    puVar1[8] = param_2;
    puVar1[10] = param_2;
    puVar1[0xc] = param_3;
    puVar1[0xe] = param_3;
    puVar1[0x10] = fVar5;
    puVar1[0x11] = fVar7;
    puVar1[0x12] = fVar5;
    puVar1[0x13] = fVar7;
    puVar1[0x14] = fVar6;
    puVar1[0x15] = param_5 * param_4;
    puVar1[0x16] = fVar6;
    puVar1[0x17] = param_5 * param_4;
    uVar4 = *(uint *)((long)param_6 + 0xc);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar2 = 0;
    if ((uVar4 & 2) != 0) {
      lVar2 = 0x60;
    }
    if (*param_6 != 0) {
      pfVar3 = (float *)(*param_6 + (ulong)((uVar4 & 1) << 5) * 4 + lVar2);
      *pfVar3 = param_1;
      pfVar3[1] = param_2;
      pfVar3[2] = param_3;
      pfVar3[3] = fVar5;
      pfVar3[4] = fVar6;
    }
  }
  return;
}


