/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b27d0; name: FUN_034b27d0
 */


undefined8 FUN_034b27d0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  plVar4 = (long *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  plVar6 = plVar4;
  if ((uVar3 != 0) && (*plVar4 != param_2)) {
    lVar7 = (ulong)uVar3 * 8;
    plVar5 = plVar4;
    do {
      lVar7 = lVar7 + -8;
      if (lVar7 == 0) {
        plVar6 = plVar4 + uVar3;
        goto LAB_034b2834;
      }
      plVar6 = plVar5 + 1;
      plVar1 = plVar5 + 1;
      plVar5 = plVar6;
    } while (*plVar1 != param_2);
  }
LAB_034b2834:
  if (plVar6 == (long *)0x0) {
    return 2;
  }
  if (plVar4 + uVar3 == plVar6) {
    return 2;
  }
  plVar4 = *(long **)(param_2 + 0x30);
  uVar3 = *(uint *)(param_2 + 0x38);
  plVar6 = plVar4;
  if ((uVar3 != 0) && (*plVar4 != param_3)) {
    lVar7 = (ulong)uVar3 * 8;
    plVar5 = plVar4;
    do {
      lVar7 = lVar7 + -8;
      plVar6 = plVar4 + uVar3;
      if (lVar7 == 0) break;
      plVar6 = plVar5 + 1;
      plVar1 = plVar5 + 1;
      plVar5 = plVar6;
    } while (*plVar1 != param_3);
  }
  if ((plVar6 != (long *)0x0) && (plVar4 + uVar3 != plVar6)) {
    return 0x28;
  }
  if (*(short *)(param_2 + 0x42) != -1) {
    uVar8 = *(uint *)(param_2 + 0x3c);
    if (uVar8 <= uVar3) {
      iVar2 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar2 = 1;
      }
      uVar8 = iVar2 + uVar8;
      plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar4,(ulong)uVar8 << 3);
      if (plVar4 == (long *)0x0) {
        return 2;
      }
      *(long **)(param_2 + 0x30) = plVar4;
      *(uint *)(param_2 + 0x3c) = uVar8;
    }
    if (uVar3 < uVar8) {
      uVar3 = *(uint *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = uVar3 + 1;
      if (plVar4 != (long *)0x0) {
        plVar4[uVar3] = param_3;
        *(short *)(param_2 + 0x42) = *(short *)(param_2 + 0x42) + 1;
        if (*(char *)(param_2 + 0x2c) != '\0') {
          lVar7 = *(long *)(param_3 + 0x168);
          fVar9 = *(float *)(param_2 + 0x74);
          fVar10 = *(float *)(param_2 + 0x7c);
          *(float *)(lVar7 + 8) = *(float *)(param_2 + 0x78) + *(float *)(lVar7 + 8);
          *(float *)(lVar7 + 4) = fVar9 + *(float *)(lVar7 + 4);
          *(float *)(lVar7 + 0xc) = fVar10 + *(float *)(lVar7 + 0xc);
          FUN_034b1e00(param_2,*(int *)(*(long *)PTR_DAT_047e2fe8 + 0x78) + 1);
        }
        return 1;
      }
    }
  }
  return 2;
}


