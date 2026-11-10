/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314812c; name: FUN_0314812c
 */


undefined8 FUN_0314812c(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_40;
  undefined8 local_38;
  
  local_40 = (undefined4 *)0x0;
  local_38 = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 1);
  if ((int)uVar4 < 1) {
    local_40 = (undefined4 *)0x0;
    local_38 = -0x8000000000000000;
  }
  else {
    puVar9 = (undefined4 *)*param_2;
    local_40 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 2);
    uVar3 = uVar4 & 3;
    local_38 = CONCAT44(uVar4,uVar4);
    puVar2 = local_40;
    if (2 < uVar4 - 1) {
      iVar7 = -(uVar4 & 0xfffffffc);
      puVar8 = local_40;
      do {
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[1];
        puVar8[2] = puVar9[2];
        puVar1 = puVar9 + 3;
        puVar2 = puVar8 + 4;
        puVar9 = puVar9 + 4;
        iVar7 = iVar7 + 4;
        puVar8[3] = *puVar1;
        puVar8 = puVar2;
      } while (iVar7 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar9;
      puVar2 = puVar2 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  if (&local_40 != (undefined4 **)param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 2);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_01339774(&local_40,PTR_PTR_047d1a50);
    *param_1 = (long)local_40;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
    *(uint *)((long)param_1 + 0xc) = local_38._4_4_;
    local_40 = (undefined4 *)0x0;
    local_38 = 0;
  }
  FUN_03151f58(param_1);
  lVar5 = local_38;
  uVar6 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_40 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,uVar6 << 2);
  }
  return 1;
}


