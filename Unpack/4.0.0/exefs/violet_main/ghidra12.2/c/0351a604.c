/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351a604; name: FUN_0351a604
 */


undefined8 FUN_0351a604(long param_1,int param_2,long *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  
  plVar4 = (long *)(**(code **)(*param_3 + 0x20))(param_3,param_4);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  piVar6 = *(int **)(param_1 + 0x180);
  uVar3 = *(uint *)(param_1 + 0x188);
  piVar8 = piVar6;
  if ((uVar3 != 0) && (*piVar6 != param_2)) {
    lVar7 = (ulong)uVar3 * 0x10;
    piVar9 = piVar6;
    do {
      lVar7 = lVar7 + -0x10;
      if (lVar7 == 0) goto LAB_0351a69c;
      piVar8 = piVar9 + 4;
      piVar1 = piVar9 + 4;
      piVar9 = piVar8;
    } while (*piVar1 != param_2);
  }
  if (piVar8 == piVar6 + (ulong)uVar3 * 4) {
LAB_0351a69c:
    uVar11 = *(uint *)(param_1 + 0x18c);
    if (uVar3 < uVar11) {
LAB_0351a6e0:
      if (uVar3 < uVar11) {
        uVar3 = *(uint *)(param_1 + 0x188);
        *(uint *)(param_1 + 0x188) = uVar3 + 1;
        if (piVar6 != (int *)0x0) {
          plVar10 = (long *)(piVar6 + (ulong)uVar3 * 4 + 2);
          *plVar10 = 0;
          piVar6[(ulong)uVar3 * 4] = param_2;
          goto LAB_0351a708;
        }
      }
    }
    else {
      iVar2 = uVar11 + (uVar11 >> 1);
      if (uVar11 == 0) {
        iVar2 = 1;
      }
      uVar11 = iVar2 + uVar11;
      piVar6 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar6,(ulong)uVar11 << 4);
      if (piVar6 != (int *)0x0) {
        *(int **)(param_1 + 0x180) = piVar6;
        *(uint *)(param_1 + 0x18c) = uVar11;
        goto LAB_0351a6e0;
      }
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar5 = 0;
  }
  else {
    plVar10 = (long *)(piVar8 + 2);
LAB_0351a708:
    if ((long *)*plVar10 != (long *)0x0) {
      (**(code **)(*(long *)*plVar10 + 0x10))();
    }
    *plVar10 = (long)plVar4;
    uVar5 = 1;
  }
  return uVar5;
}


