/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03218138; name: FUN_03218138
 */


void FUN_03218138(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  iVar6 = (int)param_1[1];
  lVar7 = (long)iVar6;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar6) {
    FUN_032107fc(param_1,lVar7 + 1);
    iVar6 = (int)param_1[1];
  }
  lVar5 = *param_1;
  puVar9 = (undefined8 *)(lVar5 + (long)iVar6 * 0x30);
  uVar2 = param_2[1];
  *puVar9 = *param_2;
  puVar9[1] = uVar2;
  uVar8 = param_2[2];
  puVar9[2] = uVar8;
  if ((uVar8 & 1) != 0) {
    piVar1 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar5 = lVar5 + (long)iVar6 * 0x30;
  uVar2 = param_3[1];
  *(undefined8 *)(lVar5 + 0x18) = *param_3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  uVar8 = param_3[2];
  *(ulong *)(lVar5 + 0x28) = uVar8;
  if ((uVar8 & 1) != 0) {
    piVar1 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(int *)(param_1 + 1) = (int)(lVar7 + 1);
  return;
}


