/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02300278; name: FUN_02300278
 */


void FUN_02300278(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 local_30 [12];
  
  puVar1 = &LAB_02b8393c;
  if (DAT_048464f8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_30 = FUN_02302e84(param_2,puVar1,0);
  *param_1 = 1;
  FUN_02302f20(param_1 + 8,local_30);
  return;
}


