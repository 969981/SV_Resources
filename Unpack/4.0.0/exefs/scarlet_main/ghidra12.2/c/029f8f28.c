/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029f8f28; name: FUN_029f8f28
 */


/* WARNING: Removing unreachable block (ram,0x029f8fc4) */
/* WARNING: Removing unreachable block (ram,0x029f9084) */

undefined4 FUN_029f8f28(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *__src;
  ulong uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  long *plVar11;
  uint uVar12;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  
  local_98 = (void *)0x0;
  local_90 = 0x8000000000000000;
  local_88 = (void *)0x0;
  local_80 = 0x8000000000000000;
  uVar3 = FUN_029f9218(param_1,&local_e0);
  uVar2 = local_90;
  pvVar9 = local_98;
  plVar11 = (long *)PTR_PTR_047d1a50;
  uVar12 = (uint)local_90;
  if ((int)(uint)local_90 < 1) {
    pvVar4 = (void *)0x0;
    uVar12 = 0x80000000;
  }
  else {
    pvVar4 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,(local_90 & 0xffffffff) * 0x30);
    pvVar5 = pvVar4;
    if (uVar12 != 1) {
      iVar7 = -(uVar12 & 0xfffffffe);
      do {
        memcpy(pvVar5,pvVar9,0x30);
        pvVar10 = (void *)((long)pvVar5 + 0x30);
        pvVar1 = (void *)((long)pvVar9 + 0x30);
        pvVar5 = (void *)((long)pvVar5 + 0x60);
        pvVar9 = (void *)((long)pvVar9 + 0x60);
        memcpy(pvVar10,pvVar1,0x30);
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0);
      if ((uVar2 & 1) == 0) goto LAB_029f9044;
    }
    memcpy(pvVar5,pvVar9,0x30);
  }
LAB_029f9044:
  uVar2 = local_80;
  pvVar9 = local_88;
  uVar8 = (uint)local_80;
  if ((int)(uint)local_80 < 1) {
    pvVar5 = (void *)0x0;
    uVar8 = 0x80000000;
  }
  else {
    pvVar5 = (void *)(**(code **)(*plVar11 + 0x18))(plVar11,(local_80 & 0xffffffff) * 0x30);
    pvVar10 = pvVar5;
    if (uVar8 == 1) {
    }
    else {
      iVar7 = -(uVar8 & 0xfffffffe);
      do {
        memcpy(pvVar10,pvVar9,0x30);
        pvVar1 = (void *)((long)pvVar10 + 0x30);
        __src = (void *)((long)pvVar9 + 0x30);
        pvVar10 = (void *)((long)pvVar10 + 0x60);
        pvVar9 = (void *)((long)pvVar9 + 0x60);
        memcpy(pvVar1,__src,0x30);
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0);
      plVar11 = (long *)PTR_PTR_047d1a50;
      if ((uVar2 & 1) == 0) goto LAB_029f9104;
    }
    memcpy(pvVar10,pvVar9,0x30);
  }
LAB_029f9104:
  param_2[5] = CONCAT44(ABS((float)((ulong)uStack_b8 >> 0x20)),(int)uStack_b8);
  param_2[4] = local_c0;
  param_2[7] = uStack_a8 & 0xffffffff;
  param_2[6] = local_b0;
  *(undefined4 *)(param_2 + 8) = local_a0;
  param_2[1] = uStack_d8 & 0xffffffff;
  *param_2 = local_e0;
  param_2[3] = uStack_c8 & 0xffffffff;
  param_2[2] = local_d0;
  if ((pvVar5 != (void *)0x0) && (-1 < (int)uVar8)) {
    (**(code **)(*plVar11 + 0x20))(plVar11,pvVar5,(ulong)uVar8 * 0x30);
  }
  if ((pvVar4 != (void *)0x0) && (-1 < (int)uVar12)) {
    (**(code **)(*plVar11 + 0x20))(plVar11,pvVar4,(ulong)uVar12 * 0x30);
  }
  uVar2 = local_80;
  uVar6 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (long)uVar2) && (local_88 != (void *)0x0)) {
    (**(code **)(*plVar11 + 0x20))(plVar11,local_88,uVar6 * 0x30);
  }
  uVar2 = local_90;
  local_80 = CONCAT44(0x80000000,(uint)local_80);
  uVar6 = (ulong)local_90._4_4_;
  local_88 = (void *)0x0;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (long)uVar2) && (local_98 != (void *)0x0)) {
    (**(code **)(*plVar11 + 0x20))(plVar11,local_98,uVar6 * 0x30);
  }
  return uVar3;
}


