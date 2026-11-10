/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6c244; name: FUN_00c6c244
 */


void FUN_00c6c244(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  
  uVar4 = (uint)*(byte *)((long)param_2 + 0xc);
  *(undefined1 *)((long)param_2 + 0xd) = 0;
  if ((*(byte *)((long)param_2 + 0xc) >> 2 & 1) == 0) {
    lVar7 = *param_2 + 0x18;
    if (*param_2 < 0x11) {
      lVar7 = 0x28;
    }
    if ((lVar7 != 0) && ((*(byte *)((long)param_2 + lVar7 + 0xc) >> 3 & 1) == 0)) {
      FUN_00c6c688(param_1,param_2);
      uVar6 = *param_2;
      if ((*(byte *)((long)param_2 + 0xc) >> 2 & 1) == 0) {
        lVar7 = uVar6 + 0x18;
        if (uVar6 < 0x11) {
          lVar7 = 0x28;
        }
        puVar11 = (ulong *)((long)param_2 + lVar7);
        uVar10 = *(ulong *)((long)param_2 + lVar7);
      }
      else {
        puVar11 = param_2;
        uVar10 = uVar6;
      }
      lVar9 = uVar10 + 0x18;
      lVar7 = uVar6 + 0x18;
      if (uVar6 < 0x11) {
        lVar7 = 0x28;
      }
      if (uVar10 < 0x11) {
        lVar9 = 0x28;
      }
      lVar1 = -0x18;
      if ((ulong)(lVar7 + lVar9) < 0x11) {
        lVar1 = -0x28;
      }
      uVar6 = lVar1 + lVar7 + lVar9;
      puVar8 = param_2;
      if ((*(byte *)((long)param_2 + 0xc) >> 1 & 1) == 0) {
        puVar8 = (ulong *)((long)param_2 - param_2[-1]);
      }
      bVar3 = *(byte *)((long)puVar11 + 0xc);
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      puVar5 = (ulong *)((long)puVar11 + lVar9);
      if ((bVar3 & 4) != 0) {
        puVar5 = puVar11;
      }
      *(undefined2 *)((long)param_2 + 0xd) = 0x300;
      lVar7 = uVar6 + 0x10;
      *param_2 = uVar6;
      lVar9 = uVar6 + 0x18;
      *(undefined1 *)((long)param_2 + 0x1f) = 0;
      if (uVar6 < 0x11) {
        lVar7 = 0x20;
        lVar9 = 0x28;
      }
      *(undefined8 *)((long)param_2 + 0xf) = 0;
      *(undefined8 *)((long)param_2 + 0x17) = 0;
      *(char *)((long)param_2 + 0xc) = (puVar8 == param_2) << 1 | (puVar5 == puVar11) << 2;
      *(long *)((long)param_2 + lVar7) = lVar9;
      FUN_00c6c688(param_1);
      FUN_00c6c4dc(param_1,param_2);
      uVar4 = (uint)*(byte *)((long)param_2 + 0xc);
    }
  }
  if ((((uVar4 >> 1 & 1) == 0) && (param_2[-1] != 0)) &&
     (puVar11 = (ulong *)((long)param_2 - param_2[-1]),
     (*(byte *)((long)puVar11 + 0xc) >> 3 & 1) == 0)) {
    FUN_00c6c688(param_1,puVar11);
    uVar6 = *puVar11;
    if ((*(byte *)((long)puVar11 + 0xc) >> 2 & 1) == 0) {
      lVar7 = uVar6 + 0x18;
      if (uVar6 < 0x11) {
        lVar7 = 0x28;
      }
      puVar8 = (ulong *)((long)puVar11 + lVar7);
      uVar10 = *(ulong *)((long)puVar11 + lVar7);
    }
    else {
      puVar8 = puVar11;
      uVar10 = uVar6;
    }
    lVar9 = uVar10 + 0x18;
    lVar7 = uVar6 + 0x18;
    if (uVar6 < 0x11) {
      lVar7 = 0x28;
    }
    if (uVar10 < 0x11) {
      lVar9 = 0x28;
    }
    lVar1 = -0x18;
    if ((ulong)(lVar7 + lVar9) < 0x11) {
      lVar1 = -0x28;
    }
    uVar6 = lVar1 + lVar7 + lVar9;
    if ((*(byte *)((long)puVar11 + 0xc) >> 1 & 1) == 0) {
      puVar5 = (ulong *)((long)puVar11 - puVar11[-1]);
    }
    else {
      puVar5 = puVar11;
    }
    bVar3 = *(byte *)((long)puVar8 + 0xc);
    *(undefined4 *)(puVar11 + 1) = 0xffffffff;
    puVar2 = (ulong *)((long)puVar8 + lVar9);
    if ((bVar3 & 4) != 0) {
      puVar2 = puVar8;
    }
    *(undefined2 *)((long)puVar11 + 0xd) = 0x300;
    lVar7 = uVar6 + 0x10;
    *puVar11 = uVar6;
    lVar9 = uVar6 + 0x18;
    *(undefined1 *)((long)puVar11 + 0x1f) = 0;
    if (uVar6 < 0x11) {
      lVar7 = 0x20;
      lVar9 = 0x28;
    }
    *(undefined8 *)((long)puVar11 + 0xf) = 0;
    *(undefined8 *)((long)puVar11 + 0x17) = 0;
    *(char *)((long)puVar11 + 0xc) = (puVar5 == puVar11) << 1 | (puVar2 == puVar8) << 2;
    *(long *)((long)puVar11 + lVar7) = lVar9;
    FUN_00c6c688(param_1);
    FUN_00c6c4dc(param_1,puVar11);
    param_2 = puVar11;
  }
  FUN_00c6c4dc(param_1,param_2);
  return;
}


