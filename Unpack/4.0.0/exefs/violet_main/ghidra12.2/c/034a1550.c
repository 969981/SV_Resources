/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a1550; name: FUN_034a1550
 */


long * FUN_034a1550(long *param_1,long param_2,long *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  bVar1 = true;
  bVar2 = false;
  if (*(int *)((long)param_3 + 0x4c) != 0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(*(float *)(param_3 + 9))) {
      bVar1 = *(float *)(param_3 + 9) < 1.0;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    lVar5 = *param_3;
    if ((*(uint *)(param_2 + 8) & 0xf00) == 0x100 && (*(uint *)(param_2 + 8) >> 0xc & 0xff9c0) == 0)
    {
      if (*(uint *)(param_1 + 1) == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = (long *)*param_1;
        lVar6 = (ulong)*(uint *)(param_1 + 1) * 0xc0;
        do {
          if (*plVar3 == lVar5) goto LAB_034a1684;
          plVar3 = plVar3 + 0x18;
          lVar6 = lVar6 + -0xc0;
        } while (lVar6 != 0);
        plVar3 = (long *)0x0;
      }
      goto LAB_034a1614;
    }
  }
  else {
    lVar5 = *param_3;
  }
  if (*(uint *)(param_1 + 3) != 0) {
    plVar3 = (long *)param_1[2];
    lVar6 = (ulong)*(uint *)(param_1 + 3) * 0xc0;
    do {
      if (*plVar3 == lVar5) goto LAB_034a1684;
      plVar3 = plVar3 + 0x18;
      lVar6 = lVar6 + -0xc0;
    } while (lVar6 != 0);
  }
  plVar3 = (long *)0x0;
LAB_034a1614:
  iVar4 = 0;
  if (*(uint *)(param_3 + 0xe) != 0) {
    lVar5 = (ulong)*(uint *)(param_3 + 0xe) * 0x18;
    plVar7 = (long *)(param_3[0xd] + 8);
    do {
      if (((int)plVar7[-1] == 0x3840009) && (*plVar7 != 0)) {
        iVar4 = *(int *)(*plVar7 + 0xc);
      }
      lVar5 = lVar5 + -0x18;
      plVar7 = plVar7 + 3;
    } while (lVar5 != 0);
  }
  if ((*(char *)(param_4 + 0xc) == '\0') && (iVar4 == 2)) {
    iVar4 = 1;
  }
joined_r0x034a1690:
  if (iVar4 == 0) {
    return plVar3;
  }
  return plVar3;
LAB_034a1684:
  if (plVar3 != (long *)0x0) {
    iVar4 = (int)plVar3[0x16];
    goto joined_r0x034a1690;
  }
  goto LAB_034a1614;
}


