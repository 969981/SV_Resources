/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02101130; name: FUN_02101130
 */


bool FUN_02101130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_2 + -4)) {
      uVar9 = *param_1;
      uVar1 = param_1[1];
      uVar2 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar2;
      param_2[-2] = uVar9;
      param_2[-1] = uVar1;
    }
    break;
  case 3:
    FUN_02100da0(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_02100e80(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_02100f50(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_02100da0(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      puVar11 = param_1 + 6;
      puVar12 = param_1 + 4;
      do {
        puVar8 = puVar11;
        if (*(uint *)((long)puVar12 + 0xc) < *(uint *)((long)puVar8 + 0xc)) {
          uVar9 = *puVar8;
          uVar3 = *(undefined4 *)(puVar8 + 1);
          uVar4 = *(uint *)((long)puVar8 + 0xc);
          lVar5 = lVar6;
          do {
            lVar10 = lVar5;
            *(undefined8 *)((long)param_1 + lVar10 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x20);
            *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x28);
            if (lVar10 == -0x20) {
              puVar11 = param_1;
              goto LAB_0210122c;
            }
            lVar5 = lVar10 + -0x10;
          } while (*(uint *)((long)param_1 + lVar10 + 0x1c) < uVar4);
          puVar11 = (undefined8 *)((long)param_1 + lVar10 + 0x20);
LAB_0210122c:
          iVar7 = iVar7 + 1;
          *puVar11 = uVar9;
          *(undefined4 *)(puVar11 + 1) = uVar3;
          *(uint *)((long)puVar11 + 0xc) = uVar4;
          if (iVar7 == 8) {
            return puVar8 + 2 == param_2;
          }
        }
        lVar6 = lVar6 + 0x10;
        puVar11 = puVar8 + 2;
        puVar12 = puVar8;
      } while (puVar8 + 2 != param_2);
    }
  }
  return true;
}


