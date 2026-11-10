/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079ccb8; name: FUN_0079ccb8
 */


void FUN_0079ccb8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if ((*(long *)(param_1 + 0x138) != 0) && (uVar1 = FUN_0078cdf4(), (uVar1 & 1) != 0)) {
    lVar2 = *(long *)(param_1 + 0x138);
    FUN_00cbd7c0(auStack_30,param_2);
    FUN_018ff39c(lVar2 + 0x60,auStack_30);
  }
  if ((*(long *)(param_1 + 0x140) != 0) && (uVar1 = FUN_0078cdf4(), (uVar1 & 1) != 0)) {
    lVar2 = *(long *)(param_1 + 0x140);
    FUN_00cbd7c0(auStack_40,param_2);
    FUN_018ff39c(lVar2 + 0x60,auStack_40);
  }
  if ((*(long *)(param_1 + 0x158) != 0) && (uVar1 = FUN_0078cdf4(), (uVar1 & 1) != 0)) {
    lVar2 = *(long *)(param_1 + 0x158);
    FUN_00cbd7c0(auStack_50,param_2);
    FUN_018ff39c(lVar2 + 0x60,auStack_50);
  }
  return;
}


