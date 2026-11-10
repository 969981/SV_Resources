/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01872618; name: FUN_01872618
 */


void FUN_01872618(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *__s;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  if ((*PTR_DAT_047d8ac0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d8ac0);
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar4;
  __s = *(byte **)(param_2 + 8);
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
    if (bVar1 == 0) {
      local_60 = &DAT_cbf29ce484222645;
    }
    else {
      local_60 = &DAT_cbf29ce484222645;
      pbVar3 = __s;
      do {
        pbVar3 = pbVar3 + 1;
        local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar3;
      } while (bVar1 != 0);
    }
    local_48 = (long *)0x0;
    pbStack_58 = __s;
  }
  FUN_00f1203c(param_1,uVar4,&local_60,param_3,param_4);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


