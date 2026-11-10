/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d509d0; name: FUN_01d509d0
 */


undefined8 FUN_01d509d0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  uVar4 = FUN_01d50a90(param_1,1);
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_0482fde8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0482fde8);
    if (iVar3 != 0) {
      DAT_04830dd0 = '\x01';
      __cxa_guard_release(&DAT_0482fde8);
    }
  }
  puVar1 = &LAB_00a0c750;
  if (DAT_04830dd0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24 = uVar2;
  FUN_01d50b1c(uVar4,puVar1,0,&local_24);
  return 0;
}


