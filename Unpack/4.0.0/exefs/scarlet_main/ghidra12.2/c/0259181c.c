/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0259181c; name: FUN_0259181c
 */


void FUN_0259181c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  puVar1 = PTR_LAB_047df760;
  if (DAT_04851f88 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_8 = param_3;
  FUN_02592cc4(local_40,param_2,puVar1,0,&local_8);
  *param_1 = 0;
  if (local_40[0] != '\0') {
    *(undefined8 *)(param_1 + 0x10) = local_30;
    *(undefined8 *)(param_1 + 0x18) = uStack_28;
    *param_1 = 1;
  }
  return;
}


