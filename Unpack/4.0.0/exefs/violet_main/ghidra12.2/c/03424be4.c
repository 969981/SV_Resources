/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03424be4; name: FUN_03424be4
 */


ulong * FUN_03424be4(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = 0;
    do {
      iVar1 = uVar4 + (uVar6 >> 1);
      uVar8 = *(ulong *)(*param_1 + (long)iVar1 * 8);
      if (uVar8 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)iVar1 * 8);
      }
      if (uVar8 < param_2) {
        uVar4 = iVar1 + 1;
      }
      uVar6 = uVar6 - (uVar8 < param_2) >> 1;
    } while (uVar6 != 0);
    uVar8 = (ulong)uVar4;
  }
  *param_3 = 0;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if (uVar4 < uVar6) {
      lVar3 = 0;
    }
    else {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,0,(ulong)uVar6 << 3);
      if (lVar3 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar6;
    }
    if (uVar6 <= uVar4) {
      return (ulong *)0x0;
    }
    puVar2 = (ulong *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 8);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  else {
    uVar4 = *(uint *)(param_1 + 1);
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if (uVar6 <= uVar4) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,lVar3,(ulong)uVar6 << 3);
      if (lVar3 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar6;
    }
    if (uVar6 <= uVar4) {
      return (ulong *)0x0;
    }
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if ((uint)uVar8 < uVar6) {
      puVar7 = (ulong *)(lVar3 + (ulong)uVar6 * 8);
      do {
        puVar5 = puVar7 + -1;
        *puVar7 = *puVar5;
        puVar2 = (ulong *)(*param_1 + uVar8 * 8);
        puVar7 = puVar5;
      } while (puVar2 < puVar5);
    }
    else {
      puVar2 = (ulong *)(lVar3 + uVar8 * 8);
    }
  }
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = param_2;
  }
  return puVar2;
}


