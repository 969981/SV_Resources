/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03045ae4; name: FUN_03045ae4
 */


void FUN_03045ae4(long param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    plVar4 = (long *)(*(ulong *)(lVar1 + 0x788) & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      puVar5 = (ulong *)(lVar1 + 0x788);
      do {
        puVar2 = (ulong *)(plVar4 + 1);
        plVar3 = (long *)(*puVar2 & 0xfffffffffffffffc);
        if (plVar4[2] == param_1) {
          if ((*(byte *)(lVar1 + 0x788) & 3) == 0) {
            *puVar5 = *puVar5 & 3 | (ulong)plVar3;
            (**(code **)(*plVar4 + 8))();
            puVar2 = puVar5;
          }
          else {
            *puVar2 = (ulong)plVar3 | 1;
          }
        }
        plVar4 = plVar3;
        puVar5 = puVar2;
      } while (plVar3 != (long *)0x0);
      lVar1 = *(long *)(param_1 + 0x38);
    }
    plVar4 = (long *)(*(ulong *)(lVar1 + 0x790) & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      puVar5 = (ulong *)(lVar1 + 0x790);
      do {
        puVar2 = (ulong *)(plVar4 + 1);
        plVar3 = (long *)(*puVar2 & 0xfffffffffffffffc);
        if (plVar4[2] == param_1) {
          if ((*(byte *)(lVar1 + 0x790) & 3) == 0) {
            *puVar5 = *puVar5 & 3 | (ulong)plVar3;
            (**(code **)(*plVar4 + 8))();
            puVar2 = puVar5;
          }
          else {
            *puVar2 = (ulong)plVar3 | 1;
          }
        }
        plVar4 = plVar3;
        puVar5 = puVar2;
      } while (plVar3 != (long *)0x0);
      lVar1 = *(long *)(param_1 + 0x38);
    }
    plVar4 = (long *)(*(ulong *)(lVar1 + 0x6a0) & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      puVar5 = (ulong *)(lVar1 + 0x6a0);
      do {
        puVar2 = (ulong *)(plVar4 + 1);
        plVar3 = (long *)(*puVar2 & 0xfffffffffffffffc);
        if (plVar4[2] == param_1) {
          if ((*(byte *)(lVar1 + 0x6a0) & 3) == 0) {
            *puVar5 = *puVar5 & 3 | (ulong)plVar3;
            (**(code **)(*plVar4 + 8))();
            puVar2 = puVar5;
          }
          else {
            *puVar2 = (ulong)plVar3 | 1;
          }
        }
        plVar4 = plVar3;
        puVar5 = puVar2;
      } while (plVar3 != (long *)0x0);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}


