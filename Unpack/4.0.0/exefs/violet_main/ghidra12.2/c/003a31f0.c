/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a31f0; name: FUN_003a31f0
 */


undefined8 FUN_003a31f0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = FUN_003a2eb0(*(undefined8 *)(param_2 + 8));
  if (99 < uVar2) {
    return 0;
  }
  puVar3 = (undefined8 *)FUN_00452c30(0x88,"external/openssl/ssl/record/rec_layer_d1.c",0x97);
  lVar4 = FUN_003a2c60(param_3,puVar3);
  if ((puVar3 == (undefined8 *)0x0) || (lVar4 == 0)) {
    FUN_00452f80(puVar3,"external/openssl/ssl/record/rec_layer_d1.c",0x9a);
    FUN_003a2cd0(lVar4);
    FUN_003c3950(param_1,0x50,0xf7,0x44,"external/openssl/ssl/record/rec_layer_d1.c",0x9d);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x1890);
    puVar3[1] = *(undefined8 *)(param_1 + 0x1898);
    *puVar3 = uVar6;
    uVar7 = *(undefined8 *)(param_1 + 0x970);
    uVar6 = *(undefined8 *)(param_1 + 0x968);
    uVar9 = *(undefined8 *)(param_1 + 0x980);
    uVar8 = *(undefined8 *)(param_1 + 0x978);
    puVar3[6] = *(undefined8 *)(param_1 + 0x988);
    puVar3[3] = uVar7;
    puVar3[2] = uVar6;
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    uVar7 = *(undefined8 *)(param_1 + 0xeb8);
    uVar6 = *(undefined8 *)(param_1 + 0xeb0);
    uVar9 = *(undefined8 *)(param_1 + 0xec8);
    uVar8 = *(undefined8 *)(param_1 + 0xec0);
    uVar11 = *(undefined8 *)(param_1 + 0xed8);
    uVar10 = *(undefined8 *)(param_1 + 0xed0);
    uVar12 = *(undefined8 *)(param_1 + 0xea0);
    puVar3[10] = *(undefined8 *)(param_1 + 0xea8);
    puVar3[9] = uVar12;
    puVar3[0x10] = uVar11;
    puVar3[0xf] = uVar10;
    puVar3[0xe] = uVar9;
    puVar3[0xd] = uVar8;
    puVar3[0xc] = uVar7;
    puVar3[0xb] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0xe90);
    puVar3[8] = *(undefined8 *)(param_1 + 0xe98);
    puVar3[7] = uVar6;
    *(undefined8 **)(lVar4 + 8) = puVar3;
    *(undefined8 *)(param_1 + 0x988) = 0;
    *(undefined8 *)(param_1 + 0x980) = 0;
    *(undefined8 *)(param_1 + 0x978) = 0;
    *(undefined8 *)(param_1 + 0x970) = 0;
    *(undefined8 *)(param_1 + 0x968) = 0;
    memset((void *)(param_1 + 0xe90),0,0xa10);
    iVar1 = FUN_003a6be0(param_1);
    if (iVar1 != 0) {
      lVar5 = FUN_003a2d50(*(undefined8 *)(param_2 + 8),lVar4);
      if (lVar5 == 0) {
        FUN_00452f80(puVar3[2],"external/openssl/ssl/record/rec_layer_d1.c",0xc1);
        FUN_00452f80(puVar3,"external/openssl/ssl/record/rec_layer_d1.c",0xc2);
        FUN_003a2cd0(lVar4);
      }
      return 1;
    }
    FUN_00452f80(puVar3[2],"external/openssl/ssl/record/rec_layer_d1.c",0xb9);
    FUN_00452f80(puVar3,"external/openssl/ssl/record/rec_layer_d1.c",0xba);
    FUN_003a2cd0(lVar4);
  }
  return 0xffffffff;
}


