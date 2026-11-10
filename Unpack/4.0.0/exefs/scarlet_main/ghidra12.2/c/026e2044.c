/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e2044; name: FUN_026e2044
 */


void FUN_026e2044(long *param_1)

{
  long lVar1;
  long lVar2;
  byte local_ec [4];
  ulong local_e8;
  undefined1 auStack_e0 [24];
  long *local_c8;
  undefined1 auStack_c0 [24];
  long *local_a8;
  long *local_90;
  undefined1 auStack_88 [24];
  long *local_70;
  undefined1 auStack_68 [24];
  long *local_50;
  long *local_38;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_0135d26c(auStack_88,*(long *)(lVar1 + 0x18) + 0x160);
  FUN_0135d26c(auStack_e0,*(long *)(lVar1 + 0x18) + 0x160);
  local_e8 = (ulong)*(byte *)(*(long *)(lVar1 + 0x18) + 0x168);
  local_ec[0] = FUN_026e2164();
  local_ec[0] = local_ec[0] & 1;
  FUN_01f5deb0(auStack_c0,auStack_e0,&local_e8,local_ec);
  FUN_01f5df58(auStack_68,lVar2,auStack_88,auStack_c0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


