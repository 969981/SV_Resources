/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a4d68; name: FUN_034a4d68
 */


void FUN_034a4d68(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint local_84;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar3 != (long *)0x0) {
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 3) = 0;
    }
  }
  if (*(uint *)(param_2 + 0x108) != 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x2ec);
    local_a0 = *(undefined4 *)(param_1 + 0x2f4);
    local_98 = *(undefined8 *)(param_1 + 0x2f8);
    local_b0 = *(undefined8 *)(param_1 + 0x28);
    local_90 = *(undefined4 *)(param_1 + 0x38);
    local_88 = *(undefined4 *)(param_1 + 0x2d8);
    uStack_8c = *(undefined4 *)(param_1 + 0x228);
    local_84 = 1;
    if ((param_3 & 1) == 0) {
      local_84 = 2;
    }
    local_84 = local_84 & *(int *)(param_1 + 699) >> 0x1f;
    lVar5 = *(long *)(param_2 + 0x100);
    lVar4 = *(long *)PTR_DAT_047e7048;
    lVar1 = lVar5 + (ulong)*(uint *)(param_2 + 0x108) * 0x20;
    local_80 = param_1;
    do {
      uVar2 = *(uint *)(*(undefined8 **)(lVar5 + 0x18) + 1);
      if (uVar2 != 0) {
        lVar8 = (ulong)uVar2 << 3;
        puVar7 = (undefined8 *)**(undefined8 **)(lVar5 + 0x18);
        do {
          uVar6 = *puVar7;
          FUN_0348bdb4(uVar6,lVar5,&local_b0,*(undefined8 *)(lVar4 + 0x18),param_1 + 0x68);
          local_70 = *(undefined8 *)(lVar5 + 8);
          _local_68 = CONCAT44(*(undefined4 *)(lVar5 + 0x14),3);
          local_78 = uVar6;
          FUN_03497f00(lVar4,&local_78,&local_b0,param_1 + 0x68);
          lVar8 = lVar8 + -8;
          puVar7 = puVar7 + 1;
        } while (lVar8 != 0);
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar1);
  }
  return;
}


