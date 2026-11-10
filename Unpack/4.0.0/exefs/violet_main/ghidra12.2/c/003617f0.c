/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003617f0; name: FUN_003617f0
 */


void FUN_003617f0(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar11 = (int)param_1[1] - 1;
  uVar1 = *(uint *)(param_2 + 8);
  uVar12 = (ulong)uVar1;
  if (uVar1 == uVar11) {
    *(uint *)(param_1 + 1) = uVar1;
    if ((7 < uVar1) && (uVar1 <= *(uint *)((long)param_1 + 0xc) >> 2)) {
      *(uint *)((long)param_1 + 0xc) = uVar1 << 1;
      lVar3 = FUN_0038c7f0(*param_1,(ulong)(uVar1 << 1) << 3);
      *param_1 = lVar3;
    }
    return;
  }
  *(undefined8 *)(*param_1 + uVar12 * 8) = *(undefined8 *)(*param_1 + (ulong)uVar11 * 8);
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + uVar12 * 8);
  *(uint *)(plVar4 + 1) = uVar1;
  *(uint *)(param_1 + 1) = uVar11;
  if ((7 < uVar11) && (uVar11 <= *(uint *)((long)param_1 + 0xc) >> 2)) {
    *(uint *)((long)param_1 + 0xc) = uVar11 * 2;
    lVar3 = FUN_0038c7f0(lVar3,(ulong)(uVar11 * 2) << 3);
    *param_1 = lVar3;
    plVar4 = *(long **)(lVar3 + uVar12 * 8);
    uVar12 = (ulong)*(uint *)(plVar4 + 1);
  }
  uVar11 = (uint)uVar12;
  uVar1 = uVar11;
  if (-1 < (int)(uVar11 - 1)) {
    uVar1 = uVar11 - 1;
  }
  lVar5 = *plVar4;
  if (lVar5 < **(long **)(lVar3 + (ulong)(uint)((int)uVar1 >> 1) * 8)) {
    if (uVar11 == 0) {
      uVar6 = 0;
    }
    else {
      do {
        uVar11 = (uint)uVar12;
        uVar6 = uVar11;
        if (-1 < (int)(uVar11 - 1)) {
          uVar6 = uVar11 - 1;
        }
        uVar6 = (int)uVar6 >> 1;
        plVar7 = *(long **)(lVar3 + (ulong)uVar6 * 8);
        if (*plVar7 <= lVar5) goto LAB_0036196c;
        *(long **)(lVar3 + uVar12 * 8) = plVar7;
        *(uint *)(plVar7 + 1) = uVar11;
        uVar12 = (ulong)uVar6;
      } while (2 < uVar11);
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    uVar1 = uVar11 << 1 | 1;
    if (uVar1 < uVar2) {
      do {
        uVar6 = uVar1;
        plVar7 = *(long **)(lVar3 + (ulong)uVar6 * 8);
        uVar1 = uVar6 + 1;
        lVar8 = *plVar7;
        if (uVar1 < uVar2) {
          plVar9 = *(long **)(lVar3 + (ulong)uVar1 * 8);
          lVar10 = *plVar9;
          if (lVar10 < lVar8) {
            plVar7 = plVar9;
            lVar8 = lVar10;
            uVar6 = uVar1;
          }
        }
        uVar11 = (uint)uVar12;
        if (lVar5 <= lVar8) goto LAB_0036196c;
        uVar1 = uVar6 << 1 | 1;
        *(long **)(lVar3 + uVar12 * 8) = plVar7;
        *(uint *)(plVar7 + 1) = (uint)uVar12;
        uVar12 = (ulong)uVar6;
      } while (uVar1 < uVar2);
    }
    else {
LAB_0036196c:
      uVar6 = uVar11;
    }
  }
  *(long **)(lVar3 + (ulong)uVar6 * 8) = plVar4;
  *(uint *)(plVar4 + 1) = uVar6;
  return;
}


