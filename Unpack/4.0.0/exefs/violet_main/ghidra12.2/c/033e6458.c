/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e6458; name: FUN_033e6458
 */


undefined8 FUN_033e6458(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x17) != '\0') {
    FUN_033e75d4(param_1 + 3,param_1[2]);
  }
  if ((param_1[7] != 0) && (param_1[9] != 0)) {
    plVar2 = (long *)param_1[2];
    (**(code **)(*plVar2 + 0x18))(plVar2);
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_1[9] != 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      param_1[9] = 0;
      *(undefined4 *)(param_1 + 10) = 0;
    }
  }
  puVar3 = (undefined4 *)param_1[0xb];
  if (puVar3 != (undefined4 *)0x0) {
    if (*(int *)((long)param_1 + 0xbc) != 0) {
      if (*(long *)(puVar3 + 2) != 0) {
        (**(code **)(*(long *)param_1[2] + 0x18))();
        *(undefined8 *)(puVar3 + 2) = 0;
      }
      *puVar3 = 0;
      if (1 < *(uint *)((long)param_1 + 0xbc)) {
        lVar4 = 0;
        uVar5 = 1;
        do {
          lVar1 = param_1[0xb] + lVar4;
          if (*(long *)(lVar1 + 0x20) != 0) {
            (**(code **)(*(long *)param_1[2] + 0x18))();
            *(undefined8 *)(lVar1 + 0x20) = 0;
          }
          *(undefined4 *)(lVar1 + 0x18) = 0;
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar5 < *(uint *)((long)param_1 + 0xbc));
      }
      puVar3 = (undefined4 *)param_1[0xb];
    }
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar3);
    param_1[0xb] = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


