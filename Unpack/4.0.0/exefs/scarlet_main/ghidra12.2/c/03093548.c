/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03093548; name: FUN_03093548
 */


void FUN_03093548(long param_1,int *param_2,undefined4 param_3,long *param_4)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  local_90 = 0;
  local_68 = -0x8000000000000000;
  local_80 = 0;
  local_88 = -0x8000000000000000;
  local_78 = -0x8000000000000000;
  local_70 = 0;
  iVar3 = FUN_03093858(param_1 + 0x188,param_2,&local_90);
  lVar6 = local_68;
  uVar5 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_70 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar5 << 2);
  }
  lVar6 = local_78;
  uVar5 = (ulong)local_78._4_4_;
  local_70 = 0;
  local_68 = CONCAT44(0x80000000,(undefined4)local_68);
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_80 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_80,uVar5 << 2);
  }
  lVar6 = local_88;
  local_78 = CONCAT44(0x80000000,(undefined4)local_78);
  uVar5 = (ulong)local_88._4_4_;
  local_80 = 0;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_90 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar5 * 0x14);
  }
  lVar11 = *(long *)(param_1 + 0x188);
  lVar12 = lVar11 + (long)iVar3 * 0x38;
  puVar13 = (uint *)(lVar12 + 0x10);
  uVar4 = *puVar13;
  lVar6 = *(long *)(param_1 + 0x18) + (long)*param_2 * 0x10;
  lVar8 = (long)iVar3;
  plVar10 = (long *)(lVar12 + 8);
  psVar1 = (short *)(lVar6 + 10);
  psVar2 = (short *)(lVar6 + 8);
  if ((int)uVar4 < 1) {
    uVar7 = 0;
  }
  else {
    lVar6 = *plVar10;
    uVar5 = 0;
    do {
      if ((*(byte *)(lVar6 + 0x10) >> 3 & 1) != 0) {
        lVar11 = lVar11 + lVar8 * 0x38;
        *param_4 = lVar6;
        iVar3 = *(int *)(param_1 + 0x60);
        lVar6 = *(long *)(lVar11 + 0x18) + (long)(iVar3 * (int)uVar5) * 4;
        param_4[1] = lVar6;
        param_4[2] = lVar6 + (long)iVar3 * 4;
        *(short *)(param_4 + 3) = *psVar2 + (short)uVar5 + *psVar1;
        *(undefined4 *)(*(long *)(lVar11 + 0x28) + uVar5 * 4) = param_3;
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x14;
    } while (uVar4 != uVar5);
    uVar7 = uVar4;
  }
  lVar6 = (long)(int)uVar4;
  if ((int)(*(uint *)(lVar11 + lVar8 * 0x38 + 0x14) & 0x7fffffff) <= (int)uVar4) {
    FUN_0309515c(plVar10,PTR_PTR_047d1a50,lVar6 + 1);
    uVar4 = *puVar13;
  }
  lVar12 = *plVar10 + (long)(int)uVar4 * 0x14;
  *puVar13 = (uint)(lVar6 + 1);
  *(undefined8 *)(lVar12 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(lVar12 + 0x10) = 4;
  *param_4 = lVar12;
  lVar14 = lVar11 + lVar8 * 0x38;
  lVar12 = (long)*(int *)(lVar14 + 0x20);
  lVar6 = lVar12 + *(int *)(param_1 + 0x60);
  iVar3 = (int)lVar6;
  if ((int)(*(uint *)(lVar14 + 0x24) & 0x7fffffff) < iVar3) {
    FUN_02e9b320((long *)(lVar14 + 0x18),PTR_PTR_047d1a50,lVar6);
  }
  *(int *)(lVar14 + 0x20) = iVar3;
  lVar6 = *(long *)(lVar14 + 0x18) + lVar12 * 4;
  iVar3 = *(int *)(param_1 + 0x60);
  param_4[1] = lVar6;
  param_4[2] = lVar6 + (long)iVar3 * 4;
  *(short *)(param_4 + 3) = *psVar2 + (short)uVar7 + *psVar1;
  lVar11 = lVar11 + lVar8 * 0x38;
  piVar9 = (int *)(lVar11 + 0x30);
  iVar3 = *piVar9;
  lVar6 = (long)iVar3;
  if ((int)(*(uint *)(lVar11 + 0x34) & 0x7fffffff) <= iVar3) {
    FUN_03095b0c((long *)(lVar11 + 0x28),lVar6 + 1);
    iVar3 = *piVar9;
  }
  *(undefined4 *)(*(long *)(lVar11 + 0x28) + (long)iVar3 * 4) = param_3;
  *piVar9 = (int)(lVar6 + 1);
  return;
}


