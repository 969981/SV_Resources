/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02787114; name: FUN_02787114
 */


void FUN_02787114(long param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x368) = 1;
  uVar1 = nn::bcat::MountDeliveryCacheStorage();
  if ((uVar1 & 0x3fffff) == 0x67a) {
    do {
      nn::os::SleepThread(500000000);
      uVar1 = nn::bcat::MountDeliveryCacheStorage();
    } while ((uVar1 & 0x3fffff) == 0x67a);
  }
  if (uVar1 == 0) {
    uVar1 = FUN_0278696c(param_1);
    nn::bcat::UnmountDeliveryCacheStorage();
  }
  *(uint *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x368) = 2;
  FUN_0172bf50(param_1);
  return;
}


