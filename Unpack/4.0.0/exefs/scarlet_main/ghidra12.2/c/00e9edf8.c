/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9edf8; name: FUN_00e9edf8
 */


void FUN_00e9edf8(double param_1,long *param_2,char *param_3,byte *param_4)

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
  float local_24;
  
  local_24 = (float)param_1;
  pcVar8 = (code *)*param_2;
  uVar1 = param_2[1];
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
  cVar2 = *param_3;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_3 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_3 + 8) + 0x10), lVar6 == 0)) goto LAB_00e9ee70;
    plVar5 = (long *)(lVar6 + ((long)uVar1 >> 1) + -0x28);
  }
  else {
    if (cVar2 == '\x03') {
      FUN_00e9efa0(param_3 + 8,pcVar8,uVar1,&local_24,&local_60);
      goto LAB_00e9ee70;
    }
    if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_3 + 8) == 0)) goto LAB_00e9ee70;
    plVar5 = (long *)(*(long *)(param_3 + 8) + ((long)uVar1 >> 1));
  }
  if ((uVar1 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar5);
  }
  (*pcVar8)(local_24,plVar5,&local_60);
LAB_00e9ee70:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


