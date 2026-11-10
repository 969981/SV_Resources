/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02369718; name: FUN_02369718
 */


undefined8 FUN_02369718(double param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 local_70;
  float local_64;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  pcVar1 = FUN_023702dc;
  if (DAT_048491a8 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
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
    local_50 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_60 = &DAT_cbf29ce484222645;
    pbVar5 = param_3;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_3;
  }
  local_64 = (float)param_1;
  local_70 = param_4;
  uVar4 = FUN_023708ac(param_2,pcVar1,0,&local_60,&local_64,&local_70);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar4;
}


