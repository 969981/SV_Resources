/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01749ac0; name: FUN_01749ac0
 */


undefined8 FUN_01749ac0(double param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined4 local_68;
  float local_64;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar1 = PTR_FUN_047e0288;
  if (DAT_04854de8 == '\0') {
    puVar1 = (undefined *)0x0;
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
  local_68 = param_4;
  uVar4 = FUN_01749c30(param_2,puVar1,0,&local_60,&local_64,&local_68);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar4;
}


