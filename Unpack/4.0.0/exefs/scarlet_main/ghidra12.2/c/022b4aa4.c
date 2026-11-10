/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022b4aa4; name: FUN_022b4aa4
 */


undefined1  [16]
FUN_022b4aa4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 *local_68;
  byte *pbStack_60;
  size_t local_58;
  long *local_50;
  undefined4 local_44;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  local_44 = param_3;
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_68 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_60 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_58 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_50 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  else {
    local_58 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_68 = &DAT_cbf29ce484222645;
    pbVar5 = param_4;
    while (bVar3 != 0) {
      pbVar5 = pbVar5 + 1;
      local_68 = (undefined1 *)(((ulong)local_68 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar5;
    }
    local_50 = (long *)0x0;
    pbStack_60 = param_4;
  }
  fVar6 = (float)FUN_022b6fe0(param_2,uVar1,uVar2,&local_44,&local_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  auVar7._0_8_ = (double)fVar6;
  auVar7._8_8_ = 0;
  return auVar7;
}


