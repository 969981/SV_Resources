/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054b6cc; name: FUN_0054b6cc
 */


void FUN_0054b6cc(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x2f8,8);
  lVar3 = *param_2;
  puVar1 = PTR_DAT_047cdf18 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = lVar3;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
                    /* try { // try from 0054b720 to 0054b727 has its CatchHandler @ 0054b76c */
  FUN_00271f50(plVar2 + 4);
  FUN_001fed6c(plVar2 + 0x37,param_3);
  FUN_001fed6c(plVar2 + 0x41,param_3);
  FUN_001fed6c(plVar2 + 0x4b,param_3);
  FUN_001fed6c(plVar2 + 0x55,param_3);
  *param_1 = (long)(plVar2 + 4);
  param_1[1] = (long)plVar2;
  return;
}


