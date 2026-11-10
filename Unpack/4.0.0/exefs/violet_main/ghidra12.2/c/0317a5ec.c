/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317a5ec; name: FUN_0317a5ec
 */


undefined8 FUN_0317a5ec(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  local_70 = (undefined8 *)0x0;
  local_68 = 0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 1);
  if ((int)uVar4 < 1) {
    local_70 = (undefined8 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    param_2 = (undefined8 *)*param_2;
    local_70 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 * 0x30)
    ;
    uVar17 = 0;
    local_68 = CONCAT44(uVar4,uVar4);
    puVar14 = local_70;
    do {
      uVar9 = param_2[1];
      puVar14[3] = param_2[3];
      uVar12 = *param_2;
      uVar13 = param_2[2];
      puVar14[1] = uVar9;
      puVar14[2] = uVar13;
      *puVar14 = uVar12;
      puVar14[4] = 0;
      puVar14[5] = 0x8000000000000000;
      uVar5 = *(uint *)(param_2 + 5);
      if ((int)uVar5 < 1) {
        puVar14[4] = 0;
        puVar14[5] = 0x8000000000000000;
      }
      else {
        puVar18 = (undefined8 *)param_2[4];
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 3);
        uVar3 = uVar5 & 7;
        puVar14[4] = puVar7;
        *(uint *)(puVar14 + 5) = uVar5;
        *(uint *)((long)puVar14 + 0x2c) = uVar5;
        if (6 < uVar5 - 1) {
          iVar11 = -(uVar5 & 0xfffffff8);
          puVar8 = puVar7;
          do {
            *puVar8 = *puVar18;
            puVar8[1] = puVar18[1];
            puVar8[2] = puVar18[2];
            puVar8[3] = puVar18[3];
            puVar8[4] = puVar18[4];
            puVar8[5] = puVar18[5];
            puVar8[6] = puVar18[6];
            puVar1 = puVar18 + 7;
            puVar7 = puVar8 + 8;
            puVar18 = puVar18 + 8;
            iVar11 = iVar11 + 8;
            puVar8[7] = *puVar1;
            puVar8 = puVar7;
          } while (iVar11 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar18;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      uVar17 = uVar17 + 1;
      puVar14 = puVar14 + 6;
      param_2 = param_2 + 6;
    } while (uVar17 != uVar4);
  }
  if (&local_70 != (undefined8 **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar15 = *param_1;
      lVar16 = (long)(int)param_1[1] * 0x30;
      do {
        lVar2 = lVar15 + lVar16;
        *(undefined4 *)(lVar2 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 3);
        }
        lVar16 = lVar16 + -0x30;
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined4 *)(lVar2 + -4) = 0x80000000;
      } while (lVar16 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x30);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_0317f624(&local_70);
    *param_1 = (long)local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
  }
  FUN_0317f46c(param_1);
  puVar14 = local_70;
  if ((int)local_68 != 0) {
    lVar16 = (long)(int)local_68 * 0x30;
    do {
      uVar4 = *(uint *)((long)puVar14 + lVar16 + -4);
      *(undefined4 *)((long)puVar14 + lVar16 + -8) = 0;
      if ((-1 < (int)uVar4) && (lVar15 = *(long *)((long)puVar14 + lVar16 + -0x10), lVar15 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))(puVar6,lVar15,(ulong)uVar4 << 3);
      }
      lVar15 = lVar16 + -0x30;
      *(undefined8 *)((long)puVar14 + lVar16 + -0x10) = 0;
      *(undefined4 *)((long)puVar14 + lVar16 + -4) = 0x80000000;
      lVar16 = lVar15;
    } while (lVar15 != 0);
  }
  lVar16 = local_68;
  uVar10 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_70 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_70,uVar10 * 0x30);
  }
  return 1;
}


