/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b36b0; name: FUN_022b36b0
 */


void FUN_022b36b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  *param_1 = 1;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = param_2[2];
  local_40 = (undefined8 *)0x0;
  local_38 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 4);
  if ((int)uVar3 < 1) {
    local_40 = (undefined8 *)0x0;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0x80000000;
  }
  else {
    puVar9 = (undefined8 *)param_2[3];
    local_40 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 << 5);
    puVar5 = local_40;
    if (uVar3 != 1) {
      iVar6 = -(uVar3 & 0xfffffffe);
      puVar4 = local_40;
      do {
        uVar8 = puVar9[3];
        puVar5 = puVar4 + 8;
        iVar6 = iVar6 + 2;
        puVar4[1] = puVar9[1];
        puVar4[3] = uVar8;
        uVar8 = *puVar9;
        puVar4[2] = puVar9[2];
        *puVar4 = uVar8;
        uVar1 = puVar9[7];
        uVar8 = puVar9[4];
        uVar2 = puVar9[5];
        puVar4[6] = puVar9[6];
        puVar4[7] = uVar1;
        puVar9 = puVar9 + 8;
        puVar4[4] = uVar8;
        puVar4[5] = uVar2;
        puVar4 = puVar5;
      } while (iVar6 != 0);
    }
    local_38._0_4_ = uVar3;
    local_38._4_4_ = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar8 = puVar9[3];
      puVar5[1] = puVar9[1];
      puVar5[3] = uVar8;
      uVar8 = *puVar9;
      puVar5[2] = puVar9[2];
      *puVar5 = uVar8;
    }
  }
  FUN_022b389c(param_1 + 8,&local_58);
  uVar3 = local_38._4_4_;
  uVar7 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if (((int)uVar3 < 0) || (local_40 == (undefined8 *)0x0)) {
    return;
  }
  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,uVar7 << 5);
  return;
}


