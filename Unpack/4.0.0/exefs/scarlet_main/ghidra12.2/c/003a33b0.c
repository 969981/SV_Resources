/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a33b0; name: FUN_003a33b0
 */


bool FUN_003a33b0(long param_1,long param_2)

{
  undefined2 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = FUN_003a2e10(*(undefined8 *)(param_2 + 8));
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 8);
    FUN_003a69a0((long *)(param_1 + 0x968));
    lVar4 = *plVar3;
    *(long *)(param_1 + 0x1898) = plVar3[1];
    *(long *)(param_1 + 0x1890) = lVar4;
    lVar5 = plVar3[3];
    lVar4 = plVar3[2];
    lVar7 = plVar3[5];
    lVar6 = plVar3[4];
    *(long *)(param_1 + 0x988) = plVar3[6];
    *(long *)(param_1 + 0x980) = lVar7;
    *(long *)(param_1 + 0x978) = lVar6;
    *(long *)(param_1 + 0x970) = lVar5;
    *(long *)(param_1 + 0x968) = lVar4;
    lVar5 = plVar3[0xc];
    lVar4 = plVar3[0xb];
    lVar7 = plVar3[0xe];
    lVar6 = plVar3[0xd];
    lVar9 = plVar3[0x10];
    lVar8 = plVar3[0xf];
    lVar10 = plVar3[9];
    *(long *)(param_1 + 0xea8) = plVar3[10];
    *(long *)(param_1 + 0xea0) = lVar10;
    *(long *)(param_1 + 0xed8) = lVar9;
    *(long *)(param_1 + 0xed0) = lVar8;
    *(long *)(param_1 + 0xec8) = lVar7;
    *(long *)(param_1 + 0xec0) = lVar6;
    *(long *)(param_1 + 0xeb8) = lVar5;
    *(long *)(param_1 + 0xeb0) = lVar4;
    lVar4 = plVar3[7];
    *(long *)(param_1 + 0xe98) = plVar3[8];
    *(long *)(param_1 + 0xe90) = lVar4;
    uVar1 = *(undefined2 *)(*plVar3 + 9);
    *(undefined4 *)(param_1 + 0x18e2) = *(undefined4 *)(*plVar3 + 5);
    *(undefined2 *)(param_1 + 0x18e6) = uVar1;
    FUN_00452f80(*(undefined8 *)(lVar2 + 8),"external/openssl/ssl/record/rec_layer_d1.c",0xd1);
    FUN_003a2cd0(lVar2);
  }
  return lVar2 != 0;
}


