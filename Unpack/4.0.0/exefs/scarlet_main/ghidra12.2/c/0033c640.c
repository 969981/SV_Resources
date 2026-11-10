/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033c640; name: FUN_0033c640
 */


undefined8 FUN_0033c640(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_48;
  void *local_38;
  
  uVar4 = FUN_003448b0();
  FUN_00344940(uVar4,*(undefined8 *)(param_1 + 0x58));
  puVar11 = (undefined8 *)(param_1 + 0x50);
  FUN_00344990(uVar4,*puVar11);
  uVar5 = FUN_00370bb0(uVar4,1);
  if ((uVar5 & 1) == 0) {
    FUN_00344ae0(uVar4);
    return 0;
  }
  uVar5 = FUN_00344b40(uVar4,0,1,&LAB_0033c9f0,0,&local_38);
  if (uVar5 != 0) {
    FUN_0037b100(*puVar11);
    if (uVar5 < 5) {
      return 0;
    }
    FUN_00350fd0(uVar5);
    return 0;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x91) != '\0') {
                    /* try { // try from 0033c70c to 0033c717 has its CatchHandler @ 0033c99c */
    FUN_00344620(local_38);
    free(local_38);
    uVar4 = 0;
    goto joined_r0x0033c874;
  }
  plVar6 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (plVar6 != (long *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x168) == 0) {
      lVar9 = 0;
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x168) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar9 = *(long *)(param_1 + 0x168);
    }
    *plVar6 = (long)(PTR_DAT_047ccc88 + 0x10);
    plVar6[1] = 1;
    plVar6[2] = (long)local_38;
                    /* try { // try from 0033c784 to 0033c787 has its CatchHandler @ 0033c934 */
    lVar7 = FUN_003438f0(uVar4);
    plVar6[3] = lVar7;
    plVar6[4] = lVar9;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x88);
  if (puVar11 == (undefined8 *)0x0) {
LAB_0033c7ac:
    lVar9 = *(long *)(param_1 + 0x168);
    *(long **)(param_1 + 0x88) = plVar6;
  }
  else {
    plVar1 = puVar11 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 != 0) goto LAB_0033c7ac;
    (**(code **)*puVar11)(puVar11);
    FUN_0049e790(PTR_LAB_047cba48,puVar11);
    lVar9 = *(long *)(param_1 + 0x168);
    *(long **)(param_1 + 0x88) = plVar6;
  }
  if (lVar9 != 0) {
                    /* try { // try from 0033c7bc to 0033c7c3 has its CatchHandler @ 0033c910 */
    local_48 = puVar10;
    FUN_003405b8(lVar9,&local_48);
    puVar11 = local_48;
    puVar10 = (undefined8 *)0x0;
    if (local_48 != (undefined8 *)0x0) {
      plVar6 = local_48 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 1) {
        (**(code **)*local_48)(local_48);
        FUN_0049e790(PTR_LAB_047cba48,puVar11);
      }
      puVar10 = (undefined8 *)0x0;
    }
  }
  lVar7 = *(long *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar9 = FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (lVar9 != 0) {
                    /* try { // try from 0033c80c to 0033c817 has its CatchHandler @ 0033c90c */
    FUN_0033e514(lVar9,param_1);
  }
                    /* try { // try from 0033c818 to 0033c81f has its CatchHandler @ 0033c978 */
  lVar8 = FUN_0037b7c0(0);
  puVar11 = *(undefined8 **)(lVar8 + 8);
  *(long *)(lVar8 + 8) = lVar9;
  if (puVar11 != (undefined8 *)0x0) {
                    /* try { // try from 0033c838 to 0033c83b has its CatchHandler @ 0033c908 */
    (**(code **)*puVar11)();
  }
  *(undefined4 *)(lVar8 + 0x10) = 2;
  *(undefined8 *)(lVar8 + 0x50) = uVar4;
                    /* try { // try from 0033c84c to 0033c863 has its CatchHandler @ 0033c998 */
  plVar6 = (long *)FUN_00344390(*(undefined8 *)(lVar7 + 0x10),0);
  (**(code **)(*plVar6 + 8))(plVar6,lVar8);
                    /* try { // try from 0033c864 to 0033c86f has its CatchHandler @ 0033c99c */
  FUN_0033c32c(param_1,2);
  uVar4 = 1;
joined_r0x0033c874:
  if (puVar10 == (undefined8 *)0x0) {
    return uVar4;
  }
  plVar6 = puVar10 + 1;
  do {
    lVar9 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 + -1 == 0) {
    (**(code **)*puVar10)(puVar10);
    FUN_0049e790(PTR_LAB_047cba48,puVar10);
    return uVar4;
  }
  return uVar4;
}


