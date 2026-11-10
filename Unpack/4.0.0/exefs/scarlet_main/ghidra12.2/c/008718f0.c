/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008718f0; name: FUN_008718f0
 */


uint FUN_008718f0(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_a0;
  float fStack_9c;
  ulong local_98;
  float local_90;
  float fStack_8c;
  ulong local_88;
  undefined4 local_80;
  byte *local_78;
  float local_70;
  float fStack_6c;
  ulong local_68;
  float local_60;
  float fStack_5c;
  ulong local_58;
  undefined4 local_50;
  byte *local_48;
  
  lVar16 = param_2[5];
  if (*(char *)(lVar16 + 3) < '\0') {
    lVar1 = (long)*(int *)(param_2 + 4) + 1;
    local_80 = (undefined4)lVar1;
    lVar16 = ((ulong)*(byte *)(lVar16 + 4) << 1 | ((ulong)*(byte *)(lVar16 + 3) & 0x7f) << 9) +
             (long)*(int *)(param_2 + 4);
    local_50 = (undefined4)lVar16;
    fVar21 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x1e0);
    local_78 = (byte *)((long)param_1 + lVar1 * 5 + *param_1);
    local_48 = (byte *)((long)param_1 + lVar16 * 5 + *param_1);
    bVar9 = *local_78 >> 4;
    fVar18 = (float)param_2[2];
    fVar22 = (float)*param_2;
    bVar10 = local_78[1] >> 4;
    fVar19 = (fVar18 - fVar22) * fVar21;
    fVar20 = ((float)((ulong)param_2[2] >> 0x20) - (float)((ulong)*param_2 >> 0x20)) *
             (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x1e0) >> 0x20);
    fVar21 = ((float)param_2[3] - (float)param_2[1]) * fVar21;
    bVar2 = local_78[2] & 0xf;
    bVar11 = *local_48 >> 4;
    bVar3 = *local_48 & 0xf;
    bVar8 = local_78[2] >> 4;
    bVar4 = *local_78 & 0xf;
    bVar12 = local_48[1] >> 4;
    bVar13 = local_48[2] >> 4;
    bVar5 = local_48[1] & 0xf;
    bVar6 = local_48[2] & 0xf;
    _local_a0 = CONCAT44((float)(byte)(bVar10 * bVar10) * fVar20 + *(float *)((long)param_2 + 4),
                         (float)(byte)(bVar9 * bVar9) * fVar19 + fVar22);
    bVar9 = local_78[1] & 0xf;
    local_98 = (ulong)(uint)((float)(byte)(bVar8 * bVar8) * fVar21 + *(float *)(param_2 + 1));
    _local_90 = CONCAT44(*(float *)((long)param_2 + 0x14) - (float)(byte)(bVar9 * bVar9) * fVar20,
                         fVar18 - (float)(byte)(bVar4 * bVar4) * fVar19);
    _local_60 = CONCAT44(*(float *)((long)param_2 + 0x14) - (float)(byte)(bVar5 * bVar5) * fVar20,
                         fVar18 - (float)(byte)(bVar3 * bVar3) * fVar19);
    _local_70 = CONCAT44((float)(byte)(bVar12 * bVar12) * fVar20 + *(float *)((long)param_2 + 4),
                         fVar22 + (float)(byte)(bVar11 * bVar11) * fVar19);
    local_68 = (ulong)(uint)((float)(byte)(bVar13 * bVar13) * fVar21 + *(float *)(param_2 + 1));
    local_88 = (ulong)(uint)(*(float *)(param_2 + 3) - (float)(byte)(bVar2 * bVar2) * fVar21);
    local_58 = (ulong)(uint)(*(float *)(param_2 + 3) - (float)(byte)(bVar6 * bVar6) * fVar21);
    uVar14 = FUN_008718f0(param_1,&local_a0,param_3);
    uVar15 = FUN_008718f0(param_1,&local_70,param_3);
    uVar7 = *(uint *)(param_2 + 4);
    uVar15 = uVar15 | uVar14;
    uVar14 = uVar7 + 0x1f;
    if (-1 < (int)uVar7) {
      uVar14 = uVar7;
    }
    uVar17 = -(ulong)((uint)((int)uVar14 >> 5) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)((int)uVar14 >> 5) << 2;
    *(uint *)(param_3 + uVar17) =
         *(uint *)(param_3 + uVar17) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU) |
         (uint)(uVar15 != 0) << (ulong)(uVar7 & 0x1f);
  }
  else {
    uVar14 = *(uint *)(param_2 + 4);
    uVar15 = uVar14 + 0x1f;
    if (-1 < (int)uVar14) {
      uVar15 = uVar14;
    }
    uVar15 = *(uint *)(param_3 + (long)((int)uVar15 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1;
  }
  return uVar15;
}


