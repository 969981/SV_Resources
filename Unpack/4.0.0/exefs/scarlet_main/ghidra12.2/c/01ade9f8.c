/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ade9f8; name: FUN_01ade9f8
 */


long FUN_01ade9f8(undefined8 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  puVar1 = PTR_FUN_047d3a90;
  if (DAT_04802100 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_20 = param_4;
  uStack_1c = param_3;
  iVar2 = FUN_01adf990(param_1,puVar1,0,&local_18,&uStack_1c,&local_20);
  return (long)iVar2;
}


