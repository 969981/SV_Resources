/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0126046c; name: FUN_0126046c
 */


void FUN_0126046c(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  FUN_00d1a240(param_1,0x8009809f);
  *param_1 = &PTR_FUN_045de4c8;
  param_1[0x24] = 0;
  param_1[6] = &PTR_LAB_045de7a0;
  param_1[4] = &PTR_LAB_045de620;
  param_1[5] = &DAT_045de748;
  puVar5 = param_1 + 7;
  *puVar5 = &PTR_LAB_045de7c8;
  *(undefined4 *)(param_1 + 0x25) = 0;
  memset(param_1 + 0x26,0,0x50);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x29] = &DAT_cbf29ce484222645;
  param_1[0x2a] = &DAT_03c886bc;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if ((*(char *)(param_1 + 0xb) != '\0') || (*(char *)((long)param_1 + 0x59) != '\x05')) {
    uVar1 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x500;
    if (param_1[9] == 0) {
      ppuVar3 = &PTR_LAB_045de7c8;
    }
    else {
      FUN_00c6a584(param_1[9],puVar5);
      ppuVar3 = (undefined **)*puVar5;
    }
    (*(code *)ppuVar3[4])(puVar5,uVar1);
  }
  FUN_01260630(param_1,param_2,param_2[6]);
  plVar6 = (long *)*param_2;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar2 = (long *)param_1[0x28];
  param_1[0x28] = plVar6;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  param_1[0x29] = param_2[1];
  param_1[0x2a] = param_2[2];
  param_1[0x2b] = param_2[3];
  plVar6 = (long *)param_2[4];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar2 = (long *)param_1[0x2c];
  param_1[0x2c] = plVar6;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 5);
  uVar4 = param_2[6];
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 7);
  param_1[0x2e] = uVar4;
  param_1[0xc] = param_1[0xc] | 0xe;
  return;
}


