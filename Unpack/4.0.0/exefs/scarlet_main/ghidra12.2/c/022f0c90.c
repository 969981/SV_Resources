/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f0c90; name: FUN_022f0c90
 */


uint FUN_022f0c90(double param_1,undefined8 param_2,byte *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  float local_34;
  
  puVar1 = &LAB_022f3b54;
  if (DAT_04846478 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  if (param_3 == (byte *)0x0) {
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
  local_34 = (float)param_1;
  uVar3 = FUN_022f3bb8(param_2,puVar1,0,&local_60,&local_34);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar3 & 1;
}


