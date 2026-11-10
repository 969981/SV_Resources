/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e81fc; name: FUN_030e81fc
 */


void FUN_030e81fc(undefined8 param_1,long *param_2,long param_3,undefined4 *param_4,
                 undefined4 *param_5,long *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 local_90 [2];
  undefined4 local_88 [2];
  int local_80;
  undefined2 local_7c;
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar13 = *param_2;
  iVar7 = (int)param_3;
  lVar14 = (long)iVar7;
  lVar11 = lVar13 + (long)iVar7 * 0x28;
  local_80 = *(int *)(lVar11 + 8);
  local_7c = *(undefined2 *)(lVar11 + 0xc);
  local_78 = (undefined4 *)0x0;
  local_70 = 0x8000000000000000;
  uVar4 = *(uint *)(lVar11 + 0x18);
  if ((int)uVar4 < 1) {
    local_78 = (undefined4 *)0x0;
    local_70 = -0x8000000000000000;
  }
  else {
    puVar15 = *(undefined4 **)(lVar13 + lVar14 * 0x28 + 0x10);
    local_78 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 2);
    uVar3 = uVar4 & 3;
    local_70 = CONCAT44(uVar4,uVar4);
    puVar2 = local_78;
    if (2 < uVar4 - 1) {
      iVar10 = -(uVar4 & 0xfffffffc);
      puVar6 = local_78;
      do {
        *puVar6 = *puVar15;
        puVar6[1] = puVar15[1];
        puVar6[2] = puVar15[2];
        puVar1 = puVar15 + 3;
        puVar2 = puVar6 + 4;
        puVar15 = puVar15 + 4;
        iVar10 = iVar10 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar2;
      } while (iVar10 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar15;
      puVar2 = puVar2 + 1;
      puVar15 = puVar15 + 1;
    }
  }
  puVar2 = local_78;
  local_68 = *(undefined4 *)(lVar13 + lVar14 * 0x28 + 0x20);
  local_80 = local_80 + -1;
  if (((local_80 == 0) && ((char)local_7c == '\0')) && (local_7c._1_1_ == '\0')) {
    iVar10 = (int)param_6[1];
    lVar11 = (long)iVar10;
    uVar5 = *param_4;
    if ((int)(*(uint *)((long)param_6 + 0xc) & 0x7fffffff) <= iVar10) {
      FUN_030e71f8(param_6,lVar11 + 1);
      iVar10 = (int)param_6[1];
    }
    puVar9 = (undefined1 *)(*param_6 + (long)iVar10 * 0xc);
    *puVar9 = 3;
    *(undefined4 *)(puVar9 + 4) = uVar5;
    *(int *)(param_6 + 1) = (int)(lVar11 + 1);
    local_88[0] = *param_4;
    local_90[0] = *param_5;
    FUN_030e2538(param_1,local_88,local_90,param_6 + 2);
    if ((*(uint *)(param_2 + 3) < (uint)((ulong)param_3 >> 0x20)) ||
       (lVar11 = param_2[2] + (param_3 >> 0x20) * 8, *(int *)(lVar11 + 4) != iVar7)) {
      lVar11 = FUN_030e7e50(param_2,*param_2 + lVar14 * 0x28);
    }
    FUN_030e7ec4(param_2,lVar11);
  }
  else {
    lVar13 = *param_2;
    lVar11 = lVar13 + lVar14 * 0x28;
    *(int *)(lVar11 + 8) = local_80;
    *(undefined2 *)(lVar11 + 0xc) = local_7c;
    if ((int *)(lVar11 + 8) != &local_80) {
      iVar7 = (int)local_70;
      lVar12 = (long)(int)local_70;
      if ((int)(*(uint *)(lVar13 + lVar14 * 0x28 + 0x1c) & 0x7fffffff) < (int)local_70) {
        FUN_02eb1edc((undefined8 *)(lVar11 + 0x10),PTR_PTR_047d1a50,lVar12);
      }
      memcpy(*(void **)(lVar11 + 0x10),puVar2,lVar12 << 2);
      *(int *)(lVar13 + lVar14 * 0x28 + 0x18) = iVar7;
    }
    *(undefined4 *)(lVar13 + lVar14 * 0x28 + 0x20) = local_68;
  }
  lVar11 = local_70;
  uVar8 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_78 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar8 << 2);
  }
  return;
}


