/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a21a4; name: FUN_019a21a4
 */


void FUN_019a21a4(undefined8 *param_1,undefined8 param_2,byte *param_3,char *param_4,byte param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte local_74 [4];
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined8 local_38;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
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
    bVar3 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar5 = param_3;
    while (bVar3 != 0) {
      pbVar5 = pbVar5 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar5;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  if ((*param_4 == '\0') || (*param_4 == '\x01')) {
    local_38 = *(undefined8 *)(param_4 + 8);
  }
  else {
    local_38 = 0;
  }
  local_74[0] = param_5 & 1;
  FUN_019a2314(param_2,uVar1,uVar2,&local_70,&local_38,local_74);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


