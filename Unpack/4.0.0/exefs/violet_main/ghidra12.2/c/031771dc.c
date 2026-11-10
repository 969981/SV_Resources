/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031771dc; name: FUN_031771dc
 */


undefined8 FUN_031771dc(undefined8 **param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar5 = PTR_PTR_047d1a50;
  local_70 = (undefined8 *)0x0;
  local_68 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar3 < 1) {
    local_70 = (undefined8 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    param_2 = (undefined8 *)*param_2;
    local_70 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 * 0x48)
    ;
    uVar14 = 0;
    local_68 = CONCAT44(uVar3,uVar3);
    puVar12 = local_70;
    do {
      uVar9 = param_2[1];
      *puVar12 = *param_2;
      puVar12[1] = uVar9;
      puVar12[2] = 0;
      puVar12[3] = 0x8000000000000000;
      uVar4 = *(uint *)(param_2 + 3);
      if ((int)uVar4 < 1) {
        puVar12[2] = 0;
        puVar12[3] = 0x8000000000000000;
      }
      else {
        puVar15 = (undefined4 *)param_2[2];
        puVar6 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,(ulong)uVar4 << 2);
        uVar2 = uVar4 & 7;
        puVar12[2] = puVar6;
        *(uint *)(puVar12 + 3) = uVar4;
        *(uint *)((long)puVar12 + 0x1c) = uVar4;
        if (6 < uVar4 - 1) {
          iVar11 = -(uVar4 & 0xfffffff8);
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar15;
            puVar7[1] = puVar15[1];
            puVar7[2] = puVar15[2];
            puVar7[3] = puVar15[3];
            puVar7[4] = puVar15[4];
            puVar7[5] = puVar15[5];
            puVar7[6] = puVar15[6];
            puVar1 = puVar15 + 7;
            puVar6 = puVar7 + 8;
            puVar15 = puVar15 + 8;
            iVar11 = iVar11 + 8;
            puVar7[7] = *puVar1;
            puVar7 = puVar6;
          } while (iVar11 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar15;
          puVar6 = puVar6 + 1;
          puVar15 = puVar15 + 1;
        }
      }
      *(undefined1 *)(puVar12 + 4) = *(undefined1 *)(param_2 + 4);
      puVar12[5] = 0;
      puVar12[6] = 0x8000000000000000;
      uVar4 = *(uint *)(param_2 + 6);
      if ((int)uVar4 < 1) {
        puVar12[5] = 0;
        puVar12[6] = 0x8000000000000000;
      }
      else {
        puVar15 = (undefined4 *)param_2[5];
        puVar6 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,(ulong)uVar4 << 2);
        uVar2 = uVar4 & 7;
        puVar12[5] = puVar6;
        *(uint *)(puVar12 + 6) = uVar4;
        *(uint *)((long)puVar12 + 0x34) = uVar4;
        if (6 < uVar4 - 1) {
          iVar11 = -(uVar4 & 0xfffffff8);
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar15;
            puVar7[1] = puVar15[1];
            puVar7[2] = puVar15[2];
            puVar7[3] = puVar15[3];
            puVar7[4] = puVar15[4];
            puVar7[5] = puVar15[5];
            puVar7[6] = puVar15[6];
            puVar1 = puVar15 + 7;
            puVar6 = puVar7 + 8;
            puVar15 = puVar15 + 8;
            iVar11 = iVar11 + 8;
            puVar7[7] = *puVar1;
            puVar7 = puVar6;
          } while (iVar11 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar15;
          puVar6 = puVar6 + 1;
          puVar15 = puVar15 + 1;
        }
      }
      uVar9 = param_2[7];
      uVar14 = uVar14 + 1;
      *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(param_2 + 8);
      puVar12[7] = uVar9;
      puVar12 = puVar12 + 9;
      param_2 = param_2 + 9;
    } while (uVar14 != uVar3);
  }
  if (&local_70 != param_1) {
    if (*(int *)(param_1 + 1) != 0) {
      puVar12 = *param_1;
      lVar13 = (long)*(int *)(param_1 + 1) * 0x48;
      do {
        uVar3 = *(uint *)((long)puVar12 + lVar13 + -0x14);
        *(undefined4 *)((long)puVar12 + lVar13 + -0x18) = 0;
        if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)puVar12 + lVar13 + -0x20), lVar8 != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))(puVar5,lVar8,(ulong)uVar3 << 2);
        }
        uVar3 = *(uint *)((long)puVar12 + lVar13 + -0x2c);
        *(undefined8 *)((long)puVar12 + lVar13 + -0x20) = 0;
        *(undefined4 *)((long)puVar12 + lVar13 + -0x14) = 0x80000000;
        *(undefined4 *)((long)puVar12 + lVar13 + -0x30) = 0;
        if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)puVar12 + lVar13 + -0x38), lVar8 != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))(puVar5,lVar8,(ulong)uVar3 << 2);
        }
        lVar8 = lVar13 + -0x48;
        *(undefined8 *)((long)puVar12 + lVar13 + -0x38) = 0;
        *(undefined4 *)((long)puVar12 + lVar13 + -0x2c) = 0x80000000;
        lVar13 = lVar8;
      } while (lVar8 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)puVar5 + 0x20))
                (puVar5,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x48);
    }
    *param_1 = (undefined8 *)0x0;
    param_1[1] = (undefined8 *)0x8000000000000000;
    FUN_0317d9c8(&local_70);
    *param_1 = local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
  }
  FUN_0317d89c(param_1);
  puVar12 = local_70;
  if ((int)local_68 != 0) {
    lVar13 = (long)(int)local_68 * 0x48;
    do {
      uVar3 = *(uint *)((long)puVar12 + lVar13 + -0x14);
      *(undefined4 *)((long)puVar12 + lVar13 + -0x18) = 0;
      if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)puVar12 + lVar13 + -0x20), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))(puVar5,lVar8,(ulong)uVar3 << 2);
      }
      uVar3 = *(uint *)((long)puVar12 + lVar13 + -0x2c);
      *(undefined8 *)((long)puVar12 + lVar13 + -0x20) = 0;
      *(undefined4 *)((long)puVar12 + lVar13 + -0x14) = 0x80000000;
      *(undefined4 *)((long)puVar12 + lVar13 + -0x30) = 0;
      if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)puVar12 + lVar13 + -0x38), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))(puVar5,lVar8,(ulong)uVar3 << 2);
      }
      lVar8 = lVar13 + -0x48;
      *(undefined8 *)((long)puVar12 + lVar13 + -0x38) = 0;
      *(undefined4 *)((long)puVar12 + lVar13 + -0x2c) = 0x80000000;
      lVar13 = lVar8;
    } while (lVar8 != 0);
  }
  lVar13 = local_68;
  uVar10 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_70 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_70,uVar10 * 0x48);
  }
  return 1;
}


