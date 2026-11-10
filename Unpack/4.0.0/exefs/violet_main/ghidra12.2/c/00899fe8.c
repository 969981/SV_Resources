/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00899fe8; name: FUN_00899fe8
 */


long FUN_00899fe8(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  
  lVar3 = (**(code **)PTR_DAT_047d2258)(0x70,0x10,*(undefined8 *)PTR_DAT_047d2268);
  if (lVar3 != 0) {
    FUN_00896078(lVar3,param_2);
  }
  plVar6 = *(long **)(param_1 + 0x30);
  lVar10 = *plVar6;
  iVar2 = (int)plVar6[1];
  plVar8 = (long *)(lVar10 + (long)iVar2 * 0x30);
  *(int *)(plVar6 + 1) = iVar2 + 1;
  *plVar8 = lVar3;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar6 = plVar8 + 4;
  lVar9 = *plVar6;
  plVar11 = (long *)(param_1 + 0x38);
  *plVar6 = *plVar11;
  *(long **)(lVar9 + 8) = plVar11;
  *(long **)(*plVar11 + 8) = plVar6;
  *plVar11 = lVar9;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  piVar4 = (int *)FUN_008b4fd0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar8 + 0x10));
  lVar9 = *(long *)(param_1 + 0x18) + (ulong)(uint)piVar4[1];
  piVar12 = *(int **)(param_1 + 0x28);
  if ((piVar12 != (int *)0x0) && (0 < *piVar12)) {
    lVar14 = 0;
    lVar13 = 0x1c;
    do {
      uVar5 = FUN_0088fc10(lVar9,*(long *)(piVar12 + 2) + lVar13 + -0x1c);
      if ((uVar5 & 1) != 0) {
        piVar7 = (int *)0x0;
        if (*(long *)(piVar12 + 2) == 0) goto LAB_0089a148;
        uVar1 = *(uint *)(*(long *)(piVar12 + 2) + lVar13);
        if ((uVar1 != 0) &&
           (piVar7 = (int *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + (ulong)uVar1),
           *piVar7 == 0x31747063)) {
          piVar7 = piVar7 + 0x15;
          goto LAB_0089a148;
        }
        break;
      }
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x28;
    } while (lVar14 < *piVar12);
  }
  piVar7 = (int *)0x0;
LAB_0089a148:
  if (piVar7 != (int *)0x0) {
    piVar4 = piVar7;
  }
  plVar8[1] = (long)piVar4;
  *(long *)(lVar10 + (long)iVar2 * 0x30 + 0x18) = lVar9;
  return lVar3;
}


