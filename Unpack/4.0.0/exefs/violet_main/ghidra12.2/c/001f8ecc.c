/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8ecc; name: FUN_001f8ecc
 */


undefined8 FUN_001f8ecc(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 3);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar3 = *(long **)(*param_1 + uVar4 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          uVar1 = (*param_2)(plVar3,param_3);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
        uVar2 = *(uint *)(param_1 + 3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}


