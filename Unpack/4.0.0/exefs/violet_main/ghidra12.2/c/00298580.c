/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00298580; name: FUN_00298580
 */


void FUN_00298580(long param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined4 local_4c;
  void *local_48;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = (long *)(param_1 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0038db40(param_1 + 0x30);
  puVar9 = *(ulong **)(param_1 + 0x50);
  if (puVar9 == (ulong *)0x0) {
    puVar9 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0xa8);
    if (puVar9 != (ulong *)0x0) {
      *puVar9 = 0;
    }
    puVar10 = *(ulong **)(param_1 + 0x50);
    *(ulong **)(param_1 + 0x50) = puVar9;
    if (puVar10 != (ulong *)0x0) {
      uVar7 = *puVar10;
      uVar6 = uVar7 & 1;
      if ((uVar7 & 1) == 0) {
        puVar9 = puVar10 + 1;
      }
      else {
        puVar9 = (ulong *)puVar10[1];
      }
      if ((uVar7 >> 1 != 0) && (uVar7 = uVar7 >> 1, puVar9 != (ulong *)0x0)) {
        puVar9 = puVar9 + uVar7 * 2;
        do {
          puVar9 = puVar9 + -2;
          pvVar5 = (void *)*puVar9;
          *puVar9 = 0;
          if (pvVar5 != (void *)0x0) {
                    /* try { // try from 00298650 to 00298653 has its CatchHandler @ 00298784 */
            free(pvVar5);
          }
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        uVar6 = *puVar10 & 1;
      }
      if (uVar6 != 0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar10[1]);
      }
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
      puVar9 = *(ulong **)(param_1 + 0x50);
    }
  }
  uVar6 = *puVar9;
  if (1 < uVar6) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      puVar10 = puVar9 + 1;
      if ((uVar6 & 1) != 0) {
        puVar10 = (ulong *)puVar9[1];
      }
      iVar4 = strcmp(*(char **)((long)puVar10 + lVar8),param_2);
      if (iVar4 == 0) {
        if ((uVar6 & 1) == 0) {
          puVar9 = puVar9 + 1;
        }
        else {
          puVar9 = (ulong *)puVar9[1];
        }
        *(long *)((long)puVar9 + lVar8 + 8) = *(long *)((long)puVar9 + lVar8 + 8) + 1;
        goto LAB_00298728;
      }
      uVar6 = *puVar9;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar7 < uVar6 >> 1);
  }
                    /* try { // try from 002986d0 to 002986d7 has its CatchHandler @ 00298768 */
  local_48 = (void *)FUN_0038ccb0(param_2);
  local_4c = 1;
                    /* try { // try from 002986e4 to 002986f3 has its CatchHandler @ 0029874c */
  FUN_002988b0(puVar9,&local_48,&local_4c);
  pvVar5 = local_48;
  local_48 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
                    /* try { // try from 00298700 to 00298703 has its CatchHandler @ 00298748 */
    free(pvVar5);
  }
LAB_00298728:
                    /* try { // try from 00298728 to 0029872f has its CatchHandler @ 00298780 */
  FUN_0038db60(param_1 + 0x30);
  return;
}


