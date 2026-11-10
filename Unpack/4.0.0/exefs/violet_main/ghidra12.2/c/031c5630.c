/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c5630; name: FUN_031c5630
 */


void FUN_031c5630(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  puVar6 = PTR_PTR_047d1a50;
  lVar5 = param_1[1];
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar4 < (int)lVar5 * 2) {
    lVar10 = *param_1;
    lVar12 = (long)(int)uVar4 * 2 + 2;
    puVar7 = (undefined8 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,lVar12 * 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      *param_1 = (long)puVar7;
      uVar11 = (uint)((long)(int)uVar4 * 2);
      if ((int)uVar4 < 0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *(uint *)((long)param_1 + 0xc) = uVar11 | 1;
      }
      else {
        *puVar7 = 0xffffffffffffffff;
        if (uVar4 == 0) {
          lVar9 = 1;
        }
        else {
          lVar8 = 0;
          lVar1 = 2;
          do {
            lVar9 = lVar1;
            *(undefined8 *)(*param_1 + lVar8 + 0x10) = 0xffffffffffffffff;
            lVar1 = lVar9 + 2;
            lVar2 = *param_1 + lVar8;
            lVar8 = lVar8 + 0x20;
            *(undefined8 *)(lVar2 + 0x20) = 0xffffffffffffffff;
          } while (lVar12 != lVar1);
          lVar9 = lVar9 + 1;
        }
        puVar7 = (undefined8 *)(lVar10 + 8);
        *(undefined8 *)(*param_1 + lVar9 * 0x10) = 0xffffffffffffffff;
        lVar12 = (ulong)uVar4 + 1;
        *(undefined4 *)(param_1 + 1) = 0;
        *(uint *)((long)param_1 + 0xc) = uVar11 | 1;
        do {
          if (puVar7[-1] != -1) {
            FUN_031c5630(param_1,puVar7[-1],*puVar7);
          }
          lVar12 = lVar12 + -1;
          puVar7 = puVar7 + 2;
        } while (lVar12 != 0);
      }
      if (-1 < (int)lVar5) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(puVar6[8],lVar10,0);
      }
    }
  }
  uVar4 = (int)(param_2 >> 4) * -0x61c8864f;
  do {
    uVar11 = uVar4 & *(uint *)((long)param_1 + 0xc);
    puVar3 = (ulong *)(*param_1 + (ulong)uVar11 * 0x10);
    uVar4 = uVar11 + 1;
  } while (*puVar3 != 0xffffffffffffffff);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *puVar3 = param_2;
  *(undefined8 *)(*param_1 + (ulong)uVar11 * 0x10 + 8) = param_3;
  return;
}


