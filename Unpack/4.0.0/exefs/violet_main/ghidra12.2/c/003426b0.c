/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003426b0; name: FUN_003426b0
 */


void FUN_003426b0(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  int *piVar8;
  long lVar9;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(param_1 + 0x10);
  pcVar1 = (char *)(lVar6 + 0x48);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar8 = *(int **)(param_1 + 8);
  FUN_0038d190((long)*piVar8,auStack_58);
  puVar4 = PTR_DAT_047cc628;
  lVar9 = *(long *)PTR_DAT_047cc628;
  FUN_0036762c(auStack_78,auStack_58);
  uVar5 = FUN_0049e770(PTR_FUN_047cba38,0x80);
  if (uVar5 != 0) {
    FUN_00375ccc(uVar5,lVar9 + 0xe0,auStack_78);
  }
  *(ulong *)(lVar6 + 8) = uVar5 | 2;
  lVar9 = *(long *)puVar4;
  FUN_0036762c(auStack_78,*(undefined8 *)(piVar8 + 2));
  uVar5 = FUN_0049e770(PTR_FUN_047cba38,0x80);
  if (uVar5 != 0) {
    FUN_00375ccc(uVar5,lVar9 + 0xc0,auStack_78);
  }
  puVar7 = (ulong *)(lVar6 + 0x28);
  *puVar7 = uVar5 | 2;
  *(ulong **)(lVar6 + 0x10) = puVar7;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(long *)(lVar6 + 0x38) = lVar6 + 8;
  param_2[2] = lVar6 + 8;
  param_2[3] = puVar7;
  *param_2 = 2;
  param_2[0x1c] = 0x7fffffffffffffff;
  return;
}


