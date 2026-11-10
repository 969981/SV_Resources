/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00225280; name: FUN_00225280
 */


long FUN_00225280(undefined8 *param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = param_1[2];
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (uVar1 != 0) {
    lVar5 = lVar5 + 1;
  }
  *param_2 = lVar5;
  puVar3 = PTR_DAT_047cbb08;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x50))
                      (*(long **)PTR_DAT_047cbb08,lVar5 * 0x68);
    if ((long *)*param_1 == param_1 + 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      plVar10 = (long *)*param_1;
      do {
        bVar4 = (*(byte *)(plVar10 + 4) & 1) != 0;
        lVar8 = (long)plVar10 + 0x21;
        if (bVar4) {
          lVar8 = plVar10[6];
        }
        uVar1 = (ulong)(*(byte *)(plVar10 + 4) >> 1);
        if (bVar4) {
          uVar1 = plVar10[5];
        }
        (**(code **)(**(long **)puVar3 + 0x180))(&local_70,*(long **)puVar3,lVar8,uVar1);
        puVar11 = (undefined8 *)(lVar5 + lVar9 * 0x68);
        puVar11[1] = uStack_68;
        *puVar11 = local_70;
        puVar11[3] = uStack_58;
        puVar11[2] = uStack_60;
        bVar4 = (*(byte *)(plVar10 + 7) & 1) != 0;
        lVar8 = (long)plVar10 + 0x39;
        if (bVar4) {
          lVar8 = plVar10[9];
        }
        uVar1 = (ulong)(*(byte *)(plVar10 + 7) >> 1);
        if (bVar4) {
          uVar1 = plVar10[8];
        }
        (**(code **)(**(long **)puVar3 + 0x180))(&local_70,*(long **)puVar3,lVar8,uVar1);
        puVar11[5] = uStack_68;
        puVar11[4] = local_70;
        puVar11[7] = uStack_58;
        puVar11[6] = uStack_60;
        plVar6 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar6 = plVar10 + 2;
          plVar7 = (long *)*plVar6;
          if ((long *)*plVar7 != plVar10) {
            do {
              lVar8 = *plVar6;
              plVar6 = (long *)(lVar8 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (*plVar7 != lVar8);
          }
        }
        else {
          do {
            plVar7 = plVar6;
            plVar6 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        lVar9 = lVar9 + 1;
        plVar10 = plVar7;
      } while (plVar7 != param_1 + 1);
    }
    uVar1 = (ulong)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      (**(code **)(**(long **)puVar3 + 0x180))
                (&local_70,*(long **)puVar3,"grpc-status-details-bin",0x17);
      puVar11 = (undefined8 *)(lVar5 + lVar9 * 0x68);
      puVar11[1] = uStack_68;
      *puVar11 = local_70;
      puVar11[3] = uStack_58;
      puVar11[2] = uStack_60;
      pbVar2 = *(byte **)(param_3 + 0x10);
      bVar4 = (*param_3 & 1) == 0;
      if (bVar4) {
        pbVar2 = param_3 + 1;
      }
      uVar1 = (ulong)(*param_3 >> 1);
      if (!bVar4) {
        uVar1 = *(ulong *)(param_3 + 8);
      }
      (**(code **)(**(long **)puVar3 + 0x180))(&local_70,*(long **)puVar3,pbVar2,uVar1);
      puVar11[5] = uStack_68;
      puVar11[4] = local_70;
      puVar11[7] = uStack_58;
      puVar11[6] = uStack_60;
    }
  }
  return lVar5;
}


