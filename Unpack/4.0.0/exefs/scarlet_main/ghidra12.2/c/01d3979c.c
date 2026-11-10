/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d3979c; name: FUN_01d3979c
 */


void FUN_01d3979c(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  undefined8 local_18;
  
  if ((*param_2 == '\0') || (*param_2 == '\x01')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  pcVar1 = FUN_01d39d04;
  if (DAT_0482f080 == '\0') {
    pcVar1 = (code *)0x0;
  }
  FUN_01d39d58(param_1,pcVar1,0,&local_18);
  return;
}


