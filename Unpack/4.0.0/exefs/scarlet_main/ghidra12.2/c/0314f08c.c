/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f08c; name: FUN_0314f08c
 */


undefined8 FUN_0314f08c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_40 = (undefined8 *)0x0;
  local_38 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    local_40 = (undefined8 *)0x0;
    local_38 = -0x8000000000000000;
  }
  else {
    param_2 = (undefined8 *)*param_2;
    local_40 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar2 << 4);
    local_38 = CONCAT44(uVar2,uVar2);
    puVar5 = local_40;
    if (uVar2 != 1) {
      iVar6 = -(uVar2 & 0xfffffffe);
      puVar4 = local_40;
      puVar8 = param_2;
      do {
        uVar1 = puVar8[1];
        puVar5 = puVar4 + 4;
        *puVar4 = *puVar8;
        puVar4[1] = uVar1;
        param_2 = puVar8 + 4;
        uVar1 = puVar8[3];
        iVar6 = iVar6 + 2;
        puVar4[2] = puVar8[2];
        puVar4[3] = uVar1;
        puVar4 = puVar5;
        puVar8 = param_2;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar1 = param_2[1];
      *puVar5 = *param_2;
      puVar5[1] = uVar1;
    }
  }
  if (&local_40 != (undefined8 **)param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 4);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_0315cb94(&local_40);
    *param_1 = (long)local_40;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
    *(uint *)((long)param_1 + 0xc) = local_38._4_4_;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
  }
  FUN_0315ca78(param_1);
  lVar3 = local_38;
  uVar7 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_40 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,uVar7 << 4);
  }
  return 1;
}


