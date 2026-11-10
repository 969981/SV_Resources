/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023515e8; name: FUN_023515e8
 */


void FUN_023515e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *local_98;
  byte *pbStack_90;
  size_t local_88;
  long *local_80;
  undefined1 auStack_78 [24];
  long *local_60;
  long *local_48;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_98 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_90 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_88 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_80 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  else {
    local_88 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_98 = &DAT_cbf29ce484222645;
    pbVar5 = param_4;
    while (bVar3 != 0) {
      pbVar5 = pbVar5 + 1;
      local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar5;
    }
    local_80 = (long *)0x0;
    pbStack_90 = param_4;
  }
  FUN_02356f04(auStack_78,param_3,uVar1,uVar2,&local_98);
  FUN_02356f50(param_1,auStack_78);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


