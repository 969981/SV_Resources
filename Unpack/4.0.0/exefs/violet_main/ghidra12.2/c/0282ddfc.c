/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0282ddfc; name: FUN_0282ddfc
 */


void FUN_0282ddfc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *local_100;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [104];
  long *local_68;
  undefined1 auStack_60 [24];
  long *local_48;
  undefined1 auStack_28 [8];
  
  if (((*PTR_DAT_047da868 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047da868), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047daa50,PTR_DAT_047da870,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da868);
  }
  lVar3 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar3;
  FUN_027e84d0(auStack_28,*(undefined8 *)(lVar3 + 0x28),param_4);
  FUN_01050714(&local_68,param_2);
  FUN_0135d26c(auStack_60,&local_68);
  local_118 = *param_2;
  uStack_110 = param_2[1];
  local_108 = param_2[2];
  local_100 = (long *)param_2[3];
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x18))();
  }
  FUN_027e8570(auStack_f8,auStack_28);
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  FUN_0282e7f0(&local_f0,&local_118);
  FUN_015d1ba8(param_1,auStack_60,param_3,&local_f0);
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  FUN_027e8710(auStack_f8);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_027e8710(auStack_28);
  return;
}


