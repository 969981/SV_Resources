/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052291c; name: FUN_0052291c
 */


undefined1 FUN_0052291c(long param_1,int param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  if (0x100 < *(ushort *)(param_1 + 8)) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    puVar6 = (undefined8 *)*puVar5;
    do {
      if (param_2 <= *(int *)(puVar6 + 4)) {
        puVar5 = puVar6;
      }
      puVar6 = (undefined8 *)puVar6[*(int *)(puVar6 + 4) < param_2];
    } while (puVar6 != (undefined8 *)0x0);
    return *(undefined1 *)(*(long *)(puVar5[5] + 8) + (long)param_3);
  }
  piVar3 = *(int **)(param_1 + 0x10);
  uVar2 = (ulong)*(ushort *)(param_1 + 10);
  while (piVar1 = piVar3, uVar2 != 0) {
    uVar7 = uVar2 >> 1;
    piVar3 = piVar1 + uVar7 * 8 + 8;
    uVar2 = uVar2 + ~uVar7;
    if (param_2 <= piVar1[uVar7 * 8]) {
      piVar3 = piVar1;
      uVar2 = uVar7;
    }
  }
  plVar4 = (long *)(piVar1 + 2);
  if (*piVar1 != param_2) {
    plVar4 = (long *)0x0;
  }
  return *(undefined1 *)(*(long *)(*plVar4 + 8) + (long)param_3);
}


