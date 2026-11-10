/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f07760; name: FUN_02f07760
 */


undefined8
FUN_02f07760(float param_1,long param_2,uint param_3,int param_4,undefined8 *param_5,
            undefined8 *param_6,undefined8 param_7,undefined4 param_8)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [56];
  undefined1 auStack_a8 [48];
  long local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0x80000000;
  uVar11 = (ulong)param_3;
  if ((param_1 <= 0.0) || (param_4 != 2)) {
    if ((int)param_3 < 1) {
      local_70._4_4_ = 0x80000000;
      local_70._0_4_ = param_3;
    }
    else {
      FUN_02e8df28(&local_78,PTR_PTR_047d1a50 + 0x20,uVar11);
      lVar9 = 0;
      puVar8 = (undefined4 *)(param_2 + 8);
      do {
        uVar4 = *puVar8;
        uVar19 = *(undefined8 *)(puVar8 + -2);
        puVar8 = puVar8 + 3;
        ((undefined8 *)(local_78 + lVar9))[1] = CONCAT44(uVar4,uVar4);
        *(undefined8 *)(local_78 + lVar9) = uVar19;
        uVar17 = ((undefined8 *)(local_78 + lVar9))[1];
        uVar19 = *(undefined8 *)(local_78 + lVar9);
        uVar20 = *param_5;
        ((undefined8 *)(local_78 + lVar9))[1] =
             CONCAT44((float)((ulong)uVar17 >> 0x20) * (float)((ulong)param_5[1] >> 0x20),
                      (float)uVar17 * (float)param_5[1]);
        *(undefined8 *)(local_78 + lVar9) =
             CONCAT44((float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar20 >> 0x20),
                      (float)uVar19 * (float)uVar20);
        uVar17 = ((undefined8 *)(local_78 + lVar9))[1];
        uVar19 = *(undefined8 *)(local_78 + lVar9);
        uVar20 = *param_6;
        ((undefined8 *)(local_78 + lVar9))[1] =
             CONCAT44((float)((ulong)uVar17 >> 0x20) + (float)((ulong)param_6[1] >> 0x20),
                      (float)uVar17 + (float)param_6[1]);
        *(undefined8 *)(local_78 + lVar9) =
             CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar20 >> 0x20),
                      (float)uVar19 + (float)uVar20);
        lVar9 = lVar9 + 0x10;
        local_70._0_4_ = param_3;
      } while (uVar11 * 0x10 != lVar9);
    }
  }
  else {
    lVar9 = *(long *)PTR_DAT_047e34d8;
    uVar2 = *(uint *)(lVar9 + 0x9b8);
    if (0 < (int)(uVar2 * param_3)) {
      FUN_02e9b11c(&local_78,PTR_PTR_047d1a50 + 0x20,uVar2 * param_3);
    }
    if (0 < (int)param_3) {
      if ((int)uVar2 < 1) {
        lVar9 = (long)(int)(uint)local_70;
        puVar1 = PTR_PTR_047d1a50 + 0x20;
        do {
          lVar9 = lVar9 + (int)uVar2;
          if ((long)((ulong)local_70._4_4_ & 0x7fffffff) < lVar9) {
            FUN_02e8df28(&local_78,puVar1,lVar9);
          }
          local_70._0_4_ = (uint)lVar9;
          uVar13 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar13;
        } while (uVar13 != 0);
      }
      else {
        uVar10 = 0;
        puVar1 = PTR_PTR_047d1a50 + 0x20;
        do {
          lVar12 = (long)(int)(uint)local_70;
          lVar6 = lVar12 + (int)uVar2;
          uVar13 = (uint)lVar6;
          if ((int)(local_70._4_4_ & 0x7fffffff) < (int)uVar13) {
            FUN_02e8df28(&local_78,puVar1,lVar6);
          }
          puVar7 = (undefined8 *)(param_2 + uVar10 * 0xc);
          lVar12 = local_78 + lVar12 * 0x10;
          lVar6 = 0;
          do {
            fVar18 = *(float *)(puVar7 + 1);
            uVar19 = *puVar7;
            fVar14 = (float)*param_5 * (float)uVar19;
            fVar15 = (float)((ulong)*param_5 >> 0x20) * (float)((ulong)uVar19 >> 0x20);
            fVar16 = (float)param_5[1] * fVar18;
            fVar18 = (float)((ulong)param_5[1] >> 0x20) * fVar18;
            ((undefined8 *)(lVar12 + lVar6))[1] = CONCAT44(fVar18,fVar16);
            *(undefined8 *)(lVar12 + lVar6) = CONCAT44(fVar15,fVar14);
            fVar14 = (float)*param_6 + fVar14;
            fVar15 = (float)((ulong)*param_6 >> 0x20) + fVar15;
            fVar16 = (float)param_6[1] + fVar16;
            fVar18 = (float)((ulong)param_6[1] >> 0x20) + fVar18;
            ((undefined8 *)(lVar12 + lVar6))[1] = CONCAT44(fVar18,fVar16);
            *(undefined8 *)(lVar12 + lVar6) = CONCAT44(fVar15,fVar14);
            puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x9b0) + lVar6);
            uVar17 = puVar3[1];
            uVar19 = *puVar3;
            ((undefined8 *)(lVar12 + lVar6))[1] =
                 CONCAT44(fVar18 + param_1 * (float)((ulong)uVar17 >> 0x20),
                          fVar16 + param_1 * (float)uVar17);
            *(undefined8 *)(lVar12 + lVar6) =
                 CONCAT44(fVar15 + param_1 * (float)((ulong)uVar19 >> 0x20),
                          fVar14 + param_1 * (float)uVar19);
            lVar6 = lVar6 + 0x10;
          } while ((ulong)uVar2 * 0x10 != lVar6);
          uVar10 = uVar10 + 1;
          local_70._0_4_ = uVar13;
        } while (uVar10 != uVar11);
      }
    }
  }
  FUN_0084f3cc(auStack_a8);
  FUN_0084f37c(auStack_e0);
  local_f0 = local_78;
  local_e8 = (uint)local_70;
  uStack_e4 = 0x10;
  iVar5 = FUN_00850208(auStack_a8,&local_f0,auStack_e0);
  if (iVar5 == -1) {
    uVar19 = 0x80040200;
  }
  else {
    if ((0.0 < param_1) && (param_4 == 1)) {
      FUN_00856b98(auStack_a8);
    }
    FUN_0085c16c(auStack_a8,0,param_7,param_8,1);
    uVar19 = 0;
  }
  puVar1 = PTR_PTR_047d1a50;
  FUN_0084f57c(auStack_a8);
  uVar2 = local_70._4_4_;
  uVar11 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar2) && (local_78 != 0)) {
    (**(code **)(*(long *)(puVar1 + 0x20) + 0x20))(puVar1 + 0x20,local_78,uVar11 << 4);
  }
  return uVar19;
}


