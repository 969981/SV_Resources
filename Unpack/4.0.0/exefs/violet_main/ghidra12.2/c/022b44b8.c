/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b44b8; name: FUN_022b44b8
 */


void FUN_022b44b8(double param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 byte *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  float local_28;
  undefined4 local_24;
  
  local_28 = (float)param_1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_24 = param_4;
  if (param_5 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
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
    local_50 = strlen((char *)param_5);
    bVar3 = *param_5;
    local_60 = &DAT_cbf29ce484222645;
    pbVar5 = param_5;
    while (bVar3 != 0) {
      pbVar5 = pbVar5 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar5;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_5;
  }
  FUN_022b6d38(param_3,uVar1,uVar2,&local_24,&local_28,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


