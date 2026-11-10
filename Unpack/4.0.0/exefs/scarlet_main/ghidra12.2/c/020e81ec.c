/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e81ec; name: FUN_020e81ec
 */


undefined1 FUN_020e81ec(undefined2 param_1)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  undefined2 local_14 [2];
  
  if (((*PTR_DAT_047d89b0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d89b0), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047dcbf0,PTR_DAT_047d89b8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89b0);
  }
  puVar1 = PTR_DAT_047d90c8;
  *(undefined8 *)PTR_DAT_047d89c0 = *(undefined8 *)PTR_DAT_047d89b8;
  pcVar4 = *(code **)(*(long *)puVar1 + 0x250);
  if (pcVar4 != (code *)0x0) {
    local_14[0] = param_1;
    sVar2 = (*pcVar4)(*(long *)puVar1 + 0x270,local_14);
    if ((ushort)(sVar2 - 0x35U) < 0x11) {
      return (&DAT_03d60994)[*(long *)(&DAT_03d60ac0 + (long)(short)(sVar2 - 0x35U) * 8) * 4];
    }
  }
  return 0;
}


