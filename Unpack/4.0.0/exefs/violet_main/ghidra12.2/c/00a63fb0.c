/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a63fb0; name: FUN_00a63fb0
 */


void FUN_00a63fb0(ushort *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar4 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar6 = PTR_DAT_047d4ca8;
  puVar5 = PTR_DAT_047d4ca0;
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  plVar1 = *(long **)(lVar10 + 0x1c8);
  plVar3 = *(long **)(lVar10 + 0x1c0);
  do {
    if (plVar3 == plVar1) {
      return;
    }
    lVar10 = *plVar3;
    uVar8 = FUN_00a669dc(lVar10 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar8 & 1) == 0);
  uVar2 = *param_1;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)puVar5;
  *(long *)puVar6 = lVar11;
  plVar1 = *(long **)(lVar11 + 0x1c8);
  plVar3 = *(long **)(lVar11 + 0x1c0);
  do {
    if (plVar3 == plVar1) {
      uVar9 = 0;
      uVar12 = 0;
      uVar13 = 0;
      goto LAB_00a640ec;
    }
    lVar11 = *plVar3;
    uVar8 = FUN_00a669dc(lVar11 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar8 & 1) == 0);
  if (uVar2 < 0x402) {
    lVar11 = lVar11 + 0x28 + (ulong)uVar2 * 0x20;
    local_78 = *(undefined8 *)(lVar11 + 0x18);
    uStack_70 = *(undefined8 *)(lVar11 + 0x20);
    local_68 = *(undefined4 *)(lVar11 + 0x28);
    uVar9 = *(uint *)(lVar11 + 0x2c);
    uVar12 = *(uint *)(lVar11 + 0x30);
    uVar13 = *(uint *)(lVar11 + 0x34);
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    local_68 = 0;
    uVar9 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  local_90 = local_78;
  uStack_88 = uStack_70;
  local_80 = local_68;
LAB_00a640ec:
  uVar14 = 0x10000;
  if ((param_5 & 1) == 0) {
    uVar14 = 0;
  }
  uVar14 = uVar14 | param_3 & 0xff | (param_4 & 0xff) << 8 | param_6 << 0x18;
  if (param_2 == 2) {
    uVar13 = uVar14;
  }
  else if (param_2 == 1) {
    uVar12 = uVar14;
  }
  else if (param_2 == 0) {
    uVar9 = uVar14;
  }
  if ((ulong)*param_1 < 0x402) {
    lVar10 = lVar10 + (ulong)*param_1 * 0x20;
    *(uint *)(lVar10 + 0x58) = uVar12;
    *(uint *)(lVar10 + 0x5c) = uVar13;
    *(undefined8 *)(lVar10 + 0x40) = local_90;
    *(undefined8 *)(lVar10 + 0x48) = uStack_88;
    *(undefined4 *)(lVar10 + 0x50) = local_80;
    *(uint *)(lVar10 + 0x54) = uVar9;
  }
  return;
}


