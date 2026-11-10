/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156ff94; name: FUN_0156ff94
 */


void FUN_0156ff94(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  ulong local_68 [3];
  long *local_50 [4];
  long *local_30;
  undefined8 local_8;
  
  local_8 = param_2;
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  lVar4 = *(long *)PTR_DAT_047d8b38;
  *(long *)PTR_DAT_047d8b40 = lVar4;
  uVar5 = *(undefined8 *)(lVar4 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = uVar5;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0;
  FUN_015700fc(local_50,&local_8);
  local_68[0] = 0;
  local_68[1] = 0;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_50[0] != (long *)0x0) {
    plVar1 = local_50[0] + 7;
  }
  auVar6 = FUN_00d04fb8(local_68,*plVar1,1);
  if ((auVar6._8_4_ == 0) && ((auVar6._0_8_ >> 0x20 & 0xff) != 0)) {
    if (local_68[0] < 0xffffffffffffffff) {
      FUN_00f9e194(param_1,local_68[0] + 1);
      uVar5 = *param_1;
      uVar3 = local_68[0];
    }
    else {
      uVar5 = 0;
      uVar3 = 0xffffffffffffffff;
    }
    auVar6 = FUN_00dc8f28(local_68,uVar5,uVar3);
    if ((auVar6._8_4_ != 0) || ((auVar6._0_8_ >> 0x20 & 0xff) == 0)) {
      param_1[1] = *param_1;
    }
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  return;
}


