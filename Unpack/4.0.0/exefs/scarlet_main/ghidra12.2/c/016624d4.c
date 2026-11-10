/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016624d4; name: FUN_016624d4
 */


void FUN_016624d4(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte *param_6,undefined1 param_7)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 local_6c [4];
  undefined1 *local_68;
  byte *pbStack_60;
  size_t local_58;
  long *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined1 local_24 [4];
  
  puVar1 = PTR_LAB_047d4110;
  if (DAT_04804378 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_48 = param_5;
  uStack_44 = param_4;
  local_28 = param_3;
  local_24[0] = param_2;
  if (param_6 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_68 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_60 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_58 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_50 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  else {
    local_58 = strlen((char *)param_6);
    bVar2 = *param_6;
    local_68 = &DAT_cbf29ce484222645;
    pbVar4 = param_6;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_68 = (undefined1 *)(((ulong)local_68 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_50 = (long *)0x0;
    pbStack_60 = param_6;
  }
  local_6c[0] = param_7;
  FUN_01662644(param_1,puVar1,0,local_24,&local_28,&uStack_44,&local_48,&local_68,local_6c);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


