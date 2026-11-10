/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212ec54; name: FUN_0212ec54
 */


ulong FUN_0212ec54(void)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [24];
  
  FUN_00d9ec44(auStack_28,0,0xa71f0cdf966f3175);
  FUN_00d9ec44(auStack_40,2,0x42d3fdf8b9a9cfae);
  if (((*PTR_DAT_047d8a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a20), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a20);
  }
  *(undefined8 *)PTR_DAT_047d8ea8 = *(undefined8 *)PTR_DAT_047d8a28;
  uVar2 = FUN_0212ed1c(auStack_28,auStack_40);
  return uVar2 & 0xffffffff00000000 | 1;
}


