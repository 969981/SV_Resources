/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324065c; name: FUN_0324065c
 */


void FUN_0324065c(long *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_60;
  long local_58;
  ulong local_38;
  
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x032406b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1,*param_2);
    return;
  }
  uVar6 = (ulong)param_3;
  if ((int)param_3 < 2) {
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_60,1,8);
  (**(code **)(*param_1 + 0x28))(param_1,local_60,0,0x40);
  lVar7 = tpidr_el0;
  lVar2 = *(long *)(lVar7 + 0x1000b8);
  if (lVar2 == 0) {
    lVar2 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar2 + 0x3d0) + 0x10);
  if (*(long *)(lVar7 + 8) == 0) {
    lVar2 = uVar6 * 0x10;
    local_58 = lVar2;
    if (lVar7 != 0) {
      local_38 = lVar2 + 0x3fU & 0x1fffffffc0;
      if (local_38 <= *(ulong *)(lVar7 + 0x28)) {
        lVar1 = *(long *)(lVar7 + 0x38);
        if (local_38 + lVar1 <= *(ulong *)(lVar7 + 0x40)) {
          *(ulong *)(lVar7 + 0x38) = local_38 + lVar1;
          goto LAB_032407c8;
        }
      }
      lVar1 = FUN_031cf3b4(lVar7,&local_38);
      goto LAB_032407c8;
    }
  }
  else {
    local_58 = uVar6 << 4;
  }
  lVar2 = local_58;
  lVar1 = (**(code **)PTR_DAT_047d1a08)(1,&local_58,0x40);
  lVar7 = 0;
LAB_032407c8:
  if (uVar6 == 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    puVar5 = (undefined8 *)(lVar1 + 0x10);
    puVar4 = param_2 + 1;
    do {
      puVar5[-2] = puVar4[-1];
      puVar5[-1] = local_60;
      *puVar5 = *puVar4;
      uVar3 = uVar3 + 2;
      puVar5[1] = local_60;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 2;
    } while ((uVar6 & 0xfffffffe) != uVar3);
  }
  if ((param_3 & 1) != 0) {
    puVar5 = (undefined8 *)(lVar1 + uVar3 * 0x10);
    *puVar5 = param_2[uVar3];
    puVar5[1] = local_60;
  }
  (**(code **)(*param_1 + 0x48))(param_1,lVar1,param_3);
  (**(code **)(*param_1 + 0x50))(param_1,&local_60,1,0,8);
  (**(code **)(*param_1 + 0x60))(param_1,local_60);
  (**(code **)(*param_1 + 0x20))(param_1,&local_60,1,8);
  if (lVar7 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar1,lVar2);
    return;
  }
  uVar6 = lVar2 + 0x3fU & 0x1fffffffc0;
  if ((*(ulong *)(lVar7 + 0x28) < uVar6) || (*(long *)(lVar7 + 0x38) != uVar6 + lVar1)) {
    if (*(ulong *)(lVar7 + 0x28) < uVar6 + 0x40) {
      *(int *)(*(long *)(lVar7 + 0x30) + 0x20) = *(int *)(*(long *)(lVar7 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar7 + 0x10) + 0x18))
                (*(long **)(lVar7 + 0x10),lVar1 - *(int *)(lVar1 + -4),uVar6 + 0x44);
      return;
    }
    if (*(long *)(lVar7 + 0x38) != uVar6 + lVar1) {
      FUN_031cf778(lVar7,lVar1);
      return;
    }
    *(long *)(lVar7 + 0x38) = lVar1;
  }
  else {
    *(long *)(lVar7 + 0x38) = lVar1;
    if (*(long *)(lVar7 + 0x48) != lVar1) {
      return;
    }
  }
  FUN_031cf578(lVar7);
  return;
}


