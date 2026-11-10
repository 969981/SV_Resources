/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f382cc; name: FUN_00f382cc
 */


undefined1  [16] FUN_00f382cc(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (((*PTR_DAT_047db110 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047db110), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047db118;
  *(undefined8 *)PTR_DAT_047db120 = uVar3;
  local_50 = *param_2;
  uStack_48 = param_2[1];
  local_40 = param_2[2];
  local_38 = (long *)param_2[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  if (param_3 - 2U < 8) {
    uVar2 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)(param_3 - 2U) * 4);
  }
  else {
    uVar2 = 0;
  }
  auVar4 = FUN_00f383e0(uVar3,&local_50,uVar2);
  uVar3 = auVar4._8_8_;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  auVar4._8_8_ = uVar3;
  return auVar4;
}


