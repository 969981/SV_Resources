/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003778f0; name: FUN_003778f0
 */


long FUN_003778f0(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  puVar2 = *(ulong **)(param_1 + 0x10);
  if (puVar2 == (ulong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    do {
      plVar5 = (long *)(*puVar2 & 0xfffffffffffffffc);
      if (*plVar5 == 0) {
        uVar3 = (ulong)*(byte *)(plVar5 + 1);
        if (plVar5[4] == 0) goto LAB_00377900;
LAB_00377944:
        uVar4 = plVar5[5];
      }
      else {
        uVar3 = plVar5[1];
        if (plVar5[4] != 0) goto LAB_00377944;
LAB_00377900:
        uVar4 = (ulong)*(byte *)(plVar5 + 5);
      }
      puVar2 = (ulong *)puVar2[1];
      lVar1 = lVar1 + uVar3 + uVar4 + 0x20;
    } while (puVar2 != (ulong *)0x0);
  }
  return lVar1;
}


