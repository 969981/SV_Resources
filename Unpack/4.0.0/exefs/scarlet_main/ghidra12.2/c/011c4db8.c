/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c4db8; name: FUN_011c4db8
 */


ulong FUN_011c4db8(undefined8 param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (((DAT_04839b28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04839b28), iVar3 != 0)) {
    FUN_00100190(&LAB_00b1e40c,&DAT_04839b18,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b28);
  }
  lVar1 = DAT_04839b18;
  DAT_04839b10 = DAT_04839b18;
  if (DAT_04839b18 != 0) {
    if (*(long *)(DAT_04839b18 + 0x40) == 0) {
      if (((*PTR_DAT_047d7d30 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar3 != 0)) {
        FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7d30);
      }
      uVar4 = *(undefined8 *)PTR_DAT_047d7d38;
      *(undefined8 *)PTR_DAT_047d7d40 = uVar4;
      uVar5 = FUN_00c7c5fc(uVar4,param_2);
      return uVar5;
    }
    bVar2 = FUN_011c4ef4(param_1);
    if (bVar2 < 4) {
      return (ulong)((*(uint *)(lVar1 + (ulong)bVar2 * 0x28 + 0x58) & param_2) != 0);
    }
  }
  return 0;
}


