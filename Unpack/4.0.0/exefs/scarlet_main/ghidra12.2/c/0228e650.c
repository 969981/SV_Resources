/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0228e650; name: FUN_0228e650
 */


undefined8 FUN_0228e650(undefined8 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0228e700(param_1,1);
  if ((DAT_04842c20 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04842c20);
    if (iVar3 != 0) {
      DAT_048439e0 = '\x01';
      __cxa_guard_release(&DAT_04842c20);
    }
  }
  puVar1 = &LAB_02293524;
  if (DAT_048439e0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_0228e78c(uVar4,puVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


