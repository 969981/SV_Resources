/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0247ffd0; name: FUN_0247ffd0
 */


void FUN_0247ffd0(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 local_30 [16];
  
  puVar1 = &LAB_02b97284;
  if (DAT_0484c220 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_30 = FUN_02480308(param_2,puVar1,0);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


