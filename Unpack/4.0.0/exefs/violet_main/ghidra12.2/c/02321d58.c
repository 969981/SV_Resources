/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02321d58; name: FUN_02321d58
 */


void FUN_02321d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte *param_5)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 local_80 [2];
  undefined8 auStack_70 [2];
  undefined8 local_60 [2];
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  puVar1 = PTR_FUN_047de598;
  if (DAT_04847728 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_5 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_38 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  else {
    local_40 = strlen((char *)param_5);
    bVar2 = *param_5;
    local_50 = &DAT_cbf29ce484222645;
    pbVar4 = param_5;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_38 = (long *)0x0;
    pbStack_48 = param_5;
  }
  local_80[0] = param_3;
  auStack_70[0] = param_2;
  local_60[0] = param_1;
  FUN_0232796c(param_4,puVar1,0,&local_50,local_60,auStack_70,local_80);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


