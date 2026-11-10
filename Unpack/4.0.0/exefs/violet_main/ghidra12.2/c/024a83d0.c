/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a83d0; name: FUN_024a83d0
 */


void FUN_024a83d0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_e0 [160];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  long *local_28;
  undefined1 auStack_8 [8];
  
  local_38 = auStack_e0;
  lVar1 = *param_1;
  lVar2 = param_1[3];
  if (lVar1 != lVar2) {
    if ((lVar1 == param_1[1]) && (lVar2 != param_1[1])) {
      local_28 = *(long **)(lVar2 + 0x10);
      local_40 = 10;
      local_30 = 0;
      local_38 = auStack_e0;
      (**(code **)(*local_28 + 0x18))();
      lVar1 = param_1[1];
    }
    else {
      local_28 = *(long **)(lVar1 + 0x10);
      local_40 = 10;
      local_30 = 0;
      (**(code **)(*local_28 + 0x18))();
      lVar1 = *param_1;
      if (lVar1 != param_1[1]) {
        do {
          FUN_024a7248(param_1[2] + 8);
          FUN_024a8eb0(*(undefined8 *)(*param_1 + 0x10),auStack_e0,param_1[2] + 8);
          lVar1 = param_1[2];
          if (*(char *)(*(long *)(*param_1 + 0x10) + 0x18) == '\0') {
            *(int *)(lVar1 + 0x124) = *(int *)(lVar1 + 0x124) + 1;
          }
          else {
            *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + 1;
          }
          lVar1 = *param_1;
          if (*(char *)(*(long *)(lVar1 + 0x10) + 0x18) != '\0') {
            lVar2 = *(long *)(*(long *)(lVar1 + 0x10) + 0x10);
            if (lVar2 != 0) {
              if (*(int *)(lVar2 + 8) != 0) {
                lVar1 = *param_1;
                goto LAB_024a8504;
              }
              lVar1 = *param_1;
            }
            FUN_024a8e50(param_1,auStack_e0,lVar1);
            lVar1 = *param_1;
            if (lVar1 != param_1[1]) goto LAB_024a8438;
            break;
          }
LAB_024a8504:
          lVar1 = *(long *)(lVar1 + 8);
          *param_1 = lVar1;
        } while (param_1[1] != lVar1);
      }
    }
    FUN_024a8e50(param_1,auStack_e0,lVar1);
LAB_024a8438:
    (**(code **)(*local_28 + 0x20))();
    if (local_38 != (undefined1 *)0x0) {
      FUN_024a5ff8(auStack_e0,auStack_8);
    }
  }
  return;
}


