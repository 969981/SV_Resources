/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00806ac8; name: FUN_00806ac8
 */


void FUN_00806ac8(long *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  FUN_007ae2f0();
  puVar3 = PTR_DAT_047d1728;
  param_1[0x13] = (long)(PTR_DAT_047d1728 + 0xa0);
  param_1[0x14] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = (long)(puVar3 + 0x80);
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_0078cfe4(param_1 + 0x17,0xb);
  uVar1 = *(undefined2 *)((long)param_1 + 0x92);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uVar4 = FUN_0078a12c();
  lVar5 = FUN_007bf9f0(0x30,uVar4);
  if (lVar5 != 0) {
    FUN_00800d1c(lVar5,uVar1);
  }
  uVar2 = *(ushort *)((long)param_1 + 0x92);
  uVar9 = (ulong)uVar2;
  param_1[0x14] = lVar5;
  uVar4 = FUN_0078a12c();
  lVar5 = FUN_007bf9f0(uVar9 << 3,uVar4);
  if ((lVar5 != 0) && (uVar2 != 0)) {
    uVar6 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      puVar8 = (undefined8 *)(lVar5 + 0x10);
      do {
        uVar7 = uVar7 + 4;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
      } while ((uVar9 & 0xfffc) != uVar7);
    }
    if ((uVar2 & 3) != 0) {
      puVar8 = (undefined8 *)(lVar5 + uVar7 * 8);
      do {
        uVar6 = uVar6 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar6 != 0);
    }
  }
  uVar2 = *(ushort *)((long)param_1 + 0x92);
  uVar9 = (ulong)uVar2;
  param_1[0x16] = lVar5;
  uVar4 = FUN_0078a12c();
  lVar5 = FUN_007bf9f0(uVar9 << 5,uVar4);
  if ((lVar5 != 0) && (uVar2 != 0)) {
    lVar10 = lVar5;
    do {
      FUN_00796584(lVar10);
      uVar9 = uVar9 - 1;
      lVar10 = lVar10 + 0x20;
    } while (uVar9 != 0);
  }
  param_1[0x1c] = lVar5;
  uVar2 = *(ushort *)((long)param_1 + 0x92);
  uVar9 = (ulong)uVar2;
  uVar4 = FUN_0078a12c();
  lVar5 = FUN_007bf9f0(uVar9 << 3,uVar4);
  if ((lVar5 != 0) && (uVar2 != 0)) {
    uVar6 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      puVar8 = (undefined8 *)(lVar5 + 0x10);
      do {
        uVar7 = uVar7 + 4;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
      } while ((uVar9 & 0xfffc) != uVar7);
    }
    if ((uVar2 & 3) != 0) {
      puVar8 = (undefined8 *)(lVar5 + uVar7 * 8);
      do {
        uVar6 = uVar6 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar6 != 0);
    }
  }
  puVar3 = PTR_DAT_047d11a0;
  param_1[0x1d] = lVar5;
  *(long **)(*(long *)puVar3 + 0x60) = param_1 + 0x13;
  return;
}


