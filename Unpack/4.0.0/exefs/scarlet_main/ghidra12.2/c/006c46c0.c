/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c46c0; name: FUN_006c46c0
 */


undefined1  [16] FUN_006c46c0(MultiWaitType *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 local_30 [16];
  
  do {
    uVar1 = nn::os::WaitAny(param_1);
    uVar2 = FUN_006c4704(param_1,local_30,uVar1);
  } while ((uVar2 & 1) != 0);
  return local_30;
}


