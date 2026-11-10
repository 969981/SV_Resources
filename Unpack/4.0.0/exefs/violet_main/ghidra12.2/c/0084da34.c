/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084da34; name: FUN_0084da34
 */


long * FUN_0084da34(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long local_28;
  
  puVar6 = PTR_DAT_047d1a08;
  if (param_2 != param_1) {
    puVar1 = (undefined4 *)0x0;
    if (*param_2 != 0) {
      puVar1 = (undefined4 *)(*param_2 + (long)param_2);
    }
    uVar8 = *(uint *)(param_2 + 1);
    uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    lVar9 = *param_1;
    if ((int)uVar2 <= (int)uVar8) {
      uVar2 = uVar8;
    }
    if (puVar1 == (undefined4 *)0x0 || uVar2 == 0) {
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar4 = 0;
        if (lVar9 != 0) {
          lVar4 = lVar9 + (long)param_1;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar4,0);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar7 = (undefined4 *)0x0;
      if (lVar9 != 0) {
        puVar7 = (undefined4 *)(lVar9 + (long)param_1);
      }
      uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar3 <= (int)*(uint *)(param_1 + 1)) {
        uVar3 = *(uint *)(param_1 + 1);
      }
      if (uVar2 != uVar3) {
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar7,0);
        }
        local_28 = (ulong)uVar2 + (ulong)uVar2 * 4;
        puVar7 = (undefined4 *)(**(code **)puVar6)(0,&local_28,0);
        uVar8 = *(uint *)(param_2 + 1);
      }
      if (0 < (int)uVar8) {
        if (uVar8 == 1) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          puVar10 = puVar1;
          puVar11 = puVar7;
          do {
            uVar5 = *puVar10;
            lVar9 = lVar9 + 2;
            *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar10 + 1);
            *puVar11 = uVar5;
            uVar5 = *(undefined4 *)((long)puVar10 + 5);
            *(undefined1 *)((long)puVar11 + 9) = *(undefined1 *)((long)puVar10 + 9);
            *(undefined4 *)((long)puVar11 + 5) = uVar5;
            puVar11 = (undefined4 *)((long)puVar11 + 10);
            puVar10 = (undefined4 *)((long)puVar10 + 10);
          } while ((ulong)uVar8 - ((ulong)uVar8 & 1) != lVar9);
        }
        if ((uVar8 & 1) != 0) {
          puVar11 = (undefined4 *)((long)puVar7 + lVar9 * 5);
          puVar1 = (undefined4 *)((long)puVar1 + lVar9 * 5);
          uVar5 = *puVar1;
          *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar1 + 1);
          *puVar11 = uVar5;
        }
      }
      lVar9 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        lVar9 = (long)puVar7 - (long)param_1;
      }
      *param_1 = lVar9;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_2 + 1)) {
        uVar2 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar2 | 0x80000000;
    }
  }
  lVar9 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = lVar9;
  lVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar9;
  return param_1;
}


