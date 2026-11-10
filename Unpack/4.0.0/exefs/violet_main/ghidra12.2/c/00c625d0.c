/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c625d0; name: FUN_00c625d0
 */


undefined8 * FUN_00c625d0(uint *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar4 = param_2[1];
  uVar8 = uVar4 & 0xfffffffffffffff8;
  puVar6 = *(undefined8 **)(param_1 + 6);
  puVar1 = (undefined8 *)((long)param_2 + uVar8);
  if ((param_2 < puVar6 || (uVar4 & 3) == 1) || puVar1 <= param_2) goto LAB_00c6299c;
  uVar7 = puVar1[1];
  if ((uVar7 & 1) == 0) goto LAB_00c6299c;
  if ((uVar4 & 3) == 0) {
    if (param_3 < 0x100) {
      return (undefined8 *)0x0;
    }
    if (uVar8 < param_3 + 8) {
      return (undefined8 *)0x0;
    }
    if ((ulong)(DAT_04859d50 * 2) < uVar8 - param_3) {
      return (undefined8 *)0x0;
    }
    return param_2;
  }
  uVar3 = uVar8 - param_3;
  if (param_3 <= uVar8) {
    if (uVar3 < 0x20) {
      return param_2;
    }
    param_2[1] = uVar4 & 1 | param_3 | 2;
    *(ulong *)((long)param_2 + param_3 + 8) = uVar3 | 3;
    puVar1[1] = puVar1[1] | 1;
    goto LAB_00c62678;
  }
  if (*(undefined8 **)(param_1 + 10) == puVar1) {
    uVar7 = (*(long *)(param_1 + 4) + uVar8) - param_3;
    if (*(long *)(param_1 + 4) + uVar8 < param_3 || uVar7 == 0) {
      return (undefined8 *)0x0;
    }
    param_2[1] = uVar4 & 1 | param_3 | 2;
    *(ulong *)((long)param_2 + param_3 + 8) = uVar7 | 1;
    *(ulong *)(param_1 + 10) = (long)param_2 + param_3;
    *(ulong *)(param_1 + 4) = uVar7;
    return param_2;
  }
  if (*(undefined8 **)(param_1 + 8) == puVar1) {
    uVar8 = *(long *)(param_1 + 2) + uVar8;
    uVar7 = uVar8 - param_3;
    if (uVar8 < param_3) {
      return (undefined8 *)0x0;
    }
    if (uVar7 < 0x20) {
      param_2[1] = uVar4 & 1 | uVar8 | 2;
      uVar7 = 0;
      lVar5 = 0;
      *(ulong *)((long)param_2 + uVar8 + 8) = *(ulong *)((long)param_2 + uVar8 + 8) | 1;
    }
    else {
      lVar5 = (long)param_2 + param_3;
      puVar2 = (ulong *)((long)param_2 + uVar8);
      param_2[1] = uVar4 & 1 | param_3 | 2;
      *(ulong *)(lVar5 + 8) = uVar7 | 1;
      *puVar2 = uVar7;
      puVar2[1] = puVar2[1] & 0xfffffffffffffffe;
    }
    *(ulong *)(param_1 + 2) = uVar7;
    *(long *)(param_1 + 8) = lVar5;
    return param_2;
  }
  if (((uint)uVar7 >> 1 & 1) != 0) {
    return (undefined8 *)0x0;
  }
  uVar8 = (uVar7 & 0xfffffffffffffff8) + uVar8;
  uVar3 = uVar8 - param_3;
  if (uVar8 < param_3) {
    return (undefined8 *)0x0;
  }
  if (uVar7 < 0x100) {
    puVar10 = (undefined8 *)puVar1[2];
    puVar12 = (undefined8 *)puVar1[3];
    puVar9 = (undefined8 *)((long)param_1 + (uVar7 & 0x3fffffff8) * 2 + 0x48);
    if ((puVar10 != puVar9) && ((puVar10 < puVar6 || ((undefined8 *)puVar10[3] != puVar1))))
    goto LAB_00c6299c;
    if (puVar12 == puVar10) {
      *param_1 = *param_1 & (1 << (ulong)((uint)(uVar7 >> 3) & 0x1f) ^ 0xffffffffU);
    }
    else {
      if ((puVar12 != puVar9) && ((puVar12 < puVar6 || ((undefined8 *)puVar12[2] != puVar1))))
      goto LAB_00c6299c;
      puVar10[3] = puVar12;
      puVar12[2] = puVar10;
    }
  }
  else {
    puVar9 = (undefined8 *)puVar1[3];
    uVar4 = puVar1[6];
    if (puVar9 == puVar1) {
      puVar12 = (undefined8 *)puVar1[5];
      puVar10 = puVar1 + 5;
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)puVar1[4];
        puVar10 = puVar1 + 4;
        if (puVar12 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          goto LAB_00c62824;
        }
      }
      do {
        do {
          puVar9 = puVar12;
          puVar11 = puVar10;
          puVar12 = (undefined8 *)puVar9[5];
          puVar10 = puVar9 + 5;
        } while (puVar12 != (undefined8 *)0x0);
        puVar12 = (undefined8 *)puVar9[4];
        puVar10 = puVar9 + 4;
      } while (puVar12 != (undefined8 *)0x0);
      if (puVar11 < puVar6) goto LAB_00c6299c;
      *puVar11 = 0;
    }
    else {
      puVar10 = (undefined8 *)puVar1[2];
      if (((puVar10 < puVar6) || ((undefined8 *)puVar10[3] != puVar1)) ||
         ((undefined8 *)puVar9[2] != puVar1)) goto LAB_00c6299c;
      puVar10[3] = puVar9;
      puVar9[2] = puVar10;
    }
LAB_00c62824:
    if (uVar4 != 0) {
      if (*(undefined8 **)(param_1 + (ulong)*(uint *)(puVar1 + 7) * 2 + 0x96) == puVar1) {
        *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar1 + 7) * 2 + 0x96) = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          param_1[1] = param_1[1] & (1 << (ulong)(*(uint *)(puVar1 + 7) & 0x1f) ^ 0xffffffffU);
        }
        else {
LAB_00c628f0:
          if (puVar9 < *(undefined8 **)(param_1 + 6)) {
LAB_00c6299c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar9[6] = uVar4;
          uVar4 = puVar1[4];
          if (uVar4 != 0) {
            if (uVar4 < *(ulong *)(param_1 + 6)) goto LAB_00c6299c;
            puVar9[4] = uVar4;
            *(undefined8 **)(uVar4 + 0x30) = puVar9;
          }
          uVar4 = puVar1[5];
          if (uVar4 != 0) {
            if (uVar4 < *(ulong *)(param_1 + 6)) goto LAB_00c6299c;
            puVar9[5] = uVar4;
            *(undefined8 **)(uVar4 + 0x30) = puVar9;
          }
        }
      }
      else {
        if (uVar4 < *(ulong *)(param_1 + 6)) goto LAB_00c6299c;
        lVar5 = 0x20;
        if (*(undefined8 **)(uVar4 + 0x20) != puVar1) {
          lVar5 = 0x28;
        }
        *(undefined8 **)(uVar4 + lVar5) = puVar9;
        if (puVar9 != (undefined8 *)0x0) goto LAB_00c628f0;
      }
    }
  }
  if (uVar3 < 0x20) {
    param_2[1] = uVar8 | param_2[1] & 1 | 2;
    *(ulong *)((long)param_2 + uVar8 + 8) = *(ulong *)((long)param_2 + uVar8 + 8) | 1;
    return param_2;
  }
  param_2[1] = param_2[1] & 1 | param_3 | 2;
  *(ulong *)((long)param_2 + param_3 + 8) = uVar3 | 3;
  *(ulong *)((long)param_2 + uVar8 + 8) = *(ulong *)((long)param_2 + uVar8 + 8) | 1;
LAB_00c62678:
  FUN_00c62d90(param_1,(long)param_2 + param_3,uVar3);
  return param_2;
}


