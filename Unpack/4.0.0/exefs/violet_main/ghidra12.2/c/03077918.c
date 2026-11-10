/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03077918; name: FUN_03077918
 */


void FUN_03077918(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  plVar1 = (long *)(param_1 + 0x38);
  local_40 = 0;
  local_38 = 0x8000000000000000;
  if (plVar1 == &local_40) {
    iVar5 = 0;
  }
  else {
    FUN_03078430(&local_40);
    FUN_03078430(plVar1);
    lVar6 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = local_40;
    iVar5 = *(int *)(param_1 + 0x40);
    uVar7 = *(ulong *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x44) = local_38._4_4_;
    local_40 = lVar6;
    local_38 = uVar7;
  }
  local_50 = 0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0x80000000;
  iVar5 = iVar5 - *(int *)(param_1 + 0x48);
  if (0 < iVar5) {
    FUN_02eea048(&local_50,PTR_PTR_047d1a50,iVar5);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      iVar5 = *(int *)(*(long *)(param_1 + 0x28) + uVar7 * 4);
      if (iVar5 != -1) {
        lVar6 = 0;
        do {
          iVar8 = (int)lVar6;
          cVar3 = *(char *)(local_40 + (iVar5 + iVar8));
          *(char *)(local_50 + (int)local_48 + lVar6) = cVar3;
          lVar6 = lVar6 + 1;
        } while (cVar3 != -1);
        *(int *)(*(long *)(param_1 + 0x28) + uVar7 * 4) = (int)local_48;
        local_48._0_4_ = (int)local_48 + iVar8 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  if (&local_50 != plVar1) {
    FUN_03078430(plVar1);
    FUN_03078430(&local_50);
    lVar6 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = local_50;
    uVar2 = *(uint *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = (int)local_48;
    *(uint *)(param_1 + 0x44) = local_48._4_4_;
    local_50 = lVar6;
    local_48._4_4_ = uVar2;
  }
  uVar2 = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x48) = 0;
  puVar4 = PTR_PTR_047d1a50;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < (int)uVar2) && (local_50 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_50,uVar2);
  }
  uVar7 = local_38;
  local_38 = local_38 & 0xffffffff00000000;
  if ((-1 < (long)uVar7) && (local_40 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  }
  return;
}


