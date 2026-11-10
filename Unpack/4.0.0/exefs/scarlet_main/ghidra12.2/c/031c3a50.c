/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c3a50; name: FUN_031c3a50
 */


void FUN_031c3a50(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    puVar5 = (uint *)param_1[3];
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 == (*puVar5 & 0xffff)) {
      puVar7 = (undefined8 *)param_1[2];
      *(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)puVar5[1] * 8) = 0;
      *(undefined1 *)(lVar6 + 0xc) = 1;
      iVar2 = *(int *)(puVar7 + 0xb);
      lVar6 = puVar7[1];
      *(uint **)(lVar6 + (long)iVar2 * 8) = puVar5;
      *(int *)(puVar7 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar7 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar7 + 0x28))((long *)*puVar7,lVar6 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar7 + 0xb) = iVar2 + -5;
      }
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = *puVar5 - uVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}


