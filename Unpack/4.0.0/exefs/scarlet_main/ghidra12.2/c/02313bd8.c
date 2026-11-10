/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02313bd8; name: FUN_02313bd8
 */


uint FUN_02313bd8(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  uVar3 = DAT_048476a8;
  uVar1 = 0x148;
  if (DAT_048476a0 == '\0') {
    uVar1 = 0;
  }
  if (param_2 == (byte *)0x0) {
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
    local_50 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar6 = param_2;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  uVar4 = FUN_02316240(param_1,uVar1,uVar3,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar4 & 1;
}


