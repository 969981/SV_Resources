/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003305f0; name: FUN_003305f0
 */


void FUN_003305f0(void)

{
  undefined *puVar1;
  ulong *puVar2;
  void *__ptr;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar2 = DAT_047ef4c0;
  if (DAT_047ef4c0 != (ulong *)0x0) {
    __ptr = (void *)DAT_047ef4c0[0xb];
    DAT_047ef4c0[0xb] = 0;
    if (__ptr != (void *)0x0) {
                    /* try { // try from 00330618 to 0033061b has its CatchHandler @ 003306d4 */
      free(__ptr);
    }
    puVar1 = PTR_LAB_047cba48;
    uVar5 = *puVar2;
    uVar3 = uVar5 & 1;
    if ((uVar5 & 1) == 0) {
      puVar4 = puVar2 + 1;
    }
    else {
      puVar4 = (ulong *)puVar2[1];
    }
    if ((uVar5 >> 1 != 0) && (uVar5 = uVar5 >> 1, puVar4 != (ulong *)0x0)) {
      do {
        uVar3 = uVar5 - 1;
        plVar6 = (long *)puVar4[uVar5 - 1];
        puVar4[uVar5 - 1] = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))(plVar6);
          FUN_0049e790(puVar1,plVar6);
        }
        uVar5 = uVar3;
      } while (uVar3 != 0);
      uVar3 = *puVar2 & 1;
    }
    if (uVar3 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar2[1]);
    }
    FUN_0049e790(PTR_LAB_047cba48,puVar2);
  }
  DAT_047ef4c0 = (ulong *)0x0;
  return;
}


