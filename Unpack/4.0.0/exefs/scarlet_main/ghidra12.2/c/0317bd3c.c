/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317bd3c; name: FUN_0317bd3c
 */


undefined8 FUN_0317bd3c(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
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
    puVar15 = (undefined4 *)*param_2;
    local_70 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 * 0x18)
    ;
    uVar14 = 0;
    local_68 = CONCAT44(uVar4,uVar4);
    puVar11 = local_70;
    do {
      *puVar11 = *puVar15;
      *(undefined8 *)(puVar11 + 2) = 0;
      *(undefined8 *)(puVar11 + 4) = 0x8000000000000000;
      uVar5 = puVar15[4];
      if ((int)uVar5 < 1) {
        *(undefined8 *)(puVar11 + 2) = 0;
        *(undefined8 *)(puVar11 + 4) = 0x8000000000000000;
      }
      else {
        puVar16 = *(undefined4 **)(puVar15 + 2);
        puVar7 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar5 << 2);
        uVar3 = uVar5 & 7;
        *(undefined4 **)(puVar11 + 2) = puVar7;
        puVar11[4] = uVar5;
        puVar11[5] = uVar5;
        if (6 < uVar5 - 1) {
          iVar9 = -(uVar5 & 0xfffffff8);
          puVar10 = puVar7;
          do {
            *puVar10 = *puVar16;
            puVar10[1] = puVar16[1];
            puVar10[2] = puVar16[2];
            puVar10[3] = puVar16[3];
            puVar10[4] = puVar16[4];
            puVar10[5] = puVar16[5];
            puVar10[6] = puVar16[6];
            puVar1 = puVar16 + 7;
            puVar7 = puVar10 + 8;
            puVar16 = puVar16 + 8;
            iVar9 = iVar9 + 8;
            puVar10[7] = *puVar1;
            puVar10 = puVar7;
          } while (iVar9 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar16;
          puVar7 = puVar7 + 1;
          puVar16 = puVar16 + 1;
        }
      }
      uVar14 = uVar14 + 1;
      puVar11 = puVar11 + 6;
      puVar15 = puVar15 + 6;
    } while (uVar14 != uVar4);
  }
  if (&local_70 != (undefined4 **)param_1) {
    if ((int)param_1[1] != 0) {
      lVar12 = *param_1;
      lVar13 = (long)(int)param_1[1] * 0x18;
      do {
        lVar2 = lVar12 + lVar13;
        *(undefined4 *)(lVar2 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 2);
        }
        lVar13 = lVar13 + -0x18;
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined4 *)(lVar2 + -4) = 0x80000000;
      } while (lVar13 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x18);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_03180ec0(&local_70);
    *param_1 = (long)local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
  }
  FUN_03180db0(param_1);
  puVar11 = local_70;
  if ((int)local_68 != 0) {
    lVar13 = (long)(int)local_68 * 0x18;
    do {
      uVar4 = *(uint *)((long)puVar11 + lVar13 + -4);
      *(undefined4 *)((long)puVar11 + lVar13 + -8) = 0;
      if ((-1 < (int)uVar4) && (lVar12 = *(long *)((long)puVar11 + lVar13 + -0x10), lVar12 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))(puVar6,lVar12,(ulong)uVar4 << 2);
      }
      lVar12 = lVar13 + -0x18;
      *(undefined8 *)((long)puVar11 + lVar13 + -0x10) = 0;
      *(undefined4 *)((long)puVar11 + lVar13 + -4) = 0x80000000;
      lVar13 = lVar12;
    } while (lVar12 != 0);
  }
  lVar13 = local_68;
  uVar8 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_70 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_70,uVar8 * 0x18);
  }
  return 1;
}


