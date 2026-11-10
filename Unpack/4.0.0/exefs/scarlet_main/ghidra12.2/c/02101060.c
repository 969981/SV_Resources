/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02101060; name: FUN_02101060
 */


void FUN_02101060(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_02100da0(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar4 = 0;
    puVar8 = param_1 + 6;
    puVar9 = param_1 + 4;
    do {
      puVar5 = puVar8;
      if (*(uint *)((long)puVar9 + 0xc) < *(uint *)((long)puVar5 + 0xc)) {
        uVar6 = *puVar5;
        uVar1 = *(undefined4 *)(puVar5 + 1);
        uVar2 = *(uint *)((long)puVar5 + 0xc);
        lVar3 = lVar4;
        do {
          lVar7 = lVar3;
          *(undefined8 *)((long)param_1 + lVar7 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x20);
          *(undefined8 *)((long)param_1 + lVar7 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x28);
          if (lVar7 == -0x20) {
            puVar8 = param_1;
            goto LAB_021010fc;
          }
          lVar3 = lVar7 + -0x10;
        } while (*(uint *)((long)param_1 + lVar7 + 0x1c) < uVar2);
        puVar8 = (undefined8 *)((long)param_1 + lVar7 + 0x20);
LAB_021010fc:
        *puVar8 = uVar6;
        *(undefined4 *)(puVar8 + 1) = uVar1;
        *(uint *)((long)puVar8 + 0xc) = uVar2;
      }
      lVar4 = lVar4 + 0x10;
      puVar8 = puVar5 + 2;
      puVar9 = puVar5;
    } while (puVar5 + 2 != param_2);
  }
  return;
}


