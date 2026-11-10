/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00889690; name: FUN_00889690
 */


long FUN_00889690(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(char *)(lVar1 + 0x39) != '\x01') &&
     ((*(long *)(lVar1 + 0x20) == 0 || (*(char *)(*(long *)(lVar1 + 0x20) + 0x39) != '\x01')))) {
    *(bool *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) == '\0';
    *(bool *)(lVar1 + 0x39) = *(char *)(lVar1 + 0x39) == '\0';
    *(bool *)(*(long *)(param_1 + 0x28) + 0x39) =
         *(char *)(*(long *)(param_1 + 0x28) + 0x39) == '\0';
    lVar1 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(lVar1 + 0x20);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x39) == '\x01')) {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
      *(long *)(lVar2 + 0x28) = lVar1;
      *(undefined1 *)(lVar2 + 0x39) = *(undefined1 *)(lVar1 + 0x39);
      *(undefined1 *)(lVar1 + 0x39) = 1;
      *(long *)(param_1 + 0x28) = lVar2;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x20);
      *(long *)(lVar2 + 0x20) = param_1;
      *(undefined1 *)(lVar2 + 0x39) = *(undefined1 *)(param_1 + 0x39);
      *(undefined1 *)(param_1 + 0x39) = 1;
      *(bool *)(lVar2 + 0x39) = *(char *)(lVar2 + 0x39) == '\0';
      *(bool *)(*(long *)(lVar2 + 0x20) + 0x39) = *(char *)(*(long *)(lVar2 + 0x20) + 0x39) == '\0';
      *(bool *)(*(long *)(lVar2 + 0x28) + 0x39) = *(char *)(*(long *)(lVar2 + 0x28) + 0x39) == '\0';
      param_1 = lVar2;
    }
  }
  lVar1 = FUN_00889690(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x20) = lVar1;
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x39) == '\x01')) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x20);
    *(long *)(lVar2 + 0x20) = param_1;
    *(undefined1 *)(lVar2 + 0x39) = *(undefined1 *)(param_1 + 0x39);
    *(undefined1 *)(param_1 + 0x39) = 1;
    lVar1 = *(long *)(lVar2 + 0x20);
    param_1 = lVar2;
  }
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x39) != '\x01')) {
    return param_1;
  }
  if ((*(long *)(lVar1 + 0x20) == 0) || (*(char *)(*(long *)(lVar1 + 0x20) + 0x39) != '\x01')) {
    lVar2 = lVar1;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
    *(long *)(lVar1 + 0x28) = param_1;
    *(undefined1 *)(lVar1 + 0x39) = *(undefined1 *)(param_1 + 0x39);
    *(undefined1 *)(param_1 + 0x39) = 1;
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      return lVar1;
    }
    param_1 = lVar1;
    if (*(char *)(lVar2 + 0x39) != '\x01') {
      return lVar1;
    }
  }
  if ((*(long *)(param_1 + 0x28) == 0) || (*(char *)(*(long *)(param_1 + 0x28) + 0x39) != '\x01')) {
    return param_1;
  }
  *(bool *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) == '\0';
  *(bool *)(lVar2 + 0x39) = *(char *)(lVar2 + 0x39) == '\0';
  *(bool *)(*(long *)(param_1 + 0x28) + 0x39) = *(char *)(*(long *)(param_1 + 0x28) + 0x39) == '\0';
  return param_1;
}


