/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00359420; name: FUN_00359420
 */


void FUN_00359420(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (((*(long *)(lVar2 + 0xb8) == 0) || (*(long *)(lVar2 + 0xc0) != 0)) ||
     (*(char *)(lVar2 + 0x60) != '\0')) {
    lVar1 = *(long *)(lVar2 + 0xc0);
  }
  else {
    *(undefined1 *)(lVar2 + 0x60) = 1;
    FUN_0038da60(lVar2);
    thunk_FUN_00350da0(*(undefined8 *)(lVar2 + 0x10),lVar2 + 0x68,0);
    lVar2 = *param_1;
    lVar1 = *(long *)(lVar2 + 0xc0);
  }
  if (lVar1 == 0) {
    *(long **)(lVar2 + 0xc0) = param_1;
    param_1[0x29] = (long)param_1;
    param_1[0x28] = (long)param_1;
    return;
  }
  param_1[0x28] = *(long *)(lVar1 + 0x140);
  lVar2 = *(long *)(lVar2 + 0xc0);
  param_1[0x29] = lVar2;
  *(long **)(lVar2 + 0x140) = param_1;
  *(long **)(param_1[0x28] + 0x148) = param_1;
  return;
}


