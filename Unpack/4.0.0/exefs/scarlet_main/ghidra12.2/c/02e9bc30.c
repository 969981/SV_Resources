/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e9bc30; name: FUN_02e9bc30
 */


void FUN_02e9bc30(long *param_1,long param_2,long *param_3,long param_4,undefined2 *param_5,
                 long *param_6,undefined8 param_7,undefined8 param_8,long *param_9)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_1940 [8];
  float local_1938 [754];
  uint local_d70 [2];
  undefined1 *local_d68;
  undefined8 local_d60;
  undefined8 local_d58;
  undefined8 local_d50;
  undefined1 local_d30 [8];
  float local_d28 [754];
  uint local_160 [2];
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  float fStack_98;
  undefined8 uStack_90;
  float fStack_88;
  long local_80;
  
  puVar1 = PTR_DAT_047d19f0;
  local_160[0] = 7;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  iVar2 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                       (ulong)*(byte *)(*(long *)(param_2 + 0x38) + 0x18) * 0x200 + 0xa8))
                    (*(long *)(param_2 + 0x38),local_160,local_d30,local_160);
  if ((-1 < iVar2) && ((char)param_3[6] != '\0')) {
    uVar3 = local_150 & 0xffffffff;
    if (0 < (int)local_150) {
      lVar12 = param_3[9];
      lVar9 = param_3[8];
      lVar8 = param_3[0xb];
      lVar7 = param_3[10];
      pfVar4 = local_d28;
      pfVar5 = (float *)(local_158 + 8);
      do {
        uVar3 = uVar3 - 1;
        fVar16 = *pfVar5;
        *(ulong *)(pfVar4 + -2) =
             CONCAT44((float)((ulong)lVar7 >> 0x20) +
                      (float)((ulong)lVar9 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20),
                      (float)lVar7 + (float)lVar9 * (float)*(undefined8 *)(pfVar5 + -2));
        *pfVar4 = (float)lVar8 + (float)lVar12 * fVar16;
        pfVar4 = pfVar4 + 3;
        pfVar5 = pfVar5 + 3;
      } while (uVar3 != 0);
    }
    local_158 = local_d30;
    local_150 = CONCAT44((int)param_3[7],(int)local_150);
    local_148 = 0;
    uStack_140 = 0;
  }
  local_d70[0] = 7;
  local_d68 = (undefined1 *)0x0;
  local_d60 = 0;
  local_d58 = 0;
  local_d50 = 0;
  iVar2 = (**(code **)(*(long *)puVar1 + (ulong)*(byte *)(param_4 + 0x18) * 0x200 + 0xa8))
                    (param_4,local_d70,local_1940,local_d70);
  if ((-1 < iVar2) && ((char)param_6[6] != '\0')) {
    uVar3 = local_d60 & 0xffffffff;
    if (0 < (int)local_d60) {
      lVar12 = param_6[9];
      lVar9 = param_6[8];
      lVar8 = param_6[0xb];
      lVar7 = param_6[10];
      pfVar4 = local_1938;
      pfVar5 = (float *)(local_d68 + 8);
      do {
        uVar3 = uVar3 - 1;
        fVar16 = *pfVar5;
        *(ulong *)(pfVar4 + -2) =
             CONCAT44((float)((ulong)lVar7 >> 0x20) +
                      (float)((ulong)lVar9 >> 0x20) *
                      (float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20),
                      (float)lVar7 + (float)lVar9 * (float)*(undefined8 *)(pfVar5 + -2));
        *pfVar4 = (float)lVar8 + (float)lVar12 * fVar16;
        pfVar4 = pfVar4 + 3;
        pfVar5 = pfVar5 + 3;
      } while (uVar3 != 0);
    }
    local_d68 = local_1940;
    local_d60 = CONCAT44((int)param_6[7],(int)local_d60);
    local_d58 = 0;
    local_d50 = 0;
  }
  if ((*(byte *)(param_9 + 1) >> 1 & 1) == 0) {
    local_80 = param_9[2];
    uVar3 = (**(code **)(*param_1 + (ulong)local_160[0] * 0x38 + (ulong)local_d70[0] * 8 + 0x3cb8))
                      (local_160,local_d70,param_7,*(byte *)(param_9 + 1),local_a0);
    if ((uVar3 & 1) != 0) {
      local_a8 = 5;
      uStack_a4 = 0;
      local_100 = (undefined4)local_80;
      puVar6 = (undefined8 *)param_6[4];
      fVar15 = local_a0._4_4_;
      fVar16 = (float)puVar6[2];
      fVar10 = (float)((ulong)puVar6[2] >> 0x20);
      fVar11 = (float)puVar6[3];
      fVar13 = (float)((ulong)puVar6[3] >> 0x20);
      fVar14 = local_a0._0_4_;
      fVar17 = (float)((ulong)uStack_90 >> 0x20);
      fVar18 = (float)puVar6[4];
      fVar19 = (float)((ulong)puVar6[4] >> 0x20);
      fVar20 = (float)puVar6[5];
      fVar21 = (float)((ulong)puVar6[5] >> 0x20);
      local_120 = CONCAT44((float)((ulong)puVar6[6] >> 0x20) +
                           fVar19 * fStack_98 +
                           (float)((ulong)*puVar6 >> 0x20) * fVar14 + fVar10 * fVar15,
                           (float)puVar6[6] +
                           fVar18 * fStack_98 + (float)*puVar6 * fVar14 + fVar16 * fVar15);
      uStack_118 = CONCAT44((float)((ulong)puVar6[7] >> 0x20) +
                            fVar21 * fStack_98 +
                            (float)((ulong)puVar6[1] >> 0x20) * fVar14 + fVar13 * fVar15,
                            (float)puVar6[7] +
                            fVar20 * fStack_98 + (float)puVar6[1] * fVar14 + fVar11 * fVar15);
      fVar14 = (float)uStack_90;
      local_110 = CONCAT44(fVar19 * fStack_88 +
                           (float)((ulong)*puVar6 >> 0x20) * fVar14 + fVar10 * fVar17,
                           fVar18 * fStack_88 + (float)*puVar6 * fVar14 + fVar16 * fVar17);
      uStack_108 = CONCAT44(fVar21 * fStack_88 +
                            (float)((ulong)puVar6[1] >> 0x20) * fVar14 + fVar13 * fVar17,
                            fVar20 * fStack_88 + (float)puVar6[1] * fVar14 + fVar11 * fVar17);
      lVar7 = *param_3;
      local_e8 = (undefined4)param_3[3];
      local_e0 = *(undefined2 *)(param_2 + 0x10);
      uStack_d4 = *(undefined4 *)(param_2 + 0x1c);
      local_dc = (undefined4)*(undefined8 *)(param_2 + 0x14);
      uStack_d8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
      local_e4 = 0xf;
      if (lVar7 == 0) {
        local_f8 = 0xffffffffffffffff;
        local_f0 = 0xffffff;
      }
      else {
        local_f8 = *(undefined8 *)(lVar7 + 0xb0);
        local_f0 = *(undefined4 *)(lVar7 + 0x50);
      }
      lVar7 = *param_6;
      if (lVar7 == 0) {
        local_c8 = 0xffffff;
        local_d0 = 0xffffffffffffffff;
      }
      else {
        local_d0 = *(undefined8 *)(lVar7 + 0xb0);
        local_c8 = *(undefined4 *)(lVar7 + 0x50);
      }
      local_c0 = (undefined4)param_6[3];
      local_b8 = *param_5;
      uStack_ac = *(undefined4 *)(param_5 + 6);
      local_b4 = (undefined4)*(undefined8 *)(param_5 + 2);
      uStack_b0 = (undefined4)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
      local_bc = *(undefined1 *)(param_2 + 0x20);
      (**(code **)(*param_9 + 0x28))(param_9,&local_120);
    }
  }
  else {
    (**(code **)(*param_9 + 0x30))
              (param_9,*param_1,param_2,local_160,param_2 + 0x10,param_3,local_d70,param_5,param_6,
               param_7);
  }
  return;
}


