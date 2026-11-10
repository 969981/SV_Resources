/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0633c; name: FUN_00d0633c
 */


void FUN_00d0633c(undefined1 *param_1,char *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  if (*param_2 != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 8);
    param_1[0x10] = param_2[0x10];
    *(undefined8 *)(param_1 + 8) = uVar2;
    plVar1 = *(long **)(param_2 + 0x18);
    *(long **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    plVar1 = *(long **)(param_2 + 0x38);
    *(long **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *param_1 = 1;
  }
  return;
}


