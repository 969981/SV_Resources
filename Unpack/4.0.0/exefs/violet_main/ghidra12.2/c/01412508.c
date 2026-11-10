/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01412508; name: FUN_01412508
 */


void FUN_01412508(undefined1 *param_1,long *param_2,char *param_3,byte *param_4)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  code *pcVar8;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pcVar8 = (code *)*param_2;
  uVar1 = param_2[1];
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_88 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_80 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_78 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    local_80 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_90 = &DAT_cbf29ce484222645;
    pbVar7 = param_4;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_78 = (long *)0x0;
    pbStack_88 = param_4;
  }
  cVar2 = *param_3;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_3 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_3 + 8) + 0x10), lVar6 == 0)) {
LAB_01412620:
      local_68 = 0;
      local_60 = 0;
      local_70 = 0;
      goto LAB_014125a4;
    }
    plVar5 = (long *)(lVar6 + ((long)uVar1 >> 1) + -0x28);
  }
  else {
    if (cVar2 == '\x03') {
      FUN_014126d8(&local_70,param_3 + 8,pcVar8,uVar1,&local_90);
      goto LAB_014125a4;
    }
    if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_3 + 8) == 0)) goto LAB_01412620;
    plVar5 = (long *)(*(long *)(param_3 + 8) + ((long)uVar1 >> 1));
  }
  if ((uVar1 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar5);
  }
  (*pcVar8)(&local_70,plVar5,&local_90);
LAB_014125a4:
  *param_1 = 1;
  local_58 = local_70;
  uStack_50 = local_68;
  local_48 = local_60;
  FUN_00d5b7a4(param_1 + 8,&local_58);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


