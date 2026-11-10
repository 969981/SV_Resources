/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c2e460; name: FUN_01c2e460
 */


undefined8 FUN_01c2e460(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = FUN_01c2e370(param_1,1);
  if ((DAT_04811a48 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04811a48);
    if (iVar1 != 0) {
      DAT_048125b0 = 1;
      __cxa_guard_release(&DAT_04811a48);
    }
  }
  FUN_01c2e4fc(auStack_38,uVar2);
  FUN_01c2e550(param_1,auStack_38);
  FUN_01c0b580(auStack_38);
  return 1;
}


