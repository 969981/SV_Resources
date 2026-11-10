/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eac6b4; name: FUN_00eac6b4
 */


void FUN_00eac6b4(long param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *__s;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  __s = (byte *)(**(code **)(*DAT_0485a020 + 0x30))
                          (DAT_0485a020,*(long *)(param_1 + 0x88) + (ulong)param_3 * 0x108 + 0x20,
                           param_1);
  FUN_00eace64(param_1,param_2,param_3);
  uVar4 = *param_2;
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
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
    local_50 = strlen((char *)__s);
    bVar1 = *__s;
    local_60 = &DAT_cbf29ce484222645;
    pbVar3 = __s;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
    }
    local_48 = (long *)0x0;
    pbStack_58 = __s;
  }
  FUN_00eac828(uVar4,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_00eacac0(param_1,param_2,param_3);
  return;
}


