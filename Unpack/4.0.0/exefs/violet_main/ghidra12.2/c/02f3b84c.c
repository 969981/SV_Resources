/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f3b84c; name: FUN_02f3b84c
 */


ulong FUN_02f3b84c(long param_1,uint param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_60;
  ulong local_58;
  
  uVar7 = param_4 & 0xffffffff;
  if ((~param_2 & 0xffffff) == 0) {
    return uVar7;
  }
  plVar10 = *(long **)(param_1 + 0x4b8);
  if (plVar10 == (long *)0x0) {
    return uVar7;
  }
  lVar8 = tpidr_el0;
  lVar2 = *(long *)(lVar8 + 0x1000b8);
  if (lVar2 == 0) {
    lVar2 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar2 + 0x3d0) + 0x10);
  if (*(long *)(lVar8 + 8) == 0) {
    uVar9 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
    local_60 = uVar9;
    if (lVar8 != 0) {
      local_58 = uVar9 + 0x3f & 0xffffffffffffffc0;
      if (local_58 <= *(ulong *)(lVar8 + 0x28)) {
        lVar2 = *(long *)(lVar8 + 0x38);
        if (local_58 + lVar2 <= *(ulong *)(lVar8 + 0x40)) {
          *(ulong *)(lVar8 + 0x38) = local_58 + lVar2;
          goto LAB_02f3b954;
        }
      }
      lVar2 = FUN_031cf3b4(lVar8,&local_58);
      goto LAB_02f3b954;
    }
  }
  else {
    local_60 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
  }
  uVar9 = local_60;
  lVar2 = (**(code **)PTR_DAT_047d1a08)(1,&local_60,0x40);
  lVar8 = 0;
LAB_02f3b954:
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      puVar5 = (undefined4 *)(param_3 + 4);
      puVar6 = (undefined4 *)(lVar2 + 8);
      do {
        puVar6[-1] = param_2;
        uVar1 = puVar5[-1];
        puVar6[1] = param_2;
        uVar3 = uVar3 + 2;
        puVar6[-2] = uVar1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 4;
      } while ((param_4 & 0xfffffffe) != uVar3);
    }
    if ((param_4 & 1) != 0) {
      puVar5 = (undefined4 *)(lVar2 + uVar3 * 8);
      puVar5[1] = param_2;
      *puVar5 = *(undefined4 *)(param_3 + uVar3 * 4);
    }
  }
  uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,param_1,lVar2,uVar7);
  uVar3 = uVar7 & 0xffffffff;
  if (0 < (int)uVar7) {
    if ((int)uVar7 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      puVar5 = (undefined4 *)(lVar2 + 8);
      do {
        puVar6 = (undefined4 *)(param_3 + uVar4 * 4);
        uVar4 = uVar4 + 2;
        *puVar6 = puVar5[-2];
        puVar6[1] = *puVar5;
        puVar5 = puVar5 + 4;
      } while ((uVar7 & 0xfffffffe) != uVar4);
    }
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_3 + uVar4 * 4) = *(undefined4 *)(lVar2 + uVar4 * 8);
    }
  }
  if (lVar8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar2,uVar9);
    return uVar3;
  }
  uVar7 = uVar9 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar8 + 0x28) < uVar7) || (*(long *)(lVar8 + 0x38) != uVar7 + lVar2)) {
    if (lVar2 == 0) {
      return uVar3;
    }
    if (*(ulong *)(lVar8 + 0x28) < uVar7 + 0x40) {
      *(int *)(*(long *)(lVar8 + 0x30) + 0x20) = *(int *)(*(long *)(lVar8 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar8 + 0x10) + 0x18))
                (*(long **)(lVar8 + 0x10),lVar2 - *(int *)(lVar2 + -4),uVar7 + 0x44);
      return uVar3;
    }
    if (*(long *)(lVar8 + 0x38) != uVar7 + lVar2) {
      FUN_031cf778(lVar8,lVar2);
      return uVar3;
    }
    *(long *)(lVar8 + 0x38) = lVar2;
  }
  else {
    *(long *)(lVar8 + 0x38) = lVar2;
    if (*(long *)(lVar8 + 0x48) != lVar2) {
      return uVar3;
    }
  }
  FUN_031cf578(lVar8);
  return uVar3;
}


