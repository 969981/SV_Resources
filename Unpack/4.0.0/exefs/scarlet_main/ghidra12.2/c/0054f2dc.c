/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054f2dc; name: FUN_0054f2dc
 */


undefined1  [16] FUN_0054f2dc(long *param_1,uint *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar4 = param_1 + 1;
  plVar5 = (long *)*plVar4;
  if (plVar5 == (long *)0x0) {
    plVar5 = plVar4;
LAB_0054f348:
    puVar3 = (undefined8 *)*plVar4;
  }
  else {
    plVar4 = param_1 + 1;
    while( true ) {
      while (*(uint *)(plVar5 + 4) <= *param_2) {
        if (*param_2 <= *(uint *)(plVar5 + 4)) goto LAB_0054f348;
        plVar4 = plVar5 + 1;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_0054f348;
        plVar5 = (long *)*plVar4;
      }
      plVar4 = plVar5;
      if ((long *)*plVar5 == (long *)0x0) break;
      plVar5 = (long *)*plVar5;
    }
    puVar3 = (undefined8 *)*plVar5;
  }
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = 0;
    goto LAB_0054f468;
  }
  puVar3 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x90,0x10);
  *(undefined4 *)(puVar3 + 4) = *param_3;
  puVar3[10] = 0;
  if (puVar3 + 6 == param_4) {
LAB_0054f3e4:
    puVar3[0x10] = 0;
  }
  else {
    puVar2 = (undefined8 *)param_4[4];
    if (puVar2 == (undefined8 *)0x0) {
      puVar3[10] = 0;
      puVar3[0x10] = 0;
      puVar2 = (undefined8 *)param_4[10];
    }
    else if (puVar2 == param_4) {
      puVar3[10] = puVar3 + 6;
      (**(code **)(*(long *)param_4[4] + 0x30))();
      puVar3[0x10] = 0;
      puVar2 = (undefined8 *)param_4[10];
    }
    else {
      puVar3[10] = puVar2;
      param_4[4] = 0;
      puVar3[0x10] = 0;
      puVar2 = (undefined8 *)param_4[10];
    }
    if (puVar2 == (undefined8 *)0x0) goto LAB_0054f3e4;
    if (puVar2 == param_4 + 6) {
      puVar3[0x10] = puVar3 + 0xc;
      (**(code **)(*(long *)param_4[10] + 0x30))();
    }
    else {
      puVar3[0x10] = puVar2;
      param_4[10] = 0;
    }
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar5;
  *plVar4 = (long)puVar3;
  if (*(long *)*param_1 == 0) {
    puVar2 = puVar3;
  }
  else {
    *param_1 = *(long *)*param_1;
    puVar2 = (undefined8 *)*plVar4;
  }
  FUN_010108e0(param_1[1],puVar2);
  uVar1 = 1;
  param_1[3] = param_1[3] + 1;
LAB_0054f468:
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = puVar3;
  return auVar6;
}


