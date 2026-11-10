/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03161308; name: FUN_03161308
 */


void FUN_03161308(float param_1,float *param_2,undefined8 param_3,undefined1 (*param_4) [16],
                 undefined8 param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [12];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  
  lVar11 = tpidr_el0;
  lVar10 = *(long *)(lVar11 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar11 + 0x1000b8) = lVar10;
  }
  lVar11 = *(long *)(*(long *)(lVar10 + 0x3d0) + 0x10);
  if ((*(long *)(lVar11 + 8) == 0) && (local_48 = 0x80, lVar11 != 0)) {
    local_90 = (undefined8 *)0x80;
    if (0x7f < *(ulong *)(lVar11 + 0x28)) {
      puVar9 = *(undefined8 **)(lVar11 + 0x38);
      if (puVar9 + 0x10 <= *(undefined8 **)(lVar11 + 0x40)) {
        *(undefined8 **)(lVar11 + 0x38) = puVar9 + 0x10;
        goto LAB_0316140c;
      }
    }
    puVar9 = (undefined8 *)FUN_031cf3b4(lVar11,&local_90);
  }
  else {
    local_48 = 0x80;
    puVar9 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,&local_48,0x40);
    lVar11 = 0;
  }
LAB_0316140c:
  fVar13 = param_1 + (float)*(undefined8 *)(param_2 + 4);
  fVar14 = param_1 + (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar15 = param_1 + (float)*(undefined8 *)(param_2 + 6);
  auVar12._0_4_ = *param_2 - param_1;
  auVar12._4_4_ = param_2[1] - param_1;
  auVar12._8_4_ = param_2[2] - param_1;
  puVar9[1] = (ulong)(uint)fVar15;
  *puVar9 = CONCAT44(fVar14,fVar13);
  puVar8 = PTR_DAT_047d19e0;
  auVar1._4_4_ = fVar14;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar15;
  auVar16._4_4_ = fVar14;
  auVar16._0_4_ = fVar13;
  auVar16._8_4_ = fVar15;
  auVar16 = auVar16 ^ (auVar1 ^ auVar12) &
                      SUB1612(*(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x10),0);
  puVar9[3] = (ulong)auVar16._8_4_;
  puVar9[2] = auVar16._0_8_;
  auVar2._4_4_ = fVar14;
  auVar2._0_4_ = fVar13;
  auVar2._8_4_ = fVar15;
  auVar17._4_4_ = fVar14;
  auVar17._0_4_ = fVar13;
  auVar17._8_4_ = fVar15;
  auVar17 = auVar17 ^ (auVar2 ^ auVar12) & SUB1612(*(undefined1 (*) [16])(puVar8 + 0x20),0);
  puVar9[5] = (ulong)auVar17._8_4_;
  puVar9[4] = auVar17._0_8_;
  auVar3._4_4_ = fVar14;
  auVar3._0_4_ = fVar13;
  auVar3._8_4_ = fVar15;
  auVar18._4_4_ = fVar14;
  auVar18._0_4_ = fVar13;
  auVar18._8_4_ = fVar15;
  auVar18 = auVar18 ^ (auVar3 ^ auVar12) & SUB1612(*(undefined1 (*) [16])(puVar8 + 0x30),0);
  puVar9[7] = (ulong)auVar18._8_4_;
  puVar9[6] = auVar18._0_8_;
  auVar4._4_4_ = fVar14;
  auVar4._0_4_ = fVar13;
  auVar4._8_4_ = fVar15;
  auVar19._4_4_ = fVar14;
  auVar19._0_4_ = fVar13;
  auVar19._8_4_ = fVar15;
  auVar19 = auVar19 ^ (auVar4 ^ auVar12) & SUB1612(*(undefined1 (*) [16])(puVar8 + 0x40),0);
  puVar9[9] = (ulong)auVar19._8_4_;
  puVar9[8] = auVar19._0_8_;
  auVar5._4_4_ = fVar14;
  auVar5._0_4_ = fVar13;
  auVar5._8_4_ = fVar15;
  auVar20._4_4_ = fVar14;
  auVar20._0_4_ = fVar13;
  auVar20._8_4_ = fVar15;
  auVar20 = auVar20 ^ (auVar5 ^ auVar12) & SUB1612(*(undefined1 (*) [16])(puVar8 + 0x50),0);
  puVar9[0xb] = (ulong)auVar20._8_4_;
  puVar9[10] = auVar20._0_8_;
  auVar6._4_4_ = fVar14;
  auVar6._0_4_ = fVar13;
  auVar6._8_4_ = fVar15;
  auVar21._4_4_ = fVar14;
  auVar21._0_4_ = fVar13;
  auVar21._8_4_ = fVar15;
  auVar21 = auVar21 ^ (auVar6 ^ auVar12) & SUB1612(*(undefined1 (*) [16])(puVar8 + 0x60),0);
  puVar9[0xd] = (ulong)auVar21._8_4_;
  puVar9[0xc] = auVar21._0_8_;
  auVar7._4_4_ = fVar14;
  auVar7._0_4_ = fVar13;
  auVar7._8_4_ = fVar15;
  auVar12 = auVar12 ^ (auVar12 ^ auVar7) & ~SUB1612(*(undefined1 (*) [16])(puVar8 + 0x70),0);
  puVar9[0xf] = (ulong)auVar12._8_4_;
  puVar9[0xe] = auVar12._0_8_;
  local_88 = 8;
  uStack_68 = *(undefined8 *)(param_4[1] + 8);
  uStack_70 = *(undefined8 *)param_4[1];
  uStack_78 = SUB168(*param_4,8);
  local_80 = SUB168(*param_4,0);
  local_90 = puVar9;
  local_60 = param_3;
  FUN_0315f9f8(&local_90,param_5);
  if (lVar11 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar9,0x80);
    return;
  }
  if ((*(ulong *)(lVar11 + 0x28) < 0x80) || (*(undefined8 **)(lVar11 + 0x38) != puVar9 + 0x10)) {
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
    if (*(ulong *)(lVar11 + 0x28) < 0xc0) {
      *(int *)(*(long *)(lVar11 + 0x30) + 0x20) = *(int *)(*(long *)(lVar11 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar11 + 0x10) + 0x18))
                (*(long **)(lVar11 + 0x10),(long)puVar9 - (long)*(int *)((long)puVar9 + -4),0xc4);
      return;
    }
    if (*(undefined8 **)(lVar11 + 0x38) != puVar9 + 0x10) {
      FUN_031cf778(lVar11,puVar9,0x80);
      return;
    }
    *(undefined8 **)(lVar11 + 0x38) = puVar9;
  }
  else {
    *(undefined8 **)(lVar11 + 0x38) = puVar9;
    if (*(undefined8 **)(lVar11 + 0x48) != puVar9) {
      return;
    }
  }
  FUN_031cf578(lVar11);
  return;
}


