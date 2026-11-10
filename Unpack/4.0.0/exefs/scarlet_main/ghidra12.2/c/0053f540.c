/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053f540; name: FUN_0053f540
 */


void FUN_0053f540(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  if (*(long *)(lVar2 + 0x30) == 0) {
    param_1[1] = 0;
    return;
  }
  lVar1 = std::__shared_weak_count::lock();
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    *param_1 = *(undefined8 *)(lVar2 + 0x28);
  }
  return;
}


