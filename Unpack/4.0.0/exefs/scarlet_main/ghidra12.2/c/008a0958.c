/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a0958; name: FUN_008a0958
 */


void FUN_008a0958(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xc00) == 0) {
    iVar2 = *(int *)PTR_DAT_047d2348;
  }
  else {
    lVar6 = (((ulong)(uVar1 << 4) & 0x30) + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
            ((ulong)(uVar1 >> 2) & 3) * 0x14;
    lVar3 = *(long *)(param_1 + 0x18) + lVar6;
    lVar6 = *(long *)(param_1 + 0x18) + (ulong)((int)lVar6 + 4);
    if ((uVar1 & 0xc00) != 0x800) {
      lVar6 = lVar3;
    }
    iVar2 = FUN_00893a20(lVar3,lVar6);
  }
  if (iVar2 == 7) {
    lVar3 = FUN_00896e78(0x28);
    if (lVar3 != 0) {
      FUN_00facfa8(lVar3);
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar7 = (((ulong)(uVar1 << 4) & 0x30) + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
            ((ulong)(uVar1 >> 2) & 3) * 0x14;
    lVar6 = *(long *)(param_1 + 0x18) + lVar7;
    lVar7 = *(long *)(param_1 + 0x18) + (ulong)((int)lVar7 + 4);
    if ((uVar1 & 0xc00) != 0x800) {
      lVar7 = lVar6;
    }
    *(long *)(param_1 + 0x40) = lVar3;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uVar4 = FUN_00893584(&local_60,&local_80,lVar6,lVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = FUN_00896e5c(uVar4,8);
    FUN_00fac5dc(uVar8,uVar5,uVar4);
    FUN_00fad338(*(undefined8 *)(param_1 + 0x40),param_2,&local_60);
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


