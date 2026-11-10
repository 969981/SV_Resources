/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f66d8; name: FUN_026f66d8
 */


void FUN_026f66d8(long *param_1,long param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  undefined1 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_5c [3];
  int local_48;
  int local_44;
  
  lVar17 = *param_1;
  if (*(int *)(lVar17 + 0x194) != 0) {
    lVar12 = lVar17 + (ulong)*(uint *)(lVar17 + 0x14) * 0x14;
    lVar13 = *(long *)(lVar17 + 0x188);
    uVar18 = *(uint *)(lVar17 + 400);
    uVar11 = uVar18 >> 1;
    iVar8 = *(int *)(lVar12 + 0x108);
    iVar9 = *(int *)(lVar12 + 0x10c);
    iVar10 = *(int *)(lVar12 + 0x110);
    iVar14 = 0;
    iVar15 = 0;
    uVar16 = 0;
    piVar2 = local_5c + 2;
    while( true ) {
      if (uVar18 != 0) {
        lVar12 = 0;
        puVar19 = (undefined1 *)(param_2 + 1 + (long)iVar15);
        do {
          pbVar1 = (byte *)(lVar13 + iVar8 + (long)iVar14 + lVar12);
          iVar3 = (int)(uVar16 >> 1) * uVar11 + ((uint)lVar12 >> 1);
          lVar12 = lVar12 + 1;
          local_5c[1] = 0xff;
          local_5c[2] = 0xff;
          iVar15 = iVar15 + 4;
          fVar22 = (float)(int)(*(byte *)(lVar13 + iVar9 + (long)iVar3) - 0x80);
          fVar20 = (float)(int)(*pbVar1 - 0x10) * 1.164;
          local_44 = (int)(fVar20 + fVar22 * 1.596);
          local_48 = 0;
          local_5c[0] = 0xff;
          fVar21 = (float)(int)(*(byte *)(lVar13 + iVar10 + (long)iVar3) - 0x80);
          piVar5 = piVar2;
          if (local_44 < 0x100) {
            piVar5 = &local_44;
          }
          piVar4 = &local_48;
          if (-1 < local_44) {
            piVar4 = piVar5;
          }
          local_5c[2] = 0;
          local_48 = (int)(fVar20 + fVar21 * -0.391 + fVar22 * -0.813);
          piVar5 = local_5c + 1;
          if (local_48 < 0x100) {
            piVar5 = &local_48;
          }
          piVar6 = piVar2;
          if (-1 < local_48) {
            piVar6 = piVar5;
          }
          iVar3 = *piVar6;
          local_5c[2] = (int)(fVar20 + fVar21 * 2.018);
          piVar5 = local_5c;
          if (local_5c[2] < 0x100) {
            piVar5 = piVar2;
          }
          local_5c[1] = 0;
          piVar6 = local_5c + 1;
          if (-1 < local_5c[2]) {
            piVar6 = piVar5;
          }
          iVar7 = *piVar6;
          puVar19[-1] = (char)*piVar4;
          *puVar19 = (char)iVar3;
          puVar19[1] = (char)iVar7;
          lVar17 = *param_1;
          puVar19 = puVar19 + 4;
        } while ((uint)lVar12 < *(uint *)(lVar17 + 400));
        iVar14 = iVar14 + (uint)lVar12;
      }
      uVar18 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar18;
      if (*(uint *)(lVar17 + 0x194) <= uVar18) break;
      uVar18 = *(uint *)(lVar17 + 400);
    }
  }
  return;
}


