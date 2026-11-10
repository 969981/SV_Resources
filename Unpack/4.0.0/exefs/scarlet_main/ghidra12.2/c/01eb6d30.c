/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb6d30; name: FUN_01eb6d30
 */


void FUN_01eb6d30(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *param_1;
  cVar1 = FUN_019c7a20(param_4);
  if (cVar1 == '\a') {
    FUN_00d8e6c4(lVar2 + 0x38,param_4);
    FUN_01c45238(lVar2 + 0x48,*(undefined8 *)(param_4 + 0x10));
    return;
  }
  return;
}


