/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013de50; name: FUN_0013de50
 */


void FUN_0013de50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0x118;
  do {
    uVar1 = FUN_0013c0f0(param_1,*(undefined8 *)((long)&PTR_DAT_044831b8 + lVar2));
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2) = uVar1;
    FUN_00129fa0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2));
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x1e0);
  return;
}


