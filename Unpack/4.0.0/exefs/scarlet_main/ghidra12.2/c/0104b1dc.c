/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104b1dc; name: FUN_0104b1dc
 */


void FUN_0104b1dc(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  byte *__s;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  __s = (byte *)FUN_0104b314(param_2 + 0x28,*(undefined8 *)(param_3 + 8));
  uVar3 = FUN_0104b388(param_2);
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
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
    local_40 = strlen((char *)__s);
    bVar1 = *__s;
    local_50 = &DAT_cbf29ce484222645;
    pbVar4 = __s;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    local_38 = (long *)0x0;
    pbStack_48 = __s;
  }
  FUN_00d36e00(param_1,uVar3,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


