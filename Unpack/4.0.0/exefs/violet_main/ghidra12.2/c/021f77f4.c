/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f77f4; name: FUN_021f77f4
 */


undefined1 FUN_021f77f4(undefined4 param_1)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047d89b0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d89b0);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047dcbf0,PTR_DAT_047d89b8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89b0);
    }
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d89b8;
  *(undefined8 *)PTR_DAT_047d89c0 = uVar4;
  sVar2 = FUN_00cf50d0(uVar4,param_1);
  if ((ushort)(sVar2 - 0x35U) < 0x11) {
    uVar1 = (&DAT_03d63040)[*(long *)(&DAT_03d63198 + (long)(short)(sVar2 - 0x35U) * 8) * 4];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


