/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bfc48; name: FUN_028bfc48
 */


void FUN_028bfc48(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[10];
  (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
  if (param_1[0x19] == 0) {
    return;
  }
  FUN_00cbcea8(param_1[0x19],lVar1);
  return;
}


