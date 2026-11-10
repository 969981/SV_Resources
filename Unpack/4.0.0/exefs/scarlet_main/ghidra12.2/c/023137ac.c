/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023137ac; name: FUN_023137ac
 */


uint FUN_023137ac(double param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *local_58;
  byte *pbStack_50;
  size_t local_48;
  long *local_40;
  float local_34;
  
  local_34 = (float)param_1;
  puVar1 = PTR_LAB_047de440;
  if (DAT_04847698 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
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
    local_48 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_58 = &DAT_cbf29ce484222645;
    pbVar5 = param_3;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_58 = (undefined1 *)(((ulong)local_58 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    local_40 = (long *)0x0;
    pbStack_50 = param_3;
  }
  uVar3 = FUN_02316598(param_2,puVar1,0,&local_34,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return uVar3 & 1;
}


