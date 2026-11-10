/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0260f128; name: FUN_0260f128
 */


void FUN_0260f128(undefined1 *param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 local_94;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = PTR_FUN_047e0260;
  if (DAT_04854858 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_88 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_80 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_78 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    local_80 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_90 = &DAT_cbf29ce484222645;
    pbVar4 = param_3;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_78 = (long *)0x0;
    pbStack_88 = param_3;
  }
  local_94 = param_4;
  FUN_0261390c(&local_70,param_2,puVar1,0,&local_90,&local_94);
  *param_1 = 1;
  local_58 = local_70;
  uStack_50 = uStack_68;
  local_48 = local_60;
  FUN_00e1e2cc(param_1 + 8,&local_58);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


