/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b1ddfc; name: FUN_01b1ddfc
 */


void FUN_01b1ddfc(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  undefined8 local_18;
  
  if ((*param_2 == '\0') || (*param_2 == '\x01')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  puVar1 = PTR_LAB_047d4158;
  if (DAT_048043b8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01b1e7b4(param_1,puVar1,0,&local_18);
  return;
}


