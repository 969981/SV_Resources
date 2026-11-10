/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01935464; name: FUN_01935464
 */


void FUN_01935464(undefined8 param_1,char *param_2,char *param_3,char *param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  if ((*param_3 == '\x01') || (*param_3 == '\0')) {
    local_20 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_20 = 0;
  }
  if ((*param_4 == '\x01') || (*param_4 == '\0')) {
    local_28 = *(undefined8 *)(param_4 + 8);
  }
  else {
    local_28 = 0;
  }
  puVar1 = PTR_FUN_047d40c8;
  if (DAT_04804330 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_2c = param_5;
  FUN_01935510(param_1,puVar1,0,&local_18,&local_20,&local_28,&local_2c);
  return;
}


