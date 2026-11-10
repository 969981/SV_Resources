/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c4dc3c; name: FUN_01c4dc3c
 */


void FUN_01c4dc3c(undefined8 *param_1,char *param_2,code *param_3,ulong param_4,undefined4 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) == 0) {
      *(undefined2 *)((long)param_1 + 0x1c) = 0x100;
      *(undefined1 *)((long)param_1 + 0x1e) = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0x3f800000;
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar1);
      }
      puVar5 = (undefined8 *)(*param_3)(plVar1,*param_5);
      uVar3 = puVar5[3];
      uVar2 = *puVar5;
      uVar4 = puVar5[1];
      param_1[2] = puVar5[2];
      param_1[3] = uVar3;
      *param_1 = uVar2;
      param_1[1] = uVar4;
    }
    return;
  }
  if (*param_2 != '\0') {
    *(undefined2 *)((long)param_1 + 0x1c) = 0x100;
    *(undefined1 *)((long)param_1 + 0x1e) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0x3f800000;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    *(undefined2 *)((long)param_1 + 0x1c) = 0x100;
    *(undefined1 *)((long)param_1 + 0x1e) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0x3f800000;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    puVar5 = (undefined8 *)(*param_3)(plVar1,*param_5);
    uVar3 = puVar5[3];
    uVar2 = *puVar5;
    uVar4 = puVar5[1];
    param_1[2] = puVar5[2];
    param_1[3] = uVar3;
    *param_1 = uVar2;
    param_1[1] = uVar4;
  }
  return;
}


