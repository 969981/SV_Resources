/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b48ec; name: FUN_030b48ec
 */


void FUN_030b48ec(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar4 = (undefined1 *)
               (**(code **)(*param_2 + 0x18))(param_2,(long)*(int *)(param_1 + 1) << 4);
      uVar10 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar10) {
        puVar11 = (undefined1 *)*param_1;
        puVar6 = puVar4;
        puVar7 = puVar11;
        if (uVar10 != 1) {
          iVar9 = -(uVar10 & 0xfffffffe);
          do {
            *puVar6 = *puVar7;
            *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar7 + 8);
            *(undefined8 *)(puVar7 + 8) = 0;
            puVar6[0x10] = puVar7[0x10];
            *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(puVar7 + 0x18);
            *(undefined8 *)(puVar7 + 0x18) = 0;
            puVar6 = puVar6 + 0x20;
            puVar7 = puVar7 + 0x20;
            iVar9 = iVar9 + 2;
          } while (iVar9 != 0);
        }
        if ((uVar10 & 1) != 0) {
          *puVar6 = *puVar7;
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar7 + 8);
          *(undefined8 *)(puVar7 + 8) = 0;
        }
        uVar12 = 0;
        do {
          plVar5 = *(long **)(puVar11 + 8);
          if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
            plVar1 = plVar5 + 2;
            do {
              lVar8 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar8 + -1 == 0) {
              (**(code **)(*plVar5 + 0x18))();
            }
          }
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 0x10;
        } while (uVar12 != uVar10);
        uVar10 = *(uint *)(param_1 + 1);
      }
      *param_1 = puVar4;
      *(uint *)((long)param_1 + 0xc) = uVar10;
    }
  }
  return;
}


