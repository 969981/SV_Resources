/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c37e8; name: FUN_031c37e8
 */


uint * FUN_031c37e8(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  
  puVar7 = (uint *)*param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 2);
  if (uVar3 == 0) {
    puVar10 = (uint *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar9 = *(uint **)(puVar7 + 2);
    *param_1 = puVar9;
    if (puVar9 != (uint *)0x0) {
      uVar1 = *puVar9 & 0xffff;
      if ((int)uVar3 <= (int)(*puVar9 & 0xffff)) {
        uVar1 = uVar3;
      }
      if (0 < (int)uVar1) {
        puVar10 = puVar9 + 8;
        *(uint *)(param_1 + 2) = uVar3 - uVar1;
        *(uint *)((long)param_1 + 0x14) = uVar1;
        param_1[1] = puVar10;
        Hint_Prefetch(*(long *)(puVar9 + 2),0,0,0);
        Hint_Prefetch(*(long *)(puVar9 + 2) + 0x40,0,0,0);
        Hint_Prefetch(puVar9 + 0x20,0,0,0);
        Hint_Prefetch(puVar9 + 0x30,0,0,0);
        goto LAB_031c3868;
      }
    }
    puVar10 = (uint *)0x0;
    param_1[1] = 0;
  }
LAB_031c3868:
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_1 + 0x14);
  if (uVar2 == (*puVar7 & 0xffff)) {
    lVar8 = param_1[3];
    puVar11 = (undefined8 *)param_1[5];
    *(undefined8 *)(*(long *)(lVar8 + 0x10) + (long)(int)puVar7[1] * 8) = 0;
    *(undefined1 *)(lVar8 + 0xc) = 1;
    iVar4 = *(int *)(puVar11 + 0xb);
    lVar8 = puVar11[1];
    *(uint **)(lVar8 + (long)iVar4 * 8) = puVar7;
    *(int *)(puVar11 + 0xb) = iVar4 + 1;
    if (*(int *)((long)puVar11 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*puVar11 + 0x28))((long *)*puVar11,lVar8 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar11 + 0xb) = iVar4 + -5;
    }
  }
  else {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar6) {
        *puVar7 = *puVar7 - uVar2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return puVar10;
}


