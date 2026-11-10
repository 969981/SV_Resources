/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0248dca0; name: FUN_0248dca0
 */


void FUN_0248dca0(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined2 param_7,byte *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *local_98;
  byte *pbStack_90;
  size_t local_88;
  long *local_80;
  undefined2 local_74 [2];
  undefined1 local_70 [16];
  undefined8 uStack_60;
  undefined8 local_50;
  
  uVar1 = *param_5;
  uVar2 = param_5[1];
  local_74[0] = param_7;
  if (param_8 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_98 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_90 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_88 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_80 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  else {
    local_88 = strlen((char *)param_8);
    bVar3 = *param_8;
    local_98 = &DAT_cbf29ce484222645;
    pbVar5 = param_8;
    while (bVar3 != 0) {
      pbVar5 = pbVar5 + 1;
      local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar5;
    }
    local_80 = (long *)0x0;
    pbStack_90 = param_8;
  }
  local_70 = FUN_024913c0(param_6,uVar1,uVar2,local_74,&local_98);
  *param_1 = 1;
  uStack_60 = param_3;
  local_50 = param_4;
  FUN_019b8824(param_1 + 8,local_70);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


