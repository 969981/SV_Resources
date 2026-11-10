/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e4cd4; name: FUN_002e4cd4
 */


void FUN_002e4cd4(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar4 = FUN_0049e7b0(PTR_FUN_047cba38,0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
  else if ((7 < iVar2) &&
          (uVar8 = CONCAT13(POPCOUNT((char)((uint)iVar2 >> 0x18)),
                            CONCAT12(POPCOUNT((char)((uint)iVar2 >> 0x10)),
                                     CONCAT11(POPCOUNT((char)((uint)iVar2 >> 8)),
                                              POPCOUNT((char)iVar2)))),
          uVar7 = NEON_uaddlv((ulong)uVar8,1), CONCAT22((short)(uVar8 >> 0x10),uVar7) < 2)) {
    puVar6 = *(undefined4 **)(param_1 + 0x20);
    puVar3 = (undefined4 *)FUN_0049e7b0(PTR_FUN_047cba38,(long)iVar2 << 3);
    *(undefined4 **)(param_1 + 0x20) = puVar3;
    if (*(int *)(param_1 + 0x18) < 1) {
      if (puVar6 == (undefined4 *)0x0) goto LAB_002e4da4;
    }
    else {
      *puVar3 = *puVar6;
      if (1 < *(int *)(param_1 + 0x18)) {
        lVar5 = 1;
        do {
          lVar1 = lVar5 + 1;
          *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar5 * 4) = puVar6[lVar5];
          lVar5 = lVar1;
        } while (lVar1 < *(int *)(param_1 + 0x18));
      }
    }
    FUN_0049e800(puVar6);
    FUN_0049e7e0(PTR_LAB_047cba48,puVar6);
  }
LAB_002e4da4:
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4) = param_2;
  return;
}


