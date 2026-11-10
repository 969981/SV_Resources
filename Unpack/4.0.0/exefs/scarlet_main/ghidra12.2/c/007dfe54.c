/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dfe54; name: FUN_007dfe54
 */


void FUN_007dfe54(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  uVar1 = *param_1;
  uVar10 = (ulong)uVar1;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(uVar10 << 3,uVar2);
  if ((lVar3 != 0) && (uVar1 != 0)) {
    uVar4 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar8 = (undefined8 *)(lVar3 + 0x10);
      do {
        uVar5 = uVar5 + 4;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
      } while ((uVar10 & 0xfffc) != uVar5);
    }
    if ((uVar1 & 3) != 0) {
      puVar8 = (undefined8 *)(lVar3 + uVar5 * 8);
      do {
        uVar4 = uVar4 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar4 != 0);
    }
  }
  uVar1 = *param_1;
  *(long *)(param_1 + 8) = lVar3;
  uVar2 = FUN_0078a12c();
  uVar10 = 0;
  uVar4 = 0;
  if ((ulong)uVar1 != 0) {
    uVar4 = (ulong)uVar1;
    uVar5 = 1;
    do {
      lVar3 = FUN_007bf9f0(uVar4 << 2,uVar2);
      if ((lVar3 != 0) && ((int)uVar5 != 0)) {
        uVar5 = uVar4 & 7;
        if (uVar4 - 1 < 7) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          puVar8 = (undefined8 *)(lVar3 + 0x10);
          do {
            uVar6 = uVar6 + 8;
            puVar8[-2] = 0;
            puVar8[-1] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8 = puVar8 + 4;
          } while ((uVar4 & 0xfff8) != uVar6);
        }
        if (uVar5 != 0) {
          puVar7 = (undefined4 *)(lVar3 + uVar6 * 4);
          do {
            uVar5 = uVar5 - 1;
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          } while (uVar5 != 0);
        }
      }
      *(long *)(*(long *)(param_1 + 8) + uVar10 * 8) = lVar3;
      uVar1 = *param_1;
      uVar4 = (ulong)uVar1;
      if (uVar4 != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 8) + uVar10 * 8);
        uVar5 = uVar4 & 7;
        if (uVar4 - 1 < 7) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          puVar8 = (undefined8 *)(lVar3 + 0x10);
          do {
            uVar6 = uVar6 + 8;
            puVar8[-2] = 0;
            puVar8[-1] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8 = puVar8 + 4;
          } while ((uVar4 & 0xfff8) != uVar6);
        }
        if ((uVar1 & 7) != 0) {
          puVar7 = (undefined4 *)(lVar3 + uVar6 * 4);
          do {
            uVar5 = uVar5 - 1;
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          } while (uVar5 != 0);
        }
      }
      uVar10 = uVar10 + 1;
      uVar2 = FUN_0078a12c();
      uVar5 = uVar4;
    } while (uVar10 < uVar4);
  }
  lVar3 = FUN_007bf9f0(uVar4 << 3,uVar2);
  if ((lVar3 != 0) && ((int)uVar4 != 0)) {
    uVar10 = uVar4 & 3;
    if (uVar4 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar8 = (undefined8 *)(lVar3 + 0x10);
      do {
        uVar5 = uVar5 + 4;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 4;
      } while ((uVar4 & 0xfffc) != uVar5);
    }
    if (uVar10 != 0) {
      puVar8 = (undefined8 *)(lVar3 + uVar5 * 8);
      do {
        uVar10 = uVar10 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (uVar10 != 0);
    }
  }
  uVar10 = (ulong)*param_1;
  *(long *)(param_1 + 0xc) = lVar3;
  if (*param_1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = FUN_0078a12c();
      lVar3 = FUN_007bf9f0(uVar10,uVar2);
      if (((int)uVar10 != 0) && (lVar3 != 0)) {
        uVar5 = uVar10 & 7;
        if (uVar10 - 1 < 7) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            puVar8 = (undefined8 *)(lVar3 + uVar6);
            uVar6 = uVar6 + 8;
            *puVar8 = 0;
          } while ((uVar10 & 0xfff8) != uVar6);
        }
        if (uVar5 != 0) {
          puVar9 = (undefined1 *)(lVar3 + uVar6);
          do {
            uVar5 = uVar5 - 1;
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          } while (uVar5 != 0);
        }
      }
      *(long *)(*(long *)(param_1 + 0xc) + uVar4 * 8) = lVar3;
      uVar1 = *param_1;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0xc) + uVar4 * 8);
        uVar5 = uVar10 & 7;
        if (uVar10 - 1 < 7) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            puVar8 = (undefined8 *)(lVar3 + uVar6);
            uVar6 = uVar6 + 8;
            *puVar8 = 0;
          } while ((uVar10 & 0xfff8) != uVar6);
        }
        if ((uVar1 & 7) != 0) {
          puVar9 = (undefined1 *)(lVar3 + uVar6);
          do {
            uVar5 = uVar5 - 1;
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          } while (uVar5 != 0);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar10);
  }
  return;
}


