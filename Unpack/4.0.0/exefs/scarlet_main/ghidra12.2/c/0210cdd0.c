/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210cdd0; name: FUN_0210cdd0
 */


ulong FUN_0210cdd0(uint param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (((param_1 & 0xffff) == 0x388) && (param_2 != 0)) {
    uVar2 = FUN_017f0700(0x388);
    return uVar2;
  }
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar3;
  piVar4 = (int *)FUN_00cf60cc(uVar3,param_1);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
     (uVar2 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)piVar4 + uVar2);
  }
  return uVar2;
}


