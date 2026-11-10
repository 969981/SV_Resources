/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b3540; name: FUN_022b3540
 */


/* WARNING: Removing unreachable block (ram,0x022b35c0) */

void FUN_022b3540(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  puVar4 = PTR_PTR_047d1a50;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = (undefined8 *)0x0;
  local_48 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 4);
  if ((int)uVar3 < 1) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0x8000000000000000;
    FUN_022b36b0(param_1,&local_68);
    return;
  }
  puVar10 = (undefined8 *)param_2[3];
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 << 5);
  if (uVar3 == 1) {
    puVar6 = puVar5;
  }
  else {
    iVar7 = -(uVar3 & 0xfffffffe);
    puVar9 = puVar5;
    do {
      uVar8 = puVar10[3];
      puVar6 = puVar9 + 8;
      iVar7 = iVar7 + 2;
      puVar9[1] = puVar10[1];
      puVar9[3] = uVar8;
      uVar8 = *puVar10;
      puVar9[2] = puVar10[2];
      *puVar9 = uVar8;
      uVar1 = puVar10[7];
      uVar8 = puVar10[4];
      uVar2 = puVar10[5];
      puVar9[6] = puVar10[6];
      puVar9[7] = uVar1;
      puVar10 = puVar10 + 8;
      puVar9[4] = uVar8;
      puVar9[5] = uVar2;
      puVar9 = puVar6;
    } while (iVar7 != 0);
    if ((uVar3 & 1) == 0) goto LAB_022b366c;
  }
  uVar8 = puVar10[3];
  puVar6[1] = puVar10[1];
  puVar6[3] = uVar8;
  uVar8 = *puVar10;
  puVar6[2] = puVar10[2];
  *puVar6 = uVar8;
LAB_022b366c:
  local_50 = puVar5;
  local_48._0_4_ = uVar3;
  local_48._4_4_ = uVar3;
  FUN_022b36b0(param_1,&local_68);
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if (((int)uVar3 < 0) || (puVar5 == (undefined8 *)0x0)) {
    return;
  }
  (**(code **)(*(long *)puVar4 + 0x20))(puVar4,puVar5,(ulong)uVar3 << 5);
  return;
}


