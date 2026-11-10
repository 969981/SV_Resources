/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d0180; name: FUN_008d0180
 */


void FUN_008d0180(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  lVar4 = *(long *)(param_2 + 0xa0);
  uVar7 = (ulong)param_3;
  plVar2 = (long *)(param_2 + 0x1d0);
  if (*(char *)(lVar4 + 0x752) != '\0') {
    plVar2 = *(long **)(param_2 + 0xc0);
  }
  if (*(char *)(lVar4 + 0x7e4) == '\0') {
    lVar5 = *(long *)(param_2 + 0x548);
    lVar4 = (long)*(int *)(param_2 + 0x5f8) * 0x10;
    fVar8 = (float)(*(undefined8 **)(param_2 + 0x5f0))[1];
    uVar9 = **(undefined8 **)(param_2 + 0x5f0);
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1e8) + lVar4);
    uStack_118 = puVar1[1];
    local_120 = *puVar1;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1f8) + lVar4);
    uStack_128 = puVar1[1];
    local_130 = *puVar1;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1f0) + lVar4);
    uStack_138 = puVar1[1];
    local_140 = *puVar1;
    lVar4 = *(long *)(lVar5 + 0xb0) + (long)*(int *)(param_2 + 0x5f8) * 0x20;
    uVar16 = *(undefined4 *)(lVar4 + 0xc);
    puVar1 = (undefined8 *)(*plVar2 + (long)(int)param_3 * 0x10);
    fVar15 = (*(float *)(lVar5 + 0x44) - *(float *)(lVar4 + 8)) - *(float *)(lVar5 + 0x4c);
    uVar14 = (*(undefined8 **)(param_2 + 0x5e8))[1];
    uVar13 = **(undefined8 **)(param_2 + 0x5e8);
    *puVar1 = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)*puVar1 >> 0x20),
                       (float)uVar13 + (float)*puVar1);
    *(float *)(puVar1 + 1) = (float)uVar14 + *(float *)(puVar1 + 1);
    lVar4 = *(long *)(param_2 + 0xa0);
    cVar3 = *(char *)(lVar4 + 0x7d8);
  }
  else {
    uStack_118 = *(undefined8 *)(param_2 + 0x598);
    local_120 = *(undefined8 *)(param_2 + 0x590);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x5d8);
    uVar9 = *(undefined8 *)(param_2 + 0x5d0);
    uStack_128 = *(undefined8 *)(param_2 + 0x5a8);
    local_130 = *(undefined8 *)(param_2 + 0x5a0);
    uStack_138 = *(undefined8 *)(param_2 + 0x5b8);
    local_140 = *(undefined8 *)(param_2 + 0x5b0);
    fVar15 = *(float *)(param_2 + 0x564);
    uVar16 = *(undefined4 *)(param_2 + 0x55c);
    cVar3 = *(char *)(lVar4 + 0x7d8);
  }
  if (cVar3 != '\0') {
    puVar1 = (undefined8 *)(plVar2[1] + (long)(int)param_3 * 0x10);
    fVar12 = *(float *)(lVar4 + 0x7e8);
    *puVar1 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar12 + (float)((ulong)*puVar1 >> 0x20),
                       (float)uVar9 * fVar12 + (float)*puVar1);
    *(float *)(puVar1 + 1) = fVar8 * fVar12 + *(float *)(puVar1 + 1);
    lVar4 = *(long *)(param_2 + 0xa0);
  }
  if (*(char *)(lVar4 + 0x7d9) != '\0') {
    FUN_008d65b4(uVar16,fVar15,param_1,&local_a0,*(undefined8 *)(*(long *)(param_2 + 0x548) + 0x238)
                 ,&local_120,&local_140);
    uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
    fVar8 = *(float *)(*(long *)(param_2 + 0xa0) + 0x7ec);
    fVar12 = (float)local_a0 * fVar8;
    fVar10 = (float)((ulong)local_a0 >> 0x20) * fVar8;
    local_a0 = CONCAT44(fVar10,fVar12);
    fVar11 = (float)uStack_98 * fVar8;
    uStack_98 = CONCAT44((float)((ulong)uStack_98 >> 0x20) * fVar8,fVar11);
    *(float *)(plVar2[3] + uVar6) = fVar12;
    *(float *)(plVar2[3] + uVar6 + 4) = fVar10;
    *(float *)(plVar2[3] + uVar6 + 8) = fVar11;
    lVar4 = *(long *)(param_2 + 0xa0);
  }
  if (*(char *)(lVar4 + 0x7da) != '\0') {
    FUN_008d7aa0(fVar15,param_1,&local_b0,*(undefined8 *)(*(long *)(param_2 + 0x548) + 0x238),
                 &local_130,&local_140);
    uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
    *(undefined4 *)(plVar2[5] + uVar6) = local_b0;
    *(undefined4 *)(plVar2[5] + uVar6 + 4) = local_ac;
    *(undefined4 *)(plVar2[5] + uVar6 + 8) = local_a8;
  }
  if ((plVar2[6] != 0) &&
     ((*(char *)(*(long *)(param_2 + 0xa0) + 0x7dc) != '\0' ||
      (*(char *)(*(long *)(param_2 + 0xa0) + 0x7de) != '\0')))) {
    lVar4 = *(long *)(param_2 + 0x548);
    local_150 = *(undefined8 *)(lVar4 + 0x624);
    uStack_148 = (ulong)*(uint *)(lVar4 + 0x62c);
    FUN_008d6a60(*(undefined4 *)(lVar4 + 0x654),uVar16,fVar15,param_1,&local_80,
                 *(undefined8 *)(lVar4 + 0x238),&local_140,lVar4 + 0x420,&local_150);
    lVar4 = *(long *)(param_2 + 0xa0);
    if (*(char *)(lVar4 + 0x7dc) != '\0') {
      uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
      *(undefined4 *)(plVar2[6] + uVar6) = local_80;
      *(undefined4 *)(plVar2[6] + uVar6 + 4) = local_7c;
      *(undefined4 *)(plVar2[6] + uVar6 + 8) = local_78;
      lVar4 = *(long *)(param_2 + 0xa0);
    }
    if (*(char *)(lVar4 + 0x7de) != '\0') {
      *(undefined4 *)(plVar2[6] + (long)(int)param_3 * 0x10 + 0xc) = local_74;
    }
  }
  if ((plVar2[7] != 0) &&
     ((*(char *)(*(long *)(param_2 + 0xa0) + 0x7dd) != '\0' ||
      (*(char *)(*(long *)(param_2 + 0xa0) + 0x7df) != '\0')))) {
    lVar4 = *(long *)(param_2 + 0x548);
    local_150 = *(undefined8 *)(lVar4 + 0x624);
    uStack_148 = (ulong)*(uint *)(lVar4 + 0x62c);
    FUN_008d7280(*(undefined4 *)(lVar4 + 0x654),uVar16,fVar15,param_1,&local_70,
                 *(undefined8 *)(lVar4 + 0x238),&local_140,lVar4 + 0x430,&local_150);
    lVar4 = *(long *)(param_2 + 0xa0);
    if (*(char *)(lVar4 + 0x7dd) != '\0') {
      uVar7 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
      *(undefined4 *)(plVar2[7] + uVar7) = local_70;
      *(undefined4 *)(plVar2[7] + uVar7 + 4) = local_6c;
      *(undefined4 *)(plVar2[7] + uVar7 + 8) = local_68;
      lVar4 = *(long *)(param_2 + 0xa0);
    }
    if (*(char *)(lVar4 + 0x7df) != '\0') {
      *(undefined4 *)(plVar2[7] + (long)(int)param_3 * 0x10 + 0xc) = local_64;
    }
  }
  return;
}


