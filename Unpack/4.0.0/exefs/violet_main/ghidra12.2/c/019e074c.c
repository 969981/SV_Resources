/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e074c; name: FUN_019e074c
 */


void FUN_019e074c(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long lStack_18;
  
  if ((DAT_04840580 & 1) == 0) {
    local_20 = param_1;
    lStack_18 = param_2;
    iVar2 = __cxa_guard_acquire(&DAT_04840580);
    param_2 = lStack_18;
    param_1 = local_20;
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840580);
      param_2 = lStack_18;
      param_1 = local_20;
    }
  }
  lVar1 = DAT_04840570;
  DAT_04840568 = DAT_04840570;
  local_30 = *(undefined8 *)(param_2 + 8);
  FUN_00f4d204(&local_28,"data:",&local_30);
  plVar4 = (long *)(lVar1 + 0x58);
  plVar3 = (long *)*plVar4;
  *plVar4 = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *plVar4 = local_28;
  FUN_0125a1ac(param_1,plVar4,0);
  return;
}


