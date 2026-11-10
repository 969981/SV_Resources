/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bac1c; name: FUN_019bac1c
 */


void FUN_019bac1c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x468) != 0) {
    FUN_019bac5c(lVar1);
    *(undefined8 *)(lVar1 + 0x468) = 0;
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)(lVar1 + 0x438));
  return;
}


