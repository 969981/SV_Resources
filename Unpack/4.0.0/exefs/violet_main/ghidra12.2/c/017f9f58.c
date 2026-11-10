/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f9f58; name: FUN_017f9f58
 */


void FUN_017f9f58(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined8 *)(param_1 + 0xf0) = *param_2;
  *(undefined8 *)(param_1 + 0xf8) = param_2[1];
  *(undefined8 *)(param_1 + 0x100) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x108);
  *(long **)(param_1 + 0x108) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x110) = param_2[4];
  *(undefined8 *)(param_1 + 0x118) = param_2[5];
  *(undefined8 *)(param_1 + 0x120) = param_2[6];
  plVar2 = (long *)param_2[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x128);
  *(long **)(param_1 + 0x128) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x130) = param_2[8];
  *(undefined8 *)(param_1 + 0x138) = param_2[9];
  *(undefined8 *)(param_1 + 0x140) = param_2[10];
  plVar2 = (long *)param_2[0xb];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x148);
  *(long **)(param_1 + 0x148) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x150) = param_2[0xc];
  *(undefined8 *)(param_1 + 0x158) = param_2[0xd];
  *(undefined8 *)(param_1 + 0x160) = param_2[0xe];
  plVar2 = (long *)param_2[0xf];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x168);
  *(long **)(param_1 + 0x168) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x170) = param_2[0x10];
  *(undefined8 *)(param_1 + 0x178) = param_2[0x11];
  *(undefined8 *)(param_1 + 0x180) = param_2[0x12];
  plVar2 = (long *)param_2[0x13];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x188);
  *(long **)(param_1 + 0x188) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 400) = param_2[0x14];
  *(undefined8 *)(param_1 + 0x198) = param_2[0x15];
  *(undefined8 *)(param_1 + 0x1a0) = param_2[0x16];
  plVar2 = (long *)param_2[0x17];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x1a8);
  *(long **)(param_1 + 0x1a8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  FUN_017fa170(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x21) = 1;
  return;
}


