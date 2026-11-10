/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038e77c; name: FUN_0038e77c
 */


undefined8 FUN_0038e77c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  plVar1 = (long *)param_1[3];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
                    /* try { // try from 0038e798 to 0038e79b has its CatchHandler @ 0038e7bc */
    FUN_0038c890();
  }
  FUN_0038c890(param_1);
  return uVar2;
}


