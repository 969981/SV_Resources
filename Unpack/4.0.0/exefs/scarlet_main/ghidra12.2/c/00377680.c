/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00377680; name: FUN_00377680
 */


long FUN_00377680(long *param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar10 = (long *)(param_3 & 0xfffffffffffffffc);
  uVar12 = *param_2;
  puVar9 = (undefined8 *)(uVar12 & 0xfffffffffffffffc);
  lStack_58 = plVar10[1];
  local_60 = *plVar10;
  lStack_48 = plVar10[3];
  lStack_50 = plVar10[2];
  uStack_78 = puVar9[1];
  local_80 = *puVar9;
  uStack_68 = puVar9[3];
  uStack_70 = puVar9[2];
  iVar6 = FUN_00368020(&local_60,&local_80);
  if (iVar6 == 0) {
    lVar11 = *(long *)(*param_2 & 0xfffffffffffffffc);
    if (((lVar11 != 0) && (*(int *)(lVar11 + 8) == 0)) &&
       (uVar1 = *(uint *)(*(long *)(*param_2 & 0xfffffffffffffffc) + 0x28), uVar1 < 0x18)) {
      param_1[1] = param_1[1] + -1;
      param_1[(ulong)uVar1 + 4] = 0;
    }
    *param_2 = param_3;
    if (((*plVar10 == 0) || (*(int *)(*plVar10 + 8) != 0)) ||
       (uVar1 = *(uint *)(*plVar10 + 0x28), 0x17 < uVar1)) {
      lVar11 = 0;
    }
    else if (param_1[(ulong)uVar1 + 4] == 0) {
      lVar11 = 0;
      param_1[1] = param_1[1] + 1;
      param_1[(ulong)uVar1 + 4] = (long)param_2;
    }
    else {
      lVar11 = FUN_00377cc0(param_3);
      if (lVar11 != 0) {
        uVar8 = param_2[1];
        uVar3 = param_2[2];
        if (uVar3 == 0) {
          param_1[2] = uVar8;
        }
        else {
          *(ulong *)(uVar3 + 8) = uVar8;
          uVar8 = param_2[1];
        }
        puVar2 = (ulong *)(param_1 + 3);
        if (uVar8 != 0) {
          puVar2 = (ulong *)(uVar8 + 0x10);
        }
        *puVar2 = uVar3;
        *param_1 = *param_1 + -1;
        uVar1 = (uint)*param_2 & 3;
        if (1 < uVar1) {
          uVar8 = *param_2 & 0xfffffffffffffffc;
          plVar10 = (long *)(uVar8 + 0x40);
          do {
            lVar7 = *plVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar7 + -1 == 0) {
            FUN_00376de0(uVar1,uVar8,*(undefined4 *)(uVar8 + 0x48));
          }
        }
      }
    }
  }
  else {
    lVar11 = 0;
    *param_2 = param_3;
  }
  uVar1 = (uint)uVar12 & 3;
  if (1 < uVar1) {
    plVar10 = puVar9 + 8;
    do {
      lVar7 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 + -1 == 0) {
      FUN_00376de0(uVar1,puVar9,*(undefined4 *)(puVar9 + 9));
    }
  }
  return lVar11;
}


