/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011785a4; name: FUN_011785a4
 */


undefined8 FUN_011785a4(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  long *local_38;
  
  pcVar4 = (code *)*param_1;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_70 = &DAT_cbf29ce484222645;
    pbVar3 = param_2;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  (*pcVar4)(auStack_50,&local_70);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return local_48;
}


