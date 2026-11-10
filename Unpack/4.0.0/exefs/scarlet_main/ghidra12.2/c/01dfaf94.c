/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dfaf94; name: FUN_01dfaf94
 */


void FUN_01dfaf94(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_58;
  long lStack_50;
  
  if (*(char *)(param_1 + 0x5c0) != '\0') {
    FUN_01950664(&local_58,param_1 + 0x5c8);
    if (lStack_50 != local_58) {
      do {
        lVar1 = lStack_50 + -0x10;
        lStack_50 = lStack_50 + -0x20;
        FUN_01440384(lVar1,param_2);
      } while (lStack_50 != local_58);
    }
    FUN_0193777c(&local_58);
  }
  return;
}


