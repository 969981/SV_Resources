/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b42c8; name: FUN_034b42c8
 */


uint * FUN_034b42c8(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 == 0) {
    uVar9 = 0;
  }
  else {
    uVar5 = 0;
    do {
      iVar1 = uVar5 + (uVar7 >> 1);
      uVar3 = *(uint *)(*param_1 + (long)iVar1 * 4);
      if (uVar3 == param_2) {
        *param_3 = 1;
        return (uint *)(*param_1 + (long)iVar1 * 4);
      }
      if (uVar3 < param_2) {
        uVar5 = iVar1 + 1;
      }
      uVar7 = uVar7 - (uVar3 < param_2) >> 1;
    } while (uVar7 != 0);
    uVar9 = (ulong)uVar5;
  }
  *param_3 = 0;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar5 < uVar7) {
      lVar4 = 0;
    }
    else {
      iVar1 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar1 = 1;
      }
      uVar7 = iVar1 + uVar7;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,(ulong)uVar7 << 2);
      if (lVar4 == 0) {
        return (uint *)0x0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar7;
    }
    if (uVar7 <= uVar5) {
      return (uint *)0x0;
    }
    puVar2 = (uint *)(lVar4 + (ulong)*(uint *)(param_1 + 1) * 4);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  else {
    uVar5 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar7 <= uVar5) {
      iVar1 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar1 = 1;
      }
      uVar7 = iVar1 + uVar7;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar4,(ulong)uVar7 << 2);
      if (lVar4 == 0) {
        return (uint *)0x0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar7;
    }
    if (uVar7 <= uVar5) {
      return (uint *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if ((uint)uVar9 < uVar7) {
      puVar8 = (uint *)(lVar4 + (ulong)uVar7 * 4);
      do {
        puVar6 = puVar8 + -1;
        *puVar8 = *puVar6;
        puVar2 = (uint *)(*param_1 + uVar9 * 4);
        puVar8 = puVar6;
      } while (puVar2 < puVar6);
    }
    else {
      puVar2 = (uint *)(lVar4 + uVar9 * 4);
    }
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_2;
  }
  return puVar2;
}


