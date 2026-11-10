/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbe9e0; name: FUN_01dbe9e0
 */


undefined1  [16] FUN_01dbe9e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 local_18;
  
  if (param_3 == 0) {
    if (((*PTR_DAT_047d8c40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar2 = *(long *)PTR_DAT_047d8c48;
    *(long *)PTR_DAT_047d8c50 = lVar2;
    param_3 = *(long *)(lVar2 + 0x3a0);
  }
  FUN_01dbead0(&local_18,param_3,param_2);
  FUN_01761ddc(param_1,0);
  *param_1 = local_18;
  auVar3 = FUN_01762208();
  if (((auVar3._0_8_ & 0xff00000000) == 0) || (auVar3._8_4_ != 0)) {
    FUN_01761ddc(param_1,0);
  }
  auVar3._8_8_ = auVar3._8_8_ & 0xffffffff;
  return auVar3;
}


