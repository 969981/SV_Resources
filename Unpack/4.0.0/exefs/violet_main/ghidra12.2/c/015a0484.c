/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a0484; name: FUN_015a0484
 */


long FUN_015a0484(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar3 != plVar2) {
    uVar4 = *(undefined8 *)*param_1;
    do {
      FUN_015a04f8(plVar3,uVar4);
      plVar3 = plVar3 + 1;
    } while (plVar2 != plVar3);
    if (plVar2 != (long *)param_2[1]) {
      lVar1 = 0;
      if (*plVar2 != 0) {
        lVar1 = *plVar2 + -0x20;
      }
      return lVar1;
    }
  }
  return 0;
}


