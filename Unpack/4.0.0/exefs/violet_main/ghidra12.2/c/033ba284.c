/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ba284; name: FUN_033ba284
 */


void FUN_033ba284(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 undefined8 param_5,long *param_6,long *param_7,uint param_8)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  *param_1 = &PTR_FUN_047b46b8;
  if (param_3 == (undefined8 *)0x0) {
    if ((param_8 & 1) == 0) {
      param_3 = param_1 + 2;
    }
    else {
      param_3 = param_1 + 7;
    }
  }
  *param_1 = &PTR_FUN_047b46b8;
  param_1[1] = param_3;
  puVar5 = PTR_DAT_047ddc48;
  puVar1 = PTR_DAT_047e6920 + 0x10;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[2] = puVar1;
  lVar9 = *(long *)puVar5;
  param_1[0x14] = &PTR_LAB_047b4720;
  *(undefined1 *)(param_1 + 6) = 0;
  puVar1 = PTR_DAT_047e6928;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[7] = puVar1 + 0x10;
  param_1[8] = param_1 + 2;
  if (param_4 != 0) {
    lVar9 = param_4;
  }
  param_1[0xb] = 0x8000000000000000;
  param_1[0xc] = &DAT_03d7702c;
  plVar2 = param_1 + 0x14;
  if (param_7 != (long *)0x0) {
    plVar2 = param_7;
  }
  param_1[5] = lVar9;
  param_1[0xe] = param_6;
  param_1[0xf] = param_5;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  param_1[0x12] = param_2;
  param_1[0x13] = plVar2;
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  lVar9 = FUN_033bc310(param_6);
  if ((lVar9 != 0) && (lVar7 = *param_6, lVar7 != 0)) {
    piVar8 = (int *)(lVar7 + (long)*(int *)(lVar9 + 4) * 0x18 + 0x10);
    if (*piVar8 != 0) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_48 = *(long *)(lVar7 + (long)*(int *)(lVar9 + 4) * 0x18 + 8);
      lStack_40 = local_48 + (long)*piVar8 * 0x18;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,&local_38,&local_38);
      if ((local_28 & 1) != 0) {
        plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar9 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
  }
  return;
}


