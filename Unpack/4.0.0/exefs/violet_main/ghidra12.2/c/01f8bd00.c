/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8bd00; name: FUN_01f8bd00
 */


undefined4
FUN_01f8bd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  if ((*PTR_DAT_047d8c00 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c00);
    if (iVar2 != 0) {
      FUN_00100190(param_5,param_1,param_2,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
  }
  lVar3 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar3;
  lVar3 = *(long *)(lVar3 + 0x70);
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = FUN_01091754(param_1,param_2,lVar3,param_6,param_4,param_5 & 0xffffffff,0,&DAT_03d5ef8e)
    ;
  }
  return uVar1;
}


