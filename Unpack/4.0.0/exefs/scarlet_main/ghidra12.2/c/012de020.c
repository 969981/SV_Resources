/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012de020; name: FUN_012de020
 */


void FUN_012de020(long *param_1,undefined1 *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  undefined8 **ppuVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  code *local_d8;
  undefined8 **local_d0;
  undefined8 *local_c8 [7];
  code *local_90;
  long *local_88;
  long local_80;
  long lStack_78;
  undefined4 local_70;
  ulong local_68;
  
  *param_1 = (long)(PTR_DAT_047e6010 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = (long)(param_1 + 5);
  param_1[4] = -0x7fffffe000000000;
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x29),0,1000);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x174) = 0;
  param_1[0x2f] = *(long *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)param_1 + 0x184) = *(undefined4 *)(param_2 + 0x20);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if ((param_3 == 0) && ((int)param_1[4] == 0)) {
    iVar20 = *(int *)(param_2 + 4);
    if ((int)(*(uint *)((long)param_1 + 0x24) & 0x7fffffff) < iVar20) {
      FUN_03234a7c(param_1 + 3,(long)iVar20);
      iVar14 = (int)param_1[4];
    }
    else {
      iVar14 = 0;
    }
    if (iVar14 != iVar20) {
      *(int *)(param_1 + 4) = iVar20;
    }
    puVar7 = PTR_DAT_047d1a08;
    if (0 < *(int *)(param_2 + 4)) {
      lVar19 = 0;
      do {
        local_80 = 0x60;
        puVar10 = (undefined8 *)(**(code **)puVar7)(0,&local_80,0);
        if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
          (**(code **)(puVar7 + 0x10))(puVar10,"ThreadData");
        }
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0xffffffff;
        *(undefined1 *)(puVar10 + 2) = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
        nn::os::InitializeSemaphore((SemaphoreType *)(puVar10 + 4),0,1);
        puVar10[0xb] = 0;
        lVar1 = lVar19 + 1;
        *(undefined8 **)(param_1[3] + lVar19 * 8) = puVar10;
        *puVar10 = param_1;
        *(undefined2 *)(puVar10 + 3) = 0;
        iVar20 = (int)lVar1;
        *(int *)(puVar10 + 1) = iVar20;
        if (*(int *)(param_2 + 0x10) < 1) {
          *(undefined1 *)(puVar10 + 2) = 1;
          iVar14 = *(int *)(*(long *)PTR_DAT_047e58f8 + 0x18);
          iVar2 = *(int *)(*(long *)PTR_DAT_047e58f8 + 0x1c);
          if (1 < iVar2) {
            iVar3 = 0;
            if (iVar2 != 0) {
              iVar3 = iVar14 / iVar2;
            }
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = iVar20 / iVar3;
            }
            iVar20 = iVar4 + (iVar20 - iVar4 * iVar3) * iVar2;
          }
          iVar2 = 0;
          if (iVar14 != 0) {
            iVar2 = iVar20 / iVar14;
          }
          iVar20 = iVar20 - iVar2 * iVar14;
        }
        else {
          *(undefined1 *)(puVar10 + 2) = *param_2;
          iVar20 = *(int *)(*(long *)(param_2 + 8) + lVar19 * 4);
        }
        *(int *)((long)puVar10 + 0xc) = iVar20;
        local_68 = 0;
        local_80 = param_1[0x2f];
        lStack_78 = (long)(int)param_1[0x30];
        local_70 = *(undefined4 *)((long)param_1 + 0x184);
        if (*(char *)(puVar10 + 2) == '\x02') {
          local_68 = (ulong)*(uint *)((long)puVar10 + 0xc);
        }
        local_d8 = FUN_03234b90;
        local_90 = FUN_03234ba4;
        local_d0 = local_c8;
        local_c8[0] = puVar10;
        FUN_031bf094(&local_88,&local_80,&local_d8);
        plVar9 = local_88;
        local_88 = (long *)0x0;
        plVar11 = (long *)puVar10[0xb];
        puVar10[0xb] = plVar9;
        if ((plVar11 != (long *)0x0) && ((**(code **)(*plVar11 + 8))(), local_88 != (long *)0x0)) {
          (**(code **)(*local_88 + 8))();
        }
        ppuVar8 = local_d0;
        if (local_d0 != (undefined8 **)0x0) {
          if (local_90 == (code *)0x1) {
            ppuVar15 = local_d0 + -1;
            do {
              puVar17 = *ppuVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar6) {
                *ppuVar15 = (undefined8 *)((long)puVar17 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((undefined8 *)((long)puVar17 + -1) == (undefined8 *)0x0) goto LAB_012de2c0;
          }
          else if (local_90 == (code *)0x0) {
LAB_012de2c0:
            ppuVar15 = ppuVar8 + -2;
            (*(code *)*ppuVar15)(ppuVar8,0);
            (**(code **)(puVar7 + 8))(0,(ulong)ppuVar15 & 0xfffffffffffffff0,0);
          }
          else {
            (*local_90)(local_d0,0);
          }
        }
        if (*(char *)(puVar10 + 2) != '\x02') {
          lVar19 = puVar10[0xb];
          *(undefined4 *)(lVar19 + 0x248) = *(undefined4 *)((long)puVar10 + 0xc);
          uVar12 = nn::os::GetThreadAvailableCoreMask();
          uVar13 = *(uint *)(lVar19 + 0x248);
          uVar16 = *(ulong *)(lVar19 + 0x240) & uVar12;
          if ((uVar13 == 0xffffffff) ||
             (uVar18 = 1L << ((ulong)uVar13 & 0x3f), (uVar18 & uVar12) == 0)) {
            if (uVar16 != 0) {
              uVar12 = uVar16;
            }
            uVar13 = 0xffffffff;
          }
          else {
            uVar12 = uVar16 | uVar18;
          }
          nn::os::SetThreadCoreMask((ThreadType *)(lVar19 + 0x78),uVar13,uVar12);
        }
        lVar19 = lVar1;
      } while (lVar1 < *(int *)(param_2 + 4));
    }
  }
  return;
}


