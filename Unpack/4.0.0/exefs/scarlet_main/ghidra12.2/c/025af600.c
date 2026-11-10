/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025af600; name: FUN_025af600
 */


undefined8 FUN_025af600(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  uVar4 = FUN_025af6c0(param_1,1);
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_048521c8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048521c8);
    if (iVar3 != 0) {
      DAT_04852250 = '\x01';
      __cxa_guard_release(&DAT_048521c8);
    }
  }
  puVar1 = PTR_FUN_047dfaf0;
  if (DAT_04852250 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = uVar2;
  FUN_025af74c(uVar4,puVar1,0,&local_24);
  return 0;
}


