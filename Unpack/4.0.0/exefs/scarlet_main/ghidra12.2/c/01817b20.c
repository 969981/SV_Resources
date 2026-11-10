/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01817b20; name: FUN_01817b20
 */


void FUN_01817b20(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  
  FUN_01817c10(param_1,param_1 + 3,param_1 + 6);
  if (param_1 + 9 != param_2) {
    lVar3 = 0;
    puVar8 = param_1 + 9;
    puVar9 = param_1 + 6;
    do {
      puVar4 = puVar8;
      fVar10 = *(float *)(puVar4 + 1);
      if (fVar10 < *(float *)(puVar9 + 1)) {
        uVar7 = *(undefined8 *)((long)puVar4 + 0xc);
        uVar5 = *puVar4;
        uVar1 = *(undefined4 *)((long)puVar4 + 0x14);
        lVar2 = lVar3;
        do {
          lVar6 = lVar2;
          *(undefined8 *)((long)param_1 + lVar6 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x30);
          *(undefined8 *)((long)param_1 + lVar6 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x38);
          *(undefined8 *)((long)param_1 + lVar6 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x40);
          if (lVar6 == -0x30) {
            puVar8 = param_1;
            goto LAB_01817bf0;
          }
          lVar2 = lVar6 + -0x18;
        } while (fVar10 < *(float *)((long)param_1 + lVar6 + 0x20));
        puVar8 = (undefined8 *)((long)param_1 + lVar6 + 0x30);
LAB_01817bf0:
        *puVar8 = uVar5;
        *(float *)(puVar8 + 1) = fVar10;
        *(undefined4 *)((long)puVar8 + 0x14) = uVar1;
        *(undefined8 *)((long)puVar8 + 0xc) = uVar7;
      }
      lVar3 = lVar3 + 0x18;
      puVar8 = puVar4 + 3;
      puVar9 = puVar4;
    } while (puVar4 + 3 != param_2);
  }
  return;
}


