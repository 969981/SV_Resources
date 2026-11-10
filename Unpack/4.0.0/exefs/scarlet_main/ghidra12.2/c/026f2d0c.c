/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f2d0c; name: FUN_026f2d0c
 */


undefined1  [16] FUN_026f2d0c(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
LAB_026f2df0:
    uVar7 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = plVar2[2];
    cVar1 = *(char *)(*plVar2 + lVar3);
    plVar2[2] = lVar3 + 1;
    if (cVar1 == -0x78) {
      uVar4 = *(undefined4 *)(*plVar2 + lVar3 + 1);
      plVar2[2] = lVar3 + 5;
    }
    plVar2 = *(long **)(param_1 + 0x88);
    if (plVar2 == (long *)0x0) goto LAB_026f2df0;
    uVar7 = 0;
    lVar3 = plVar2[2];
    cVar1 = *(char *)(*plVar2 + lVar3);
    plVar2[2] = lVar3 + 1;
    if (cVar1 == -0x78) {
      uVar7 = *(undefined4 *)(*plVar2 + lVar3 + 1);
      plVar2[2] = lVar3 + 5;
    }
    plVar2 = *(long **)(param_1 + 0x88);
    if (plVar2 != (long *)0x0) {
      uVar6 = 0;
      lVar3 = plVar2[2];
      cVar1 = *(char *)(*plVar2 + lVar3);
      plVar2[2] = lVar3 + 1;
      if (cVar1 == -0x78) {
        uVar6 = *(undefined4 *)(*plVar2 + lVar3 + 1);
        plVar2[2] = lVar3 + 5;
      }
      plVar2 = *(long **)(param_1 + 0x88);
      uVar8 = 0;
      if (plVar2 != (long *)0x0) {
        lVar3 = plVar2[2];
        cVar1 = *(char *)(*plVar2 + lVar3);
        plVar2[2] = lVar3 + 1;
        if (cVar1 == -0x78) {
          uVar8 = *(undefined4 *)(*plVar2 + lVar3 + 1);
          plVar2[2] = lVar3 + 5;
        }
      }
      goto LAB_026f2df8;
    }
  }
  uVar6 = 0;
  uVar8 = uVar6;
LAB_026f2df8:
  auVar5._4_4_ = uVar7;
  auVar5._0_4_ = uVar4;
  auVar5._12_4_ = uVar8;
  auVar5._8_4_ = uVar6;
  return auVar5;
}


