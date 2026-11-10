/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146b0c; name: FUN_03146b0c
 */


undefined8 FUN_03146b0c(undefined4 **param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar3 < 1) {
    local_70 = (undefined4 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    puVar14 = (undefined4 *)*param_2;
    local_70 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 * 0x28)
    ;
    uVar15 = 0;
    local_68 = CONCAT44(uVar3,uVar3);
    puVar12 = local_70;
    do {
      *puVar12 = *puVar14;
      uVar4 = puVar14[2];
      *(undefined2 *)(puVar12 + 3) = *(undefined2 *)(puVar14 + 3);
      puVar12[2] = uVar4;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0x8000000000000000;
      uVar5 = puVar14[6];
      if ((int)uVar5 < 1) {
        *(undefined8 *)(puVar12 + 4) = 0;
        *(undefined8 *)(puVar12 + 6) = 0x8000000000000000;
      }
      else {
        puVar16 = *(undefined4 **)(puVar14 + 4);
        puVar7 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 2);
        uVar2 = uVar5 & 7;
        *(undefined4 **)(puVar12 + 4) = puVar7;
        puVar12[6] = uVar5;
        puVar12[7] = uVar5;
        if (6 < uVar5 - 1) {
          iVar11 = -(uVar5 & 0xfffffff8);
          puVar8 = puVar7;
          do {
            *puVar8 = *puVar16;
            puVar8[1] = puVar16[1];
            puVar8[2] = puVar16[2];
            puVar8[3] = puVar16[3];
            puVar8[4] = puVar16[4];
            puVar8[5] = puVar16[5];
            puVar8[6] = puVar16[6];
            puVar1 = puVar16 + 7;
            puVar7 = puVar8 + 8;
            puVar16 = puVar16 + 8;
            iVar11 = iVar11 + 8;
            puVar8[7] = *puVar1;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar16;
          puVar7 = puVar7 + 1;
          puVar16 = puVar16 + 1;
        }
      }
      uVar15 = uVar15 + 1;
      puVar12[8] = puVar14[8];
      puVar12 = puVar12 + 10;
      puVar14 = puVar14 + 10;
    } while (uVar15 != uVar3);
  }
  if (&local_70 != param_1) {
    if (*(int *)(param_1 + 1) != 0) {
      puVar12 = *param_1;
      lVar13 = (long)*(int *)(param_1 + 1) * 0x28;
      do {
        uVar3 = *(uint *)((long)puVar12 + lVar13 + -0xc);
        *(undefined4 *)((long)puVar12 + lVar13 + -0x10) = 0;
        if ((-1 < (int)uVar3) && (lVar9 = *(long *)((long)puVar12 + lVar13 + -0x18), lVar9 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))(puVar6,lVar9,(ulong)uVar3 << 2);
        }
        lVar9 = lVar13 + -0x28;
        *(undefined8 *)((long)puVar12 + lVar13 + -0x18) = 0;
        *(undefined4 *)((long)puVar12 + lVar13 + -0xc) = 0x80000000;
        lVar13 = lVar9;
      } while (lVar9 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != (undefined4 *)0x0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x28);
    }
    *param_1 = (undefined4 *)0x0;
    param_1[1] = (undefined4 *)0x8000000000000000;
    FUN_03150dac(&local_70);
    *param_1 = local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
  }
  FUN_03150c9c(param_1);
  puVar12 = local_70;
  if ((int)local_68 != 0) {
    lVar13 = (long)(int)local_68 * 0x28;
    do {
      uVar3 = *(uint *)((long)puVar12 + lVar13 + -0xc);
      *(undefined4 *)((long)puVar12 + lVar13 + -0x10) = 0;
      if ((-1 < (int)uVar3) && (lVar9 = *(long *)((long)puVar12 + lVar13 + -0x18), lVar9 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))(puVar6,lVar9,(ulong)uVar3 << 2);
      }
      lVar9 = lVar13 + -0x28;
      *(undefined8 *)((long)puVar12 + lVar13 + -0x18) = 0;
      *(undefined4 *)((long)puVar12 + lVar13 + -0xc) = 0x80000000;
      lVar13 = lVar9;
    } while (lVar9 != 0);
  }
  lVar13 = local_68;
  uVar10 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_70 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_70,uVar10 * 0x28);
  }
  return 1;
}


