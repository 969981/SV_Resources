/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ec154; name: FUN_021ec154
 */


undefined1 FUN_021ec154(ushort param_1)

{
  ushort *puVar1;
  undefined1 uVar2;
  int iVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar3 != 0))
  {
    FUN_00100190(&LAB_02b6f450,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar5 = 0xb6;
  *(undefined8 *)PTR_DAT_047d7440 = *(undefined8 *)PTR_DAT_047d7438;
  puVar4 = &DAT_03d62a08;
  do {
    uVar6 = uVar5 >> 1;
    puVar1 = puVar4 + uVar6 + 1;
    uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
    if (param_1 <= puVar4[uVar6]) {
      puVar1 = puVar4;
      uVar5 = uVar6;
    }
    puVar4 = puVar1;
  } while (uVar5 != 0);
  if (*puVar1 == param_1) {
    uVar2 = (&DAT_03d62b74)[(long)(puVar1 + -0x1eb1504) >> 1];
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


