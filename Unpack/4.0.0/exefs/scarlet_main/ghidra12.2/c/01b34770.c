/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b34770; name: FUN_01b34770
 */


undefined8 FUN_01b34770(undefined8 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01b34820(param_1,1);
  if ((DAT_04805fe8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04805fe8);
    if (iVar3 != 0) {
      DAT_048061a0 = '\x01';
      __cxa_guard_release(&DAT_04805fe8);
    }
  }
  puVar1 = &LAB_009220c4;
  if (DAT_048061a0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_01b348ac(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


