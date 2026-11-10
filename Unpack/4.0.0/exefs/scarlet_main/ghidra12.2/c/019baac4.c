/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019baac4; name: FUN_019baac4
 */


void FUN_019baac4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x468) != 0) {
    FUN_019bab04(lVar1);
    *(undefined8 *)(lVar1 + 0x468) = 0;
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)(lVar1 + 0x438));
  return;
}


