/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0234eca4; name: FUN_0234eca4
 */


void FUN_0234eca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 param_5,byte param_6)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte local_7c [4];
  undefined8 local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_FUN_047de8e8;
  if (DAT_048490f0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_50 = param_3;
  uStack_48 = param_2;
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
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
    local_60 = strlen((char *)param_4);
    bVar2 = *param_4;
    local_70 = &DAT_cbf29ce484222645;
    pbVar4 = param_4;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_4;
  }
  local_7c[0] = param_6 & 1;
  local_78 = param_5;
  FUN_02354600(param_1,puVar1,0,&uStack_48,&local_50,&local_70,&local_78,local_7c);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


