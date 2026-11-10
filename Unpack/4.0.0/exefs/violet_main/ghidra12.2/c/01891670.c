/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01891670; name: FUN_01891670
 */


void FUN_01891670(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_00d9ec44(auStack_38,0,0xa71f0cdf966f3175);
  FUN_00d9ec44(auStack_50,2,0xbf9e8ab9b8dcb19b);
  if (((*PTR_DAT_047d8a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a20), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a20);
  }
  *(undefined8 *)PTR_DAT_047d8ea8 = *(undefined8 *)PTR_DAT_047d8a28;
  FUN_01891740(auStack_38,auStack_50,param_1);
  return;
}


