/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012889f4; name: FUN_012889f4
 */


void FUN_012889f4(long *param_1,char *param_2,byte param_3,byte *param_4)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  code *pcVar8;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  byte local_24 [4];
  
  pcVar8 = (code *)*param_1;
  uVar1 = param_1[1];
  local_24[0] = param_3 & 1;
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
    pbVar7 = param_4;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_4;
  }
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar6 == 0)) goto LAB_01288a6c;
    plVar5 = (long *)(lVar6 + ((long)uVar1 >> 1) + -0x28);
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01288b9c(param_2 + 8,pcVar8,uVar1,local_24,&local_60);
      goto LAB_01288a6c;
    }
    if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_2 + 8) == 0)) goto LAB_01288a6c;
    plVar5 = (long *)(*(long *)(param_2 + 8) + ((long)uVar1 >> 1));
  }
  if ((uVar1 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar5);
  }
  (*pcVar8)(plVar5,local_24[0],&local_60);
LAB_01288a6c:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


