/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d6e6d0; name: FUN_00d6e6d0
 */


void FUN_00d6e6d0(float param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  param_1 = *(float *)(param_2 + 0x3a4) + param_1;
  *(float *)(param_2 + 0x3a4) = param_1;
  puVar3 = PTR_PTR_047d9248;
  if (*(int *)(param_2 + 0x3d0) == 2) {
    uVar20 = *(undefined8 *)(param_2 + 0x3b8);
    uVar18 = *(undefined8 *)(param_2 + 0x3b0);
    uVar15 = *(undefined8 *)(param_2 + 0x78);
    uVar12 = *(undefined8 *)(param_2 + 0x70);
    fVar22 = *(float *)(param_2 + 0x3c0);
    fVar23 = *(float *)(param_2 + 0x3c4);
    fVar24 = *(float *)(param_2 + 0x3c8);
    fVar25 = *(float *)(param_2 + 0x60);
    fVar26 = *(float *)(param_2 + 100);
    param_1 = param_1 / *(float *)(param_2 + 0x3a0);
    fVar27 = *(float *)(param_2 + 0x68);
    local_88 = 1.0;
    fStack_84 = 0.0;
    pfVar1 = &local_88;
    if (param_1 <= 1.0) {
      pfVar1 = (float *)&local_80;
    }
    local_80 = CONCAT44(local_80._4_4_,param_1);
    pfVar2 = &fStack_84;
    if (0.0 <= param_1) {
      pfVar2 = pfVar1;
    }
    fVar21 = *pfVar2;
    fVar4 = (float)(**(code **)PTR_PTR_047d9248)(fVar21);
    fVar5 = (float)(**(code **)puVar3)(fVar21);
    fVar6 = (float)(**(code **)puVar3)(fVar21);
    fVar7 = (float)(**(code **)puVar3)(fVar21);
    fVar11 = (float)uVar18;
    fVar17 = (float)uVar12 - fVar11;
    fVar13 = (float)((ulong)uVar18 >> 0x20);
    fVar19 = (float)((ulong)uVar12 >> 0x20) - fVar13;
    fVar14 = (float)uVar20;
    fVar16 = (float)((ulong)uVar20 >> 0x20);
    fVar8 = (float)(**(code **)puVar3)(fVar21);
    fVar9 = (float)(**(code **)puVar3)(fVar21);
    fVar10 = (float)(**(code **)puVar3)(fVar21,CONCAT44(fVar19,fVar17));
    local_80 = CONCAT44(fVar13 + fVar8 * fVar19,fVar11 + fVar7 * fVar17);
    uStack_78 = CONCAT44(fVar16 + fVar10 * ((float)((ulong)uVar15 >> 0x20) - fVar16),
                         fVar14 + fVar9 * ((float)uVar15 - fVar14));
    local_70 = fVar22 + (fVar25 - fVar22) * fVar4;
    fStack_6c = fVar23 + (fVar26 - fVar23) * fVar5;
    local_68 = fVar24 + (fVar27 - fVar24) * fVar6;
    FUN_00d6efb0(param_2,&local_80);
    if (1.0 <= fVar21) {
      FUN_00d70250(param_2);
      *(undefined4 *)(param_2 + 0x3a4) = 0;
      *(undefined1 *)(param_2 + 0x398) = 0;
      *(undefined4 *)(param_2 + 0x3d0) = 0;
    }
  }
  else if (*(int *)(param_2 + 0x3d0) == 1) {
    uVar20 = *(undefined8 *)(param_2 + 0x78);
    uVar18 = *(undefined8 *)(param_2 + 0x70);
    uVar15 = *(undefined8 *)(param_2 + 0x3b8);
    uVar12 = *(undefined8 *)(param_2 + 0x3b0);
    fVar22 = *(float *)(param_2 + 0x60);
    fVar23 = *(float *)(param_2 + 100);
    fVar24 = *(float *)(param_2 + 0x68);
    fVar26 = *(float *)(param_2 + 0x3c4);
    fVar27 = *(float *)(param_2 + 0x3c8);
    param_1 = param_1 / *(float *)(param_2 + 0x39c);
    fVar25 = *(float *)(param_2 + 0x3c0);
    local_88 = 1.0;
    fStack_84 = 0.0;
    pfVar1 = &local_88;
    if (param_1 <= 1.0) {
      pfVar1 = (float *)&local_80;
    }
    local_80 = CONCAT44(local_80._4_4_,param_1);
    pfVar2 = &fStack_84;
    if (0.0 <= param_1) {
      pfVar2 = pfVar1;
    }
    fVar21 = *pfVar2;
    fVar4 = (float)(**(code **)PTR_PTR_047d9248)(fVar21);
    fVar5 = (float)(**(code **)puVar3)(fVar21);
    fVar6 = (float)(**(code **)puVar3)(fVar21);
    fVar7 = (float)(**(code **)puVar3)(fVar21);
    fVar11 = (float)uVar18;
    fVar17 = (float)uVar12 - fVar11;
    fVar13 = (float)((ulong)uVar18 >> 0x20);
    fVar19 = (float)((ulong)uVar12 >> 0x20) - fVar13;
    fVar14 = (float)uVar20;
    fVar16 = (float)((ulong)uVar20 >> 0x20);
    fVar8 = (float)(**(code **)puVar3)(fVar21);
    fVar9 = (float)(**(code **)puVar3)(fVar21);
    fVar10 = (float)(**(code **)puVar3)(fVar21,CONCAT44(fVar19,fVar17));
    local_80 = CONCAT44(fVar13 + fVar8 * fVar19,fVar11 + fVar7 * fVar17);
    uStack_78 = CONCAT44(fVar16 + fVar10 * ((float)((ulong)uVar15 >> 0x20) - fVar16),
                         fVar14 + fVar9 * ((float)uVar15 - fVar14));
    local_70 = fVar22 + (fVar25 - fVar22) * fVar4;
    fStack_6c = fVar23 + (fVar26 - fVar23) * fVar5;
    local_68 = fVar24 + (fVar27 - fVar24) * fVar6;
    FUN_00d6efb0(param_2,&local_80);
    if (1.0 <= fVar21) {
      *(undefined4 *)(param_2 + 0x3a4) = 0;
      *(undefined4 *)(param_2 + 0x3d0) = 2;
    }
  }
  return;
}


