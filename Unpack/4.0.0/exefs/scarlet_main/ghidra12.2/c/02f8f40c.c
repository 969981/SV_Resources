/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f8f40c; name: FUN_02f8f40c
 */


void FUN_02f8f40c(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,long *param_5,
                 undefined4 *param_6)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 (*pauVar4) [16];
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint *puVar18;
  uint *puVar19;
  undefined8 unaff_x29;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  
  puVar9 = PTR_PTR_047d1a50;
  uVar5 = *param_6;
  uVar6 = param_6[1];
  pauVar4 = (undefined1 (*) [16])(param_6 + 4);
  auVar21._4_4_ = param_6[2];
  auVar21._0_4_ = uVar5;
  auVar21._8_4_ = uVar5;
  auVar21._12_4_ = param_6[2];
  uVar15 = *(undefined8 *)(*param_4 + 0xb0);
  lVar7 = param_4[3];
  uVar16 = *(undefined8 *)(*param_5 + 0xb0);
  auVar22 = NEON_ext(auVar21,*pauVar4,0xc,1);
  lVar8 = param_5[3];
  auVar21 = NEON_ext(*pauVar4,*pauVar4,8,1);
  uVar14 = *(undefined8 *)(param_6 + 8);
  uVar1 = param_6[10];
  uVar20 = NEON_ext(*(undefined8 *)*pauVar4,auVar21._0_8_,4,1);
  puVar18 = *(uint **)(*(long *)(param_2 + 0x540) + (long)*(int *)(param_2 + 0x548) * 8 + -8);
  puVar17 = *(undefined8 **)(param_2 + 0x4e0);
  uVar11 = *puVar18;
  if (0xf4 < uVar11 >> 0x14) {
    puVar19 = puVar18;
    do {
      uVar11 = *(int *)(puVar17 + 0xb) - 1;
      if (*(int *)(puVar17 + 0xb) < 1) {
        lVar13 = puVar17[1];
        (**(code **)(*(long *)*puVar17 + 0x20))((long *)*puVar17,lVar13,6);
        puVar12 = (undefined8 *)(lVar13 + 0x28);
        *(undefined4 *)(puVar17 + 0xb) = 5;
      }
      else {
        *(uint *)(puVar17 + 0xb) = uVar11;
        puVar12 = (undefined8 *)(puVar17[1] + (ulong)uVar11 * 8);
      }
      puVar18 = (uint *)*puVar12;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[0] = 0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      puVar18[1] = *(uint *)(param_2 + 0x548);
      iVar10 = *(int *)(param_2 + 0x548);
      lVar13 = (long)iVar10;
      if ((int)(*(uint *)(param_2 + 0x54c) & 0x7fffffff) <= iVar10) {
        FUN_031c25b4(param_2 + 0x540,puVar9,lVar13 + 1);
        iVar10 = *(int *)(param_2 + 0x548);
      }
      *(uint **)(*(long *)(param_2 + 0x540) + (long)iVar10 * 8) = puVar18;
      *(int *)(param_2 + 0x548) = (int)(lVar13 + 1);
      *(uint **)(puVar19 + 2) = puVar18;
      uVar11 = *puVar18;
      puVar19 = puVar18;
    } while (0xf4 < uVar11 >> 0x14);
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar18,0x10);
    if (bVar3) {
      *puVar18 = *puVar18 + 0x500001;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(int *)(param_2 + 0x538) = *(int *)(param_2 + 0x538) + 1;
  uVar11 = uVar11 >> 0x10;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x20) = 0x4010050;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x24) = 1;
  *(int *)((long)puVar18 + (ulong)uVar11 + 0x28) = (int)uVar15;
  *(int *)((long)puVar18 + (ulong)uVar11 + 0x2c) = (int)((ulong)uVar15 >> 0x20);
  *(int *)((long)puVar18 + (ulong)uVar11 + 0x30) = (int)uVar16;
  uStack_94 = (undefined4)((ulong)uVar16 >> 0x20);
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x34) = uStack_94;
  local_90 = (undefined4)uVar14;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x38) = local_90;
  local_8c = (undefined4)((ulong)uVar14 >> 0x20);
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x3c) = local_8c;
  *(int *)((long)puVar18 + (ulong)uVar11 + 0x40) = (int)lVar7;
  *(int *)((long)puVar18 + (ulong)uVar11 + 0x44) = (int)lVar8;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x48) = uVar5;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x4c) = uVar6;
  local_78 = auVar22._0_4_;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x50) = local_78;
  local_74 = auVar22._4_4_;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x54) = local_74;
  local_70 = (undefined4)uVar20;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x58) = local_70;
  uStack_6c = (undefined4)((ulong)uVar20 >> 0x20);
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x5c) = uStack_6c;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 0x60) = uVar1;
  *(undefined4 *)((long)puVar18 + (ulong)uVar11 + 100) = local_64;
  *(int *)((long)puVar18 + (ulong)uVar11 + 0x68) = (int)unaff_x29;
  *(int *)((long)puVar18 + (ulong)uVar11 + 0x6c) = (int)((ulong)unaff_x29 >> 0x20);
  return;
}


