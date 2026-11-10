/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0303ae88; name: FUN_0303ae88
 */


long * FUN_0303ae88(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long local_28;
  
  puVar6 = PTR_DAT_047d1a08;
  if (param_2 != param_1) {
    puVar1 = (undefined4 *)0x0;
    if (*param_2 != 0) {
      puVar1 = (undefined4 *)(*param_2 + (long)param_2);
    }
    uVar8 = *(uint *)(param_2 + 1);
    uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    lVar10 = *param_1;
    if ((int)uVar2 <= (int)uVar8) {
      uVar2 = uVar8;
    }
    if (puVar1 == (undefined4 *)0x0 || uVar2 == 0) {
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar4 = 0;
        if (lVar10 != 0) {
          lVar4 = lVar10 + (long)param_1;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar4,0);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar7 = (undefined4 *)0x0;
      if (lVar10 != 0) {
        puVar7 = (undefined4 *)(lVar10 + (long)param_1);
      }
      uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar3 <= (int)*(uint *)(param_1 + 1)) {
        uVar3 = *(uint *)(param_1 + 1);
      }
      if (uVar2 != uVar3) {
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar7,0);
        }
        local_28 = (ulong)uVar2 * 6;
        puVar7 = (undefined4 *)(**(code **)puVar6)(0,&local_28,0);
        uVar8 = *(uint *)(param_2 + 1);
      }
      if (0 < (int)uVar8) {
        if (uVar8 == 1) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          puVar11 = puVar1;
          puVar12 = puVar7;
          do {
            uVar5 = *puVar11;
            uVar9 = uVar9 + 2;
            *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar11 + 1);
            *puVar12 = uVar5;
            uVar5 = *(undefined4 *)((long)puVar11 + 6);
            *(undefined2 *)((long)puVar12 + 10) = *(undefined2 *)((long)puVar11 + 10);
            *(undefined4 *)((long)puVar12 + 6) = uVar5;
            puVar12 = puVar12 + 3;
            puVar11 = puVar11 + 3;
          } while (((ulong)uVar8 & 0xfffffffe) != uVar9);
        }
        if ((uVar8 & 1) != 0) {
          puVar12 = (undefined4 *)((long)puVar7 + uVar9 * 6);
          puVar1 = (undefined4 *)((long)puVar1 + uVar9 * 6);
          uVar5 = *puVar1;
          *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar1 + 1);
          *puVar12 = uVar5;
        }
      }
      lVar10 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        lVar10 = (long)puVar7 - (long)param_1;
      }
      *param_1 = lVar10;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_2 + 1)) {
        uVar2 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar2 | 0x80000000;
    }
  }
  lVar10 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = lVar10;
  lVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar10;
  return param_1;
}


