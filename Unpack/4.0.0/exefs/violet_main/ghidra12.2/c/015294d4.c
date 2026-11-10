/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015294d4; name: FUN_015294d4
 */


void FUN_015294d4(long *param_1,char *param_2,byte *param_3)

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
  
  pcVar8 = (code *)*param_1;
  uVar1 = param_1[1];
  if (param_3 == (byte *)0x0) {
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
    local_50 = strlen((char *)param_3);
    bVar3 = *param_3;
    local_60 = &DAT_cbf29ce484222645;
    pbVar7 = param_3;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_3;
  }
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar6 == 0)) goto LAB_01529568;
    plVar5 = (long *)(lVar6 + ((long)uVar1 >> 1) + -0x28);
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01529668(param_2 + 8,pcVar8,uVar1,&local_60);
      goto LAB_01529568;
    }
    if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_2 + 8) == 0)) goto LAB_01529568;
    plVar5 = (long *)(*(long *)(param_2 + 8) + ((long)uVar1 >> 1));
  }
  if ((uVar1 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar5);
  }
  (*pcVar8)(plVar5,&local_60);
LAB_01529568:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


