/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b32c; name: FUN_0314b32c
 */


undefined8 FUN_0314b32c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *local_40;
  undefined8 local_38;
  
  puVar3 = PTR_PTR_047d1a50;
  local_40 = (undefined8 *)0x0;
  local_38 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 1) {
    local_40 = (undefined8 *)0x0;
    local_38 = -0x8000000000000000;
  }
  else {
    param_2 = (undefined8 *)*param_2;
    local_40 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar1 * 0xc);
    local_38 = CONCAT44(uVar1,uVar1);
    puVar6 = local_40;
    if (uVar1 != 1) {
      iVar7 = -(uVar1 & 0xfffffffe);
      puVar5 = local_40;
      puVar10 = param_2;
      do {
        uVar9 = *puVar10;
        puVar6 = puVar5 + 3;
        param_2 = puVar10 + 3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar10 + 1);
        *puVar5 = uVar9;
        uVar2 = *(undefined4 *)((long)puVar10 + 0x14);
        iVar7 = iVar7 + 2;
        *(undefined8 *)((long)puVar5 + 0xc) = *(undefined8 *)((long)puVar10 + 0xc);
        *(undefined4 *)((long)puVar5 + 0x14) = uVar2;
        puVar5 = puVar6;
        puVar10 = param_2;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 1) != 0) {
      uVar9 = *param_2;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar6 = uVar9;
    }
  }
  if (&local_40 != (undefined8 **)param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar3 + 0x20))
                (puVar3,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0xc);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_030daed4(&local_40,PTR_PTR_047d1a50);
    *param_1 = (long)local_40;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_38;
    *(uint *)((long)param_1 + 0xc) = local_38._4_4_;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
  }
  FUN_03156e54(param_1);
  lVar4 = local_38;
  uVar8 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_40 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,local_40,uVar8 * 0xc);
  }
  return 1;
}


