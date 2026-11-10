/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01958ee0; name: FUN_01958ee0
 */


void FUN_01958ee0(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar8;
  local_70 = &DAT_94ed70272cac328;
  pcStack_68 = "Target";
  local_60 = 6;
  local_58 = (long *)0x0;
  uVar5 = FUN_01470908(param_1,&local_70);
  local_90 = 0x6b26b85c31a23734;
  pcStack_88 = "ChangeGem";
  uVar7 = 0;
  if ((uVar5 & 0xff) != 0) {
    uVar7 = (undefined4)(uVar5 >> 0x20);
  }
  local_80 = 9;
  local_78 = (long *)0x0;
  uVar1 = FUN_0141f968(param_1,&local_90);
  local_b0 = 0xdb636ebd913e2392;
  pcStack_a8 = "CrownVisible";
  local_a0 = 0xc;
  local_98 = (long *)0x0;
  uVar2 = FUN_0141f968(param_1,&local_b0);
  local_d0 = 0x45a3e81391f98ce2;
  pcStack_c8 = "CrownParticleStopType";
  local_c0 = 0x15;
  local_b8 = (long *)0x0;
  uVar5 = FUN_01470908(param_1,&local_d0);
  local_f0 = 0x877f66789d076093;
  pcStack_e8 = "BodyParticleVisible";
  local_e0 = 0x13;
  local_d8 = (long *)0x0;
  uVar3 = FUN_0141f968(param_1,&local_f0);
  local_110 = 0x14c9a2a92a3bba0f;
  pcStack_108 = "BodyParticleStopType";
  local_100 = 0x14;
  local_f8 = (long *)0x0;
  uVar6 = FUN_01470908(param_1,&local_110);
  FUN_019591d4(uVar8,param_1,uVar7,(uVar1 & 0xff) != 0 && 0xff < uVar1,
               (uVar2 & 0xff) != 0 && 0xff < uVar2,uVar5 >> 0x20 != 0 && (uVar5 & 0xff) != 0,
               (uVar3 & 0xff) != 0 && 0xff < uVar3,uVar6 >> 0x20 != 0 && (uVar6 & 0xff) != 0);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


