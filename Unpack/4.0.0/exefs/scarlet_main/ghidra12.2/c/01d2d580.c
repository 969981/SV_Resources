/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d2d580; name: FUN_01d2d580
 */


uint FUN_01d2d580(undefined8 param_1,char *param_2,undefined2 param_3,char *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 local_28;
  undefined2 local_1c [2];
  undefined8 local_18;
  
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  if ((*param_4 == '\x01') || (*param_4 == '\0')) {
    local_28 = *(undefined8 *)(param_4 + 8);
  }
  else {
    local_28 = 0;
  }
  puVar1 = PTR_FUN_047d78f8;
  if (DAT_0482f060 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c[0] = param_3;
  uVar2 = FUN_01d33204(param_1,puVar1,0,&local_18,local_1c,&local_28);
  return uVar2 & 1;
}


