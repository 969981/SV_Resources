/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022bde90; name: FUN_022bde90
 */


undefined8 FUN_022bde90(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = FUN_022bdf40(param_1,1);
  if ((DAT_048440f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048440f8);
    if (iVar1 != 0) {
      DAT_04846350 = 1;
      DAT_04846358 = 1;
      __cxa_guard_release(&DAT_048440f8);
    }
  }
  FUN_022bdfcc(auStack_38,uVar2);
  FUN_0195fba0(param_1,auStack_38);
  FUN_01965ce0(auStack_38);
  return 1;
}


