/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bb85e4; name: FUN_01bb85e4
 */


void FUN_01bb85e4(char *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    param_2 = *(long *)(param_1 + 8) + param_2;
    FUN_01a7797c(param_2,param_3);
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_3 + 0xa0);
    *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_3 + 200);
    *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0xc0);
    FUN_00d0a71c(param_2 + 0xd8,param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_3 + 0xf8);
    *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_3 + 0xf0);
    FUN_00d0a71c(param_2 + 0x108,param_3 + 0x108);
    FUN_00c6c994(param_2 + 0x118,param_3 + 0x118);
    plVar2 = *(long **)(param_3 + 0x128);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar1 = *(long **)(param_2 + 0x128);
    *(long **)(param_2 + 0x128) = plVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    memcpy((void *)(param_2 + 0x130),(void *)(param_3 + 0x130),0x25);
    return;
  }
  if ((*param_1 != '\0') || (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  param_2 = *(long *)(param_1 + 8) + param_2;
  FUN_01a7797c(param_2,param_3);
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_3 + 0xa0);
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_3 + 200);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0xc0);
  FUN_00d0a71c(param_2 + 0xd8,param_3 + 0xd8);
  *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_3 + 0xf8);
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_3 + 0xf0);
  FUN_00d0a71c(param_2 + 0x108,param_3 + 0x108);
  FUN_00c6c994(param_2 + 0x118,param_3 + 0x118);
  plVar2 = *(long **)(param_3 + 0x128);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_2 + 0x128);
  *(long **)(param_2 + 0x128) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  memcpy((void *)(param_2 + 0x130),(void *)(param_3 + 0x130),0x25);
  return;
}


