/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010614bc; name: FUN_010614bc
 */


undefined8 FUN_010614bc(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  
  plVar12 = (long *)*param_2;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  lVar2 = param_2[1];
  lVar4 = param_2[2];
  lVar3 = param_2[3];
  plVar5 = (long *)param_2[4];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar6 = *(undefined4 *)(param_2 + 5);
  if (*(char *)(param_1 + 0x1e4) == '\0') {
    iVar7 = *(int *)(param_1 + 0xa4);
    if (iVar7 != 0) {
      if (iVar7 == 1) {
        uVar9 = (ulong)(*(int *)(param_1 + 0xa0) == 0);
        goto LAB_01061538;
      }
      if (iVar7 == 2) goto LAB_0106152c;
LAB_010615b0:
      uVar13 = 0;
      goto LAB_010615b4;
    }
LAB_0106152c:
    uVar9 = (ulong)*(uint *)(param_1 + 0xa0);
    if (1 < *(uint *)(param_1 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0216dd60();
    }
LAB_01061538:
    lVar10 = *(long *)(param_1 + uVar9 * 0x20 + 0x60);
    lVar11 = *(long *)(lVar10 + 0x68);
    plVar14 = (long *)PTR_DAT_047d8b70;
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 6;
    }
    puVar1 = (undefined8 *)PTR_DAT_047d8b70;
    if (lVar11 != 0) {
      puVar1 = (undefined8 *)(lVar11 + 0x30);
    }
    if (((undefined1 *)*plVar14 == (undefined1 *)*puVar1) && (*(int *)(lVar10 + 0x98) == param_3)) {
      lVar10 = **(long **)(param_1 + 0x40);
      puVar1 = (undefined8 *)PTR_DAT_047d8b70;
      if (lVar10 != 0) {
        puVar1 = (undefined8 *)(lVar10 + 0x30);
      }
      if (((undefined1 *)*puVar1 == &DAT_cbf29ce484222645) ||
         (((undefined1 *)*plVar14 == (undefined1 *)*puVar1 &&
          ((int)(*(long **)(param_1 + 0x40))[6] == param_3)))) goto LAB_010615b0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1e4) = 0;
  }
  plVar14 = *(long **)(param_1 + 0x40);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar8 = (long *)*plVar14;
  *plVar14 = (long)plVar12;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  plVar14[1] = lVar2;
  plVar14[2] = lVar4;
  plVar14[3] = lVar3;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar8 = (long *)plVar14[4];
  plVar14[4] = (long)plVar5;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  uVar13 = 1;
  *(undefined4 *)(plVar14 + 5) = uVar6;
  *(int *)(plVar14 + 6) = param_3;
LAB_010615b4:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return uVar13;
}


