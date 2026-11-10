/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0027b3f0; name: FUN_0027b3f0
 */


void FUN_0027b3f0(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)*param_3;
    lVar4 = 0;
    puVar3 = (undefined8 *)(param_2 + -8);
    do {
      uVar1 = *puVar2;
      puVar3[2] = puVar2[1];
      puVar3[1] = uVar1;
      uVar5 = puVar2[3];
      uVar1 = puVar2[2];
      uVar7 = puVar2[5];
      uVar6 = puVar2[4];
      uVar9 = puVar2[7];
      uVar8 = puVar2[6];
      uVar10 = puVar2[8];
      puVar3[10] = puVar2[9];
      puVar3[9] = uVar10;
      puVar3[8] = uVar9;
      puVar3[7] = uVar8;
      puVar3[6] = uVar7;
      puVar3[5] = uVar6;
      puVar3[4] = uVar5;
      puVar3[3] = uVar1;
      uVar9 = puVar2[0xf];
      uVar8 = puVar2[0xe];
      uVar5 = puVar2[0xb];
      uVar1 = puVar2[10];
      uVar7 = puVar2[0xd];
      uVar6 = puVar2[0xc];
      *(undefined4 *)(puVar3 + 0x11) = *(undefined4 *)(puVar2 + 0x10);
      puVar3[0x10] = uVar9;
      puVar3[0xf] = uVar8;
      puVar3[0xe] = uVar7;
      puVar3[0xd] = uVar6;
      puVar3[0xc] = uVar5;
      puVar3[0xb] = uVar1;
                    /* try { // try from 0027b454 to 0027b457 has its CatchHandler @ 0027b484 */
      uVar1 = FUN_003438f0(puVar2[0x11]);
      puVar3 = puVar3 + 0x12;
      *puVar3 = uVar1;
      lVar4 = lVar4 + 1;
      puVar2 = (undefined8 *)(*param_3 + 0x90);
      *param_3 = (long)puVar2;
    } while (param_4 != lVar4);
  }
  return;
}


