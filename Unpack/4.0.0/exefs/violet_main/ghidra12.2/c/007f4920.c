/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f4920; name: FUN_007f4920
 */


long FUN_007f4920(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x58);
    plVar1 = (long *)0x0;
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0x10);
    }
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      FUN_0078fa2c((long *)(param_1 + 0x58),plVar1 + -2);
      FUN_0078fa04(param_1 + 0x70,param_1 + 0x70,
                   (long)(plVar1 + -2) + (long)*(int *)(param_1 + 0x84));
      lVar2 = FUN_0078fac8(param_1 + 0x30);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar2 - *(int *)(param_1 + 0x44);
      }
      *(undefined8 *)(lVar2 + 0x10) = 0;
      FUN_0078f9e0(param_1 + 0x18,param_1 + 0x18,lVar2);
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  return lVar3;
}


