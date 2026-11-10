/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8e61c; name: FUN_01c8e61c
 */


void FUN_01c8e61c(undefined1 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_358;
  undefined1 auStack_350 [56];
  undefined1 local_318;
  undefined1 auStack_310 [712];
  undefined8 local_48;
  
  *param_1 = 1;
  local_358 = *param_2;
  FUN_01c8e564(auStack_350,param_2 + 1);
  local_318 = 0;
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 != '\0') {
    memcpy(auStack_310,param_2 + 9,0x2c8);
  }
  local_48 = param_2[0x62];
  local_318 = cVar1 != '\0';
  FUN_01c8e6ac(param_1 + 8,&local_358);
  FUN_01c8e52c(&local_358);
  return;
}


