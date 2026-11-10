/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f528e4; name: FUN_02f528e4
 */


undefined4 * FUN_02f528e4(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uVar8;
  undefined4 *__s;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ushort uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (*(int *)(param_2 + 0x18) < 0xf51) {
    __s = (undefined4 *)(*(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 0x18) + 0x20);
  }
  else {
    __s = (undefined4 *)FUN_031c36f4(param_2);
  }
  memset(__s,0,0x50);
  *(undefined2 *)(__s + 3) = 0;
  *(undefined8 *)(__s + 8) = 0;
  __s[0xb] = 0;
  *(undefined1 *)(__s + 6) = 0;
  __s[4] = 0;
  __s[2] = 0x504;
  *(undefined1 *)((long)__s + 0xf) = 8;
  *(undefined8 *)(__s + 0xe) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(__s + 0xc) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(__s + 0x12) = 0xff7fffeeff7fffee;
  *(undefined8 *)(__s + 0x10) = 0xff7fffeeff7fffee;
  __s[1] = *(undefined4 *)(param_1[5] + 0x50);
  *__s = *(undefined4 *)(param_1[6] + 0x50);
  *(char *)((long)__s + 0xe) = (char)param_1[7];
  lVar3 = param_1[5];
  lVar4 = param_1[6];
  uVar15 = (ulong)*(byte *)(lVar3 + 0x89);
  lVar13 = *param_1 + 0x20;
  uVar16 = (ulong)*(byte *)(lVar4 + 0x89);
  uVar12 = (ulong)*(ushort *)(lVar3 + 0x8a);
  uVar10 = (ulong)*(ushort *)(lVar4 + 0x8a);
  lVar11 = *(long *)(param_1[1] + 0x48);
  uVar2 = uVar16;
  if (*(int *)(lVar13 + uVar16 * 0x50 + 0x18) <= *(int *)(lVar13 + uVar15 * 0x50 + 0x18)) {
    uVar2 = uVar15;
    uVar15 = uVar16;
  }
  uVar1 = *(uint *)(lVar13 + uVar2 * 0x50 + 0x20) & *(uint *)(lVar13 + uVar15 * 0x50 + 0x1c);
  lVar13 = param_1[3];
  if (((*(uint *)(lVar11 + uVar10 * 0x50 + 0x14) | *(uint *)(lVar11 + uVar12 * 0x50 + 0x14)) >> 0x11
      & 1) == 0) {
    uVar14 = (*(ushort *)(param_1[9] + 0x1a) | *(ushort *)(param_1[8] + 0x1a)) >> 2 & 4;
  }
  else {
    uVar14 = 4;
    if (((*(uint *)(lVar4 + 0x54) | *(uint *)(lVar3 + 0x54)) & 0x100) != 0) {
      uVar14 = 0x8004;
    }
  }
  uVar5 = (ushort)uVar1;
  if ((uVar1 & 0x10) != 0) {
    uVar5 = uVar5 & 0xfc7f;
  }
  *(ushort *)((long)__s + 10) = uVar14 | uVar5;
  if (((*(ushort *)(lVar3 + 0x58) & *(ushort *)(lVar4 + 0x58)) >> 1 & 1) != 0) {
    uVar8 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar3 + 0x90),(uint)*(ushort *)(lVar3 + 0x90)),4)
    ;
    uVar14 = *(ushort *)(lVar11 + uVar12 * 0x50 + 0x3a);
    uVar5 = *(ushort *)(lVar11 + uVar10 * 0x50 + 0x3a);
    uVar18 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar4 + 0x90),(uint)*(ushort *)(lVar4 + 0x90)),4
                       );
    uVar19 = NEON_fmax((ulong)CONCAT42((uint)uVar14 << 0x10,uVar14) << 0x10,
                       (ulong)CONCAT42((uint)uVar5 << 0x10,uVar5) << 0x10,4);
    iVar7 = (int)((float)uVar19 * (float)*(undefined8 *)(lVar13 + 0x48) +
                 (float)uVar8 + (float)uVar18);
    iVar17 = (int)((float)((ulong)uVar19 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar13 + 0x48) >> 0x20) +
                  (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar18 >> 0x20));
    auVar6._4_4_ = iVar17;
    auVar6._0_4_ = iVar7;
    auVar6._8_4_ = iVar7;
    auVar6._12_4_ = iVar17;
    uVar8 = NEON_sqxtun(CONCAT44(iVar17,iVar7),auVar6,4);
    *(short *)(__s + 3) = (short)uVar8;
  }
  if ((*(char *)(lVar11 + uVar12 * 0x50 + 0x18) == '\0') &&
     (*(char *)(lVar11 + uVar10 * 0x50 + 0x18) == '\0')) {
    uVar9 = 10;
  }
  else {
    uVar9 = 8;
  }
  *(undefined1 *)((long)__s + 0xf) = uVar9;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 0x50;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return __s;
}


