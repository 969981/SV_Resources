/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3cecc; name: FUN_00d3cecc
 */


undefined8 * FUN_00d3cecc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  param_1[1] = param_2[1];
  uVar3 = *param_2;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *param_1 = uVar3;
  FUN_00d0a71c(param_1 + 4,param_2 + 4);
  FUN_00c6c994(param_1 + 6,param_2 + 6);
  plVar5 = (long *)param_2[8];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar2 = (long *)param_1[8];
  param_1[8] = plVar5;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar3 = param_2[9];
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  param_1[9] = uVar3;
  memcpy(param_1 + 0xc,param_2 + 0xc,0xd4);
  FUN_01a7797c(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = param_2[0x40];
  FUN_00d0a71c(param_1 + 0x43,param_2 + 0x43);
  param_1[0x47] = param_2[0x47];
  param_1[0x46] = param_2[0x46];
  FUN_00d0a71c(param_1 + 0x49,param_2 + 0x49);
  FUN_00c6c994(param_1 + 0x4b,param_2 + 0x4b);
  plVar5 = (long *)param_2[0x4d];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar2 = (long *)param_1[0x4d];
  param_1[0x4d] = plVar5;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  memcpy(param_1 + 0x4e,param_2 + 0x4e,0x25);
  memcpy(param_1 + 0x54,param_2 + 0x54,0x50);
  FUN_01a7797c(param_1 + 0x5e,param_2 + 0x5e);
  *(undefined4 *)(param_1 + 0x72) = *(undefined4 *)(param_2 + 0x72);
  param_1[0x77] = param_2[0x77];
  param_1[0x76] = param_2[0x76];
  FUN_00d0a71c(param_1 + 0x79,param_2 + 0x79);
  param_1[0x7d] = param_2[0x7d];
  param_1[0x7c] = param_2[0x7c];
  FUN_00d0a71c(param_1 + 0x7f,param_2 + 0x7f);
  FUN_00c6c994(param_1 + 0x81,param_2 + 0x81);
  plVar5 = (long *)param_2[0x83];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar2 = (long *)param_1[0x83];
  param_1[0x83] = plVar5;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  memcpy(param_1 + 0x84,param_2 + 0x84,0x25);
  uVar1 = *(undefined4 *)(param_2 + 0x8b);
  param_1[0x8a] = param_2[0x8a];
  *(undefined4 *)(param_1 + 0x8b) = uVar1;
  memcpy(param_1 + 0x8c,param_2 + 0x8c,300);
  return param_1;
}


