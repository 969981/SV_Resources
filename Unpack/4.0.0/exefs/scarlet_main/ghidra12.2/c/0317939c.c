/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317939c; name: FUN_0317939c
 */


undefined8 FUN_0317939c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_40 = (undefined8 *)0x0;
  local_38 = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 1);
  if ((int)uVar4 < 1) {
    local_40 = (undefined8 *)0x0;
    local_38 = -0x8000000000000000;
  }
  else {
    puVar9 = (undefined8 *)*param_2;
    local_40 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 3);
    uVar3 = uVar4 & 3;
    local_38 = CONCAT44(uVar4,uVar4);
    puVar2 = local_40;
    if (2 < uVar4 - 1) {
      iVar8 = -(uVar4 & 0xfffffffc);
      puVar6 = local_40;
      do {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6[2] = puVar9[2];
        puVar1 = puVar9 + 3;
        puVar2 = puVar6 + 4;
        puVar9 = puVar9 + 4;
        iVar8 = iVar8 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar2;
      } while (iVar8 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar9;
      puVar2 = puVar2 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  if (&local_40 != (undefined8 **)param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 3);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_0317e5d8(&local_40);
    *param_1 = (long)local_40;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
    *(uint *)((long)param_1 + 0xc) = local_38._4_4_;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
  }
  FUN_0317e4cc(param_1);
  lVar5 = local_38;
  uVar7 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_40 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,uVar7 << 3);
  }
  return 1;
}


