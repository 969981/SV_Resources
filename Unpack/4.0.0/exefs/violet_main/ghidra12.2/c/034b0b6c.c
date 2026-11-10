/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b0b6c; name: FUN_034b0b6c
 */


void FUN_034b0b6c(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  int iVar12;
  float fVar13;
  float local_34;
  
  local_34 = 0.0;
  pfVar10 = *(float **)(param_1 + 0xb0);
  if (pfVar10 != (float *)0x0) {
    bVar3 = *(byte *)pfVar10;
    uVar2 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar2 = 1;
    }
    uVar11 = (ulong)uVar2;
    pfVar6 = (float *)((long)pfVar10 + ((ulong)(bVar3 + 4) & 0x1fc));
    pfVar9 = pfVar10;
    do {
      pfVar10 = pfVar6;
      pfVar9 = (float *)((long)pfVar9 + 1);
      if (*(byte *)pfVar9 == 0xc) goto LAB_034b0bd4;
      uVar11 = uVar11 - 1;
      pfVar6 = pfVar10 + 1;
    } while (uVar11 != 0);
    pfVar10 = (float *)0x0;
  }
LAB_034b0bd4:
  pfVar9 = &local_34;
  if (pfVar10 != (float *)0x0) {
    pfVar9 = pfVar10;
  }
  *param_3 = *pfVar9;
  local_34 = 0.0;
  pfVar10 = *(float **)(param_1 + 0xb0);
  if (pfVar10 != (float *)0x0) {
    bVar3 = *(byte *)pfVar10;
    uVar2 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar2 = 1;
    }
    uVar11 = (ulong)uVar2;
    pfVar6 = (float *)((long)pfVar10 + ((ulong)(bVar3 + 4) & 0x1fc));
    pfVar9 = pfVar10;
    do {
      pfVar10 = pfVar6;
      pfVar9 = (float *)((long)pfVar9 + 1);
      if (*(byte *)pfVar9 == 0xd) goto LAB_034b0c30;
      uVar11 = uVar11 - 1;
      pfVar6 = pfVar10 + 1;
    } while (uVar11 != 0);
    pfVar10 = (float *)0x0;
  }
LAB_034b0c30:
  pfVar9 = &local_34;
  if (pfVar10 != (float *)0x0) {
    pfVar9 = pfVar10;
  }
  param_3[1] = *pfVar9;
  local_34 = 0.0;
  pfVar10 = *(float **)(param_1 + 0xb0);
  if (pfVar10 != (float *)0x0) {
    bVar3 = *(byte *)pfVar10;
    uVar2 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar2 = 1;
    }
    uVar11 = (ulong)uVar2;
    pfVar6 = (float *)((long)pfVar10 + ((ulong)(bVar3 + 4) & 0x1fc));
    pfVar9 = pfVar10;
    do {
      pfVar10 = pfVar6;
      pfVar9 = (float *)((long)pfVar9 + 1);
      if (*(byte *)pfVar9 == 0x49) goto LAB_034b0c88;
      uVar11 = uVar11 - 1;
      pfVar6 = pfVar10 + 1;
    } while (uVar11 != 0);
    pfVar10 = (float *)0x0;
  }
LAB_034b0c88:
  pfVar9 = &local_34;
  if (pfVar10 != (float *)0x0) {
    pfVar9 = pfVar10;
  }
  param_3[2] = *pfVar9;
  if (*(ulong **)(param_1 + 0x40) != (ulong *)0x0) {
    uVar11 = **(ulong **)(param_1 + 0x40);
    lVar1 = param_1 + 0x38;
    iVar12 = (int)lVar1;
    if (((uint)uVar11 >> 0x12 & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_047e6fd8;
      uVar2 = *(uint *)(lVar7 + 0x20);
      fVar13 = 0.0;
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = (iVar12 + 0x12U) / uVar2;
        }
        for (plVar8 = *(long **)(*(long *)(lVar7 + 0x18) +
                                (ulong)((iVar12 + 0x12U) - uVar4 * uVar2) * 8);
            plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
          if ((*plVar8 == lVar1) && ((int)plVar8[1] == 0x12)) {
            if (*(int *)((long)plVar8 + 0x4c) == 3) {
              fVar13 = (float)FUN_0348209c();
            }
            else {
              fVar13 = (float)FUN_03482338(lVar7,plVar8,param_2);
            }
            break;
          }
        }
      }
      *param_3 = *param_3 + fVar13;
      if (*(ulong **)(param_1 + 0x40) == (ulong *)0x0) goto LAB_034b0df4;
      uVar11 = **(ulong **)(param_1 + 0x40);
    }
    if (((uint)uVar11 >> 0x13 & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_047e6fd8;
      uVar2 = *(uint *)(lVar7 + 0x20);
      fVar13 = 0.0;
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = (iVar12 + 0x13U) / uVar2;
        }
        for (plVar8 = *(long **)(*(long *)(lVar7 + 0x18) +
                                (ulong)((iVar12 + 0x13U) - uVar4 * uVar2) * 8);
            plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
          if ((*plVar8 == lVar1) && ((int)plVar8[1] == 0x13)) {
            if (*(int *)((long)plVar8 + 0x4c) == 3) {
              fVar13 = (float)FUN_0348209c();
            }
            else {
              fVar13 = (float)FUN_03482338(lVar7,plVar8,param_2);
            }
            break;
          }
        }
      }
      param_3[1] = param_3[1] + fVar13;
      if (*(ulong **)(param_1 + 0x40) == (ulong *)0x0) goto LAB_034b0df4;
      uVar11 = **(ulong **)(param_1 + 0x40);
    }
    if ((uVar11 >> 0x3a & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_047e6fd8;
      uVar2 = *(uint *)(lVar7 + 0x20);
      fVar13 = 0.0;
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = (iVar12 + 0x3aU) / uVar2;
        }
        for (plVar8 = *(long **)(*(long *)(lVar7 + 0x18) +
                                (ulong)((iVar12 + 0x3aU) - uVar4 * uVar2) * 8);
            plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
          if ((*plVar8 == lVar1) && ((int)plVar8[1] == 0x3a)) {
            if (*(int *)((long)plVar8 + 0x4c) == 3) {
              fVar13 = (float)FUN_0348209c();
            }
            else {
              fVar13 = (float)FUN_03482338(lVar7,plVar8,param_2);
            }
            break;
          }
        }
      }
      param_3[2] = param_3[2] + fVar13;
      if (*(ulong **)(param_1 + 0x40) == (ulong *)0x0) goto LAB_034b0df4;
      uVar11 = **(ulong **)(param_1 + 0x40);
    }
    if (((uint)uVar11 >> 0x18 & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_047e6fd8;
      uVar2 = *(uint *)(lVar7 + 0x20);
      fVar13 = 0.0;
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = (iVar12 + 0x18U) / uVar2;
        }
        for (plVar8 = *(long **)(*(long *)(lVar7 + 0x18) +
                                (ulong)((iVar12 + 0x18U) - uVar4 * uVar2) * 8);
            plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
          if ((*plVar8 == lVar1) && ((int)plVar8[1] == 0x18)) {
            if (*(int *)((long)plVar8 + 0x4c) == 3) {
              fVar13 = (float)FUN_0348209c();
            }
            else {
              fVar13 = (float)FUN_03482338(lVar7,plVar8,param_2);
            }
            break;
          }
        }
      }
      param_3[3] = fVar13;
      goto LAB_034b0e50;
    }
  }
LAB_034b0df4:
  local_34 = 0.0;
  pfVar10 = *(float **)(param_1 + 0xb0);
  if (pfVar10 != (float *)0x0) {
    bVar3 = *(byte *)pfVar10;
    uVar2 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar2 = 1;
    }
    uVar11 = (ulong)uVar2;
    pfVar6 = (float *)((long)pfVar10 + ((ulong)(bVar3 + 4) & 0x1fc));
    pfVar9 = pfVar10;
    do {
      pfVar10 = pfVar6;
      pfVar9 = (float *)((long)pfVar9 + 1);
      if (*(byte *)pfVar9 == 0xe) goto LAB_034b0e3c;
      uVar11 = uVar11 - 1;
      pfVar6 = pfVar10 + 1;
    } while (uVar11 != 0);
    pfVar10 = (float *)0x0;
  }
LAB_034b0e3c:
  pfVar9 = &local_34;
  if (pfVar10 != (float *)0x0) {
    pfVar9 = pfVar10;
  }
  param_3[3] = *pfVar9;
LAB_034b0e50:
  bVar3 = *(byte *)(param_3 + 4);
  bVar5 = (byte)(*(uint *)(param_1 + 0xda) >> 0x14) & 7;
  *(byte *)(param_3 + 4) = bVar3 & 0xf8 | bVar5;
  *(byte *)(param_3 + 4) = *(byte *)(param_1 + 0xdc) & 8 | bVar3 & 0xf0 | bVar5;
  return;
}


