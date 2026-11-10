/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ae2f0; name: FUN_007ae2f0
 */


void FUN_007ae2f0(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  long lVar8;
  ulong uVar9;
  
  *param_1 = (long)(PTR_DAT_047d0d90 + 0x10);
  FUN_00796bfc(param_1 + 1);
  puVar2 = PTR_DAT_047d0d98;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar2 + 0x78);
  FUN_0078cfe4(param_1 + 0xc,0xe);
  *(undefined1 *)(param_1 + 0x12) = 0xfd;
  uVar1 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
  uVar9 = (ulong)uVar1;
  *(ushort *)((long)param_1 + 0x92) = uVar1;
  uVar3 = FUN_0078a12c();
  lVar4 = FUN_007bf9f0(uVar9 << 5,uVar3);
  if ((lVar4 != 0) && (uVar1 != 0)) {
    lVar8 = lVar4;
    do {
      FUN_00796584(lVar8);
      uVar9 = uVar9 - 1;
      lVar8 = lVar8 + 0x20;
    } while (uVar9 != 0);
  }
  param_1[0x10] = lVar4;
  uVar1 = *(ushort *)((long)param_1 + 0x92);
  uVar9 = (ulong)uVar1;
  uVar3 = FUN_0078a12c();
  lVar4 = FUN_007bf9f0(uVar9 << 1,uVar3);
  if ((lVar4 != 0) && (uVar1 != 0)) {
    uVar5 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      lVar8 = lVar4 + 4;
      do {
        uVar6 = uVar6 + 4;
        *(undefined8 *)(lVar8 + -4) = 0;
        lVar8 = lVar8 + 8;
      } while ((uVar9 & 0xfffc) != uVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar7 = (undefined2 *)(lVar4 + uVar6 * 2);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  param_1[0x11] = lVar4;
  return;
}


