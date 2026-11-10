/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00359380; name: FUN_00359380
 */


void FUN_00359380(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = *(long *)(lVar3 + 0xb8);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0xb8);
LAB_0035939c:
    param_1[0x26] = *(long *)(lVar2 + 0x130);
    lVar2 = *plVar1;
    param_1[0x27] = lVar2;
    *(long **)(lVar2 + 0x130) = param_1;
    *(long **)(param_1[0x26] + 0x138) = param_1;
    return;
  }
  if (*(char *)(lVar3 + 0x60) == '\0') {
    *(undefined1 *)(lVar3 + 0x60) = 1;
    FUN_0038da60(lVar3);
    thunk_FUN_00350da0(*(undefined8 *)(lVar3 + 0x10),lVar3 + 0x68,0);
    plVar1 = (long *)(*param_1 + 0xb8);
    lVar2 = *plVar1;
    if (lVar2 != 0) goto LAB_0035939c;
  }
  else {
    plVar1 = (long *)(lVar3 + 0xb8);
  }
  *plVar1 = (long)param_1;
  param_1[0x27] = (long)param_1;
  param_1[0x26] = (long)param_1;
  return;
}


