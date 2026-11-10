/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b01af8; name: FUN_01b01af8
 */


void FUN_01b01af8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  
  puVar1 = PTR_FUN_047d3e08;
  if (DAT_04802a70 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01b027c8(param_3);
  local_18[0] = FUN_01b02824(param_2,puVar1,0,uVar2);
  *param_1 = 1;
  FUN_01b02874(param_1 + 8,local_18);
  return;
}


