/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02198420; name: FUN_02198420
 */


bool FUN_02198420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_2 + -1) < *(float *)(param_1 + 1)) {
      uVar8 = *param_1;
      uVar1 = param_1[1];
      uVar2 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar2;
      param_2[-2] = uVar8;
      param_2[-1] = uVar1;
    }
    break;
  case 3:
    FUN_021980a0(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_02198180(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_02198250(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_021980a0(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      puVar10 = param_1 + 6;
      puVar11 = param_1 + 4;
      do {
        puVar7 = puVar10;
        fVar12 = *(float *)(puVar7 + 1);
        if (fVar12 < *(float *)(puVar11 + 1)) {
          uVar8 = *puVar7;
          uVar3 = *(undefined4 *)((long)puVar7 + 0xc);
          lVar4 = lVar5;
          do {
            lVar9 = lVar4;
            *(undefined8 *)((long)param_1 + lVar9 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x20);
            *(undefined8 *)((long)param_1 + lVar9 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x28);
            if (lVar9 == -0x20) {
              puVar10 = param_1;
              goto LAB_02198510;
            }
            lVar4 = lVar9 + -0x10;
          } while (fVar12 < *(float *)((long)param_1 + lVar9 + 0x18));
          puVar10 = (undefined8 *)((long)param_1 + lVar9 + 0x20);
LAB_02198510:
          iVar6 = iVar6 + 1;
          *puVar10 = uVar8;
          *(float *)(puVar10 + 1) = fVar12;
          *(undefined4 *)((long)puVar10 + 0xc) = uVar3;
          if (iVar6 == 8) {
            return puVar7 + 2 == param_2;
          }
        }
        lVar5 = lVar5 + 0x10;
        puVar10 = puVar7 + 2;
        puVar11 = puVar7;
      } while (puVar7 + 2 != param_2);
    }
  }
  return true;
}


