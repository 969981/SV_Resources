/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0165e518; name: FUN_0165e518
 */


undefined8 * FUN_0165e518(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)param_1[3];
  param_1[3] = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar2 = (long *)param_2[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)param_1[7];
  param_1[7] = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  plVar2 = (long *)param_2[0xb];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)param_1[0xb];
  param_1[0xb] = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  plVar2 = (long *)param_2[0xf];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)param_1[0xf];
  param_1[0xf] = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  plVar2 = (long *)param_2[0x13];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)param_1[0x13];
  param_1[0x13] = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  lVar3 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar3 + 0xa0) = *(undefined8 *)((long)param_2 + lVar3 + 0xa0);
    *(undefined8 *)((long)param_1 + lVar3 + 0xa8) = *(undefined8 *)((long)param_2 + lVar3 + 0xa8);
    *(undefined8 *)((long)param_1 + lVar3 + 0xb0) = *(undefined8 *)((long)param_2 + lVar3 + 0xb0);
    plVar2 = *(long **)((long)param_2 + lVar3 + 0xb8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar1 = *(long **)((long)param_1 + lVar3 + 0xb8);
    *(long **)((long)param_1 + lVar3 + 0xb8) = plVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x300);
  return param_1;
}


