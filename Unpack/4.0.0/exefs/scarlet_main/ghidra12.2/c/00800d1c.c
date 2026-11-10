/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00800d1c; name: FUN_00800d1c
 */


void FUN_00800d1c(ushort *param_1,ulong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  *param_1 = (ushort)param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0xffff;
  param_1[0xd] = 0xffff;
  param_1[0xe] = 0xffff;
  param_1[0xf] = 0xffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0((param_2 & 0xffff) << 3,uVar2);
  if (lVar3 == 0) {
    uVar5 = (ulong)*param_1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    if ((param_2 & 0xffff) != 0) {
      uVar5 = param_2 & 3;
      if ((param_2 & 0xffff) - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        puVar4 = (undefined8 *)(lVar3 + 0x10);
        do {
          uVar6 = uVar6 + 4;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4 = puVar4 + 4;
        } while ((param_2 & 0xfffc) != uVar6);
      }
      if (uVar5 != 0) {
        puVar4 = (undefined8 *)(lVar3 + uVar6 * 8);
        do {
          uVar5 = uVar5 - 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (uVar5 != 0);
      }
    }
    *(long *)(param_1 + 4) = lVar3;
    if (*param_1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar2 = FUN_0078a12c();
        puVar4 = (undefined8 *)FUN_007bf9f0(0x60,uVar2);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0xffffffffffffffff;
          puVar4[1] = 0;
          *(undefined4 *)(puVar4 + 2) = 0;
          FUN_0284e338(puVar4 + 3);
          FUN_0284e338(puVar4 + 7);
          *(undefined2 *)(puVar4 + 0xb) = 0;
          *(undefined1 *)((long)puVar4 + 0x5a) = 0;
          *(undefined4 *)((long)puVar4 + 0x5c) = 0;
        }
        *(undefined8 **)(*(long *)(param_1 + 4) + uVar6 * 8) = puVar4;
        uVar5 = (ulong)*param_1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(uVar5 << 3,uVar2);
  if (lVar3 == 0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else {
    if ((int)uVar5 != 0) {
      uVar6 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        puVar4 = (undefined8 *)(lVar3 + 0x10);
        do {
          uVar7 = uVar7 + 4;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4 = puVar4 + 4;
        } while ((uVar5 & 0xfffc) != uVar7);
      }
      if (uVar6 != 0) {
        puVar4 = (undefined8 *)(lVar3 + uVar7 * 8);
        do {
          uVar6 = uVar6 - 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (uVar6 != 0);
      }
    }
    *(long *)(param_1 + 0x14) = lVar3;
    uVar1 = *param_1;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      uVar6 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        puVar4 = (undefined8 *)(lVar3 + 0x10);
        do {
          uVar7 = uVar7 + 4;
          puVar4[-2] = 0xffffffffffffffff;
          puVar4[-1] = 0xffffffffffffffff;
          *puVar4 = 0xffffffffffffffff;
          puVar4[1] = 0xffffffffffffffff;
          puVar4 = puVar4 + 4;
        } while ((uVar5 & 0xfffc) != uVar7);
      }
      if ((uVar1 & 3) != 0) {
        puVar4 = (undefined8 *)(lVar3 + uVar7 * 8);
        do {
          uVar6 = uVar6 - 1;
          *puVar4 = 0xffffffffffffffff;
          puVar4 = puVar4 + 1;
        } while (uVar6 != 0);
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0xffff;
  param_1[0xd] = 0xffff;
  param_1[0xe] = 0xffff;
  param_1[0xf] = 0xffff;
  if ((*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) &&
     (uVar5 = (ulong)*param_1, *param_1 != 0)) {
    uVar6 = 0;
    puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 4);
    while( true ) {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        FUN_0078b184(puVar4 + 3);
        FUN_0078b184(puVar4 + 7);
        *(undefined2 *)(puVar4 + 0xb) = 0;
        *(undefined1 *)((long)puVar4 + 0x5a) = 0;
        *(undefined4 *)((long)puVar4 + 0x5c) = 0;
        uVar5 = (ulong)*param_1;
      }
      uVar6 = uVar6 + 1;
      if (uVar5 <= uVar6) break;
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 4) + uVar6 * 8);
    }
    lVar3 = *(long *)(param_1 + 0x14);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      uVar6 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        puVar4 = (undefined8 *)(lVar3 + 0x10);
        do {
          uVar7 = uVar7 + 4;
          puVar4[-2] = 0xffffffffffffffff;
          puVar4[-1] = 0xffffffffffffffff;
          *puVar4 = 0xffffffffffffffff;
          puVar4[1] = 0xffffffffffffffff;
          puVar4 = puVar4 + 4;
        } while ((uVar5 & 0xfffc) != uVar7);
      }
      if ((uVar1 & 3) != 0) {
        puVar4 = (undefined8 *)(lVar3 + uVar7 * 8);
        do {
          uVar6 = uVar6 - 1;
          *puVar4 = 0xffffffffffffffff;
          puVar4 = puVar4 + 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}


