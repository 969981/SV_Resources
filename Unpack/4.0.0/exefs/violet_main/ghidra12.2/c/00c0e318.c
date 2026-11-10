/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0e318; name: FUN_00c0e318
 */


long * FUN_00c0e318(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = (long *)param_1[1];
  lVar4 = tpidr_el0;
  if (plVar1 == (long *)0x0) {
LAB_00c0e370:
    if (plVar1 != (long *)0x0) {
      if (param_2 <= (ulong)(plVar1[3] - plVar1[2])) {
        *(long **)(lVar4 + 0x28) = plVar1;
        *(undefined8 *)(lVar4 + 0x20) = *param_1;
        param_1[2] = plVar1;
        lVar4 = plVar1[2];
        plVar1[2] = lVar4 + param_2;
        return (long *)((long)plVar1 + lVar4);
      }
      uVar3 = plVar1[3] * 2;
      uVar2 = param_1[8];
      if (uVar3 <= (ulong)param_1[8]) {
        uVar2 = uVar3;
      }
      goto LAB_00c0e39c;
    }
  }
  else {
    do {
      if (*plVar1 == lVar4 + 0x20) goto LAB_00c0e370;
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != (long *)0x0);
  }
  uVar2 = param_1[7];
LAB_00c0e39c:
  uVar3 = param_2 + 0x20;
  if (param_2 <= uVar2 - 0x20) {
    uVar3 = uVar2;
  }
  plVar1 = (long *)(*(code *)param_1[0xb])(uVar3);
  plVar1[2] = param_2 + 0x20;
  plVar1[3] = uVar3;
  *plVar1 = lVar4 + 0x20;
  FUN_00bb1344(param_1 + 5);
  plVar1[1] = param_1[1];
  param_1[1] = plVar1;
  if (plVar1[3] != plVar1[2]) {
    param_1[2] = plVar1;
  }
  FUN_00bb14b8(param_1 + 5);
  *(long **)(lVar4 + 0x28) = plVar1;
  *(undefined8 *)(lVar4 + 0x20) = *param_1;
  return plVar1 + 4;
}


