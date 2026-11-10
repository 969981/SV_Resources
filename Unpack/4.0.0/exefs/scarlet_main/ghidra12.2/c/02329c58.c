/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02329c58; name: FUN_02329c58
 */


uint FUN_02329c58(double param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined4 local_48;
  float local_44;
  
  uVar3 = DAT_04847808;
  uVar1 = 0x138;
  if (DAT_04847800 == '\0') {
    uVar1 = 0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
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
    local_60 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar6 = param_3;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  local_44 = (float)param_1;
  local_48 = param_4;
  uVar4 = FUN_0232c814(param_2,uVar1,uVar3,&local_70,&local_44,&local_48);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return uVar4 & 1;
}


