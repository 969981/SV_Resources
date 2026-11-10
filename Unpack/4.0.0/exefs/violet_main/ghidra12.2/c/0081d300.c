/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081d300; name: FUN_0081d300
 */


undefined8
FUN_0081d300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (plVar1 != (long *)0x0) {
    FUN_0081d40c(plVar1,param_1);
  }
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (lVar2 == 0) {
    (**(code **)*plVar1)(plVar1);
    uVar3 = 0;
  }
  else {
                    /* try { // try from 0081d368 to 0081d387 has its CatchHandler @ 0081d3e0 */
    uVar3 = FUN_0081cef0(plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    (**(code **)*plVar1)(plVar1);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return uVar3;
}


