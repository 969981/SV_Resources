/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00531850; name: FUN_00531850
 */


void FUN_00531850(int *param_1,int *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_30;
  void *pvStack_28;
  
  if (param_1 != param_2) {
    plVar5 = (long *)(param_1 + 2);
    if (param_1[1] != 0) {
      plVar5 = (long *)(*plVar5 + -8);
    }
    plVar6 = (long *)(param_2 + 2);
    if (param_2[1] == 0) {
      lVar7 = *plVar6;
    }
    else {
      plVar6 = (long *)(*plVar6 + -8);
      lVar7 = *plVar6;
    }
    if (*plVar5 == lVar7) {
      uVar8 = *(undefined8 *)param_2;
      uVar1 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar8;
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar3;
      return;
    }
    pvStack_28 = (void *)*plVar6;
    local_30 = 0;
    if (*param_1 != 0) {
                    /* try { // try from 005318b4 to 005318bb has its CatchHandler @ 005319a4 */
      FUN_00531704(&local_30);
      local_30 = CONCAT44(local_30._4_4_,(int)local_30 + *param_1);
      memcpy(pvStack_28,*(void **)(param_1 + 2),(long)*param_1 << 3);
    }
    *param_1 = 0;
    if (*param_2 != 0) {
                    /* try { // try from 005318e8 to 005318ef has its CatchHandler @ 005319a4 */
      FUN_00531704(param_1);
      *param_1 = *param_1 + *param_2;
      memcpy(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(long)*param_2 << 3);
    }
    if ((int *)&local_30 == param_2) {
      uVar1 = local_30;
      iVar4 = local_30._4_4_;
    }
    else {
      uVar1 = *(undefined8 *)param_2;
      pvVar2 = *(void **)(param_2 + 2);
      *(void **)(param_2 + 2) = pvStack_28;
      *(undefined8 *)param_2 = local_30;
      iVar4 = (int)((ulong)uVar1 >> 0x20);
      pvStack_28 = pvVar2;
    }
    local_30 = uVar1;
    if ((0 < iVar4) && (*(long *)((long)pvStack_28 + -8) == 0)) {
      FUN_0049e700();
      return;
    }
  }
  return;
}


