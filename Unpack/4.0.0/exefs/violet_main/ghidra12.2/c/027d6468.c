/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027d6468; name: FUN_027d6468
 */


int FUN_027d6468(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_027e0990();
  *param_1 = &PTR_FUN_045e2ce8;
  param_1[0xb] = 0;
  param_1[4] = &PTR_LAB_045e2d68;
  param_1[5] = &DAT_045e2db8;
  param_1[10] = 0;
  FUN_027c2138(param_1 + 10,param_2);
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar1 = snprintf((char *)((long)param_1 + 100),0x10,"%s",param_3);
  return iVar1;
}


