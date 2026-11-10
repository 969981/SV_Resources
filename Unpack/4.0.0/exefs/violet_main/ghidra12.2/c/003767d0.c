/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003767d0; name: FUN_003767d0
 */


ulong FUN_003767d0(long *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  
  lVar6 = *param_2;
  iVar8 = *(int *)(lVar6 + 8);
  uVar1 = *(uint *)(*param_1 + 0x28);
  if (iVar8 == 0) {
    uVar5 = FUN_00377f30((ulong)uVar1,*(undefined4 *)(lVar6 + 0x28));
    if (3 < uVar5) goto LAB_00376870;
    lVar6 = *param_2;
    iVar8 = *(int *)(lVar6 + 8);
  }
  uVar1 = *(uint *)(PTR_DAT_047cc648 + (ulong)uVar1 * 4);
  if (iVar8 == 1) {
    uVar4 = *(uint *)(lVar6 + 0x60);
  }
  else if (iVar8 == 0) {
    uVar4 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar6 + 0x28) * 4);
  }
  else {
    uVar4 = FUN_0038cbd0(param_2[2],param_2[1],*(undefined4 *)PTR_DAT_047cc650);
  }
  uVar5 = FUN_00376e50(param_1,param_2,uVar4 ^ (uVar1 >> 0x1e | uVar1 << 2));
LAB_00376870:
  puVar7 = (undefined8 *)*param_2;
  if ((puVar7 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar7, plVar9 != (long *)0x0)) {
    do {
      lVar6 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)puVar7[3])(puVar7[4]);
    }
  }
  return uVar5;
}


