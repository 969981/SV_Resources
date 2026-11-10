/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308b788; name: FUN_0308b788
 */


uint FUN_0308b788(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  uint uVar3;
  undefined1 (*pauVar4) [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  float fVar9;
  float fVar12;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_70 [8];
  float fStack_68;
  undefined *local_60;
  long lStack_58;
  long local_50;
  uint local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar8 = *(long *)(param_1 + 0x20);
  if ((*(uint *)(param_2 + 8) >> (ulong)(*(uint *)(*(long *)(lVar8 + 0x20) + 0x180) & 0x1f) & 1) ==
      0) {
    uVar14 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x30);
  }
  else {
    pauVar1 = (undefined1 (*) [12])(lVar8 + 0x80);
    uVar17 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x88) >> 0x20);
    fVar16 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_2 + 0x30) - (float)*(undefined8 *)(lVar8 + 0x90);
    fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) -
             (float)((ulong)*(undefined8 *)(lVar8 + 0x90) >> 0x20);
    fVar13 = (float)*(undefined8 *)(param_2 + 0x38) - (float)*(undefined8 *)(lVar8 + 0x98);
    pauVar2 = (undefined1 (*) [12])(lVar8 + 0x60);
    uVar15 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x68) >> 0x20);
    pauVar4 = (undefined1 (*) [12])(lVar8 + 0x70);
    uVar18 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x78) >> 0x20);
    local_60 = &DAT_0464cab8;
    local_48 = 0xffffffff;
    auVar20._12_4_ = uVar18;
    auVar20._0_12_ = *pauVar4;
    auVar7._12_4_ = uVar18;
    auVar7._0_12_ = *pauVar4;
    auVar20 = NEON_ext(auVar20,auVar7,8,1);
    auVar19._12_4_ = uVar15;
    auVar19._0_12_ = *pauVar2;
    auVar21._12_4_ = uVar15;
    auVar21._0_12_ = *pauVar2;
    auVar19 = NEON_ext(auVar19,auVar21,8,1);
    auVar5._12_4_ = uVar17;
    auVar5._0_12_ = *pauVar1;
    auVar6._12_4_ = uVar17;
    auVar6._0_12_ = *pauVar1;
    auVar21 = NEON_ext(auVar5,auVar6,8,1);
    local_40 = CONCAT44(auVar20._0_4_ * fVar13 +
                        (float)*(undefined8 *)*pauVar4 * fVar9 +
                        (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20) * fVar12,
                        auVar19._0_4_ * fVar13 +
                        (float)*(undefined8 *)*pauVar2 * fVar9 +
                        (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20) * fVar12);
    uStack_38 = CONCAT44(auVar21._4_4_ * fVar13 + fVar16 * fVar9 + auVar21._4_4_ * fVar12,
                         auVar21._0_4_ * fVar13 +
                         (float)*(undefined8 *)*pauVar1 * fVar9 + fVar16 * fVar12);
    lStack_58 = param_2;
    local_50 = lVar8;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
              (*(long **)(param_1 + 0x18),&local_40,param_2 + 0x40,&local_60,local_70);
    if (local_48 != 0xffffffff) {
      uVar10 = *(undefined8 *)(lVar8 + 0x60);
      uVar11 = *(undefined8 *)(lVar8 + 0x70);
      fVar13 = local_70._0_4_;
      fVar16 = local_70._4_4_;
      uVar14 = *(undefined8 *)(lVar8 + 0x80);
      fVar9 = *(float *)(lVar8 + 0x90);
      fVar12 = *(float *)(lVar8 + 0x94);
      param_3[1] = CONCAT44(*(float *)(lVar8 + 0x9c) +
                            (float)((ulong)*(undefined8 *)(lVar8 + 0x88) >> 0x20) * fStack_68 +
                            (float)((ulong)*(undefined8 *)(lVar8 + 0x68) >> 0x20) * fVar13 +
                            (float)((ulong)*(undefined8 *)(lVar8 + 0x78) >> 0x20) * fVar16,
                            *(float *)(lVar8 + 0x98) +
                            (float)*(undefined8 *)(lVar8 + 0x88) * fStack_68 +
                            (float)*(undefined8 *)(lVar8 + 0x68) * fVar13 +
                            (float)*(undefined8 *)(lVar8 + 0x78) * fVar16);
      *param_3 = CONCAT44(fVar12 + (float)((ulong)uVar14 >> 0x20) * fStack_68 +
                                   (float)((ulong)uVar10 >> 0x20) * fVar13 +
                                   (float)((ulong)uVar11 >> 0x20) * fVar16,
                          fVar9 + (float)uVar14 * fStack_68 +
                                  (float)uVar10 * fVar13 + (float)uVar11 * fVar16);
      uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x17c);
      return local_48 | (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) << 0x16;
    }
    uVar14 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x30);
  }
  param_3[1] = uVar14;
  *param_3 = uVar11;
  return 0xffffffff;
}


