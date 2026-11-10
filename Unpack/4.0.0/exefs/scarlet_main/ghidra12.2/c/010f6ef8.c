/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f6ef8; name: FUN_010f6ef8
 */


undefined8 FUN_010f6ef8(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x840))();
  if ((uVar1 & 0xff) == 10) {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x928))(param_1);
  uVar2 = FUN_010f6f54(uVar2,uVar1);
  return uVar2;
}


