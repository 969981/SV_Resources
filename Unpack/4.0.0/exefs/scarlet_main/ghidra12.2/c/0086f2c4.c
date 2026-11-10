/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086f2c4; name: FUN_0086f2c4
 */


void FUN_0086f2c4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_18;
  
  puVar1 = PTR_DAT_047d1ce8;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  puVar1 = PTR_DAT_047d1a08;
  local_18 = 0x38;
  plVar2 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_18,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,&DAT_03c41cd3);
  }
  puVar1 = PTR_DAT_047d1cf0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0xffffffff;
  plVar2[2] = 1;
  plVar2[3] = 0;
  plVar2[6] = 0;
  lVar3 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar3 != 0) {
    FUN_012c4338();
  }
  return;
}


