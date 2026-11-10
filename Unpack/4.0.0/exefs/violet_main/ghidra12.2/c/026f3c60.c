/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f3c60; name: FUN_026f3c60
 */


void FUN_026f3c60(long param_1,char *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x18);
      plVar2 = *(long **)(param_2 + 0x20);
      *(long **)(param_1 + 0x78) = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
      }
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
  }
  else if (*param_2 == '\0') {
    if (*(long **)(param_1 + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x18);
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar1 = *(long **)(param_1 + 0x78);
    *(long **)(param_1 + 0x78) = plVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}


