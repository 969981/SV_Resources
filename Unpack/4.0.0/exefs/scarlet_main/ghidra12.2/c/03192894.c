/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03192894; name: FUN_03192894
 */


void FUN_03192894(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  puVar1 = PTR_PTR_047d1a50;
  local_60 = 0;
  local_58 = -0x8000000000000000;
  local_70 = 0;
  local_68 = -0x8000000000000000;
  local_80 = 0;
  local_78 = -0x8000000000000000;
  iVar4 = *(int *)(param_2 + 0x20);
  uVar9 = iVar4 + 4;
  local_90 = 0;
  local_88 = 0x8000000000000000;
  if (iVar4 < -3) {
    uVar6 = 0x80000000;
    local_90 = 0;
    uVar7 = 0;
    uVar8 = uVar9;
  }
  else {
    local_90 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar9 << 5);
    iVar4 = *(int *)(param_2 + 0x20);
    uVar7 = uVar9;
    uVar8 = iVar4 + 4;
    uVar6 = uVar9;
  }
  local_88 = CONCAT44(uVar6,uVar7);
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  if (iVar4 < -3) {
    uVar7 = 0x80000000;
    local_a0 = 0;
    uVar9 = 0;
  }
  else {
    local_a0 = (**(code **)(*(long *)puVar1 + 0x18))(puVar1,(ulong)uVar8 << 3);
    iVar4 = *(int *)(param_2 + 0x20);
    uVar9 = uVar8;
    uVar7 = uVar8;
    uVar8 = iVar4 + 4;
  }
  lVar3 = local_a0;
  local_98 = CONCAT44(uVar7,uVar9);
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  if (iVar4 < -3) {
    uVar8 = 0;
    local_b0 = 0;
    uVar9 = 0x80000000;
  }
  else {
    local_b0 = (**(code **)(*(long *)puVar1 + 0x18))(puVar1,(ulong)uVar8 << 5);
    uVar9 = uVar8;
  }
  lVar2 = local_b0;
  local_a8._0_4_ = uVar8;
  local_a8._4_4_ = uVar9;
  FUN_03192b0c(param_1,param_2,0,&local_60,&local_70,&local_80,&local_90,&local_a0,&local_b0);
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (int)uVar9) && (lVar2 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,lVar2,(ulong)uVar9 << 5);
  }
  local_98 = local_98 & 0xffffffff00000000;
  if ((-1 < (int)uVar7) && (lVar3 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,lVar3,(ulong)uVar7 << 3);
  }
  lVar3 = local_88;
  uVar5 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_90 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,local_90,uVar5 << 5);
  }
  lVar3 = local_78;
  uVar5 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_80 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,local_80,uVar5 << 4);
  }
  lVar3 = local_68;
  uVar5 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_70 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,local_70,uVar5 << 2);
  }
  lVar3 = local_58;
  uVar5 = (ulong)local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_60 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,local_60,uVar5 << 2);
  }
  return;
}


