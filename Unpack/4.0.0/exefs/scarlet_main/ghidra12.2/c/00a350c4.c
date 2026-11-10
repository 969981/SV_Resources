/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a350c4; name: FUN_00a350c4
 */


ulong FUN_00a350c4(undefined8 *param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *local_28;
  
  plVar5 = (long *)*param_1;
  local_28 = plVar5;
  if (plVar5 == (long *)0x0) {
    uVar3 = FUN_00a333b8(&local_28,param_2);
  }
  else {
    (**(code **)(*plVar5 + 0x58))(plVar5);
    uVar3 = FUN_00a333b8(&local_28,param_2);
    (**(code **)(*plVar5 + 0x60))(plVar5);
  }
  if (((*PTR_DAT_047d62a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d62a0), iVar2 != 0))
  {
    FUN_00100190(&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d62a0);
  }
  lVar4 = *(long *)PTR_DAT_047d62a8;
  *(long *)PTR_DAT_047d62b0 = lVar4;
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00b0ebdc();
    uVar1 = uVar1 & 0xffff;
  }
  return (ulong)(uVar1 == (int)(char)uVar3) | (uVar3 & 0xff) << 8;
}


