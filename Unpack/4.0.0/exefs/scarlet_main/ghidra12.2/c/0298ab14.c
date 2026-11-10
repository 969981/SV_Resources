/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298ab14; name: FUN_0298ab14
 */


ulong FUN_0298ab14(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  
  uVar4 = param_2;
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d7940);
    uVar4 = param_2 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
      uVar4 = param_2 & 0xffffffff;
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar2;
  piVar3 = (int *)FUN_00cf60cc(uVar2,uVar4);
  if ((((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x27) ||
       (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0x13], uVar4 == 0)) ||
      ((param_3 & 0xff) != 10)) || (*(char *)((long)piVar3 + uVar4) != '\x03')) {
    return (ulong)param_3;
  }
  uVar4 = FUN_0183db04(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),10,0);
  return uVar4;
}


