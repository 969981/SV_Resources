/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ac0e8; name: FUN_008ac0e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ac0e8(long *param_1,long param_2,int param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_f0;
  float fStack_ec;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_78;
  float fStack_74;
  
  lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_f0);
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_c0);
  local_78 = (float)(**(code **)(*(long *)*param_1 + 0x70))();
  if ((*(byte *)(*param_1 + 0x5b) & 3) == 2) {
    local_78 = local_78 + (float)local_c0;
  }
  else {
    if ((*(byte *)(*param_1 + 0x5b) & 3) == 0) {
      local_78 = (float)local_c0;
      goto LAB_008ac1a8;
    }
    local_78 = (float)local_c0 - local_78;
  }
  local_c0 = local_c0 & 0xffffffff00000000;
LAB_008ac1a8:
  fVar6 = *param_6;
  fVar7 = 0.0;
  local_78 = local_78 - (fVar6 - local_f0) * 0.5;
  local_c0 = CONCAT44(local_c0._4_4_,local_78);
  fVar8 = param_6[1];
  fStack_74 = local_c0._4_4_ + (fVar8 - fStack_ec) * 0.5;
  fVar11 = 0.0;
  if (0.0 < param_4[1]) {
    fVar11 = *param_4 * (*(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390);
    fVar7 = cosf(fVar11);
    fVar7 = fVar7 * param_4[1];
    fVar11 = sinf(fVar11);
    fVar11 = fVar11 * param_4[1];
    local_78 = local_78 - fVar7;
    fStack_74 = fStack_74 - fVar11;
    fVar6 = *param_6;
    fVar8 = param_6[1];
  }
  puVar1 = (ulong *)(lVar5 + param_3);
  local_a0 = (fVar7 / fVar6) * *param_7;
  local_c0 = DAT_03d0f984;
  uStack_b8 = DAT_03d0f98c;
  local_8c = (fVar11 / fVar8) * param_7[1];
  local_b0 = DAT_03d0f994;
  uStack_a8 = DAT_03d0f99c;
  local_98 = (*param_8 + 1.0) - local_a0;
  local_a0 = (0.0 - *param_8) - local_a0;
  fStack_9c = local_8c + (0.0 - param_8[1]);
  local_8c = local_8c + param_8[1] + 1.0;
  *(undefined2 *)(param_2 + 0x188) = 0x100;
  local_94 = fStack_9c;
  fStack_90 = local_a0;
  fStack_88 = local_98;
  local_84 = local_8c;
  if (((param_1[0xb] == 0) || ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) ||
     ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) == 0)) {
    FUN_00892a80(param_2,puVar1,&local_78,param_6,2,&local_c0);
  }
  else {
    FUN_00892a80(param_2,puVar1,param_5,param_6,2,&local_c0);
    fVar7 = *param_5;
    fVar6 = param_5[1];
    fVar8 = *param_6;
    fVar9 = param_6[1];
    fVar10 = 1.0 / ((fVar7 + fVar8) - fVar7);
    fVar11 = 1.0 / ((fVar6 - fVar9) - fVar6);
    FUN_008b4f90(&local_f0,param_2);
    puVar1[1] = (ulong)(uint)(fVar10 * -(fVar7 + fVar7 + fVar8)) << 0x20;
    *puVar1 = (ulong)(uint)(fVar10 + fVar10);
    puVar1[3] = (ulong)(uint)(fVar11 * -(fVar6 + (fVar6 - fVar9))) << 0x20;
    puVar1[2] = (ulong)(uint)(fVar11 + fVar11) << 0x20;
    uVar4 = _UNK_03cabe58;
    uVar3 = _DAT_03cabe50;
    uVar2 = _DAT_03cab5b0;
    puVar1[5] = _UNK_03cab5b8;
    puVar1[4] = uVar2;
    puVar1[7] = uVar4;
    puVar1[6] = uVar3;
    puVar1[0xd] = uStack_c8;
    puVar1[0xc] = local_d0;
    puVar1[9] = uStack_e8;
    puVar1[8] = CONCAT44(fStack_ec,local_f0);
    puVar1[0xb] = uStack_d8;
    puVar1[10] = uStack_e0;
  }
  return;
}


