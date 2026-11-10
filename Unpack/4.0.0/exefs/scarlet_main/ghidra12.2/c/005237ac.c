/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005237ac; name: FUN_005237ac
 */


long FUN_005237ac(long *param_1,undefined8 param_2,undefined1 param_3,long *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_00524ad8();
  plVar3 = auVar8._0_8_;
  plVar3[2] = param_5;
  if ((auVar8._8_8_ & 0xff) != 0) {
    *(undefined1 *)(plVar3 + 1) = param_3;
    *(undefined1 *)((long)plVar3 + 9) = 1;
    lVar7 = *param_1;
    if (lVar7 == 0) {
      plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (plVar4 != (long *)0x0) {
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
    }
    else {
      if (*(long *)(lVar7 + 0x70) != 0) {
        FUN_00520d08(lVar7,0,0x18);
      }
      plVar4 = (long *)FUN_00520544(lVar7,0x18,PTR_LAB_047cdac0);
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = lVar7;
    }
    *plVar3 = (long)plVar4;
  }
  lVar7 = *plVar3;
  piVar6 = *(int **)(lVar7 + 0x10);
  if (piVar6 != (int *)0x0) {
    iVar1 = *(int *)(lVar7 + 8);
    if (iVar1 < *piVar6) {
      *(int *)(lVar7 + 8) = iVar1 + 1;
      if (*(long *)(piVar6 + (long)iVar1 * 2 + 2) != 0) {
        return *(long *)(piVar6 + (long)iVar1 * 2 + 2);
      }
    }
  }
  lVar7 = (**(code **)(*param_4 + 0x20))(param_4,*param_1);
  lVar5 = *plVar3;
  piVar6 = *(int **)(lVar5 + 0x10);
  if (piVar6 != (int *)0x0) {
    iVar1 = *piVar6;
    if (iVar1 < *(int *)(lVar5 + 0xc)) {
      iVar2 = *(int *)(lVar5 + 8);
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar6 + (long)iVar2 * 2 + 2);
      }
      *(long *)(piVar6 + (long)iVar2 * 2 + 2) = lVar7;
      *(int *)(lVar5 + 8) = iVar2 + 1;
      **(int **)(lVar5 + 0x10) = **(int **)(lVar5 + 0x10) + 1;
      return lVar7;
    }
  }
  FUN_004ef91c(lVar5,lVar7);
  return lVar7;
}


