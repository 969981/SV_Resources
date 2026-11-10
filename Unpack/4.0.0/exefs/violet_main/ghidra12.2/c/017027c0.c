/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017027c0; name: FUN_017027c0
 */


undefined1 FUN_017027c0(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b72d48,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar3;
  piVar4 = (int *)FUN_00cf60cc(uVar3,param_1);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) ||
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7], uVar5 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)((long)piVar4 + uVar5);
  }
  return uVar1;
}


