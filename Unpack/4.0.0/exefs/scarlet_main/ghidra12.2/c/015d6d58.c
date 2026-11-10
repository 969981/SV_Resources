/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d6d58; name: FUN_015d6d58
 */


void FUN_015d6d58(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0x750) = *param_2;
  *(undefined8 *)(param_1 + 0x758) = param_2[1];
  *(undefined8 *)(param_1 + 0x760) = param_2[2];
  *(undefined8 *)(param_1 + 0x768) = param_2[3];
  plVar4 = (long *)param_2[4];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = *(long **)(param_1 + 0x770);
  *(long **)(param_1 + 0x770) = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x778) = param_2[5];
  *(undefined8 *)(param_1 + 0x780) = param_2[6];
  *(undefined8 *)(param_1 + 0x788) = param_2[7];
  plVar4 = (long *)param_2[8];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = *(long **)(param_1 + 0x790);
  *(long **)(param_1 + 0x790) = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  memcpy((void *)(param_1 + 0x798),param_2 + 9,0x2d);
  *(undefined8 *)(param_1 + 0x7c8) = param_2[0xf];
  *(undefined8 *)(param_1 + 2000) = param_2[0x10];
  *(undefined8 *)(param_1 + 0x7d8) = param_2[0x11];
  plVar4 = (long *)param_2[0x12];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = *(long **)(param_1 + 0x7e0);
  *(long **)(param_1 + 0x7e0) = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x7e8) = param_2[0x13];
  *(undefined8 *)(param_1 + 0x7f0) = param_2[0x14];
  *(undefined8 *)(param_1 + 0x7f8) = param_2[0x15];
  plVar4 = (long *)param_2[0x16];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = *(long **)(param_1 + 0x800);
  *(long **)(param_1 + 0x800) = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x808) = param_2[0x17];
  *(undefined8 *)(param_1 + 0x810) = param_2[0x18];
  *(undefined8 *)(param_1 + 0x818) = param_2[0x19];
  plVar4 = (long *)param_2[0x1a];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = *(long **)(param_1 + 0x820);
  *(long **)(param_1 + 0x820) = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x828) = param_2[0x1b];
  *(undefined8 *)(param_1 + 0x830) = param_2[0x1c];
  *(undefined8 *)(param_1 + 0x838) = param_2[0x1d];
  plVar4 = (long *)param_2[0x1e];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = *(long **)(param_1 + 0x840);
  *(long **)(param_1 + 0x840) = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x848) = param_2[0x1f];
  *(undefined8 *)(param_1 + 0x850) = param_2[0x20];
  *(undefined8 *)(param_1 + 0x858) = param_2[0x21];
  plVar4 = (long *)param_2[0x22];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = *(long **)(param_1 + 0x860);
  *(long **)(param_1 + 0x860) = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  uVar1 = param_2[0x23];
  uVar2 = param_2[0x24];
  *(undefined8 *)(param_1 + 0x878) = param_2[0x25];
  *(undefined8 *)(param_1 + 0x870) = uVar2;
  *(undefined8 *)(param_1 + 0x868) = uVar1;
  *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)((long)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_2 + 0xe);
  *(bool *)(*(long *)(param_1 + 0x930) + 0x2c) = *(int *)(param_1 + 0x754) != 0;
  return;
}


