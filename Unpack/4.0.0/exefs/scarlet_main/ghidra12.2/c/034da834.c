/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034da834; name: FUN_034da834
 */


long * FUN_034da834(long *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  
  uVar5 = (**(code **)(*param_1 + 0x78))();
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
    puVar3 = PTR_DAT_047e2fd0;
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
        if ((int)plVar6[7] == param_2) {
          return plVar6;
        }
      }
    }
    plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x48);
    puVar4 = PTR_DAT_047e72f8;
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar6[4] = 0;
    plVar6[2] = 0;
    plVar6[3] = (long)param_1;
    plVar6[5] = 0;
    plVar6[6] = 0;
    *(undefined1 *)(plVar6 + 8) = 0;
    *plVar6 = (long)(puVar4 + 0x10);
    plVar6[1] = 0;
    *(int *)(plVar6 + 7) = param_2;
    *(undefined4 *)((long)plVar6 + 0x3c) = 0x2ca33bdb;
    puVar4 = PTR_DAT_047e7050;
    piVar9 = (int *)**(undefined8 **)PTR_DAT_047e7050;
    uVar2 = *(uint *)(*(undefined8 **)PTR_DAT_047e7050 + 1);
    if ((uVar2 == 0) || (*piVar9 == param_2)) {
      piVar11 = piVar9;
    }
    else {
      lVar10 = (ulong)uVar2 * 0x10;
      piVar12 = piVar9;
      do {
        lVar10 = lVar10 + -0x10;
        if (lVar10 == 0) goto LAB_034da958;
        piVar11 = piVar12 + 4;
        piVar1 = piVar12 + 4;
        piVar12 = piVar11;
      } while (*piVar1 != param_2);
    }
    if (piVar11 != piVar9 + (ulong)uVar2 * 4) {
      lVar10 = *(long *)(piVar11 + 2);
      if (*(long *)(lVar10 + 8) == 0) {
        *(long **)(lVar10 + 8) = plVar6;
        plVar6[1] = 0;
      }
      else {
        plVar6[1] = *(long *)(lVar10 + 8);
        *(long **)(lVar10 + 8) = plVar6;
      }
      plVar7 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
      if (*plVar7 == 0) {
        *plVar7 = (long)plVar6;
        plVar6[2] = 0;
      }
      else {
        plVar6[2] = *plVar7;
        *plVar7 = (long)plVar6;
      }
      piVar9 = (int *)**(undefined8 **)puVar4;
      uVar2 = *(uint *)(*(undefined8 **)puVar4 + 1);
      if ((uVar2 == 0) || (*piVar9 == param_2)) {
        piVar11 = piVar9;
      }
      else {
        lVar10 = (ulong)uVar2 * 0x10;
        piVar12 = piVar9;
        do {
          lVar10 = lVar10 + -0x10;
          if (lVar10 == 0) goto LAB_034daa24;
          piVar11 = piVar12 + 4;
          piVar1 = piVar12 + 4;
          piVar12 = piVar11;
        } while (*piVar1 != param_2);
      }
      if (piVar11 == piVar9 + (ulong)uVar2 * 4) {
LAB_034daa24:
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(long *)(piVar11 + 2) + 4);
      }
      *(undefined4 *)((long)plVar6 + 0x3c) = uVar8;
      if ((param_3 & 1) == 0) {
        return plVar6;
      }
      FUN_034da454(param_1);
      return plVar6;
    }
LAB_034da958:
    FUN_034dbce4(plVar6);
    (**(code **)(puVar3 + 0x30))(2,plVar6);
  }
  return (long *)0x0;
}


