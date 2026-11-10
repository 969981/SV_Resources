/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022cfe94; name: FUN_022cfe94
 */


void FUN_022cfe94(double param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 local_30 [3];
  float local_18;
  undefined4 local_14;
  
  local_18 = (float)param_1;
  puVar1 = PTR_LAB_047de0d0;
  if (DAT_048463c8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30[0] = param_2;
  local_14 = param_4;
  FUN_022d0b4c(param_3,puVar1,0,&local_14,&local_18,local_30);
  return;
}


