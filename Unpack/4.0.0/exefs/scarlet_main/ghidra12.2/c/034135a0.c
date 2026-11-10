/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034135a0; name: FUN_034135a0
 */


undefined8 FUN_034135a0(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  plVar2 = *(long **)(param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x58);
  if (uVar5 != 0) {
    lVar3 = (ulong)uVar5 << 3;
    plVar6 = plVar2;
    do {
      if (*plVar6 == param_2) goto LAB_03413664;
      lVar3 = lVar3 + -8;
      plVar6 = plVar6 + 1;
    } while (lVar3 != 0);
  }
  uVar12 = *(uint *)(param_1 + 0x5c);
  if (uVar5 < uVar12) {
LAB_0341362c:
    if (uVar5 < uVar12) {
      uVar12 = *(uint *)(param_1 + 0x58);
      uVar5 = uVar12 + 1;
      *(uint *)(param_1 + 0x58) = uVar5;
      lVar3 = 0;
      if (plVar2 == (long *)0x0) goto LAB_03413678;
      plVar2[uVar12] = param_2;
      if (((param_3 & 1) == 0) || (iVar1 = FUN_034135a0(param_2,param_1,0), iVar1 == 1)) {
LAB_03413664:
        *(undefined1 *)(param_1 + 0x60) = 1;
        return 1;
      }
    }
  }
  else {
    iVar1 = uVar12 + (uVar12 >> 1);
    if (uVar12 == 0) {
      iVar1 = 1;
    }
    uVar12 = iVar1 + uVar12;
    plVar2 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,plVar2,(ulong)uVar12 << 3);
    if (plVar2 != (long *)0x0) {
      *(long **)(param_1 + 0x50) = plVar2;
      *(uint *)(param_1 + 0x5c) = uVar12;
      goto LAB_0341362c;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x50);
LAB_03413678:
  if (uVar5 != 0) {
    uVar9 = (ulong)uVar5;
    lVar4 = 0;
    do {
      if (*(long *)(lVar3 + lVar4) == param_2) {
        uVar12 = *(uint *)(param_2 + 0x58);
        puVar7 = (undefined8 *)(lVar3 + lVar4);
        if (uVar12 == 0) goto LAB_03413720;
        lVar4 = (ulong)uVar12 << 3;
        plVar2 = *(long **)(param_2 + 0x50);
        goto LAB_034136c0;
      }
      lVar4 = lVar4 + 8;
    } while (uVar9 * 8 != lVar4);
  }
  return 0x34;
LAB_034136c0:
  if (*plVar2 == param_1) {
    plVar6 = *(long **)(param_2 + 0x50) + ((ulong)uVar12 - 1);
    if (plVar2 < plVar6) {
      do {
        plVar10 = plVar2 + 1;
        *plVar2 = *plVar10;
        plVar2 = plVar10;
      } while (plVar10 < plVar6);
      uVar12 = *(uint *)(param_2 + 0x58);
    }
    *(uint *)(param_2 + 0x58) = uVar12 - 1;
    *(undefined1 *)(param_2 + 0x60) = 1;
    uVar5 = *(uint *)(param_1 + 0x58);
    uVar9 = (ulong)uVar5;
    lVar3 = *(long *)(param_1 + 0x50);
LAB_03413720:
    puVar11 = (undefined8 *)((lVar3 + uVar9 * 8) - 8);
    if (puVar7 < puVar11) {
      do {
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar8;
        puVar7 = puVar8;
      } while (puVar8 < puVar11);
      uVar5 = *(uint *)(param_1 + 0x58);
    }
    *(uint *)(param_1 + 0x58) = uVar5 - 1;
    *(undefined1 *)(param_1 + 0x60) = 1;
    return 0x34;
  }
  plVar2 = plVar2 + 1;
  lVar4 = lVar4 + -8;
  if (lVar4 == 0) goto LAB_03413720;
  goto LAB_034136c0;
}


