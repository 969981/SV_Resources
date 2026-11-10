/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbbb58; name: FUN_00dbbb58
 */


void FUN_00dbbb58(undefined8 param_1,long *param_2,char *param_3,byte *param_4)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined8 local_70 [2];
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  pcVar6 = (code *)*param_2;
  uVar2 = param_2[1];
  if (param_4 == (byte *)0x0) {
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
    local_50 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_60 = &DAT_cbf29ce484222645;
    pbVar5 = param_4;
    while (bVar3 != 0) {
      pbVar5 = pbVar5 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar5;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_4;
  }
  local_70[0] = param_1;
  if (((*param_3 == '\x01') || (*param_3 == '\0')) && (*(long *)(param_3 + 8) != 0)) {
    plVar1 = (long *)(*(long *)(param_3 + 8) + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar1);
    }
    (*pcVar6)(plVar1,&local_60,local_70);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


