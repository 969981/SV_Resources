/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031796bc; name: FUN_031796bc
 */


undefined8 FUN_031796bc(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined4 *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 1);
  if ((int)uVar4 < 1) {
    local_70 = (undefined4 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    puVar16 = (undefined4 *)*param_2;
    local_70 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 * 0x18)
    ;
    uVar15 = 0;
    local_68 = CONCAT44(uVar4,uVar4);
    puVar12 = local_70;
    do {
      *puVar12 = *puVar16;
      *(undefined8 *)(puVar12 + 2) = 0;
      *(undefined8 *)(puVar12 + 4) = 0x8000000000000000;
      uVar5 = puVar16[4];
      if ((int)uVar5 < 1) {
        *(undefined8 *)(puVar12 + 2) = 0;
        *(undefined8 *)(puVar12 + 4) = 0x8000000000000000;
      }
      else {
        puVar17 = *(undefined8 **)(puVar16 + 2);
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 * 0xc);
        uVar3 = uVar5 & 3;
        *(undefined8 **)(puVar12 + 2) = puVar7;
        puVar12[4] = uVar5;
        puVar12[5] = uVar5;
        if (2 < uVar5 - 1) {
          iVar10 = -(uVar5 & 0xfffffffc);
          puVar8 = puVar7;
          do {
            uVar11 = *puVar17;
            puVar7 = puVar8 + 6;
            iVar10 = iVar10 + 4;
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar17 + 1);
            *puVar8 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar17 + 0xc);
            *(undefined4 *)((long)puVar8 + 0x14) = *(undefined4 *)((long)puVar17 + 0x14);
            *(undefined8 *)((long)puVar8 + 0xc) = uVar11;
            uVar11 = puVar17[3];
            *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar17 + 4);
            puVar8[3] = uVar11;
            uVar11 = *(undefined8 *)((long)puVar17 + 0x24);
            puVar1 = (undefined4 *)((long)puVar17 + 0x2c);
            puVar17 = puVar17 + 6;
            *(undefined4 *)((long)puVar8 + 0x2c) = *puVar1;
            *(undefined8 *)((long)puVar8 + 0x24) = uVar11;
            puVar8 = puVar7;
          } while (iVar10 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          uVar11 = *puVar17;
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar17 + 1);
          puVar17 = (undefined8 *)((long)puVar17 + 0xc);
          *puVar7 = uVar11;
          puVar7 = (undefined8 *)((long)puVar7 + 0xc);
        }
      }
      uVar15 = uVar15 + 1;
      puVar12 = puVar12 + 6;
      puVar16 = puVar16 + 6;
    } while (uVar15 != uVar4);
  }
  if (&local_70 != (undefined4 **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar13 = *param_1;
      lVar14 = (long)(int)param_1[1] * 0x18;
      do {
        lVar2 = lVar13 + lVar14;
        *(undefined4 *)(lVar2 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) * 0xc);
        }
        lVar14 = lVar14 + -0x18;
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined4 *)(lVar2 + -4) = 0x80000000;
      } while (lVar14 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x18);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_0317e88c(&local_70);
    *param_1 = (long)local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
  }
  FUN_0317e77c(param_1);
  puVar12 = local_70;
  if ((int)local_68 != 0) {
    lVar14 = (long)(int)local_68 * 0x18;
    do {
      uVar4 = *(uint *)((long)puVar12 + lVar14 + -4);
      *(undefined4 *)((long)puVar12 + lVar14 + -8) = 0;
      if ((-1 < (int)uVar4) && (lVar13 = *(long *)((long)puVar12 + lVar14 + -0x10), lVar13 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))(puVar6,lVar13,(ulong)uVar4 * 0xc);
      }
      lVar13 = lVar14 + -0x18;
      *(undefined8 *)((long)puVar12 + lVar14 + -0x10) = 0;
      *(undefined4 *)((long)puVar12 + lVar14 + -4) = 0x80000000;
      lVar14 = lVar13;
    } while (lVar13 != 0);
  }
  lVar14 = local_68;
  uVar9 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_70 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_70,uVar9 * 0x18);
  }
  return 1;
}


