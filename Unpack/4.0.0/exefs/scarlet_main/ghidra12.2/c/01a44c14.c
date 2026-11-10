/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a44c14; name: FUN_01a44c14
 */


void FUN_01a44c14(undefined8 param_1)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined1 *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  char local_78 [8];
  undefined auStack_70 [24];
  long *local_58;
  
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d3be8;
  local_88 = 6;
  local_80 = (long *)0x0;
  local_98 = &DAT_94ed70272cac328;
  pcStack_90 = "Target";
  *(undefined8 *)PTR_DAT_047dcd80 = uVar8;
  FUN_01315eac(local_78,param_1,&local_98);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_b8 = 0xdb636ebd913e2392;
  pcStack_b0 = "CrownVisible";
  puVar1 = PTR_DAT_047d3e30;
  if (local_78[0] != '\0') {
    puVar1 = auStack_70;
  }
  local_a8 = 0xc;
  local_a0 = (long *)0x0;
  uVar2 = FUN_0141f968(param_1,&local_b8);
  local_d8 = 0x45a3e81391f98ce2;
  pcStack_d0 = "CrownParticleStopType";
  local_c8 = 0x15;
  local_c0 = (long *)0x0;
  uVar6 = FUN_01470908(param_1,&local_d8);
  local_f8 = 0x877f66789d076093;
  pcStack_f0 = "BodyParticleVisible";
  local_e8 = 0x13;
  local_e0 = (long *)0x0;
  uVar3 = FUN_0141f968(param_1,&local_f8);
  local_118 = 0x576bf90f5006fbca;
  pcStack_110 = "ShaderVisible";
  local_108 = 0xd;
  local_100 = (long *)0x0;
  uVar4 = FUN_0141f968(param_1,&local_118);
  local_138 = 0x14c9a2a92a3bba0f;
  pcStack_130 = "BodyParticleStopType";
  local_128 = 0x14;
  local_120 = (long *)0x0;
  uVar7 = FUN_01470908(param_1,&local_138);
  FUN_01a44f8c(uVar8,param_1,puVar1,(uVar2 & 0xff) != 0 && 0xff < uVar2,
               uVar6 >> 0x20 != 0 && (uVar6 & 0xff) != 0,(uVar3 & 0xff) != 0 && 0xff < uVar3,
               (uVar4 & 0xff) != 0 && 0xff < uVar4,uVar7 >> 0x20 != 0 && (uVar7 & 0xff) != 0);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_78[0] != '\0') {
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_78[0] = '\0';
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


