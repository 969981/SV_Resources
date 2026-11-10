/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034806ac; name: FUN_034806ac
 */


void FUN_034806ac(float param_1,long param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  float *pfVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58;
  float local_54;
  
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 == (long *)0x0) {
    return;
  }
  local_54 = param_1;
  if (param_6 == 1) {
    lVar5 = *plVar2;
    pfVar4 = &local_54;
    goto LAB_03480858;
  }
  fVar11 = 0.0;
  fVar12 = 1.0;
  fVar13 = 1.0;
  if (param_6 != 3) {
    fVar13 = 0.0;
  }
  piVar3 = *(int **)(param_2 + 0x48);
  uVar9 = (ulong)*(uint *)(param_2 + 0x50);
  piVar6 = piVar3 + uVar9 * 4;
  piVar7 = piVar3;
  local_58 = fVar13;
  if (*(uint *)(param_2 + 0x50) == 0) {
    uVar8 = 0;
  }
  else if (param_6 == 4) {
    do {
      if (*(ushort *)(piVar7 + 2) == param_5) {
        if ((*piVar7 == param_3) && (piVar7[1] == param_4)) {
          piVar7[3] = (int)param_1;
          piVar6 = piVar7;
        }
        if (*piVar7 != 0) {
          fVar13 = (float)piVar7[3] + fVar13;
          local_58 = fVar13;
        }
      }
      piVar3 = *(int **)(param_2 + 0x48);
      piVar7 = piVar7 + 4;
      uVar8 = *(uint *)(param_2 + 0x50);
    } while (piVar7 != piVar3 + (ulong)uVar8 * 4);
  }
  else if (param_6 == 3) {
    do {
      if (*(ushort *)(piVar7 + 2) == param_5) {
        if ((*piVar7 == param_3) && (piVar7[1] == param_4)) {
          piVar7[3] = (int)param_1;
          piVar3 = *(int **)(param_2 + 0x48);
          uVar9 = (ulong)*(uint *)(param_2 + 0x50);
          piVar6 = piVar7;
        }
        fVar12 = (float)piVar7[3] * fVar12;
        local_58 = fVar12;
      }
      uVar8 = (uint)uVar9;
      piVar7 = piVar7 + 4;
    } while (piVar7 != piVar3 + uVar9 * 4);
  }
  else {
    do {
      if (*(ushort *)(piVar7 + 2) == param_5) {
        if ((*piVar7 == param_3) && (piVar7[1] == param_4)) {
          piVar7[3] = (int)param_1;
          piVar3 = *(int **)(param_2 + 0x48);
          uVar9 = (ulong)*(uint *)(param_2 + 0x50);
          piVar6 = piVar7;
        }
        fVar11 = (float)piVar7[3] + fVar11;
        local_58 = fVar11;
      }
      uVar8 = (uint)uVar9;
      piVar7 = piVar7 + 4;
    } while (piVar7 != piVar3 + uVar9 * 4);
  }
  if (piVar7 == piVar6) {
    uVar10 = *(uint *)(param_2 + 0x54);
    if (uVar10 <= uVar8) {
      iVar1 = uVar10 + (uVar10 >> 1);
      if (uVar10 == 0) {
        iVar1 = 1;
      }
      uVar10 = iVar1 + uVar10;
      piVar3 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar3,(ulong)uVar10 << 4);
      if (piVar3 == (int *)0x0) goto LAB_0348084c;
      *(int **)(param_2 + 0x48) = piVar3;
      *(uint *)(param_2 + 0x54) = uVar10;
    }
    if (uVar8 < uVar10) {
      uVar8 = *(uint *)(param_2 + 0x50);
      *(uint *)(param_2 + 0x50) = uVar8 + 1;
      if (piVar3 != (int *)0x0) {
        piVar3 = piVar3 + (ulong)uVar8 * 4;
        *piVar3 = param_3;
        piVar3[1] = param_4;
        *(short *)(piVar3 + 2) = (short)param_5;
        piVar3[3] = (int)param_1;
        fVar11 = local_58 + local_54;
        local_58 = local_58 * local_54;
        if (param_6 != 3) {
          local_58 = fVar11;
        }
      }
    }
  }
LAB_0348084c:
  plVar2 = *(long **)(param_2 + 8);
  pfVar4 = &local_58;
  lVar5 = *plVar2;
LAB_03480858:
  (**(code **)(lVar5 + 0x10))(plVar2,param_5,pfVar4,4);
  return;
}


