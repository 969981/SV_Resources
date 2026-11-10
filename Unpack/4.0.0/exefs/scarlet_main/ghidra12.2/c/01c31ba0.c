/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c31ba0; name: FUN_01c31ba0
 */


undefined8 FUN_01c31ba0(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_24;
  
  uVar5 = FUN_01c0aaa0(param_1,1);
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_04811ac0 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04811ac0);
    if (iVar4 != 0) {
      DAT_04812240 = '\x01';
      __cxa_guard_release(&DAT_04811ac0);
    }
  }
  puVar1 = PTR_FUN_047d5df0;
  if (DAT_04812240 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = uVar2;
  uVar3 = FUN_01c31c70(uVar5,puVar1,0,&local_24);
  FUN_00c419e0(param_1,uVar3 & 1);
  return 1;
}


