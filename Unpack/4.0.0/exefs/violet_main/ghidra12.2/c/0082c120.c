/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0082c120; name: FUN_0082c120
 */


bool FUN_0082c120(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  local_30 = *(undefined8 *)(param_1 + 0x40);
  if (*(char *)(param_4 + 1) == '\x04') {
    iVar3 = *(int *)(param_2 + 8);
    lVar2 = 0;
    if (iVar3 != 0) {
      lVar2 = (long)iVar3 + param_2 + 8;
    }
    puVar4 = (undefined8 *)(lVar2 + (ulong)*(byte *)((long)param_4 + 5) * 0x10);
    uVar8 = puVar4[1];
    uVar7 = *puVar4;
    fVar10 = (float)uVar7 * (float)local_30;
    fVar11 = (float)((ulong)uVar7 >> 0x20) * (float)((ulong)local_30 >> 0x20);
    fVar12 = (float)uVar8 * (float)uStack_28;
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    fVar13 = fVar9 * (float)((ulong)uStack_28 >> 0x20);
    auVar14._4_4_ = fVar11;
    auVar14._0_4_ = fVar10;
    auVar14._8_4_ = fVar12;
    auVar14._12_4_ = fVar13;
    auVar5._4_4_ = fVar11;
    auVar5._0_4_ = fVar10;
    auVar5._8_4_ = fVar12;
    auVar5._12_4_ = fVar13;
    auVar14 = NEON_ext(auVar14,auVar5,8,1);
    fVar12 = *(float *)(param_1 + 0x50);
    uStack_88 = *param_3;
    if (fVar12 + (float)uStack_88 < fVar10 + fVar11 + auVar14._0_4_ + fVar9) {
      return false;
    }
    local_48 = 0;
    *(undefined1 *)(param_4 + 1) = 0;
  }
  else {
    local_48 = CONCAT44(*param_4,*param_4);
    fVar12 = *(float *)(param_1 + 0x50);
    uStack_88 = *param_3;
  }
  local_80 = CONCAT44(fVar12,fVar12);
  local_78 = 0;
  local_90 = 0x3727c5ac3727c5ac;
  uVar6 = FUN_0082b4a0(param_2,&local_30,&local_90,param_4 + 1,&local_70);
  bVar1 = (uVar6 & 1) != 0;
  if (bVar1) {
    param_5[1] = uStack_68;
    *param_5 = local_70;
    param_5[3] = uStack_58;
    param_5[2] = uStack_60;
    param_5[4] = local_50;
    param_5[5] = local_48;
  }
  *param_4 = (int)local_48;
  return bVar1;
}


