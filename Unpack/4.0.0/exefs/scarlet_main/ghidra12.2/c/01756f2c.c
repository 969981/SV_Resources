/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01756f2c; name: FUN_01756f2c
 */


void FUN_01756f2c(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  undefined8 local_18;
  
  if ((*param_2 == '\0') || (*param_2 == '\x01')) {
    local_18 = *(undefined8 *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  puVar1 = PTR_FUN_047d4ba8;
  if (DAT_04809c00 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01756f88(param_1,puVar1,0,&local_18);
  return;
}


