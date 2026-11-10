/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00875468; name: FUN_00875468
 */


void FUN_00875468(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  byte local_290 [4];
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  float local_27c;
  float fStack_278;
  undefined8 local_274;
  undefined4 local_26c;
  float local_268;
  float fStack_264;
  undefined8 local_260;
  undefined4 local_258;
  float local_254;
  float fStack_250;
  undefined8 local_24c;
  undefined4 local_244;
  float local_240;
  float fStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  float local_22c;
  float fStack_228;
  undefined8 local_224;
  undefined4 local_21c;
  float local_218;
  float fStack_214;
  byte local_210;
  undefined4 local_20c;
  byte local_208 [4];
  uint local_204 [3];
  undefined8 local_1f8 [2];
  float local_1e8 [3];
  undefined8 local_1dc;
  float local_1d4 [3];
  undefined8 local_1c8;
  float local_1c0 [3];
  undefined8 local_1b4;
  float local_1ac [3];
  undefined1 local_1a0;
  undefined8 local_19c;
  undefined8 local_190;
  undefined1 local_138;
  undefined8 local_134;
  undefined8 local_128;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  byte local_68;
  float local_64 [12];
  float local_34;
  byte local_30;
  undefined1 local_2f;
  undefined8 local_28;
  
  lVar6 = *(long *)(param_1 + 0x418);
  if (lVar6 != 0) {
    local_208[0] = 0;
    local_204[0] = 4;
    local_204[1] = 0x3f800000;
    local_1f8[0] = 0;
    local_1a0 = 0;
    local_19c = 0x3f80000000000004;
    local_190 = 0;
    local_138 = 0;
    local_134 = 0x3f80000000000004;
    local_128 = 0;
    local_d0 = 0;
    local_cc = 0x3f80000000000004;
    local_c0 = 0;
    bVar5 = *(byte *)(param_1 + 0x274);
    local_290[0] = ~bVar5 & 1;
    local_210 = (bVar5 >> 1 ^ 0xff) & 1;
    local_68 = (bVar5 >> 2 ^ 0xff) & 1;
    local_30 = (bVar5 >> 3 ^ 0xff) & 1;
    lVar7 = *(long *)(param_1 + 0x28);
    if ((bVar5 & 1) == 0) {
      local_28c = *(undefined4 *)(lVar7 + 0x648);
    }
    else {
      local_28c = 0;
    }
    local_27c = -*(float *)(lVar7 + 0x650);
    local_288 = *(undefined8 *)(lVar7 + 0x658);
    local_280 = *(undefined4 *)(lVar7 + 0x660);
    fStack_278 = -*(float *)(lVar7 + 0x654);
    local_274 = *(undefined8 *)(lVar7 + 0x730);
    local_26c = *(undefined4 *)(lVar7 + 0x738);
    local_268 = -*(float *)(lVar7 + 0x728);
    fStack_264 = -*(float *)(lVar7 + 0x72c);
    local_260 = *(undefined8 *)(lVar7 + 0x808);
    local_258 = *(undefined4 *)(lVar7 + 0x810);
    local_254 = -*(float *)(lVar7 + 0x800);
    fStack_250 = -*(float *)(lVar7 + 0x804);
    local_24c = *(undefined8 *)(lVar7 + 0x8e0);
    local_244 = *(undefined4 *)(lVar7 + 0x8e8);
    local_240 = -*(float *)(lVar7 + 0x8d8);
    fStack_23c = -*(float *)(lVar7 + 0x8dc);
    local_238 = *(undefined8 *)(lVar7 + 0x9b8);
    local_230 = *(undefined4 *)(lVar7 + 0x9c0);
    local_22c = -*(float *)(lVar7 + 0x9b0);
    fStack_228 = -*(float *)(lVar7 + 0x9b4);
    local_224 = *(undefined8 *)(lVar7 + 0xa90);
    local_21c = *(undefined4 *)(lVar7 + 0xa98);
    local_218 = -*(float *)(lVar7 + 0xa88);
    fStack_214 = -*(float *)(lVar7 + 0xa8c);
    if (local_210 == 0) {
      local_20c = 0;
    }
    else {
      local_20c = *(undefined4 *)(lVar7 + 0xba8);
    }
    lVar8 = 0;
    lVar13 = 0;
    lVar15 = 7000;
    lVar10 = 0;
    do {
      lVar2 = lVar10 + 0x68;
      *(uint *)((long)local_204 + lVar10) = (uint)*(ushort *)(lVar7 + lVar13 * 2 + 0xbbc);
      uVar12 = (uint)lVar13;
      lVar13 = lVar13 + 1;
      local_208[lVar10] = (byte)(*(uint *)(lVar7 + 3000) >> (ulong)(uVar12 & 0x1f)) & 1;
      lVar3 = lVar7 + lVar8;
      lVar8 = lVar8 + 0x360;
      *(undefined4 *)((long)local_204 + lVar10 + 4) = *(undefined4 *)(lVar7 + 0x1a98);
      fVar16 = *(float *)(lVar3 + 0xbc8);
      fVar17 = *(float *)(lVar3 + 0xbcc);
      uVar4 = *(undefined4 *)(lVar3 + 0xbd8);
      *(undefined8 *)((long)local_1f8 + lVar10 + 8) = *(undefined8 *)(lVar3 + 0xbd0);
      *(undefined4 *)((long)local_1e8 + lVar10) = uVar4;
      *(float *)((long)local_1e8 + lVar10 + 4) = -fVar16;
      *(float *)((long)local_1e8 + lVar10 + 8) = -fVar17;
      *(undefined4 *)((long)local_204 + lVar10 + 4) = *(undefined4 *)(lVar7 + 0x1d08);
      fVar16 = *(float *)(lVar3 + 0xca0);
      fVar17 = *(float *)(lVar3 + 0xca4);
      uVar4 = *(undefined4 *)(lVar3 + 0xcb0);
      *(undefined8 *)((long)local_1e8 + lVar10 + 0xc) = *(undefined8 *)(lVar3 + 0xca8);
      *(undefined4 *)((long)local_1d4 + lVar10) = uVar4;
      *(float *)((long)local_1d4 + lVar10 + 4) = -fVar16;
      *(float *)((long)local_1d4 + lVar10 + 8) = -fVar17;
      *(undefined4 *)((long)local_204 + lVar10 + 4) = *(undefined4 *)(lVar7 + 0x1f78);
      fVar16 = *(float *)(lVar3 + 0xd78);
      fVar17 = *(float *)(lVar3 + 0xd7c);
      uVar4 = *(undefined4 *)(lVar3 + 0xd88);
      *(undefined8 *)((long)local_1d4 + lVar10 + 0xc) = *(undefined8 *)(lVar3 + 0xd80);
      *(undefined4 *)((long)local_1c0 + lVar10) = uVar4;
      *(float *)((long)local_1c0 + lVar10 + 4) = -fVar16;
      *(float *)((long)local_1c0 + lVar10 + 8) = -fVar17;
      *(undefined4 *)((long)local_204 + lVar10 + 4) = *(undefined4 *)(lVar7 + 0x21e8);
      fVar16 = *(float *)(lVar3 + 0xe50);
      fVar17 = *(float *)(lVar3 + 0xe54);
      uVar4 = *(undefined4 *)(lVar3 + 0xe60);
      *(undefined8 *)((long)local_1c0 + lVar10 + 0xc) = *(undefined8 *)(lVar3 + 0xe58);
      *(undefined4 *)((long)local_1ac + lVar10) = uVar4;
      *(float *)((long)local_1ac + lVar10 + 4) = -fVar16;
      *(float *)((long)local_1ac + lVar10 + 8) = -fVar17;
      puVar1 = (undefined8 *)(lVar7 + lVar15);
      lVar15 = lVar15 + 0x270;
      *(undefined8 *)((long)local_1f8 + lVar10) = *puVar1;
      lVar10 = lVar2;
    } while (lVar2 != 0x1a0);
    local_34 = 0.0;
    uVar9 = (ulong)*(byte *)(param_1 + 0x3e0);
    if (*(byte *)(param_1 + 0x3e0) == 0) {
      uVar12 = 0;
      local_34 = 0.0;
    }
    else {
      uVar12 = 0;
      pfVar11 = (float *)(lVar7 + 0x1e8);
      pfVar14 = local_64;
      do {
        *pfVar14 = *pfVar11;
        if (pfVar11[-0xf] != 4.2039e-45) {
          uVar12 = uVar12 + 1;
          local_34 = local_34 + *pfVar11;
        }
        pfVar11 = pfVar11 + 1;
        pfVar14 = pfVar14 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    local_34 = local_34 / (float)uVar12;
    local_2f = false;
    if (local_30 != 0) {
      local_2f = *(int *)(lVar7 + 0x260) == 2;
    }
    local_28 = *(undefined8 *)(lVar7 + 0x5a0);
    FUN_0087a310(lVar6,local_290);
  }
  return;
}


