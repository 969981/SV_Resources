/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03008f04; name: FUN_03008f04
 */


void FUN_03008f04(long param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int *piVar4;
  int *piVar3;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined8 uVar9;
  
  if (param_2 == param_3) {
    return;
  }
  piVar3 = param_2;
  do {
    piVar4 = piVar3 + 1;
    puVar6 = (undefined8 *)
             (*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x74) * (long)*piVar3);
    uVar9 = *puVar6;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x108) + (long)*piVar3 * 0x20);
    puVar6[1] = CONCAT44(uVar2,uVar2);
    *puVar6 = uVar9;
    piVar3 = piVar4;
  } while (param_3 != piVar4);
  uVar2 = 0x3a7f7f7f;
  if (*(char *)(param_1 + 0x15dc) != '\0') {
    uVar2 = 0x7f7f7f;
  }
  piVar3 = param_2;
  do {
    piVar4 = piVar3 + 1;
    puVar7 = (undefined4 *)(*(long *)(param_1 + 0x15c0) + (long)*piVar3 * 0x14);
    puVar7[4] = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    *puVar7 = uVar2;
    puVar7[1] = 0;
    piVar3 = piVar4;
  } while (param_3 != piVar4);
  lVar5 = *(long *)(param_1 + 0x1670);
  if (lVar5 != 0) {
    fVar8 = *(float *)(lVar5 + 0x40);
    piVar3 = param_2;
    do {
      piVar4 = piVar3 + 1;
      puVar7 = (undefined4 *)(*(long *)(lVar5 + 0x20) + (long)*piVar3 * 6);
      *puVar7 = 0;
      *(char *)((long)puVar7 + 5) = (fVar8 == 0.0) << 2;
      piVar3 = piVar4;
    } while (param_3 != piVar4);
    piVar3 = param_2;
    do {
      piVar4 = piVar3 + 1;
      puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x30) + (long)*piVar3 * 0x10);
      *(undefined8 *)((long)puVar6 + 5) = 0;
      *puVar6 = 0;
      piVar3 = piVar4;
    } while (param_3 != piVar4);
  }
  if (*(char *)(param_1 + 0x15dc) != '\0') {
    do {
      piVar3 = param_2 + 1;
      puVar6 = (undefined8 *)
               (*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa4) * (long)*param_2);
      uVar9 = *puVar6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x118) + (long)*param_2 * 0x10);
      puVar1[1] = puVar6[1];
      *puVar1 = uVar9;
      param_2 = piVar3;
    } while (param_3 != piVar3);
  }
  FUN_0300ad84(*(undefined8 *)(param_1 + 0x1678));
  return;
}


