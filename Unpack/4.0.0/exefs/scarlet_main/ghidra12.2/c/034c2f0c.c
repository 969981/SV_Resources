/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c2f0c; name: FUN_034c2f0c
 */


ulong * FUN_034c2f0c(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 == 0) {
    uVar9 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + (uVar7 >> 1);
      uVar9 = *(ulong *)(*param_1 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar9 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)(int)uVar1 * 0x10);
      }
      if (uVar9 < param_2) {
        uVar5 = uVar1 + 1;
      }
      uVar7 = uVar7 - (uVar9 < param_2) >> 1;
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
      iVar2 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar2 = 1;
      }
      uVar7 = iVar2 + uVar7;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,(ulong)uVar7 << 4);
      if (lVar4 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar7;
    }
    if (uVar7 <= uVar5) {
      return (ulong *)0x0;
    }
    puVar3 = (ulong *)(lVar4 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  }
  else {
    uVar5 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar7 <= uVar5) {
      iVar2 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar2 = 1;
      }
      uVar7 = iVar2 + uVar7;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar4,(ulong)uVar7 << 4);
      if (lVar4 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar7;
    }
    if (uVar7 <= uVar5) {
      return (ulong *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if ((uint)uVar9 < uVar7) {
      puVar8 = (ulong *)(lVar4 + (ulong)uVar7 * 0x10);
      do {
        puVar6 = puVar8 + -2;
        *puVar8 = *puVar6;
        puVar8[1] = puVar8[-1];
        puVar3 = (ulong *)(*param_1 + uVar9 * 0x10);
        puVar8 = puVar6;
      } while (puVar3 < puVar6);
    }
    else {
      puVar3 = (ulong *)(lVar4 + uVar9 * 0x10);
    }
  }
  if (puVar3 != (ulong *)0x0) {
    *puVar3 = param_2;
  }
  return puVar3;
}


