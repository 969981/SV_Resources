/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03484df4; name: FUN_03484df4
 */


int FUN_03484df4(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  
  iVar4 = (**(code **)(*param_1 + 0x260))();
  if (iVar4 == 1) {
    plVar5 = (long *)FUN_0346b86c(param_1 + 0x1f,(int)param_2[3]);
    if (plVar5 == (long *)0x0) {
      iVar4 = 2;
    }
    else {
      *plVar5 = (long)param_2;
      (**(code **)(*param_2 + 0x38))(param_2,param_1);
      (**(code **)(*param_1 + 0x28))(param_1);
      iVar4 = 1;
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2);
  if (*(uint *)(param_1 + 0x25) != 0) {
    plVar5 = (long *)param_1[0x24];
    plVar2 = plVar5 + *(uint *)(param_1 + 0x25);
    do {
      lVar6 = *plVar5;
      piVar7 = *(int **)(lVar6 + 0x18);
      uVar3 = *(uint *)(lVar6 + 0x20);
      if ((uVar3 == 0) || (*piVar7 == (int)param_2[3])) {
        piVar8 = piVar7;
      }
      else {
        lVar9 = (ulong)uVar3 * 0x48;
        piVar10 = piVar7;
        do {
          lVar9 = lVar9 + -0x48;
          if (lVar9 == 0) goto LAB_03484ed0;
          piVar8 = piVar10 + 0x12;
          piVar1 = piVar10 + 0x12;
          piVar10 = piVar8;
        } while (*piVar1 != (int)param_2[3]);
      }
      if ((piVar8 != piVar7 + (ulong)uVar3 * 0x12) && (*(long *)(piVar8 + 4) == 0)) {
        FUN_03488c60(lVar6,*piVar8);
      }
LAB_03484ed0:
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
  }
  return iVar4;
}


