/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ae4c; name: FUN_0314ae4c
 */


undefined8 FUN_0314ae4c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *local_40;
  undefined8 local_38;
  
  local_40 = (undefined4 *)0x0;
  local_38 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    local_40 = (undefined4 *)0x0;
    local_38 = -0x8000000000000000;
  }
  else {
    puVar6 = (undefined4 *)*param_2;
    local_40 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar4 * 0x68);
    local_38 = CONCAT44(uVar1,uVar1);
    puVar3 = local_40;
    do {
      *puVar3 = *puVar6;
      FUN_030db080(puVar3 + 2,puVar6 + 2);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      puVar3 = puVar3 + 0x1a;
      puVar6 = puVar6 + 0x1a;
    } while (uVar1 != 0);
  }
  if (&local_40 != (undefined4 **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar2 = *param_1;
      lVar5 = (long)(int)param_1[1] * 0x68;
      do {
        FUN_030d9a14(lVar2 + -0x60 + lVar5);
        lVar5 = lVar5 + -0x68;
      } while (lVar5 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x68);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_03156c34(&local_40);
    *param_1 = (long)local_40;
    *(int *)(param_1 + 1) = (int)local_38;
    *(uint *)((long)param_1 + 0xc) = local_38._4_4_;
    local_40 = (undefined4 *)0x0;
    local_38 = 0;
  }
  FUN_03156b24(param_1);
  puVar3 = local_40;
  if ((int)local_38 != 0) {
    lVar5 = (long)(int)local_38 * 0x68;
    do {
      FUN_030d9a14((long)puVar3 + lVar5 + -0x60);
      lVar5 = lVar5 + -0x68;
    } while (lVar5 != 0);
  }
  lVar5 = local_38;
  uVar4 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_40 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,uVar4 * 0x68);
  }
  return 1;
}


