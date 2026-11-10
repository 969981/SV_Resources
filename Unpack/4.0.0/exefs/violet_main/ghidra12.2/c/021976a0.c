/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021976a0; name: FUN_021976a0
 */


bool FUN_021976a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  switch(((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_2 + -5) < *(float *)(param_1 + 1)) {
      memcpy(&local_a0,param_1,0x30);
      memcpy(param_1,param_2 + -6,0x2c);
      memcpy(param_2 + -6,&local_a0,0x2c);
    }
    break;
  case 3:
    FUN_02197130(param_1,param_1 + 6,param_2 + -6);
    break;
  case 4:
    FUN_021972c0(param_1,param_1 + 6,param_1 + 0xc,param_2 + -6);
    break;
  case 5:
    FUN_021973f0(param_1,param_1 + 6,param_1 + 0xc,param_1 + 0x12,param_2 + -6);
    break;
  default:
    FUN_02197130(param_1,param_1 + 6,param_1 + 0xc);
    if (param_1 + 0x12 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      puVar3 = param_1 + 0x12;
      puVar4 = param_1 + 0xc;
      do {
        puVar2 = puVar3;
        fVar9 = *(float *)(puVar2 + 1);
        if (fVar9 < *(float *)(puVar4 + 1)) {
          uVar7 = *puVar2;
          memcpy(&local_a0,(void *)((long)puVar2 + 0xc),0x24);
          lVar1 = lVar5;
          do {
            lVar8 = lVar1;
            memcpy((void *)((long)param_1 + lVar8 + 0x90),(void *)((long)param_1 + lVar8 + 0x60),
                   0x2c);
            if (lVar8 == -0x60) {
              puVar3 = param_1;
              goto LAB_021977e8;
            }
            lVar1 = lVar8 + -0x30;
          } while (fVar9 < *(float *)((long)param_1 + lVar8 + 0x38));
          puVar3 = (undefined8 *)((long)param_1 + lVar8 + 0x60);
LAB_021977e8:
          *puVar3 = uVar7;
          iVar6 = iVar6 + 1;
          *(float *)(puVar3 + 1) = fVar9;
          *(undefined8 *)((long)puVar3 + 0x24) = uStack_88;
          *(undefined8 *)((long)puVar3 + 0x1c) = local_90;
          *(undefined8 *)((long)puVar3 + 0x14) = uStack_98;
          *(undefined8 *)((long)puVar3 + 0xc) = local_a0;
          if (iVar6 == 8) {
            return puVar2 + 6 == param_2;
          }
        }
        lVar5 = lVar5 + 0x30;
        puVar3 = puVar2 + 6;
        puVar4 = puVar2;
      } while (puVar2 + 6 != param_2);
    }
  }
  return true;
}


