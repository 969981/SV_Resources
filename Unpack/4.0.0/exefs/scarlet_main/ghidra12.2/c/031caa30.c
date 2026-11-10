/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031caa30; name: FUN_031caa30
 */


undefined8
FUN_031caa30(long *param_1,ulong *param_2,undefined2 param_3,ulong *param_4,undefined2 param_5,
            long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar3 = 0x80040200;
  if (param_4 == (ulong *)0x0) {
    return 0x80040200;
  }
  if (param_2 == param_4) {
    iVar4 = (int)param_1[1];
    lVar12 = (long)iVar4;
    lVar1 = lVar12 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_031cb264(param_1,PTR_PTR_047d1a50,lVar1);
      iVar4 = (int)param_1[1];
    }
    plVar9 = (long *)(*param_1 + (long)iVar4 * 0x38);
    *(undefined1 *)(plVar9 + 1) = 0;
    *(undefined4 *)((long)plVar9 + 10) = 0;
    puVar2 = PTR_DAT_047e5a20;
    plVar9[2] = 0;
    *plVar9 = (long)(puVar2 + 0x10);
    *(int *)(param_1 + 1) = (int)lVar1;
    plVar9 = (long *)(*param_1 + lVar12 * 0x38);
    while( true ) {
      uVar6 = (uint)*param_4;
      if ((uVar6 >> 0x14 & 1) != 0) {
        uVar8 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
        uVar6 = (uint)(ushort)param_4[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                    POPCOUNT((char)(uVar8 >> 8)) +
                                                   POPCOUNT((char)(uVar8 >> 0x10))) + 2];
        goto LAB_031cac0c;
      }
      if ((*param_4 & 1) != 0) break;
      param_4 = (ulong *)param_4[1];
      if (param_4 == (ulong *)0x0) {
        uVar6 = 0;
LAB_031cac0c:
        (**(code **)(*plVar9 + 8))(plVar9);
        *(undefined1 *)(plVar9 + 1) = 0xd;
        *(undefined2 *)((long)plVar9 + 10) = param_5;
        *(undefined2 *)((long)plVar9 + 0xc) = param_3;
        plVar9[2] = 0;
        *plVar9 = (long)(PTR_DAT_047e5a28 + 0x10);
        *(uint *)(plVar9 + 3) = uVar6;
        return 0;
      }
    }
    uVar6 = 0;
    goto LAB_031cac0c;
  }
  puVar7 = param_2;
  do {
    uVar6 = (uint)*puVar7;
    if ((uVar6 >> 0xf & 1) != 0) {
      uVar6 = uVar6 & 0x7fff;
      uVar8 = puVar7[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))) + 2];
      goto LAB_031cab3c;
    }
    if ((*puVar7 & 9) != 0) {
      uVar8 = 0;
      goto LAB_031cab3c;
    }
    puVar7 = (ulong *)puVar7[1];
  } while (puVar7 != (ulong *)0x0);
  uVar8 = 0;
LAB_031cab3c:
  puVar7 = param_4;
  while( true ) {
    uVar6 = (uint)*puVar7;
    if ((uVar6 >> 0xf & 1) != 0) break;
    if ((*puVar7 & 9) != 0) {
      return 0x80040200;
    }
    puVar7 = (ulong *)puVar7[1];
    if (puVar7 == (ulong *)0x0) {
      return 0x80040200;
    }
  }
  if (uVar8 == 0) {
    return 0x80040200;
  }
  uVar11 = CONCAT44(uVar6,uVar6) & 0x7fff00007fff;
  uVar11 = puVar7[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8))) + 2];
  if (uVar11 == 0) {
    return 0x80040200;
  }
  if (*(short *)(uVar8 + 8) == 0) {
    return 0x80040200;
  }
  if (*(short *)(uVar11 + 8) == 0) {
    return 0x80040200;
  }
  if (**(char **)(uVar8 + 0x18) != 'v') {
    return 0x80040200;
  }
  if (**(char **)(uVar11 + 0x18) != 'v') {
    return 0x80040200;
  }
  if (*(long *)(uVar8 + 0x10) != *(long *)(uVar11 + 0x10)) {
    return 0x80040200;
  }
  puVar7 = param_2;
  do {
    uVar6 = (uint)*puVar7;
    if ((uVar6 >> 0x14 & 1) != 0) {
      uVar5 = 0;
      if (puVar7 != (ulong *)0x0) {
        uVar8 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
        uVar5 = (uint)(ushort)puVar7[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                   POPCOUNT((char)(uVar8 >> 8)) +
                                                  POPCOUNT((char)(uVar8 >> 0x10))) + 2];
      }
      goto LAB_031cac8c;
    }
    if ((*puVar7 & 1) != 0) {
      uVar5 = 0;
      goto LAB_031cac8c;
    }
    puVar7 = (ulong *)puVar7[1];
  } while (puVar7 != (ulong *)0x0);
  uVar5 = 0;
LAB_031cac8c:
  puVar7 = param_4;
  do {
    uVar6 = (uint)*puVar7;
    if ((uVar6 >> 0x14 & 1) != 0) {
      uVar10 = 0;
      if (puVar7 != (ulong *)0x0) {
        uVar8 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
        uVar10 = (uint)(ushort)puVar7[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                    POPCOUNT((char)(uVar8 >> 8)) +
                                                   POPCOUNT((char)(uVar8 >> 0x10))) + 2];
      }
      goto LAB_031cacd4;
    }
    if ((*puVar7 & 1) != 0) {
      uVar10 = 0;
      goto LAB_031cacd4;
    }
    puVar7 = (ulong *)puVar7[1];
  } while (puVar7 != (ulong *)0x0);
  uVar10 = 0;
LAB_031cacd4:
  if (uVar5 == uVar10) {
    iVar4 = (int)param_1[1];
    lVar12 = (long)iVar4;
    lVar1 = lVar12 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_031cb264(param_1,PTR_PTR_047d1a50,lVar1);
      iVar4 = (int)param_1[1];
    }
    plVar9 = (long *)(*param_1 + (long)iVar4 * 0x38);
    *(undefined1 *)(plVar9 + 1) = 0;
    *(undefined4 *)((long)plVar9 + 10) = 0;
    puVar2 = PTR_DAT_047e5a20;
    plVar9[2] = 0;
    *plVar9 = (long)(puVar2 + 0x10);
    *(int *)(param_1 + 1) = (int)lVar1;
    plVar9 = (long *)(*param_1 + lVar12 * 0x38);
    do {
      uVar6 = (uint)*param_2;
      if ((uVar6 >> 0x14 & 1) != 0) {
        uVar5 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar8 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
          uVar5 = (uint)(ushort)param_2[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                      POPCOUNT((char)(uVar8 >> 8)) +
                                                     POPCOUNT((char)(uVar8 >> 0x10))) + 2];
        }
        goto LAB_031caf00;
      }
      if ((*param_2 & 1) != 0) {
        uVar5 = 0;
        goto LAB_031caf00;
      }
      param_2 = (ulong *)param_2[1];
    } while (param_2 != (ulong *)0x0);
    uVar5 = 0;
LAB_031caf00:
    (**(code **)(*plVar9 + 8))(plVar9);
    *(undefined1 *)(plVar9 + 1) = 0xd;
    *(undefined2 *)((long)plVar9 + 10) = param_5;
    uVar3 = 0;
    *(undefined2 *)((long)plVar9 + 0xc) = param_3;
    plVar9[2] = 0;
    *plVar9 = (long)(PTR_DAT_047e5a28 + 0x10);
    *(uint *)(plVar9 + 3) = uVar5;
  }
  else if (uVar10 < uVar5) {
    if ((uVar5 >> 2 & 0x3ffe) - 1 == uVar10 >> 2) {
      iVar4 = (int)param_1[1];
      lVar12 = (long)iVar4;
      lVar1 = lVar12 + 1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
        FUN_031cb264(param_1,PTR_PTR_047d1a50,lVar1);
        iVar4 = (int)param_1[1];
      }
      plVar9 = (long *)(*param_1 + (long)iVar4 * 0x38);
      *(undefined1 *)(plVar9 + 1) = 0;
      *(undefined4 *)((long)plVar9 + 10) = 0;
      plVar9[2] = 0;
      *plVar9 = (long)(PTR_DAT_047e5a20 + 0x10);
      *(int *)(param_1 + 1) = (int)lVar1;
      plVar9 = (long *)(*param_1 + lVar12 * 0x38);
      (**(code **)(*plVar9 + 8))(plVar9);
      *(undefined1 *)(plVar9 + 1) = 6;
      *(undefined2 *)((long)plVar9 + 10) = param_5;
      uVar3 = 0;
      *(undefined2 *)((long)plVar9 + 0xc) = param_3;
      plVar9[2] = 0;
      plVar9[3] = (long)param_4;
      *plVar9 = (long)(PTR_DAT_047e5a30 + 0x10);
      plVar9[4] = (long)param_2;
      plVar9[5] = param_6;
    }
  }
  else if ((uVar10 >> 2 & 0x3ffe) - 1 == uVar5 >> 2) {
    iVar4 = (int)param_1[1];
    lVar12 = (long)iVar4;
    lVar1 = lVar12 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_031cb264(param_1,PTR_PTR_047d1a50,lVar1);
      iVar4 = (int)param_1[1];
    }
    plVar9 = (long *)(*param_1 + (long)iVar4 * 0x38);
    *(undefined1 *)(plVar9 + 1) = 0;
    *(undefined4 *)((long)plVar9 + 10) = 0;
    plVar9[2] = 0;
    *plVar9 = (long)(PTR_DAT_047e5a20 + 0x10);
    *(int *)(param_1 + 1) = (int)lVar1;
    plVar9 = (long *)(*param_1 + lVar12 * 0x38);
    (**(code **)(*plVar9 + 8))(plVar9);
    *(undefined1 *)(plVar9 + 1) = 6;
    *(undefined2 *)((long)plVar9 + 10) = param_5;
    uVar3 = 0;
    *(undefined2 *)((long)plVar9 + 0xc) = param_3;
    plVar9[2] = 0;
    plVar9[3] = (long)param_4;
    *plVar9 = (long)(PTR_DAT_047e5a30 + 0x10);
    plVar9[4] = (long)param_2;
    plVar9[5] = (long)&LAB_031cb140;
  }
  return uVar3;
}


