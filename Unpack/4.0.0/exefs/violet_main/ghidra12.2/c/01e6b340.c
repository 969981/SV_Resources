/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6b340; name: FUN_01e6b340
 */


void FUN_01e6b340(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_5;
  puVar4 = (undefined8 *)(lVar3 + 0x28);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  lVar2 = FUN_01c23b50();
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (plVar1 == (long *)lVar2) break;
    plVar1 = (long *)*plVar1;
  }
  FUN_01e625cc(lVar3,param_4,param_2,param_3);
  FUN_01e6ae6c(param_1,param_4);
  return;
}


