/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f43084; name: FUN_00f43084
 */


undefined2 * FUN_00f43084(long *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar6 = (undefined2 *)param_1[1];
  puVar4 = param_2 + 8;
  if (puVar4 == puVar6) {
    puVar5 = param_2;
  }
  else {
    lVar2 = *param_1;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_2 + 9);
    *param_2 = *puVar4;
    lVar2 = lVar2 + ((long)param_2 - lVar2 >> 4) * 0x10;
    FUN_00f431e4(lVar2 + 8,0);
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    puVar5 = param_2 + 0x10;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(lVar2 + 8) = uVar3;
    if (puVar5 == puVar6) {
      puVar5 = puVar4;
    }
    else {
      *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_2 + 0x11);
      *puVar4 = *puVar5;
      FUN_00f431e4(param_2 + 0xc,0);
      uVar3 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_2 + 0x14) = 0;
      *(undefined8 *)(param_2 + 0xc) = uVar3;
      puVar4 = puVar5;
      if (param_2 + 0x18 != puVar6) {
        do {
          puVar5 = puVar4 + 8;
          *puVar4 = *puVar5;
          *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar4 + 9);
          FUN_00f431e4(puVar4 + 4,0);
          uVar3 = *(undefined8 *)(puVar4 + 0xc);
          *(undefined8 *)(puVar4 + 0xc) = 0;
          *(undefined8 *)(puVar4 + 4) = uVar3;
          puVar1 = puVar4 + 0x10;
          puVar4 = puVar5;
        } while (puVar1 != puVar6);
      }
    }
    puVar4 = (undefined2 *)param_1[1];
    if (puVar4 == puVar5) goto LAB_00f4314c;
  }
  FUN_01751d6c(puVar4 + -4);
  if ((puVar4 + -8 != puVar5) && (FUN_01751d6c(puVar4 + -0xc), puVar4 + -0x10 != puVar5)) {
    do {
      FUN_01751d6c(puVar4 + -0x14);
      puVar4 = puVar4 + -8;
    } while (puVar5 + 0x10 != puVar4);
  }
LAB_00f4314c:
  param_1[1] = (long)puVar5;
  return param_2;
}


