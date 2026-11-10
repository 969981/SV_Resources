/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a2c5a0; name: FUN_02a2c5a0
 */


void FUN_02a2c5a0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 local_4 [4];
  
  lVar2 = *param_1;
  iVar1 = atoi((char *)*param_2);
  local_4[0] = (undefined1)iVar1;
  FUN_02a28048(lVar2 + 0xc0,local_4);
  return;
}


