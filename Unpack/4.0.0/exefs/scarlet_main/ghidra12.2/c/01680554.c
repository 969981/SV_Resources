/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01680554; name: FUN_01680554
 */


void FUN_01680554(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  undefined4 local_b8;
  char local_b4 [4];
  undefined1 auStack_b0 [32];
  byte local_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  char local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined8 local_76;
  undefined1 *local_68;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  plVar10 = (long *)param_3[1];
  uVar8 = (**(code **)(*plVar10 + 0x98))(plVar10);
  plVar11 = (long *)param_3[2];
  uVar2 = *(undefined2 *)*param_3;
  FUN_01480c4c(auStack_b0);
  FUN_016808d0(auStack_b0);
  uVar9 = FUN_01246e90(param_1);
  uVar6 = FUN_01482688(uVar9,plVar10,plVar11,uVar2);
  bVar7 = FUN_01480e28(uVar2);
  if (bVar7 != 0) {
    uVar12 = 0;
    do {
      uVar9 = FUN_01246e90(param_1);
      FUN_014831ec(uVar9,uVar2,uVar12,plVar10,plVar11,local_b4,&local_b8);
      cVar5 = local_b4[0];
      uVar4 = local_b8;
      if (local_b4[0] == '\0') {
        FUN_0148155c(auStack_b0,1);
      }
      else {
        uVar1 = *(undefined4 *)(param_3 + 3);
        local_88 = uVar8;
        if (local_b4[0] == '\t') {
          local_76 = 0;
          local_84 = (**(code **)(*plVar11 + 0x98))(plVar11);
          local_80 = 1;
          local_68 = auStack_b0;
          local_7c = uVar4;
          local_78 = 0;
          local_76._0_6_ = CONCAT42(uVar1,(undefined2)local_76);
          local_76 = CONCAT17(uVar6,(undefined7)local_76) & 0x1ffffffffffffff;
          FUN_0148112c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x15a0),local_90,&local_88);
          bVar3 = local_90[0];
          local_76 = 0;
          local_88 = uVar8;
          local_84 = (**(code **)(*plVar11 + 0x98))(plVar11);
          local_80 = 2;
          local_68 = auStack_b0;
          local_7c = uVar4;
          local_78 = 0;
          local_76._0_6_ = CONCAT42(uVar1,(undefined2)local_76);
          local_76 = CONCAT17(uVar6,(undefined7)local_76) & 0x1ffffffffffffff;
          FUN_0148112c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x15a0),local_90,&local_88);
          local_76 = 0;
          bVar3 = local_90[0] | bVar3;
          local_88 = uVar8;
          local_84 = (**(code **)(*plVar11 + 0x98))(plVar11);
          local_80 = 3;
          local_68 = auStack_b0;
          local_7c = uVar4;
          local_78 = 0;
          local_76._0_6_ = CONCAT42(uVar1,(undefined2)local_76);
          local_76 = CONCAT17(uVar6,(undefined7)local_76) & 0x1ffffffffffffff;
          FUN_0148112c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x15a0),local_90,&local_88);
          local_76 = 0;
          bVar3 = bVar3 | local_90[0];
          local_88 = uVar8;
          local_84 = (**(code **)(*plVar11 + 0x98))(plVar11);
          local_80 = 4;
          local_68 = auStack_b0;
          local_7c = uVar4;
          local_78 = 0;
          local_76._0_6_ = CONCAT42(uVar1,(undefined2)local_76);
          local_76 = CONCAT17(uVar6,(undefined7)local_76) & 0x1ffffffffffffff;
          FUN_0148112c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x15a0),local_90,&local_88);
          local_76 = 0;
          bVar3 = bVar3 | local_90[0];
          local_88 = uVar8;
          local_84 = (**(code **)(*plVar11 + 0x98))(plVar11);
          local_80 = '\x05';
          local_68 = auStack_b0;
          local_7c = uVar4;
          local_78 = 0;
          local_76._0_6_ = CONCAT42(uVar1,(undefined2)local_76);
          local_76 = CONCAT17(uVar6,(undefined7)local_76) & 0x1ffffffffffffff;
          FUN_0148112c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x15a0),local_90,&local_88);
          bVar3 = bVar3 | local_90[0];
        }
        else {
          local_76 = 0;
          local_84 = (**(code **)(*plVar11 + 0x98))(plVar11);
          uVar9 = CONCAT17(uVar6,(undefined7)local_76);
          local_68 = auStack_b0;
          local_80 = cVar5;
          local_7c = uVar4;
          local_78 = 0;
          local_76._0_6_ = CONCAT42(uVar1,(undefined2)local_76);
          local_76 = CONCAT26((short)((ulong)uVar9 >> 0x30),(undefined6)local_76) &
                     0x1ffffffffffffff;
          FUN_0148112c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x15a0),local_90,&local_88);
          bVar3 = local_90[0];
        }
        if (bVar3 != 0) {
          *param_2 = 1;
        }
      }
      uVar12 = uVar12 + 1;
    } while (bVar7 != uVar12);
  }
  uVar8 = FUN_016808e4(auStack_b0);
  *(undefined4 *)(param_2 + 4) = uVar8;
  FUN_016808c8(auStack_b0);
  FUN_01480c48(auStack_b0);
  return;
}


