/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b7dd8; name: FUN_007b7dd8
 */


void FUN_007b7dd8(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  FUN_0079a668();
  *param_1 = (long)(PTR_DAT_047d0f08 + 0x10);
  FUN_00792120((long)param_1 + 0x11cc);
  FUN_00792120(param_1 + 0x23c);
  FUN_00792120((long)param_1 + 0x11f4);
  param_1[0x241] = 0;
  *(undefined2 *)(param_1 + 0x242) = 0;
  FUN_0284e338(param_1 + 0x243);
  FUN_0284e338(param_1 + 0x247);
  *(undefined1 *)(param_1 + 0x24b) = 0;
  *(undefined2 *)((long)param_1 + 0x1279) = 0;
  *(undefined1 *)((long)param_1 + 0x127b) = 0;
  FUN_00796584(param_1 + 0x250);
  FUN_00796584(param_1 + 0x254);
  *(undefined2 *)(param_1 + 600) = 0;
  *(undefined1 *)((long)param_1 + 0x12c2) = 0;
  *(undefined8 *)((long)param_1 + 0x12c4) = 0x9c409c40c000c000;
  *(undefined4 *)((long)param_1 + 0x12cc) = 0x88b888b8;
  memset((void *)((long)param_1 + 0x1259),0,0x20);
  uVar3 = FUN_007be730();
  FUN_00799bf4(uVar3,param_1);
  puVar2 = PTR_DAT_047d0860;
  lVar4 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  FUN_007a543c(*(undefined8 *)(lVar4 + 8),param_1);
  lVar4 = FUN_007f74c0(*(undefined8 *)puVar2);
  FUN_007ae4c4(*(undefined8 *)(lVar4 + 0x10),param_1);
  uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
  uVar8 = (ulong)uVar1;
  uVar3 = FUN_0078a12c();
  lVar4 = FUN_007bf9f0(uVar8 << 3,uVar3);
  if ((lVar4 != 0) && (uVar1 != 0)) {
    uVar5 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      puVar7 = (undefined8 *)(lVar4 + 0x10);
      do {
        uVar6 = uVar6 + 4;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 4;
      } while ((uVar8 & 0xfffc) != uVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar7 = (undefined8 *)(lVar4 + uVar6 * 8);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  param_1[0x230] = lVar4;
  uVar1 = *(ushort *)(*(long *)puVar2 + 0x50);
  uVar8 = (ulong)uVar1;
  uVar3 = FUN_0078a12c();
  lVar4 = FUN_007bf9f0(uVar8 << 3,uVar3);
  if ((lVar4 != 0) && (uVar1 != 0)) {
    uVar5 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      puVar7 = (undefined8 *)(lVar4 + 0x10);
      do {
        uVar6 = uVar6 + 4;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 4;
      } while ((uVar8 & 0xfffc) != uVar6);
    }
    if ((uVar1 & 3) != 0) {
      puVar7 = (undefined8 *)(lVar4 + uVar6 * 8);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  param_1[0x231] = lVar4;
  return;
}


