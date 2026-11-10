/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02195eb0; name: FUN_02195eb0
 */


bool FUN_02195eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_2 + -2) < *(float *)(param_1 + 1)) {
      uVar9 = *param_1;
      uVar10 = param_1[1];
      uVar7 = param_1[2];
      uVar1 = param_2[-1];
      uVar6 = param_2[-3];
      param_1[1] = param_2[-2];
      param_1[2] = uVar1;
      *param_1 = uVar6;
      param_2[-2] = uVar10;
      param_2[-1] = uVar7;
      param_2[-3] = uVar9;
    }
    break;
  case 3:
    FUN_01817c10(param_1,param_1 + 3,param_2 + -3);
    break;
  case 4:
    FUN_01817e70(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
    break;
  case 5:
    FUN_01817f80(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
    break;
  default:
    FUN_01817c10(param_1,param_1 + 3,param_1 + 6);
    if (param_1 + 9 != param_2) {
      lVar4 = 0;
      iVar5 = 0;
      puVar12 = param_1 + 9;
      puVar13 = param_1 + 6;
      do {
        puVar8 = puVar12;
        fVar14 = *(float *)(puVar8 + 1);
        if (fVar14 < *(float *)(puVar13 + 1)) {
          uVar10 = *(undefined8 *)((long)puVar8 + 0xc);
          uVar9 = *puVar8;
          uVar2 = *(undefined4 *)((long)puVar8 + 0x14);
          lVar3 = lVar4;
          do {
            lVar11 = lVar3;
            *(undefined8 *)((long)param_1 + lVar11 + 0x48) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x30);
            *(undefined8 *)((long)param_1 + lVar11 + 0x50) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x38);
            *(undefined8 *)((long)param_1 + lVar11 + 0x58) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x40);
            if (lVar11 == -0x30) {
              puVar12 = param_1;
              goto LAB_02195fd8;
            }
            lVar3 = lVar11 + -0x18;
          } while (fVar14 < *(float *)((long)param_1 + lVar11 + 0x20));
          puVar12 = (undefined8 *)((long)param_1 + lVar11 + 0x30);
LAB_02195fd8:
          *puVar12 = uVar9;
          iVar5 = iVar5 + 1;
          *(float *)(puVar12 + 1) = fVar14;
          *(undefined4 *)((long)puVar12 + 0x14) = uVar2;
          *(undefined8 *)((long)puVar12 + 0xc) = uVar10;
          if (iVar5 == 8) {
            return puVar8 + 3 == param_2;
          }
        }
        lVar4 = lVar4 + 0x18;
        puVar12 = puVar8 + 3;
        puVar13 = puVar8;
      } while (puVar8 + 3 != param_2);
    }
  }
  return true;
}


