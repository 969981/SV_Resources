/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032a02c; name: FUN_0032a02c
 */


void FUN_0032a02c(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  *param_1 = &PTR_FUN_04495408;
  lVar6 = param_1[2];
  lVar4 = *(long *)(lVar6 + 0x140);
  if (lVar4 != 0) {
    lVar9 = lVar4;
    lVar7 = lVar6 + 0x140;
    do {
      bVar3 = *(undefined8 **)(lVar9 + 0x20) < param_1;
      if (!bVar3) {
        lVar7 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + (ulong)bVar3 * 8);
    } while (lVar9 != 0);
    if ((lVar7 != lVar6 + 0x140) && (*(undefined8 **)(lVar7 + 0x20) <= param_1)) {
      plVar5 = *(long **)(lVar7 + 8);
      if (*(long **)(lVar7 + 8) == (long *)0x0) {
        plVar5 = (long *)(lVar7 + 0x10);
        plVar8 = (long *)*plVar5;
        if (*plVar8 != lVar7) {
          do {
            lVar9 = *plVar5;
            plVar5 = (long *)(lVar9 + 0x10);
            plVar8 = (long *)*plVar5;
          } while (*plVar8 != lVar9);
        }
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (*(long *)(lVar6 + 0x138) == lVar7) {
        *(long **)(lVar6 + 0x138) = plVar8;
      }
      *(long *)(lVar6 + 0x148) = *(long *)(lVar6 + 0x148) + -1;
      FUN_01336080(lVar4,lVar7);
      FUN_0049e790(PTR_LAB_047cba48,lVar7);
    }
  }
                    /* try { // try from 0032a104 to 0032a107 has its CatchHandler @ 0032a2dc */
  lVar4 = FUN_0033bccc(param_1[3]);
  if (lVar4 != 0) {
    lVar6 = param_1[2];
    lVar7 = *(long *)(lVar6 + 0x128);
    if (lVar7 == 0) {
LAB_0032a2d0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0032a2d0 to 0032a2d3 has its CatchHandler @ 0032a2d4 */
      abort();
    }
    uVar10 = param_1[3];
    lVar9 = lVar6 + 0x128;
    do {
      bVar3 = *(ulong *)(lVar7 + 0x20) < uVar10;
      if (!bVar3) {
        lVar9 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)bVar3 * 8);
    } while (lVar7 != 0);
    if ((lVar9 == lVar6 + 0x128) || (uVar10 < *(ulong *)(lVar9 + 0x20))) goto LAB_0032a2d0;
    iVar2 = *(int *)(lVar9 + 0x28) + -1;
    *(int *)(lVar9 + 0x28) = iVar2;
    if (iVar2 == 0) {
                    /* try { // try from 0032a168 to 0032a16f has its CatchHandler @ 0032a2d4 */
      FUN_00348538(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar4 + 0x18));
      lVar4 = param_1[2];
      plVar5 = *(long **)(lVar9 + 8);
      if (*(long **)(lVar9 + 8) == (long *)0x0) {
        plVar5 = (long *)(lVar9 + 0x10);
        plVar8 = (long *)*plVar5;
        if (*plVar8 != lVar9) {
          do {
            lVar6 = *plVar5;
            plVar5 = (long *)(lVar6 + 0x10);
            plVar8 = (long *)*plVar5;
          } while (*plVar8 != lVar6);
        }
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (*(long *)(lVar4 + 0x120) == lVar9) {
        *(long **)(lVar4 + 0x120) = plVar8;
      }
      *(long *)(lVar4 + 0x130) = *(long *)(lVar4 + 0x130) + -1;
      FUN_01336080(*(undefined8 *)(lVar4 + 0x128),lVar9);
      FUN_0049e790(PTR_LAB_047cba48,lVar9);
    }
  }
                    /* try { // try from 0032a1f0 to 0032a1f3 has its CatchHandler @ 0032a2dc */
  FUN_0033ba0c(param_1[3]);
  plVar5 = *(long **)(param_1[2] + 0x10);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
                    /* try { // try from 0032a278 to 0032a27b has its CatchHandler @ 0032a2dc */
    FUN_0037af30();
  }
  puVar11 = (undefined8 *)param_1[9];
  if (puVar11 != (undefined8 *)0x0) {
    plVar5 = puVar11 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar11)(puVar11);
      FUN_0049e790(PTR_LAB_047cba48,puVar11);
      puVar11 = (undefined8 *)param_1[8];
      goto joined_r0x0032a234;
    }
  }
  puVar11 = (undefined8 *)param_1[8];
joined_r0x0032a234:
  if (puVar11 != (undefined8 *)0x0) {
    plVar5 = puVar11 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar11)(puVar11);
      FUN_0049e790(PTR_LAB_047cba48,puVar11);
    }
  }
  FUN_0032a900(param_1 + 5,param_1[6]);
  __ptr = (void *)param_1[4];
  param_1[4] = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0032a268 to 0032a26b has its CatchHandler @ 0032a2d8 */
    free(__ptr);
  }
  return;
}


