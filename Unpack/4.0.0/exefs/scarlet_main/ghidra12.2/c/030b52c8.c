/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b52c8; name: FUN_030b52c8
 */


long FUN_030b52c8(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  float fVar16;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (iVar6 = *(int *)(param_1 + 0x20) + -1, iVar6 != 0 && 0 < *(int *)(param_1 + 0x20))) {
    FUN_030b5a10(*(undefined8 *)(param_1 + 0x18),0,iVar6,&LAB_030b56c0);
    uVar2 = *(uint *)(param_1 + 0x20);
    if (1 < (int)uVar2) {
      lVar11 = (ulong)uVar2 * 0xc;
      uVar13 = (ulong)uVar2;
      do {
        lVar11 = lVar11 + -0xc;
        piVar14 = (int *)(*(long *)(param_1 + 0x18) + lVar11);
        if ((*piVar14 == piVar14[-3]) && (piVar14[1] == piVar14[-2])) {
          uVar2 = *(uint *)(param_1 + 0x20);
          iVar6 = uVar2 - 1;
          *(int *)(param_1 + 0x20) = iVar6;
          if (uVar13 != uVar2) {
            piVar12 = (int *)(*(long *)(param_1 + 0x18) + (long)iVar6 * 0xc);
            *piVar14 = *piVar12;
            piVar14[1] = piVar12[1];
            piVar14[2] = piVar12[2];
          }
        }
        bVar1 = 2 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar1);
    }
  }
  local_70 = 0;
  local_68 = -0x8000000000000000;
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_03060850(&local_70,PTR_PTR_047d1a50,iVar6);
    iVar5 = (int)local_68;
  }
  if (iVar5 != iVar6) {
    local_68 = CONCAT44(local_68._4_4_,iVar6);
    iVar5 = iVar6;
  }
  local_80 = 0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0x80000000;
  iVar6 = *(int *)(param_1 + 0x20) + -1;
  if (iVar6 != 0 && 0 < *(int *)(param_1 + 0x20)) {
    FUN_030b5a10(*(undefined8 *)(param_1 + 0x18),0,iVar6,&LAB_030b56a0);
    iVar5 = (int)local_68;
  }
  puVar4 = PTR_PTR_047d1a50;
  if (0 < iVar5) {
    uVar13 = 0;
    uVar7 = 0;
    do {
      piVar14 = (int *)(local_70 + uVar13 * 8 + 4);
      *piVar14 = 0;
      *(int *)(local_70 + uVar13 * 8) = (int)local_78;
      iVar6 = (int)uVar7;
      if (iVar6 < *(int *)(param_1 + 0x20)) {
        uVar15 = (ulong)iVar6;
        lVar11 = ((-(uVar7 >> 0x1f) & 0xfffffffe00000000 | uVar7 << 1) + (long)iVar6) * 4;
        do {
          if (uVar13 != *(uint *)(*(long *)(param_1 + 0x18) + lVar11)) break;
          lVar10 = *(long *)(param_1 + 0x18) + lVar11;
          *piVar14 = *piVar14 + 1;
          fVar16 = *(float *)(lVar10 + 8);
          lVar8 = (long)(int)local_78;
          uVar3 = *(undefined4 *)(lVar10 + 4);
          if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)local_78) {
            FUN_030b5b44(&local_80,puVar4,lVar8 + 1);
          }
          uVar15 = uVar15 + 1;
          *(ulong *)(local_80 + (long)(int)local_78 * 8) =
               CONCAT44(uVar3,(uint)(fVar16 * 1.0039062) >> 0x10);
          local_78._0_4_ = (int)(lVar8 + 1);
          lVar11 = lVar11 + 0xc;
        } while ((long)uVar15 < (long)*(int *)(param_1 + 0x20));
        uVar7 = uVar15 & 0xffffffff;
      }
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(int)local_68);
  }
  puVar4 = PTR_PTR_047d1a50;
  if (param_1 + 8 != param_2 + 0x18) {
    FUN_02e9b22c(param_2 + 0x18,PTR_PTR_047d1a50);
    FUN_02e9b22c(param_1 + 8,puVar4);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar9;
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  puVar4 = PTR_PTR_047d1a50;
  if (&local_70 != (long *)(param_2 + 0x28)) {
    FUN_03060960((long *)(param_2 + 0x28),PTR_PTR_047d1a50);
    FUN_03060960(&local_70,puVar4);
    lVar10 = *(long *)(param_2 + 0x28);
    *(long *)(param_2 + 0x28) = local_70;
    lVar11 = *(long *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = (int)local_68;
    *(uint *)(param_2 + 0x34) = local_68._4_4_;
    local_70 = lVar10;
    local_68 = lVar11;
  }
  puVar4 = PTR_PTR_047d1a50;
  if (&local_80 != (long *)(param_2 + 0x38)) {
    FUN_030609d0((long *)(param_2 + 0x38),PTR_PTR_047d1a50);
    FUN_030609d0(&local_80,puVar4);
    lVar11 = *(long *)(param_2 + 0x38);
    *(long *)(param_2 + 0x38) = local_80;
    uVar2 = *(uint *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = (int)local_78;
    *(uint *)(param_2 + 0x44) = local_78._4_4_;
    local_80 = lVar11;
    local_78._4_4_ = uVar2;
  }
  uVar2 = local_78._4_4_;
  puVar4 = PTR_PTR_047d1a50;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (int)uVar2) && (local_80 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_80,(ulong)uVar2 << 3);
  }
  lVar11 = local_68;
  uVar13 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_70 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,local_70,uVar13 << 3);
  }
  return param_2;
}


