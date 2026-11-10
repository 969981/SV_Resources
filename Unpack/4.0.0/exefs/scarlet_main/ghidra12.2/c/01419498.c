/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01419498; name: FUN_01419498
 */


void FUN_01419498(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = FUN_00c41664(*(long *)(param_1 + 0x1c0) + 0xf8);
  uVar1 = **(uint **)(lVar3 + 0x238);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar4 = FUN_01102618(lVar3,uVar5 & 0xffffffff);
      if (lVar4 != 0) {
        uVar2 = (**(code **)(*DAT_0485a020 + 0x58))
                          (DAT_0485a020,*(undefined4 *)(*(long *)(param_1 + 0x2a0) + uVar5 * 4),
                           *(undefined1 *)(*(long *)(lVar4 + 0xa0) + 0x89e));
        FUN_01419538(lVar4,uVar2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}


