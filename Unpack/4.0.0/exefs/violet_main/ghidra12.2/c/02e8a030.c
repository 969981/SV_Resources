/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8a030; name: FUN_02e8a030
 */


void FUN_02e8a030(void)

{
  long lVar1;
  long in_x3;
  long in_x5;
  long lVar2;
  long *plVar3;
  long local_18;
  
  if (*(long *)(in_x5 + 0x28) == 0) {
    FUN_02e8e038();
    return;
  }
  lVar2 = *(long *)(in_x3 + 0x30);
  plVar3 = (long *)0x0;
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + in_x3 + 0x30);
  }
  if (*(int *)(in_x3 + 0x38) != 0) {
    lVar2 = (long)*(int *)(in_x3 + 0x38) << 3;
    do {
      lVar1 = *plVar3 + (long)plVar3;
      if ((*plVar3 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xfeb)) {
        lVar2 = *(long *)(lVar1 + 0x20);
        local_18 = 0;
        if (lVar2 != 0) {
          local_18 = lVar1 + 0x20 + (lVar2 - (long)&local_18);
        }
        if ((local_18 != 0) && (local_18 + (long)&local_18 != 0)) {
          FUN_02e8eaf8();
          return;
        }
        goto LAB_02e8a098;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  local_18 = 0;
LAB_02e8a098:
  if (*(char *)(in_x3 + 0x100) == '\x02') {
    FUN_02e8f644();
  }
  else {
    FUN_02e90140();
  }
  return;
}


