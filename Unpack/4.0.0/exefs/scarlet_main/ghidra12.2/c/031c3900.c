/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c3900; name: FUN_031c3900
 */


uint * FUN_031c3900(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 == 0) {
    puVar9 = (uint *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar6 = *(uint **)(*param_1 + 8);
    *param_1 = (long)puVar6;
    if (puVar6 == (uint *)0x0) {
      puVar9 = (uint *)0x0;
      param_1[1] = 0;
    }
    else {
      uVar1 = *puVar6 & 0xffff;
      if ((int)uVar2 <= (int)(*puVar6 & 0xffff)) {
        uVar1 = uVar2;
      }
      if ((int)uVar1 < 1) {
        puVar9 = (uint *)0x0;
        param_1[1] = 0;
      }
      else {
        puVar9 = puVar6 + 8;
        *(uint *)(param_1 + 2) = uVar2 - uVar1;
        *(uint *)((long)param_1 + 0x14) = uVar1;
        param_1[1] = (long)puVar9;
        Hint_Prefetch(*(long *)(puVar6 + 2),0,0,0);
        Hint_Prefetch(*(long *)(puVar6 + 2) + 0x40,0,0,0);
        Hint_Prefetch(puVar6 + 0x20,0,0,0);
        Hint_Prefetch(puVar6 + 0x30,0,0,0);
      }
      puVar8 = (uint *)param_1[4];
      if (puVar6 != puVar8) {
        uVar2 = *(uint *)(param_1 + 5);
        if (uVar2 != 0) {
          if (uVar2 == (*puVar8 & 0xffff)) {
            lVar7 = param_1[3];
            puVar10 = (undefined8 *)param_1[6];
            *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(int)puVar8[1] * 8) = 0;
            *(undefined1 *)(lVar7 + 0xc) = 1;
            iVar3 = *(int *)(puVar10 + 0xb);
            lVar7 = puVar10[1];
            *(uint **)(lVar7 + (long)iVar3 * 8) = puVar8;
            *(int *)(puVar10 + 0xb) = iVar3 + 1;
            if (*(int *)((long)puVar10 + 0x5c) <= iVar3 + 1) {
              (**(code **)(*(long *)*puVar10 + 0x28))
                        ((long *)*puVar10,lVar7 + (long)(iVar3 + -5) * 8,6);
              *(int *)(puVar10 + 0xb) = iVar3 + -5;
            }
          }
          else {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar5) {
                *puVar8 = *puVar8 - uVar2;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          *(undefined4 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1[3] + 0xc) = 1;
          puVar6 = (uint *)*param_1;
        }
        param_1[4] = (long)puVar6;
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x14);
      }
    }
  }
  return puVar9;
}


