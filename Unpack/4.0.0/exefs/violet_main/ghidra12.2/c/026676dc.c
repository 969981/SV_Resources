/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026676dc; name: FUN_026676dc
 */


void FUN_026676dc(undefined1 *param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 *local_58;
  byte *pbStack_50;
  size_t local_48;
  long *local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_58 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_50 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_48 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_40 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x18))();
    }
  }
  else {
    local_48 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_58 = &DAT_cbf29ce484222645;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_58 = (undefined1 *)(((ulong)local_58 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    local_40 = (long *)0x0;
    pbStack_50 = param_2;
  }
  uVar3 = FUN_02254c88(&local_58,param_3);
  local_38 = (undefined4)uVar3;
  *param_1 = 1;
  local_34 = (undefined2)((ulong)uVar3 >> 0x20);
  FUN_02668210(param_1 + 8,&local_38);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


