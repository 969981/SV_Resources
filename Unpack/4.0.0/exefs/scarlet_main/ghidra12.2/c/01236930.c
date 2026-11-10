/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01236930; name: FUN_01236930
 */


uint FUN_01236930(long *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  code *pcVar9;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  pcVar9 = (code *)*param_1;
  uVar1 = param_1[1];
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
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
    pbVar8 = param_3;
    while (bVar3 != 0) {
      pbVar8 = pbVar8 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar8;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_3;
  }
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar7 == 0)) {
LAB_01236a24:
      uVar4 = 0;
      goto LAB_012369c8;
    }
    plVar6 = (long *)(lVar7 + ((long)uVar1 >> 1) + -0x28);
  }
  else {
    if (cVar2 == '\x03') {
      uVar4 = FUN_01236ad4(param_2 + 8,pcVar9,uVar1,&local_60);
      goto LAB_012369c8;
    }
    if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_2 + 8) == 0)) goto LAB_01236a24;
    plVar6 = (long *)(*(long *)(param_2 + 8) + ((long)uVar1 >> 1));
  }
  if ((uVar1 & 1) != 0) {
    pcVar9 = *(code **)(pcVar9 + *plVar6);
  }
  uVar4 = (*pcVar9)(plVar6,&local_60);
LAB_012369c8:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar4 & 1;
}


