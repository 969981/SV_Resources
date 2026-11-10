/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086a5a0; name: FUN_0086a5a0
 */


undefined8
FUN_0086a5a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            long param_5,long param_6)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_40 = param_3;
  local_38 = param_4;
  local_30 = param_1;
  local_28 = param_2;
  FUN_0086a660(&local_40,&local_30,param_5,param_6);
  if (*(int *)(param_6 + 0x30) == 0) {
    return 0;
  }
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined8 *)(param_6 + 0x18) = 0;
  pauVar1 = (undefined1 (*) [12])(param_5 + 0x30);
  uVar15 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x38) >> 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_5 + 0x10);
  uVar9 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x20);
  uVar5 = *(undefined8 *)*pauVar2;
  pauVar3 = (undefined1 (*) [12])(param_5 + 0x20);
  uVar13 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x28) >> 0x20);
  uVar6 = *(undefined8 *)*pauVar3;
  auVar17._12_4_ = uVar13;
  auVar17._0_12_ = *pauVar3;
  auVar18._12_4_ = uVar13;
  auVar18._0_12_ = *pauVar3;
  auVar17 = NEON_ext(auVar17,auVar18,8,1);
  auVar7._12_4_ = uVar15;
  auVar7._0_12_ = *pauVar1;
  auVar8._12_4_ = uVar15;
  auVar8._0_12_ = *pauVar1;
  auVar18 = NEON_ext(auVar7,auVar8,8,1);
  auVar16._12_4_ = uVar9;
  auVar16._0_12_ = *pauVar2;
  auVar4._12_4_ = uVar9;
  auVar4._0_12_ = *pauVar2;
  auVar16 = NEON_ext(auVar16,auVar4,8,1);
  fVar12 = (float)*(undefined8 *)(param_6 + 0x28);
  fVar10 = (float)*(undefined8 *)(param_6 + 0x20);
  fVar11 = (float)((ulong)*(undefined8 *)(param_6 + 0x20) >> 0x20);
  *(ulong *)(param_6 + 0x28) =
       CONCAT44(auVar18._4_4_ * fVar12 + fVar14 * fVar10 + auVar18._4_4_ * fVar11,
                auVar18._0_4_ * fVar12 + (float)*(undefined8 *)*pauVar1 * fVar10 + fVar14 * fVar11);
  *(ulong *)(param_6 + 0x20) =
       CONCAT44(auVar17._0_4_ * fVar12 +
                (float)uVar6 * fVar10 + (float)((ulong)uVar6 >> 0x20) * fVar11,
                auVar16._0_4_ * fVar12 +
                (float)uVar5 * fVar10 + (float)((ulong)uVar5 >> 0x20) * fVar11);
  return 1;
}


