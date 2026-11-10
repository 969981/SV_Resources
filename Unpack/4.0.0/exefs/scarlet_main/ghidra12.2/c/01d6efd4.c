/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d6efd4; name: FUN_01d6efd4
 */


void FUN_01d6efd4(undefined1 *param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 local_90 [2];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  float local_4;
  
  local_4 = (float)param_3;
  puVar1 = PTR_LAB_047d7d08;
  if (DAT_048321d0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_90[0] = param_2;
  FUN_01d711a8(auStack_80,param_4,puVar1,0,local_90,&local_4);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x30);
  FUN_01d70ca0(param_1 + 8,auStack_50);
  return;
}


