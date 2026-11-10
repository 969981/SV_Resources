/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02197580; name: FUN_02197580
 */


void FUN_02197580(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  
  FUN_02197130(param_1,param_1 + 6,param_1 + 0xc);
  if (param_1 + 0x12 != param_2) {
    lVar5 = 0;
    puVar3 = param_1 + 0x12;
    puVar4 = param_1 + 0xc;
    do {
      puVar2 = puVar3;
      fVar8 = *(float *)(puVar2 + 1);
      if (fVar8 < *(float *)(puVar4 + 1)) {
        uVar6 = *puVar2;
        memcpy(&local_84,(void *)((long)puVar2 + 0xc),0x24);
        lVar1 = lVar5;
        do {
          lVar7 = lVar1;
          memcpy((void *)((long)param_1 + lVar7 + 0x90),(void *)((long)param_1 + lVar7 + 0x60),0x2c)
          ;
          if (lVar7 == -0x60) {
            puVar3 = param_1;
            goto LAB_0219763c;
          }
          lVar1 = lVar7 + -0x30;
        } while (fVar8 < *(float *)((long)param_1 + lVar7 + 0x38));
        puVar3 = (undefined8 *)((long)param_1 + lVar7 + 0x60);
LAB_0219763c:
        *puVar3 = uVar6;
        *(float *)(puVar3 + 1) = fVar8;
        *(undefined8 *)((long)puVar3 + 0x24) = local_6c;
        *(undefined8 *)((long)puVar3 + 0x1c) = local_74;
        *(undefined8 *)((long)puVar3 + 0x14) = local_7c;
        *(undefined8 *)((long)puVar3 + 0xc) = local_84;
      }
      lVar5 = lVar5 + 0x30;
      puVar3 = puVar2 + 6;
      puVar4 = puVar2;
    } while (puVar2 + 6 != param_2);
  }
  return;
}


