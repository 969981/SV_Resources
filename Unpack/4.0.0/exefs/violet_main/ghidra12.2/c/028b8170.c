/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b8170; name: FUN_028b8170
 */


long * FUN_028b8170(long param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  if ((long *)*plVar3 == (long *)0x0) {
    *param_2 = plVar3;
    return plVar3;
  }
  plVar4 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar3;
  do {
    uVar1 = FUN_028b8114(param_1 + 0x18,param_3,(long)plVar3 + 0x1c);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_028b8114(param_1 + 0x18,(long)plVar3 + 0x1c,param_3);
      if ((uVar1 & 1) == 0) {
LAB_028b81f0:
        *param_2 = plVar3;
        return plVar4;
      }
      plVar4 = plVar3 + 1;
      plVar2 = (long *)*plVar4;
      if (plVar2 == (long *)0x0) goto LAB_028b81f0;
    }
    else {
      plVar2 = (long *)*plVar3;
      if (plVar2 == (long *)0x0) {
        *param_2 = plVar3;
        return plVar3;
      }
      plVar4 = plVar3;
    }
    plVar3 = plVar2;
  } while( true );
}


