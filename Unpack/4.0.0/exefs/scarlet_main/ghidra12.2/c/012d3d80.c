/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d3d80; name: FUN_012d3d80
 */


void FUN_012d3d80(MultiWaitHolderType *param_1)

{
  long lVar1;
  undefined8 local_8;
  
  lVar1 = nn::os::GetMultiWaitHolderUserData(param_1);
  if (lVar1 != 0) {
    nn::os::SetMultiWaitHolderUserData(param_1,0);
    nn::os::FinalizeMultiWaitHolder(param_1);
    local_8 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_012d3dcc(&local_8);
  }
  return;
}


