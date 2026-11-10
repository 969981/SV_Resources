/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f65eec; name: FUN_00f65eec
 */


void FUN_00f65eec(undefined1 *param_1,long *param_2,char *param_3,byte *param_4)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  byte *pbVar6;
  code *pcVar7;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  char local_50 [8];
  undefined8 local_48;
  
  pcVar7 = (code *)*param_2;
  uVar2 = param_2[1];
  if (param_4 == (byte *)0x0) {
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
    local_60 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_70 = &DAT_cbf29ce484222645;
    pbVar6 = param_4;
    while (bVar3 != 0) {
      pbVar6 = pbVar6 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar6;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_4;
  }
  if (((*param_3 == '\x01') || (*param_3 == '\0')) && (*(long *)(param_3 + 8) != 0)) {
    plVar1 = (long *)(*(long *)(param_3 + 8) + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      pcVar7 = *(code **)(pcVar7 + *plVar1);
    }
    (*pcVar7)(local_50,plVar1,&local_70);
  }
  else {
    local_50[0] = '\0';
  }
  uVar4 = local_48;
  *param_1 = 0;
  if (local_50[0] != '\0') {
    local_48 = 0;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *param_1 = 1;
    local_50[0] = '\0';
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


