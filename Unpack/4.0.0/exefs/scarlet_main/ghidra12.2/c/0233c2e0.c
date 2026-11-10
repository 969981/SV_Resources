/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233c2e0; name: FUN_0233c2e0
 */


undefined8 FUN_0233c2e0(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  uVar3 = FUN_0233c3a0(param_1,1);
  uVar4 = FUN_00c646d0(param_1,2,0);
  if ((DAT_04847ef0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04847ef0);
    if (iVar2 != 0) {
      DAT_04847f58 = '\x01';
      __cxa_guard_release(&DAT_04847ef0);
    }
  }
  puVar1 = &LAB_02b84c88;
  if (DAT_04847f58 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_28 = uVar4;
  FUN_0233c42c(uVar3,puVar1,0,&local_28);
  return 0;
}


