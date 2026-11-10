/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bd8d4; name: FUN_034bd8d4
 */


undefined4 * FUN_034bd8d4(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  ulong uVar9;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    uVar9 = 0;
  }
  else {
    uVar4 = 0;
    do {
      iVar1 = uVar4 + (uVar6 >> 1);
      uVar9 = *(ulong *)(*param_1 + (long)iVar1 * 0x10 + 8);
      if (uVar9 == param_2) {
        *param_3 = 1;
        return (undefined4 *)(*param_1 + (long)iVar1 * 0x10);
      }
      if (uVar9 < param_2) {
        uVar4 = iVar1 + 1;
      }
      uVar6 = uVar6 - (uVar9 < param_2) >> 1;
    } while (uVar6 != 0);
    uVar9 = (ulong)uVar4;
  }
  *param_3 = 0;
  uVar4 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)((long)param_1 + 0xc);
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (uVar6 <= uVar4) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,(ulong)uVar6 << 4);
      if (lVar3 == 0) {
        return (undefined4 *)0x0;
      }
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar6;
    }
    else {
      lVar3 = 0;
    }
    if (uVar6 <= uVar4) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (lVar3 != 0) {
      *puVar2 = 0;
      goto LAB_034bda78;
    }
  }
  else {
    if (uVar6 <= uVar4) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar3,(ulong)uVar6 << 4);
      if (lVar3 == 0) {
        return (undefined4 *)0x0;
      }
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar6;
    }
    if (uVar6 <= uVar4) {
      return (undefined4 *)0x0;
    }
    puVar7 = (undefined8 *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    *(undefined4 *)puVar7 = 0;
    lVar3 = *param_1;
    puVar5 = (undefined8 *)(lVar3 + uVar9 * 0x10);
    if (puVar5 < puVar7) {
      do {
        puVar8 = puVar7 + -2;
        *puVar7 = *puVar8;
        puVar7[1] = puVar7[-1];
        lVar3 = *param_1;
        puVar5 = (undefined8 *)(lVar3 + uVar9 * 0x10);
        puVar7 = puVar8;
      } while (puVar5 < puVar8);
    }
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      *(undefined4 *)puVar5 = 0;
      lVar3 = *param_1;
    }
    puVar2 = (undefined4 *)(lVar3 + uVar9 * 0x10);
  }
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_034bda78:
  *(ulong *)(puVar2 + 2) = param_2;
  return puVar2;
}


