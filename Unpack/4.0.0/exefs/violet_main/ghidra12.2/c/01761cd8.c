/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01761cd8; name: FUN_01761cd8
 */


undefined1  [16] FUN_01761cd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined8 local_18;
  
  local_18 = param_3;
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar3 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar3;
  local_3c[0] = 0;
  uVar2 = FUN_01761f30(*(undefined8 *)(lVar3 + 0x3a0),param_2,&local_18,local_3c);
  FUN_01761e74(&local_38,uVar2);
  FUN_01761ddc(param_1,0);
  *param_1 = local_38;
  auVar4 = FUN_01762208();
  if (((auVar4._0_8_ & 0xff00000000) == 0) || (auVar4._8_4_ != 0)) {
    FUN_01761ddc(param_1,0);
  }
  auVar4._8_8_ = auVar4._8_8_ & 0xffffffff;
  return auVar4;
}


