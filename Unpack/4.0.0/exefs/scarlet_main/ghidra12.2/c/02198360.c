/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02198360; name: FUN_02198360
 */


void FUN_02198360(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  
  FUN_021980a0(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar3 = 0;
    puVar7 = param_1 + 6;
    puVar8 = param_1 + 4;
    do {
      puVar4 = puVar7;
      fVar9 = *(float *)(puVar4 + 1);
      if (fVar9 < *(float *)(puVar8 + 1)) {
        uVar5 = *puVar4;
        uVar1 = *(undefined4 *)((long)puVar4 + 0xc);
        lVar2 = lVar3;
        do {
          lVar6 = lVar2;
          *(undefined8 *)((long)param_1 + lVar6 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x20);
          *(undefined8 *)((long)param_1 + lVar6 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x28);
          if (lVar6 == -0x20) {
            puVar7 = param_1;
            goto LAB_021983ec;
          }
          lVar2 = lVar6 + -0x10;
        } while (fVar9 < *(float *)((long)param_1 + lVar6 + 0x18));
        puVar7 = (undefined8 *)((long)param_1 + lVar6 + 0x20);
LAB_021983ec:
        *puVar7 = uVar5;
        *(float *)(puVar7 + 1) = fVar9;
        *(undefined4 *)((long)puVar7 + 0xc) = uVar1;
      }
      lVar3 = lVar3 + 0x10;
      puVar7 = puVar4 + 2;
      puVar8 = puVar4;
    } while (puVar4 + 2 != param_2);
  }
  return;
}


