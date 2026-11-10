/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031684a0; name: FUN_031684a0
 */


undefined8 FUN_031684a0(long param_1,ushort param_2)

{
  ushort *puVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  bool bVar9;
  short sVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  short sVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  ushort *puVar22;
  
  puVar1 = (ushort *)(*(long *)(param_1 + 0x110) + (ulong)param_2 * 8);
LAB_031684ac:
  do {
    uVar5 = *puVar1;
    lVar16 = *(long *)(param_1 + 0x120);
    uVar6 = *(ushort *)(lVar16 + (ulong)uVar5 * 8 + 2);
    uVar19 = (ulong)uVar6;
    uVar14 = (uint)uVar5;
    if (uVar6 == uVar14) {
      return 0;
    }
    psVar2 = (short *)(lVar16 + uVar19 * 8);
    psVar3 = (short *)(lVar16 + (ulong)(ushort)psVar2[1] * 8);
    sVar17 = *psVar2;
    bVar21 = false;
    uVar20 = (ulong)(ushort)psVar2[1];
    bVar9 = (*(byte *)(psVar2 + 2) & 3) == 0;
    sVar10 = *psVar3;
    do {
      uVar18 = (uint)uVar19;
      uVar6 = psVar3[1];
      uVar12 = (ulong)uVar6;
      sVar8 = *(short *)(lVar16 + uVar12 * 8);
      bVar11 = (*(byte *)(psVar3 + 2) & 3) == 0;
      uVar15 = (uint)uVar5;
      if (((bool)(bVar9 & bVar11)) || (sVar8 != sVar17)) {
        psVar3 = (short *)(lVar16 + uVar12 * 8);
        uVar13 = uVar12;
        uVar19 = uVar20;
        uVar14 = uVar18;
        sVar17 = sVar10;
      }
      else {
        puVar22 = (ushort *)(lVar16 + uVar19 * 8 + 4);
        uVar7 = *puVar22;
        if ((uVar7 & 3) == 2) {
          *(undefined4 *)(lVar16 + (ulong)(uVar7 >> 2) * 8 + 4) =
               *(undefined4 *)(lVar16 + uVar20 * 8 + 4);
        }
        uVar7 = *(ushort *)(lVar16 + uVar20 * 8 + 4);
        if ((uVar7 & 3) == 2) {
          *(undefined4 *)(*(long *)(param_1 + 0x120) + (ulong)(uVar7 >> 2) * 8 + 4) =
               *(undefined4 *)puVar22;
        }
        if (uVar6 == uVar18) {
          return 0;
        }
        uVar7 = (ushort)uVar14;
        *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)uVar7 * 8 + 2) = uVar6;
        if ((uVar15 == (uint)uVar20) || (uVar15 == uVar18)) {
          *puVar1 = uVar7;
          puVar1[1] = uVar7;
          goto LAB_031684ac;
        }
        lVar4 = lVar16 + uVar12 * 8;
        lVar16 = *(long *)(param_1 + 0x120);
        uVar13 = (ulong)*(ushort *)(lVar4 + 2);
        psVar3 = (short *)(lVar16 + uVar13 * 8);
        bVar21 = true;
        sVar8 = *psVar3;
        bVar11 = (*(byte *)(lVar4 + 4) & 3) == 0;
        uVar19 = uVar12;
      }
      uVar20 = uVar13;
      bVar9 = bVar11;
      sVar10 = sVar8;
    } while (uVar15 != uVar14);
    if (!bVar21) {
      return 1;
    }
  } while( true );
}


