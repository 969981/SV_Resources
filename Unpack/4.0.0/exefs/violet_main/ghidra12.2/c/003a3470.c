/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a3470; name: FUN_003a3470
 */


undefined8 FUN_003a3470(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  ushort *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar4 = FUN_003a2e00(*(undefined8 *)(*(long *)(param_1 + 0x18f8) + 0x30));
  if (lVar4 != 0) {
    psVar5 = *(short **)(param_1 + 0x18f8);
    if (psVar5[0x14] != *psVar5) {
      return 1;
    }
    if (*(long *)(param_1 + 0x988) != 0) {
      return 1;
    }
    lVar4 = FUN_003a2e00(*(undefined8 *)(psVar5 + 0x18));
    if (lVar4 != 0) {
      do {
        while( true ) {
          lVar4 = FUN_003a2e10(*(undefined8 *)(*(long *)(param_1 + 0x18f8) + 0x30));
          if (lVar4 != 0) {
            plVar7 = *(long **)(lVar4 + 8);
            FUN_003a69a0((long *)(param_1 + 0x968));
            lVar8 = *plVar7;
            *(long *)(param_1 + 0x1898) = plVar7[1];
            *(long *)(param_1 + 0x1890) = lVar8;
            lVar9 = plVar7[3];
            lVar8 = plVar7[2];
            lVar11 = plVar7[5];
            lVar10 = plVar7[4];
            *(long *)(param_1 + 0x988) = plVar7[6];
            *(long *)(param_1 + 0x970) = lVar9;
            *(long *)(param_1 + 0x968) = lVar8;
            *(long *)(param_1 + 0x980) = lVar11;
            *(long *)(param_1 + 0x978) = lVar10;
            lVar9 = plVar7[0xc];
            lVar8 = plVar7[0xb];
            lVar10 = plVar7[0xd];
            lVar12 = plVar7[0x10];
            lVar11 = plVar7[0xf];
            lVar14 = plVar7[10];
            lVar13 = plVar7[9];
            *(long *)(param_1 + 0xec8) = plVar7[0xe];
            *(long *)(param_1 + 0xec0) = lVar10;
            *(long *)(param_1 + 0xed8) = lVar12;
            *(long *)(param_1 + 0xed0) = lVar11;
            *(long *)(param_1 + 0xea8) = lVar14;
            *(long *)(param_1 + 0xea0) = lVar13;
            *(long *)(param_1 + 0xeb8) = lVar9;
            *(long *)(param_1 + 0xeb0) = lVar8;
            lVar8 = plVar7[7];
            *(long *)(param_1 + 0xe98) = plVar7[8];
            *(long *)(param_1 + 0xe90) = lVar8;
            uVar1 = *(undefined4 *)(*plVar7 + 5);
            *(undefined2 *)(param_1 + 0x18e6) = *(undefined2 *)(*plVar7 + 9);
            *(undefined4 *)(param_1 + 0x18e2) = uVar1;
            FUN_00452f80(*(undefined8 *)(lVar4 + 8),"external/openssl/ssl/record/rec_layer_d1.c",
                         0xd1);
            FUN_003a2cd0(lVar4);
          }
          puVar6 = *(ushort **)(param_1 + 0x18f8);
          uVar2 = *puVar6;
          if (*(ulong *)(param_1 + 0xed0) != (ulong)uVar2) break;
          puVar6 = puVar6 + 4;
          iVar3 = FUN_003a4300(param_1,puVar6);
          if (iVar3 != 0) goto LAB_003a3600;
LAB_003a3610:
          iVar3 = FUN_003c39d0(param_1);
          if (iVar3 != 0) {
            return 0xffffffff;
          }
          *(undefined8 *)(param_1 + 0xe98) = 0;
          *(undefined8 *)(param_1 + 0x1898) = 0;
          lVar4 = FUN_003a2e00(*(undefined8 *)(*(long *)(param_1 + 0x18f8) + 0x30));
          if (lVar4 == 0) goto LAB_003a3634;
        }
        if (((*(ulong *)(param_1 + 0xed0) != (ulong)uVar2 + 1) || (puVar6[0x14] == uVar2)) ||
           (1 < *(int *)(param_1 + 0xe94) - 0x15U)) {
          FUN_003c3950(param_1,0x50,0x1a8,0x44,"external/openssl/ssl/record/rec_layer_d1.c",0x10b);
          return 0;
        }
        puVar6 = puVar6 + 0xc;
        iVar3 = FUN_003a4300(param_1,puVar6);
        if (iVar3 == 0) goto LAB_003a3610;
LAB_003a3600:
        iVar3 = FUN_003a8d60(param_1,puVar6);
        if (iVar3 == 0) goto LAB_003a3610;
        iVar3 = FUN_003a31f0(param_1,*(long *)(param_1 + 0x18f8) + 0x38,param_1 + 0xed8);
        if (iVar3 < 0) {
          return 0;
        }
        lVar4 = FUN_003a2e00(*(undefined8 *)(*(long *)(param_1 + 0x18f8) + 0x30));
      } while (lVar4 != 0);
    }
  }
LAB_003a3634:
  psVar5 = *(short **)(param_1 + 0x18f8);
  psVar5[0x1c] = *psVar5;
  psVar5[0x14] = *psVar5 + 1;
  return 1;
}


