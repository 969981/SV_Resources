/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023230f8; name: FUN_023230f8
 */


uint FUN_023230f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  undefined8 local_28;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  local_28 = param_3;
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_60 = &DAT_cbf29ce484222645;
    pbVar6 = param_4;
    while (bVar3 != 0) {
      pbVar6 = pbVar6 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar6;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_4;
  }
  uVar4 = FUN_02327d5c(param_2,uVar1,uVar2,&local_28,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar4 & 1;
}


