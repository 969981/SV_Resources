/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c18848; name: FUN_01c18848
 */


void FUN_01c18848(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char local_30 [4];
  undefined8 local_2c;
  undefined8 local_8;
  
  puVar1 = PTR_LAB_047d5c30;
  if (DAT_04812520 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c195f8(local_30,param_2,puVar1,0);
  if (local_30[0] == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    local_8 = local_2c;
    FUN_01c1966c(param_1 + 8,&local_8);
  }
  return;
}


