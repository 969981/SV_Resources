/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ffd28; name: FUN_029ffd28
 */


void FUN_029ffd28(undefined8 param_1,long param_2,byte param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  byte local_1f;
  
  if ((*(int *)(param_2 + 400) == 0) && (*(char *)(param_2 + 0x198) == '\0')) {
    local_80[0] = *(undefined8 *)(param_2 + 0x220);
    local_60 = *(uint *)(param_2 + 0x19c) >> 0x16;
    lVar6 = *(long *)(param_2 + 0x180);
    local_58 = *(long *)(lVar6 + 0x130);
    lVar5 = *(long *)(*(long *)(local_58 + 0x38) + (ulong)local_60 * 0x100);
    pauVar1 = (undefined1 (*) [12])(lVar5 + 0x60);
    uVar7 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x68) >> 0x20);
    pauVar3 = (undefined1 (*) [12])(lVar5 + 0x70);
    uVar11 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x78) >> 0x20);
    pauVar2 = (undefined1 (*) [16])(lVar5 + 0x80);
    fVar14 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar13._12_4_ = uVar11;
    auVar13._0_12_ = *pauVar3;
    auVar4._12_4_ = uVar11;
    auVar4._0_12_ = *pauVar3;
    auVar13 = NEON_ext(auVar13,auVar4,8,1);
    auVar12._12_4_ = uVar7;
    auVar12._0_12_ = *pauVar1;
    auVar15._12_4_ = uVar7;
    auVar15._0_12_ = *pauVar1;
    auVar12 = NEON_ext(auVar12,auVar15,8,1);
    auVar15 = NEON_ext(*pauVar2,*pauVar2,8,1);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x1a0) - (float)*(undefined8 *)(lVar5 + 0x90);
    fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x1a0) >> 0x20) -
            (float)((ulong)*(undefined8 *)(lVar5 + 0x90) >> 0x20);
    fVar10 = (float)*(undefined8 *)(param_2 + 0x1a8) - (float)*(undefined8 *)(lVar5 + 0x98);
    uStack_68 = CONCAT44(auVar15._4_4_ * fVar10 + fVar14 * fVar8 + auVar15._4_4_ * fVar9,
                         auVar15._0_4_ * fVar10 +
                         (float)*(undefined8 *)*pauVar2 * fVar8 + fVar14 * fVar9);
    local_70 = CONCAT44(auVar13._0_4_ * fVar10 +
                        (float)*(undefined8 *)*pauVar3 * fVar8 +
                        (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20) * fVar9,
                        auVar12._0_4_ * fVar10 +
                        (float)*(undefined8 *)*pauVar1 * fVar8 +
                        (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar9);
    uStack_48 = *(undefined8 *)(param_2 + 0x1f8);
    local_50 = *(undefined8 *)(param_2 + 0x1f0);
    local_40 = *(undefined4 *)(param_2 + 0x230);
    uStack_3c = *(undefined4 *)(param_2 + 0x200);
    local_38 = *(char *)(param_2 + 0x204) != '\0';
    uStack_28 = *(undefined8 *)(lVar6 + 0x128);
    local_30 = *(undefined8 *)(lVar6 + 0x120);
    local_1f = param_3 & 1;
    local_20 = 0;
  }
  else {
    local_20 = 1;
  }
  FUN_03056f54(param_1,local_80);
  return;
}


