/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019564f0; name: FUN_019564f0
 */


void FUN_019564f0(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  undefined8 local_18;
  
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  puVar1 = PTR_LAB_047d4120;
  if (DAT_04804388 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0195654c(param_1,puVar1,0,&local_18);
  return;
}


