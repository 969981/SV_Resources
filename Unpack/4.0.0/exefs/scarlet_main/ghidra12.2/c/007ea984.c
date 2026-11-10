/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ea984; name: FUN_007ea984
 */


ulong FUN_007ea984(ushort *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ushort *puVar16;
  long lVar17;
  ushort *puVar18;
  int iVar19;
  
  if (*(int *)(param_1 + 0xc00) < 0x80) {
    *(int *)(param_1 + (long)*(int *)(param_1 + 0xc00) * 0x18) = param_2;
    iVar13 = *(int *)(param_1 + 0xc00);
    iVar14 = iVar13 + 1;
    *(int *)(param_1 + 0xc00) = iVar14;
    if (-1 < iVar13) {
      iVar13 = 1;
      lVar15 = 0;
      puVar11 = param_1;
      do {
        puVar11 = puVar11 + 0x18;
        lVar1 = lVar15 + 1;
        lVar17 = (long)iVar14;
        if (lVar1 < lVar17) {
          puVar16 = param_1 + lVar15 * 0x18;
          puVar18 = puVar11;
          iVar19 = iVar13;
          do {
            if (((uint)*(byte *)((long)puVar18 + 3) << 0x18 | (uint)*puVar18 << 8 |
                (uint)(byte)puVar18[1]) <
                ((uint)*(byte *)((long)puVar16 + 3) << 0x18 | (uint)*puVar16 << 8 |
                (uint)(byte)puVar16[1])) {
              uVar2 = *(undefined8 *)puVar16;
              uVar6 = *(undefined8 *)(puVar16 + 4);
              uVar3 = *(undefined8 *)(puVar16 + 8);
              uVar7 = *(undefined8 *)(puVar16 + 0xc);
              uVar4 = *(undefined8 *)(puVar16 + 0x10);
              uVar8 = *(undefined8 *)(puVar16 + 0x14);
              uVar9 = *(undefined8 *)(puVar18 + 0x14);
              uVar5 = *(undefined8 *)(puVar18 + 8);
              uVar10 = *(undefined8 *)(puVar18 + 0xc);
              *(undefined8 *)(puVar16 + 0x10) = *(undefined8 *)(puVar18 + 0x10);
              *(undefined8 *)(puVar16 + 0x14) = uVar9;
              *(undefined8 *)(puVar16 + 8) = uVar5;
              *(undefined8 *)(puVar16 + 0xc) = uVar10;
              uVar5 = *(undefined8 *)(puVar18 + 4);
              *(undefined8 *)puVar16 = *(undefined8 *)puVar18;
              *(undefined8 *)(puVar16 + 4) = uVar5;
              *(undefined8 *)puVar18 = uVar2;
              *(undefined8 *)(puVar18 + 4) = uVar6;
              *(undefined8 *)(puVar18 + 0x10) = uVar4;
              *(undefined8 *)(puVar18 + 0x14) = uVar8;
              *(undefined8 *)(puVar18 + 8) = uVar3;
              *(undefined8 *)(puVar18 + 0xc) = uVar7;
              iVar14 = *(int *)(param_1 + 0xc00);
            }
            iVar19 = iVar19 + 1;
            puVar18 = puVar18 + 0x18;
          } while (iVar19 < iVar14);
          lVar17 = (long)iVar14;
        }
        iVar13 = iVar13 + 1;
        lVar15 = lVar1;
      } while (lVar1 < lVar17);
    }
    uVar12 = 0;
    while (*(int *)param_1 != param_2) {
      if (*(int *)(param_1 + 0x18) == param_2) {
        return uVar12 + 1 & 0xffffffff;
      }
      uVar12 = uVar12 + 2;
      param_1 = param_1 + 0x30;
      if (uVar12 == 0x80) {
        return 0xffffffff;
      }
    }
  }
  else {
    uVar12 = 0xffffffff;
  }
  return uVar12 & 0xffffffff;
}


