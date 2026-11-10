/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d731b0; name: FUN_00d731b0
 */


void FUN_00d731b0(undefined1 *param_1,undefined8 *param_2,byte *param_3)

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
  undefined **local_40;
  undefined8 uStack_38;
  
  pcVar4 = (code *)*param_2;
  if (param_3 == (byte *)0x0) {
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
    local_60 = strlen((char *)param_3);
    bVar1 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar3 = param_3;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  (*pcVar4)(auStack_50,&local_70);
  *param_1 = 1;
  local_40 = &PTR_LAB_04525290;
  uStack_38 = local_48;
  FUN_00d73514(param_1 + 8,&local_40);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


