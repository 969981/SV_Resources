/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087d400; name: FUN_0087d400
 */


undefined8 FUN_0087d400(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  uVar4 = 0x80260201;
  if (param_1 != (undefined4 *)0x0) {
    uStack_ac = *param_1;
    local_b0 = param_1[1];
    uStack_a4 = param_1[2];
    local_a8 = param_1[3];
    local_a0 = param_1[4];
    uStack_9c = param_1[5];
    local_68 = *(undefined1 *)(param_1 + 0x14);
    local_98 = *(undefined8 *)(param_1 + 6);
    uStack_90 = *(undefined8 *)(param_1 + 8);
    lVar9 = 0;
    lVar10 = 0;
    local_78 = *(undefined8 *)(param_1 + 0xe);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uVar11 = 0;
    local_88 = *(undefined8 *)(param_1 + 10);
    uStack_80 = *(undefined8 *)(param_1 + 0xc);
    uVar2 = *(uint *)(&DAT_044ea9b0 + (ulong)(param_2 & 1) * 0x10);
    do {
      if (uVar11 < uVar2) {
        puVar1 = (undefined4 *)((long)param_1 + lVar10);
        iVar3 = *(int *)((&PTR_DAT_044ea9b8)[(ulong)(param_2 & 1) * 2] + lVar9);
        *(undefined8 *)(puVar1 + 0x26) = 1;
        puVar1[0x16] = iVar3;
        if (4 < iVar3 + 1U) {
          puVar1[0x16] = 0xffffffff;
          *(undefined8 *)(puVar1 + 0x24) = 0;
          *(undefined8 *)(puVar1 + 0x18) = 0;
          *(undefined8 *)(puVar1 + 0x1a) = 0;
          *(undefined8 *)(puVar1 + 0x1c) = 0;
          *(undefined8 *)(puVar1 + 0x1e) = 0;
          *(undefined8 *)(puVar1 + 0x20) = 0;
          *(undefined8 *)(puVar1 + 0x22) = 0;
          return 0x80260201;
        }
        puVar7 = param_1 + uVar11 * 0x12;
        puVar8 = (undefined8 *)(puVar7 + 0x26);
        switch(iVar3) {
        case 0:
          *(undefined **)(puVar1 + 0x1a) = PTR_FUN_047d1db8;
          *(undefined **)(puVar1 + 0x1c) = PTR_LAB_047d1dc0;
          *(undefined **)(puVar1 + 0x20) = PTR_FUN_047d1dc8;
          *(undefined **)(puVar1 + 0x1e) = PTR_LAB_047d1dd0;
          *(undefined8 *)(puVar1 + 0x22) = 0;
          puVar5 = param_1 + 0x176;
          puVar6 = PTR_FUN_047d1dd8;
          break;
        case 1:
          *(undefined **)(puVar1 + 0x1a) = PTR_FUN_047d1de0;
          *(undefined **)(puVar1 + 0x1c) = PTR_FUN_047d1de8;
          *(undefined **)(puVar1 + 0x20) = PTR_FUN_047d1df0;
          *(undefined **)(puVar1 + 0x1e) = PTR_LAB_047d1df8;
          *(undefined **)(puVar1 + 0x22) = PTR_LAB_047d1e00;
          puVar5 = param_1 + 0x2ce;
          puVar6 = PTR_FUN_047d1e08;
          break;
        case 2:
          *(undefined **)(puVar1 + 0x1a) = PTR_FUN_047d1e10;
          *(undefined **)(puVar1 + 0x1c) = PTR_LAB_047d1e18;
          *(undefined **)(puVar1 + 0x20) = PTR_LAB_047d1e20;
          *(undefined **)(puVar1 + 0x1e) = PTR_LAB_047d1e28;
          *(undefined8 *)(puVar1 + 0x22) = 0;
          puVar5 = param_1 + 0x5e;
          puVar6 = PTR_FUN_047d1e30;
          break;
        case 3:
          *(undefined **)(puVar1 + 0x1a) = PTR_FUN_047d1e38;
          *(undefined **)(puVar1 + 0x1c) = PTR_LAB_047d1e40;
          *(undefined **)(puVar1 + 0x20) = PTR_FUN_047d1e48;
          *(undefined **)(puVar1 + 0x1e) = PTR_LAB_047d1e50;
          *(undefined **)(puVar1 + 0x22) = PTR_LAB_047d1e58;
          puVar5 = param_1 + 0x7c;
          puVar6 = PTR_FUN_047d1e60;
          break;
        case -1:
          goto switchD_0087d510_caseD_ffffffff;
        }
        *(undefined **)(puVar1 + 0x24) = puVar6;
        *(undefined4 **)((long)param_1 + lVar10 + 0x60) = puVar5;
        puVar7 = puVar1;
        puVar8 = (undefined8 *)(puVar1 + 0x26);
      }
      else {
        puVar7 = (undefined4 *)((long)param_1 + lVar10);
        puVar8 = (undefined8 *)(puVar7 + 0x26);
        *puVar8 = 1;
        puVar7[0x16] = 0xffffffff;
switchD_0087d510_caseD_ffffffff:
        puVar5 = (undefined4 *)0x0;
        *(undefined8 *)((long)param_1 + lVar10 + 0x60) = 0;
        *(undefined8 *)((long)param_1 + lVar10 + 0x88) = 0;
        *(undefined8 *)((long)param_1 + lVar10 + 0x90) = 0;
        *(undefined8 *)((long)param_1 + lVar10 + 0x78) = 0;
        *(undefined8 *)((long)param_1 + lVar10 + 0x80) = 0;
        *(undefined8 *)((long)param_1 + lVar10 + 0x68) = 0;
        *(undefined8 *)((long)param_1 + lVar10 + 0x70) = 0;
        *(undefined8 *)((long)param_1 + lVar10 + 0x60) = 0;
      }
      if ((ulong)uVar2 * 0x48 == lVar10) {
        uVar4 = 0;
        break;
      }
      *(undefined4 *)puVar8 =
           *(undefined4 *)((&PTR_DAT_044ea9b8)[(ulong)(param_2 & 1) * 2] + lVar9 + 4);
      uVar4 = (**(code **)((long)param_1 + lVar10 + 0x68))(puVar5,&local_b0,param_3);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      lVar10 = lVar10 + 0x48;
      uVar11 = uVar11 + 1;
      puVar7[0x27] = 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar10 != 0x120);
    param_1[0x12] = 1;
    param_1[0x13] = param_2;
  }
  return uVar4;
}


