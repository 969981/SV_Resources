/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01305a80; name: FUN_01305a80
 */


void FUN_01305a80(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined4 *)(param_1 + 0x6e) = param_2;
  plVar1 = param_1;
  if ((long *)param_1[0x36] != (long *)0x0) {
    plVar1 = (long *)param_1[0x36];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  }
  plVar1 = param_1;
  if ((long *)param_1[0x35] != (long *)0x0) {
    plVar1 = (long *)param_1[0x35];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  }
  puVar2 = (undefined8 *)param_1[0x81];
  for (puVar3 = (undefined8 *)param_1[0x80]; puVar3 != puVar2; puVar3 = puVar3 + 1) {
    plVar4 = (long *)*puVar3;
    *(undefined4 *)(plVar4 + 0x6e) = param_2;
    plVar1 = plVar4;
    if ((long *)plVar4[0x36] != (long *)0x0) {
      plVar1 = (long *)plVar4[0x36];
    }
    if (plVar1 != plVar4) {
      (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
    }
    plVar1 = plVar4;
    if ((long *)plVar4[0x35] != (long *)0x0) {
      plVar1 = (long *)plVar4[0x35];
    }
    if (plVar1 != plVar4) {
      (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
    }
    puVar6 = (undefined8 *)plVar4[0x6f];
    puVar5 = (undefined8 *)plVar4[0x70];
    if ((((puVar6 != puVar5) &&
         ((**(code **)(*(long *)*puVar6 + 0x88))((long *)*puVar6,param_2), puVar6 + 1 != puVar5)) &&
        ((**(code **)(*(long *)puVar6[1] + 0x88))((long *)puVar6[1],param_2), puVar6 + 2 != puVar5))
       && ((**(code **)(*(long *)puVar6[2] + 0x88))((long *)puVar6[2],param_2), puVar6 + 3 != puVar5
          )) {
      (**(code **)(*(long *)puVar6[3] + 0x88))((long *)puVar6[3],param_2);
      for (puVar6 = puVar6 + 4; puVar6 != puVar5; puVar6 = puVar6 + 1) {
        (**(code **)(*(long *)*puVar6 + 0x88))((long *)*puVar6,param_2);
      }
    }
  }
  return;
}


