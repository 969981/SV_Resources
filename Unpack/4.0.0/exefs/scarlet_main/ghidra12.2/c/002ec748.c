/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ec748; name: FUN_002ec748
 */


void FUN_002ec748(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_60;
  undefined8 *local_58;
  
  param_1[2] = (long)"Composite";
  *(undefined4 *)(param_1 + 3) = 2;
  uVar11 = 1;
  *param_1 = (long)(PTR_DAT_047cc968 + 0x10);
  param_1[1] = 1;
  puVar10 = (ulong *)(param_1 + 4);
  *puVar10 = 0;
  lVar14 = *param_2;
  iVar3 = strcmp(*(char **)(lVar14 + 0x10),"Composite");
  lVar13 = *param_3;
  iVar4 = strcmp(*(char **)(lVar13 + 0x10),"Composite");
  if (iVar3 == 0) {
    uVar11 = *(ulong *)(lVar14 + 0x20) >> 1;
    if (iVar4 == 0) goto LAB_002ec7e0;
LAB_002ec7cc:
    uVar6 = 1;
  }
  else {
    if (iVar4 != 0) goto LAB_002ec7cc;
LAB_002ec7e0:
    uVar6 = *(ulong *)(lVar13 + 0x20) >> 1;
  }
                    /* try { // try from 002ec7ec to 002ec7f3 has its CatchHandler @ 002eca10 */
  FUN_002ed828(puVar10,uVar6 + uVar11);
  puVar12 = (undefined8 *)*param_2;
  *param_2 = 0;
  local_58 = puVar12;
  if (iVar3 == 0) {
    uVar11 = puVar12[4];
    if (1 < uVar11) {
      lVar13 = 0;
      uVar6 = 0;
      do {
        puVar7 = puVar12 + 5;
        if ((uVar11 & 1) != 0) {
          puVar7 = (undefined8 *)puVar12[5];
        }
                    /* try { // try from 002ec840 to 002ec847 has its CatchHandler @ 002eca38 */
        FUN_002ed684(param_1 + 4,(long)puVar7 + lVar13);
        uVar11 = puVar12[4];
        uVar6 = uVar6 + 1;
        lVar13 = lVar13 + 8;
      } while (uVar6 < uVar11 >> 1);
      goto LAB_002ec85c;
    }
LAB_002ec864:
    puVar12 = local_58;
    plVar9 = local_58 + 1;
    do {
      lVar13 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 + -1 != 0) goto LAB_002ec87c;
    (**(code **)*local_58)(local_58);
    FUN_0049e790(PTR_LAB_047cba48,puVar12);
    local_60 = (undefined8 *)*param_3;
    *param_3 = 0;
    if (iVar4 == 0) goto LAB_002ec8cc;
LAB_002ec88c:
                    /* try { // try from 002ec890 to 002ec897 has its CatchHandler @ 002eca08 */
    FUN_002ed684(param_1 + 4,&local_60);
LAB_002ec914:
    if (local_60 != (undefined8 *)0x0) goto LAB_002ec91c;
  }
  else {
                    /* try { // try from 002ec808 to 002ec80f has its CatchHandler @ 002eca0c */
    FUN_002ed684(param_1 + 4,&local_58);
LAB_002ec85c:
    if (local_58 != (undefined8 *)0x0) goto LAB_002ec864;
LAB_002ec87c:
    local_60 = (undefined8 *)*param_3;
    *param_3 = 0;
    if (iVar4 != 0) goto LAB_002ec88c;
LAB_002ec8cc:
    puVar12 = local_60;
    uVar11 = local_60[4];
    if (1 < uVar11) {
      lVar13 = 0;
      uVar6 = 0;
      puVar7 = local_60 + 5;
      do {
        puVar8 = puVar7;
        if ((uVar11 & 1) != 0) {
          puVar8 = (undefined8 *)*puVar7;
        }
                    /* try { // try from 002ec8f8 to 002ec8ff has its CatchHandler @ 002eca14 */
        FUN_002ed684(param_1 + 4,(long)puVar8 + lVar13);
        uVar11 = puVar12[4];
        uVar6 = uVar6 + 1;
        lVar13 = lVar13 + 8;
      } while (uVar6 < uVar11 >> 1);
      goto LAB_002ec914;
    }
LAB_002ec91c:
    puVar12 = local_60;
    plVar9 = local_60 + 1;
    do {
      lVar13 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)*local_60)(local_60);
      FUN_0049e790(PTR_LAB_047cba48,puVar12);
      uVar11 = param_1[4];
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
      goto joined_r0x002eca00;
    }
  }
  uVar11 = param_1[4];
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
joined_r0x002eca00:
  if (1 < uVar11) {
    iVar3 = 0;
    uVar6 = 0;
    while( true ) {
      plVar9 = param_1 + 5;
      if ((uVar11 & 1) != 0) {
        plVar9 = (long *)param_1[5];
      }
                    /* try { // try from 002ec978 to 002ec9a3 has its CatchHandler @ 002eca80 */
      iVar4 = (**(code **)(*(long *)plVar9[uVar6] + 0x20))();
      if (iVar3 < iVar4) {
        plVar9 = param_1 + 5;
        if ((*puVar10 & 1) != 0) {
          plVar9 = (long *)param_1[5];
        }
        uVar5 = (**(code **)(*(long *)plVar9[uVar6] + 0x20))();
        *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
      }
      uVar11 = *puVar10;
      uVar6 = uVar6 + 1;
      if (uVar11 >> 1 <= uVar6) break;
      iVar3 = *(int *)((long)param_1 + 0x1c);
    }
  }
  return;
}


