/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197fd50; name: FUN_0197fd50
 */


undefined8 FUN_0197fd50(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_24 [4];
  
  uVar4 = FUN_0197bd10(param_1,1);
  iVar2 = FUN_00cc4dc0(param_1,2);
  if ((DAT_04833540 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04833540);
    if (iVar3 != 0) {
      DAT_04833768 = '\x01';
      __cxa_guard_release(&DAT_04833540);
    }
  }
  local_24[0] = iVar2 != 0;
  puVar1 = &LAB_00a18f20;
  if (DAT_04833768 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0197fe10(uVar4,puVar1,0,local_24);
  return 0;
}


