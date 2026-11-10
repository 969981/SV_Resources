/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324ddd0; name: FUN_0324ddd0
 */


void FUN_0324ddd0(undefined4 **param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  uint *local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  
  puVar2 = PTR_PTR_047d1a50;
  local_70 = local_60;
  local_68 = 0x8000002000000000;
  if (*(int *)(param_1 + 1) == 0) {
    uVar12 = 1;
    local_60[0] = 0x30;
    local_68 = 0x8000002000000001;
  }
  else {
    local_80 = 0;
    local_78 = -0x8000000000000000;
    if (param_2 != 0) {
      FUN_02ed686c(&local_80,PTR_PTR_047d1a50,1);
      *(int *)(local_80 + (long)(int)local_78 * 4) = param_2;
      local_78 = CONCAT44(local_78._4_4_,1);
    }
    local_90 = (undefined4 *)0x0;
    local_88 = -0x8000000000000000;
    if (&local_90 == param_1) {
      bVar4 = true;
    }
    else {
      local_88 = 0x8000000000000000;
      iVar9 = *(int *)(param_1 + 1);
      if (0 < iVar9) {
        puVar14 = *param_1;
        FUN_02eb1f88(&local_90,PTR_PTR_047d1a50,(long)iVar9);
        uVar12 = (long)iVar9 * 4 - 4;
        uVar5 = ((uint)(uVar12 >> 2) & 0x3fffffff) + 1;
        if ((uVar5 & 3) == 0) {
          puVar7 = local_90;
          puVar11 = puVar14;
        }
        else {
          lVar13 = -((ulong)uVar5 & 3);
          puVar6 = local_90;
          puVar10 = puVar14;
          do {
            puVar11 = puVar10 + 1;
            bVar4 = lVar13 != -1;
            lVar13 = lVar13 + 1;
            puVar7 = puVar6 + 1;
            *puVar6 = *puVar10;
            puVar6 = puVar7;
            puVar10 = puVar11;
          } while (bVar4);
        }
        if (0xb < uVar12) {
          do {
            *puVar7 = *puVar11;
            puVar7[1] = puVar11[1];
            puVar7[2] = puVar11[2];
            puVar6 = puVar11 + 3;
            puVar11 = puVar11 + 4;
            puVar7[3] = *puVar6;
            puVar7 = puVar7 + 4;
          } while (puVar11 != puVar14 + iVar9);
        }
      }
      bVar4 = iVar9 == 0;
      local_88 = CONCAT44(local_88._4_4_,iVar9);
    }
    puVar3 = PTR_PTR_047d1a50;
    local_a0 = (uint *)0x0;
    local_98 = -0x8000000000000000;
    if (bVar4) {
      uVar12 = local_68 & 0xffffffff;
    }
    else {
      do {
        FUN_0324d240(&local_90,&local_80,&local_90,&local_a0);
        uVar5 = 0;
        if ((int)local_98 != 0) {
          uVar5 = *local_a0;
        }
        uVar12 = (long)(int)local_68 + 1;
        if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)local_68) {
          FUN_031bca38(&local_70,puVar3,uVar12);
        }
        local_70[(int)local_68] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar5];
        local_68 = CONCAT44(local_68._4_4_,(int)uVar12);
      } while ((int)local_88 != 0);
    }
    lVar13 = local_98;
    if (1 < (int)uVar12) {
      lVar8 = 0;
      iVar9 = -1;
      do {
        uVar1 = local_70[lVar8];
        local_70[lVar8] = local_70[(int)uVar12 + iVar9];
        lVar8 = lVar8 + 1;
        local_70[iVar9 + (int)local_68] = uVar1;
        uVar12 = local_68 & 0xffffffff;
        iVar9 = iVar9 + -1;
      } while (lVar8 < (int)local_68 >> 1);
    }
    uVar12 = (ulong)local_98._4_4_;
    local_98 = (ulong)local_98._4_4_ << 0x20;
    if ((-1 < lVar13) && (local_a0 != (uint *)0x0)) {
      (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_a0,uVar12 << 2);
    }
    lVar13 = local_88;
    uVar12 = (ulong)local_88._4_4_;
    local_88 = (ulong)local_88._4_4_ << 0x20;
    if ((-1 < lVar13) && (local_90 != (undefined4 *)0x0)) {
      (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_90,uVar12 << 2);
    }
    lVar13 = local_78;
    uVar12 = (ulong)local_78._4_4_;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    if ((-1 < lVar13) && (local_80 != 0)) {
      (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_80,uVar12 << 2);
    }
    uVar12 = local_68 & 0xffffffff;
  }
  FUN_031c6afc(param_3,local_70,uVar12);
  uVar12 = local_68;
  local_68 = local_68 & 0xffffffff00000000;
  if ((-1 < (long)uVar12) && (local_70 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2);
  }
  return;
}


