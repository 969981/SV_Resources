/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ce5c; name: FUN_0314ce5c
 */


undefined8 FUN_0314ce5c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *local_50;
  undefined8 local_48;
  
  puVar3 = PTR_PTR_047d1a50;
  local_50 = (undefined4 *)0x0;
  local_48 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  uVar6 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    local_50 = (undefined4 *)0x0;
    local_48 = -0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)*param_2;
    local_50 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar6 * 0x38);
    local_48 = CONCAT44(uVar2,uVar2);
    puVar4 = local_50;
    do {
      *puVar4 = *puVar8;
      FUN_03094f60(puVar4 + 2,puVar8 + 2);
      uVar2 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar2;
      puVar4 = puVar4 + 0xe;
      puVar8 = puVar8 + 0xe;
    } while (uVar2 != 0);
  }
  if (&local_50 != (undefined4 **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar7 = (long)(int)param_1[1] * 0x38;
      lVar5 = *param_1;
      do {
        lVar1 = lVar5 + lVar7;
        *(undefined4 *)(lVar1 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 2);
        }
        *(undefined8 *)(lVar1 + -0x10) = 0;
        *(undefined4 *)(lVar1 + -4) = 0x80000000;
        *(undefined4 *)(lVar1 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -0x14)) && (*(long *)(lVar1 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar1 + -0x20),(ulong)*(uint *)(lVar1 + -0x14) << 2);
        }
        *(undefined8 *)(lVar1 + -0x20) = 0;
        *(undefined4 *)(lVar1 + -0x14) = 0x80000000;
        *(undefined4 *)(lVar1 + -0x28) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -0x24)) && (*(long *)(lVar1 + -0x30) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar1 + -0x30),(ulong)*(uint *)(lVar1 + -0x24) * 0x14);
        }
        lVar7 = lVar7 + -0x38;
        *(undefined8 *)(lVar1 + -0x30) = 0;
        *(undefined4 *)(lVar1 + -0x24) = 0x80000000;
      } while (lVar7 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar3 + 0x20))
                (puVar3,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x38);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_03158b68(&local_50);
    *param_1 = (long)local_50;
    *(int *)(param_1 + 1) = (int)local_48;
    *(uint *)((long)param_1 + 0xc) = local_48._4_4_;
    local_50 = (undefined4 *)0x0;
    local_48 = 0;
  }
  FUN_03158a58(param_1);
  puVar4 = local_50;
  if ((int)local_48 != 0) {
    lVar7 = (long)(int)local_48 * 0x38;
    do {
      uVar2 = *(uint *)((long)puVar4 + lVar7 + -4);
      *(undefined4 *)((long)puVar4 + lVar7 + -8) = 0;
      if ((-1 < (int)uVar2) && (lVar5 = *(long *)((long)puVar4 + lVar7 + -0x10), lVar5 != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,lVar5,(ulong)uVar2 << 2);
      }
      uVar2 = *(uint *)((long)puVar4 + lVar7 + -0x14);
      *(undefined8 *)((long)puVar4 + lVar7 + -0x10) = 0;
      *(undefined4 *)((long)puVar4 + lVar7 + -4) = 0x80000000;
      *(undefined4 *)((long)puVar4 + lVar7 + -0x18) = 0;
      if ((-1 < (int)uVar2) && (lVar5 = *(long *)((long)puVar4 + lVar7 + -0x20), lVar5 != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,lVar5,(ulong)uVar2 << 2);
      }
      uVar2 = *(uint *)((long)puVar4 + lVar7 + -0x24);
      *(undefined8 *)((long)puVar4 + lVar7 + -0x20) = 0;
      *(undefined4 *)((long)puVar4 + lVar7 + -0x14) = 0x80000000;
      *(undefined4 *)((long)puVar4 + lVar7 + -0x28) = 0;
      if ((-1 < (int)uVar2) && (lVar5 = *(long *)((long)puVar4 + lVar7 + -0x30), lVar5 != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,lVar5,(ulong)uVar2 * 0x14);
      }
      lVar5 = lVar7 + -0x38;
      *(undefined8 *)((long)puVar4 + lVar7 + -0x30) = 0;
      *(undefined4 *)((long)puVar4 + lVar7 + -0x24) = 0x80000000;
      lVar7 = lVar5;
    } while (lVar5 != 0);
  }
  lVar7 = local_48;
  uVar6 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_50 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,local_50,uVar6 * 0x38);
  }
  return 1;
}


