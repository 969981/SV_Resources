/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e152e4; name: FUN_01e152e4
 */


uint FUN_01e152e4(undefined8 param_1,int *param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*param_2 == -1) {
    uVar1 = 0;
  }
  else {
    local_30 = 0x9e03f92c79d9a910;
    pcStack_28 = "wallaction_bool";
    local_20 = 0xf;
    uStack_18 = 0;
    uVar1 = FUN_00d93028(param_1,&local_30);
  }
  return uVar1 & 1;
}


