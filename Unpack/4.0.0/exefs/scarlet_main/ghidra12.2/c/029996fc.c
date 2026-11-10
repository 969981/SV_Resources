/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029996fc; name: FUN_029996fc
 */


undefined8 FUN_029996fc(long param_1,int *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ushort *puVar5;
  int iVar6;
  
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar5;
  if (uVar1 < 7) {
    iVar6 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((ulong)puVar5[3] != 0) {
      uVar2 = *(uint *)((long)param_2 + (ulong)puVar5[3]);
    }
    if (uVar1 < 0xb) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      if ((ulong)puVar5[5] != 0) {
        iVar6 = *(int *)((long)param_2 + (ulong)puVar5[5]);
      }
    }
    if (5 < uVar2) goto LAB_02999744;
  }
  plVar4 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8) + 0x50)
                     + 0x38);
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    if ((*(int *)((long)plVar4 + 0x14) == iVar6) && ((uint)*(byte *)(plVar4 + 3) == (uVar2 & 0xff)))
    break;
    plVar4 = (long *)*plVar4;
  }
  param_3 = *(int *)(plVar4 + 2);
  if (param_3 == 0) {
    return 0;
  }
LAB_02999744:
  if ((uVar1 < 9) || ((ulong)puVar5[4] == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((long)param_2 + (ulong)puVar5[4]);
  }
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30),param_3);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(*plVar4 + 0x110))();
  uVar3 = iVar6 * (uVar2 & 0xffff);
  uVar2 = uVar3 / 100;
  if (0x31 < uVar3 % 100) {
    uVar2 = uVar3 / 100 + 1;
  }
  uVar3 = (**(code **)(*plVar4 + 0x108))(plVar4);
  if (uVar2 < (uVar3 & 0xffff)) {
    return 0;
  }
  return 1;
}


