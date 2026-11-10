/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b03d44; name: FUN_01b03d44
 */


void FUN_01b03d44(undefined8 param_1,double param_2,undefined8 param_3,undefined4 param_4,
                 byte param_5,byte param_6,byte param_7)

{
  undefined1 *puVar1;
  byte local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  float local_34;
  undefined8 local_30 [3];
  undefined4 local_14;
  
  local_38[0] = param_5 & 1;
  local_34 = (float)param_2;
  local_3c[0] = param_6 & 1;
  local_40[0] = param_7 & 1;
  puVar1 = &LAB_008f4f04;
  if (DAT_04802ab8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_30[0] = param_1;
  local_14 = param_4;
  FUN_01b040d4(param_3,puVar1,0,&local_14,local_30,&local_34,local_38,local_3c,local_40);
  return;
}


