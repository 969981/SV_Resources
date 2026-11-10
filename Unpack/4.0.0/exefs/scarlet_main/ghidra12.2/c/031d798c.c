/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d798c; name: FUN_031d798c
 */


void FUN_031d798c(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  
  *param_1 = &PTR_FUN_046a57e0;
  if (*(int *)(param_1 + 0x3b) != 0) {
    puVar14 = (undefined8 *)param_1[0x3a];
    puVar16 = puVar14 + *(int *)(param_1 + 0x3b);
    do {
      puVar16 = puVar16 + -1;
      puVar12 = (undefined8 *)*puVar16;
      (**(code **)*puVar12)(puVar12);
      if ((ulong)param_1[3] < 0x221) {
        uVar5 = *(uint *)(param_1 + 9);
        uVar11 = (ulong)uVar5;
        if (0 < (int)uVar5) {
          puVar10 = (undefined8 *)param_1[8];
          do {
            if ((undefined8 *)*puVar10 == puVar12) {
              *(int *)(param_1 + 9) = (int)((long)(int)uVar5 + -1);
              if ((int)uVar11 != 1) {
                puVar3 = (undefined8 *)param_1[8] + ((long)(int)uVar5 + -1) * 2;
                *puVar10 = *puVar3;
                puVar10[1] = puVar3[1];
              }
              (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],puVar12,0x220);
              break;
            }
            puVar10 = puVar10 + 2;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
    } while (puVar16 != puVar14);
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  puVar8 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x20c)) && (param_1[0x40] != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,param_1[0x40],(ulong)*(uint *)((long)param_1 + 0x20c) << 3);
  }
  param_1[0x40] = 0;
  *(undefined4 *)((long)param_1 + 0x20c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1dc)) && (param_1[0x3a] != 0)) {
    (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))
              (puVar8 + 0x20,param_1[0x3a],(ulong)*(uint *)((long)param_1 + 0x1dc) << 3);
  }
  param_1[0x3a] = 0;
  *(undefined4 *)((long)param_1 + 0x1dc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x39) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1cc)) && (param_1[0x38] != 0)) {
    (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))
              (puVar8 + 0x20,param_1[0x38],(ulong)*(uint *)((long)param_1 + 0x1cc) << 4);
  }
  param_1[0x38] = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x19c)) && (param_1[0x32] != 0)) {
    (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))
              (puVar8 + 0x20,param_1[0x32],(ulong)*(uint *)((long)param_1 + 0x19c) << 4);
  }
  param_1[0x32] = 0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x80000000;
  if (*(int *)(param_1 + 0x31) != 0) {
    lVar15 = (long)*(int *)(param_1 + 0x31) * 0x38;
    lVar13 = param_1[0x30];
    do {
      lVar4 = lVar13 + lVar15;
      *(undefined4 *)(lVar4 + -0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + -0xc)) && (*(long *)(lVar4 + -0x18) != 0)) {
        (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))
                  (puVar8 + 0x20,*(long *)(lVar4 + -0x18),(ulong)*(uint *)(lVar4 + -0xc) << 3);
      }
      lVar15 = lVar15 + -0x38;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined4 *)(lVar4 + -0xc) = 0x80000000;
    } while (lVar15 != 0);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))
              (puVar8 + 0x20,param_1[0x30],(ulong)*(uint *)((long)param_1 + 0x18c) * 0x38);
  }
  *(undefined4 *)((long)param_1 + 0x18c) = 0x80000000;
  param_1[0x30] = 0;
  if (*(int *)(param_1 + 0x2f) != 0) {
    lVar15 = param_1[0x2e];
    lVar13 = lVar15 + (long)*(int *)(param_1 + 0x2f) * 0x18;
    do {
      puVar1 = (ulong *)(lVar13 + -8);
      lVar13 = lVar13 + -0x18;
      if ((*puVar1 & 1) != 0) {
        plVar9 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar2 = plVar9 + 1;
        do {
          lVar4 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = (int)lVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    } while (lVar13 != lVar15);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)(puVar8 + 0x20) + 0x20))
              (puVar8 + 0x20,param_1[0x2e],(ulong)*(uint *)((long)param_1 + 0x17c) * 0x18);
  }
  param_1[1] = PTR_DAT_047e5b60 + 0x10;
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x80000000;
  FUN_031d98b8(param_1 + 1);
  return;
}


