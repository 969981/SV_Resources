/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03045c6c; name: FUN_03045c6c
 */


void FUN_03045c6c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047d1a08;
  local_38 = 0x40;
  plVar2 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,"hknpConstraintCollisionFilter");
  }
  plVar2[2] = 1;
  puVar1 = PTR_DAT_047e4a28;
  plVar2[4] = 0;
  plVar2[5] = -0x100000000;
  *(undefined1 *)(plVar2 + 3) = 1;
  plVar2[6] = 0;
  plVar2[7] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0xffffffff;
  FUN_03046b00(plVar2,param_2);
  *param_1 = plVar2;
  return;
}


