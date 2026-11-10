/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308e0b0; name: FUN_0308e0b0
 */


uint FUN_0308e0b0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  long local_60;
  ulong local_58;
  
  lVar12 = tpidr_el0;
  lVar7 = *(long *)(lVar12 + 0x1000b8);
  if (lVar7 == 0) {
    lVar7 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar7;
  }
  plVar14 = *(long **)(lVar7 + 0x3e0);
  if (plVar14 != (long *)0x0) {
    lVar7 = *plVar14;
    if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
      (**(code **)(lVar7 + 0x18))("calcBary",8,*(undefined8 *)(lVar7 + 0x28));
    }
    puVar2 = (undefined8 *)plVar14[2];
    uVar8 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtcalcBary";
      uVar6 = nn::os::GetSystemTick();
      puVar2[1] = uVar6;
    }
    if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar2 = (undefined8 *)plVar14[2];
      uVar8 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0x38) + (param_3 >> 0x16 & 0x3ff) * 0x100);
  uVar5 = (uint)param_3 & 0x3fffff;
  lVar7 = *(long *)(lVar13 + 0x20);
  uVar11 = uVar5 - *(int *)(lVar7 + 0x20);
  if ((int)uVar5 < *(int *)(lVar7 + 0x20)) {
    if (*(int *)(lVar7 + 0x98) == 0) {
      uVar11 = uVar5;
LAB_0308e1ec:
      lVar7 = *(long *)(lVar7 + 0xb0);
      goto LAB_0308e1f0;
    }
    uVar11 = *(uint *)(*(long *)(lVar7 + 0x90) + (ulong)uVar5 * 4);
    if (uVar11 != 0xffffffff) goto LAB_0308e1ec;
    lVar7 = *(long *)(lVar7 + 0x18) + (ulong)uVar5 * 0x10;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0xd0);
LAB_0308e1f0:
    lVar7 = lVar7 + (long)(int)uVar11 * 0x10;
  }
  sVar3 = *(short *)(lVar7 + 8);
  local_90 = 0;
  local_88 = 0x8000000000000000;
  lVar9 = *(long *)(lVar12 + 0x1000b8);
  local_68 = plVar14;
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar9;
  }
  lVar12 = (long)sVar3 + 1;
  local_80 = *(long *)(*(long *)(lVar9 + 0x3d0) + 0x10);
  if (*(long *)(local_80 + 8) != 0) {
    local_80 = 0;
  }
  local_70 = lVar12 * 0x10;
  local_60 = local_70;
  if (local_80 == 0) {
    local_78 = (**(code **)PTR_DAT_047d1a08)(1,&local_60,0x40);
  }
  else {
    local_58 = local_70 + 0x3fU & 0xffffffffffffffc0;
    if (local_58 <= *(ulong *)(local_80 + 0x28)) {
      local_78 = *(long *)(local_80 + 0x38);
      if (local_58 + local_78 <= *(ulong *)(local_80 + 0x40)) {
        *(ulong *)(local_80 + 0x38) = local_58 + local_78;
        goto LAB_0308e294;
      }
    }
    local_78 = FUN_031cf3b4(local_80,&local_58);
  }
LAB_0308e294:
  iVar4 = (int)local_88;
  local_88 = CONCAT44((int)lVar12,(int)local_88) | 0x8000000000000000;
  sVar3 = *(short *)(lVar7 + 8);
  iVar1 = sVar3 + 1;
  if ((iVar4 == sVar3 || iVar4 < sVar3) || iVar1 < iVar4) {
    local_88 = CONCAT44(local_88._4_4_,iVar1);
  }
  local_90 = local_78;
  FUN_030960b8(lVar13,lVar7,&local_90);
  uVar5 = FUN_0308dd24(local_90,local_90 + (long)(int)local_88 * 0x10,param_2,param_4);
  if (local_78 == local_90) {
    local_88 = local_88 & 0xffffffff00000000;
  }
  if (local_80 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_0308e3c0;
  }
  uVar8 = local_70 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_80 + 0x28) < uVar8) || (*(long *)(local_80 + 0x38) != uVar8 + local_78)) {
    if (local_78 == 0) goto LAB_0308e3c0;
    if (*(ulong *)(local_80 + 0x28) < uVar8 + 0x40) {
      *(int *)(*(long *)(local_80 + 0x30) + 0x20) = *(int *)(*(long *)(local_80 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_80 + 0x10) + 0x18))
                (*(long **)(local_80 + 0x10),local_78 - *(int *)(local_78 + -4),uVar8 + 0x44);
      goto LAB_0308e3c0;
    }
    if (*(long *)(local_80 + 0x38) != uVar8 + local_78) {
      FUN_031cf778();
      goto LAB_0308e3c0;
    }
    *(long *)(local_80 + 0x38) = local_78;
  }
  else {
    *(long *)(local_80 + 0x38) = local_78;
    if (*(long *)(local_80 + 0x48) != local_78) goto LAB_0308e3c0;
  }
  FUN_031cf578();
LAB_0308e3c0:
  uVar8 = local_88;
  uVar10 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < (long)uVar8) && (local_90 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar10 << 4);
  }
  if (plVar14 != (long *)0x0) {
    lVar12 = *plVar14;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar2 = (undefined8 *)plVar14[2];
      uVar8 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar14[2];
    uVar8 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar6 = nn::os::GetSystemTick();
      puVar2[1] = uVar6;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
  }
  return uVar5 & 1;
}


