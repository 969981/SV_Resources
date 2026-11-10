/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0430; name: FUN_001e0430
 */


long * FUN_001e0430(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = FUN_001ec328(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_001ec2f8(0x10);
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
      plVar2[1] = 0;
      if (param_1 == (long *)0x0) {
        return plVar2;
      }
      plVar4 = param_1;
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[1];
      } while (plVar4 != (long *)0x0);
      plVar3[1] = (long)plVar2;
      return param_1;
    }
    FUN_001ec308(lVar1);
  }
  return (long *)0x0;
}


