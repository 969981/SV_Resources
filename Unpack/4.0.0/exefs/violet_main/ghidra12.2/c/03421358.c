/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03421358; name: FUN_03421358
 */


void FUN_03421358(float param_1,long param_2,long param_3,long param_4,uint param_5,long param_6,
                 undefined8 param_7,float *param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  if (*(int *)(param_4 + 0xb0) == 0) {
    uVar14 = 0;
  }
  else {
    lVar7 = *(long *)(param_4 + 0xa8);
    fVar15 = 1.0 - param_1;
    uVar14 = 0x7f7fffff;
    do {
      uVar5 = 4;
      if (*(float *)(lVar7 + 0x7c) < 0.001) {
        uVar5 = 1;
      }
      puVar4 = (undefined8 *)FUN_034ebdd8(param_7,uVar5,1);
      if (puVar4 != (undefined8 *)0x0) {
        if (PTR_DAT_047e6e68[0x1a] == '\0') {
          local_98 = *(undefined8 *)(param_2 + 0x24);
          fVar8 = *(float *)(lVar7 + 0x6c);
          fVar11 = *(float *)(lVar7 + 0x70);
          fVar9 = *(float *)(lVar7 + 0x74);
          local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_2 + 0x2c));
          local_88._0_4_ = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
        }
        else {
          local_98 = *(undefined8 *)(lVar7 + 0x138);
          local_90 = *(undefined8 *)(lVar7 + 0x140);
          local_88 = *(undefined8 *)(lVar7 + 0x148);
          fVar8 = *(float *)(lVar7 + 0x150);
          fVar11 = *(float *)(lVar7 + 0x154);
          fVar9 = *(float *)(lVar7 + 0x158);
        }
        if (0.0 < param_1) {
          fVar8 = fVar8 * param_1 + fVar15 * *param_8;
          fVar11 = fVar11 * param_1 + fVar15 * param_8[1];
          fVar9 = fVar9 * param_1 + fVar15 * param_8[2];
        }
        fVar13 = *(float *)(lVar7 + 0x7c);
        fVar12 = *(float *)(param_4 + 0xc4);
        fVar10 = *(float *)(param_4 + 200);
        uVar6 = *(undefined8 *)(*(long *)(param_6 + 8) + 0x78);
        uVar2 = *(undefined4 *)(lVar7 + 0x8c);
        uVar3 = *(uint *)(lVar7 + 0x90);
        *(float *)(puVar4 + 3) = fVar8;
        *(float *)((long)puVar4 + 0x1c) = fVar11;
        *puVar4 = local_98;
        puVar4[1] = local_90;
        puVar4[2] = local_88;
        *(undefined4 *)(puVar4 + 0xb) = 0xffffffff;
        *(uint *)((long)puVar4 + 0x5c) = uVar3 & 0xff000000 ^ uVar3 << 8 | param_5 & 0xff;
        *(float *)((long)puVar4 + 0x3c) = fVar10 * 100.0;
        *(float *)(puVar4 + 4) = fVar9;
        *(float *)(puVar4 + 8) = fVar12 * 100.0;
        *(undefined4 *)((long)puVar4 + 0x4c) = uVar2;
        *(undefined4 *)(puVar4 + 10) = uVar2;
        puVar4[0xc] = uVar6;
        *(float *)((long)puVar4 + 0x44) = fVar13 * 100.0;
        *(undefined4 *)(puVar4 + 9) = 0;
        FUN_03447c20(param_6,*(undefined8 *)(param_3 + 0x28));
        FUN_034211b4(0,param_2,param_3,uVar5 | 8,param_7);
      }
      puVar1 = (undefined4 *)(lVar7 + 0x7c);
      lVar7 = lVar7 + 0x160;
      uVar14 = NEON_fminnm(*puVar1,uVar14);
    } while (lVar7 != *(long *)(param_4 + 0xa8) + (ulong)*(uint *)(param_4 + 0xb0) * 0x160);
  }
  *(undefined4 *)(param_4 + 0xc0) = uVar14;
  return;
}


