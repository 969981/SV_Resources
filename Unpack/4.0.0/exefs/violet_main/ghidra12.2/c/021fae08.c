/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021fae08; name: FUN_021fae08
 */


long FUN_021fae08(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02b72d48,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar2;
  piVar3 = (int *)FUN_00cf60cc(uVar2,param_1);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x15) ||
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[10], uVar5 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)*(char *)((long)piVar3 + uVar5);
  }
  return lVar4;
}


