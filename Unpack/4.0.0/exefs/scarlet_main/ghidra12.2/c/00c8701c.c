/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c8701c; name: FUN_00c8701c
 */


ulong * FUN_00c8701c(undefined8 param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar7 = param_2 + 2;
  uVar4 = *param_2;
  uVar10 = 0;
  if (param_4 != 0) {
    uVar10 = (ulong)puVar7 / param_4;
  }
  lVar5 = (long)puVar7 - uVar10 * param_4;
  param_4 = param_4 - lVar5;
  if (lVar5 == 0 || param_4 == 0) {
    lVar5 = uVar4 + 0x18;
    if (uVar4 < 0x11) {
      lVar5 = 0x28;
    }
    lVar8 = param_3 + 0x18;
    if (param_3 < 0x11) {
      lVar8 = 0x28;
    }
    FUN_00c6c688(param_1,param_2);
    if (0x27 < (ulong)(lVar5 - lVar8)) {
      lVar5 = *param_2 + 0x18;
      if (*param_2 < 0x11) {
        lVar5 = 0x28;
      }
      bVar3 = *(byte *)((long)param_2 + 0xc);
      puVar7 = param_2;
      if ((bVar3 >> 1 & 1) == 0) {
        puVar7 = (ulong *)((long)param_2 - param_2[-1]);
      }
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      lVar1 = param_3 + 0x10;
      *param_2 = param_3;
      *(undefined8 *)((long)param_2 + 0xf) = 0;
      if (param_3 < 0x11) {
        lVar1 = 0x20;
      }
      uVar10 = (lVar5 - lVar8) - 0x18;
      *(undefined8 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)((long)param_2 + 0x1f) = 0;
      if ((ulong)(lVar5 - lVar8) < 0x29) {
        uVar10 = 0x10;
      }
      *(undefined2 *)((long)param_2 + 0xd) = 0x300;
      *(char *)((long)param_2 + 0xc) = (puVar7 == param_2) << 1;
      *(long *)((long)param_2 + lVar1) = lVar8;
      if ((*(byte *)((long)param_2 + 0xc) >> 2 & 1) == 0) {
        lVar8 = *param_2 + 0x18;
        if (*param_2 < 0x11) {
          lVar8 = 0x28;
        }
        puVar7 = (ulong *)((long)param_2 + lVar8);
      }
      else {
        puVar7 = param_2;
      }
      *(undefined4 *)(puVar7 + 1) = 0xffffffff;
      puVar6 = (ulong *)((long)param_2 + lVar5);
      if ((bVar3 & 4) != 0) {
        puVar6 = param_2;
      }
      lVar5 = uVar10 + 0x10;
      *puVar7 = uVar10;
      lVar8 = uVar10 + 0x18;
      *(undefined2 *)((long)puVar7 + 0xd) = 0x300;
      *(undefined8 *)((long)puVar7 + 0xf) = 0;
      *(undefined8 *)((long)puVar7 + 0x17) = 0;
      *(char *)((long)puVar7 + 0xc) = (puVar6 == param_2) << 2;
      if (uVar10 < 0x11) {
        lVar5 = 0x20;
        lVar8 = 0x28;
      }
      *(undefined1 *)((long)puVar7 + 0x1f) = 0;
      *(long *)((long)puVar7 + lVar5) = lVar8;
      FUN_00c6c4dc(param_1);
      *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) | 8;
    }
  }
  else {
    param_3 = param_4 + param_3;
    if (uVar4 - *(byte *)((long)param_2 + 0xd) < param_3) {
      param_2 = (ulong *)0x0;
    }
    else {
      lVar5 = uVar4 + 0x18;
      if (uVar4 < 0x11) {
        lVar5 = 0x28;
      }
      lVar8 = param_3 + 0x18;
      if (param_3 < 0x11) {
        lVar8 = 0x28;
      }
      if (0x27 < (ulong)(lVar5 - lVar8)) {
        FUN_00c6c688(param_1,param_2);
        lVar5 = *param_2 + 0x18;
        if (*param_2 < 0x11) {
          lVar5 = 0x28;
        }
        bVar3 = *(byte *)((long)param_2 + 0xc);
        puVar6 = param_2;
        if ((bVar3 >> 1 & 1) == 0) {
          puVar6 = (ulong *)((long)param_2 - param_2[-1]);
        }
        *(undefined4 *)(param_2 + 1) = 0xffffffff;
        lVar1 = param_3 + 0x10;
        *param_2 = param_3;
        *(undefined8 *)((long)param_2 + 0xf) = 0;
        if (param_3 < 0x11) {
          lVar1 = 0x20;
        }
        uVar10 = (lVar5 - lVar8) - 0x18;
        *(undefined8 *)((long)param_2 + 0x17) = 0;
        *(undefined1 *)((long)param_2 + 0x1f) = 0;
        if ((ulong)(lVar5 - lVar8) < 0x29) {
          uVar10 = 0x10;
        }
        *(undefined2 *)((long)param_2 + 0xd) = 0x300;
        *(char *)((long)param_2 + 0xc) = (puVar6 == param_2) << 1;
        *(long *)((long)param_2 + lVar1) = lVar8;
        if ((*(byte *)((long)param_2 + 0xc) >> 2 & 1) == 0) {
          lVar8 = *param_2 + 0x18;
          if (*param_2 < 0x11) {
            lVar8 = 0x28;
          }
          puVar6 = (ulong *)((long)param_2 + lVar8);
        }
        else {
          puVar6 = param_2;
        }
        *(undefined4 *)(puVar6 + 1) = 0xffffffff;
        puVar2 = (ulong *)((long)param_2 + lVar5);
        if ((bVar3 & 4) != 0) {
          puVar2 = param_2;
        }
        lVar5 = uVar10 + 0x10;
        *puVar6 = uVar10;
        lVar8 = uVar10 + 0x18;
        *(undefined2 *)((long)puVar6 + 0xd) = 0x300;
        *(undefined8 *)((long)puVar6 + 0xf) = 0;
        *(undefined8 *)((long)puVar6 + 0x17) = 0;
        *(char *)((long)puVar6 + 0xc) = (puVar2 == param_2) << 2;
        if (uVar10 < 0x11) {
          lVar5 = 0x20;
          lVar8 = 0x28;
        }
        *(undefined1 *)((long)puVar6 + 0x1f) = 0;
        *(long *)((long)puVar6 + lVar5) = lVar8;
        FUN_00c6c4dc(param_1);
        *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) | 8;
      }
      if (param_4 < 0x100) {
        FUN_00c6c688(param_1,param_2);
        *(char *)((long)puVar7 + (param_4 - 1)) = (char)param_4;
        *(char *)((long)param_2 + 0xd) = (char)param_4;
      }
      else {
        uVar10 = param_4 - 0x18;
        FUN_00c6c688(param_1,param_2);
        lVar5 = *param_2 + 0x18;
        if (*param_2 < 0x11) {
          lVar5 = 0x28;
        }
        uVar4 = param_4;
        if (uVar10 < 0x11) {
          uVar4 = 0x28;
        }
        bVar3 = *(byte *)((long)param_2 + 0xc);
        puVar7 = param_2;
        if ((bVar3 >> 1 & 1) == 0) {
          puVar7 = (ulong *)((long)param_2 - param_2[-1]);
        }
        *(undefined4 *)(param_2 + 1) = 0xffffffff;
        lVar8 = param_4 - 8;
        *(undefined8 *)((long)param_2 + 0xf) = 0;
        *(undefined8 *)((long)param_2 + 0x17) = 0;
        if (uVar10 < 0x11) {
          lVar8 = 0x20;
        }
        *(undefined2 *)((long)param_2 + 0xd) = 0x300;
        *(undefined1 *)((long)param_2 + 0x1f) = 0;
        uVar9 = (lVar5 - uVar4) - 0x18;
        *param_2 = uVar10;
        *(char *)((long)param_2 + 0xc) = (puVar7 == param_2) << 1;
        if (lVar5 - uVar4 < 0x29) {
          uVar9 = 0x10;
        }
        *(ulong *)((long)param_2 + lVar8) = uVar4;
        if ((*(byte *)((long)param_2 + 0xc) >> 2 & 1) == 0) {
          lVar8 = *param_2 + 0x18;
          if (*param_2 < 0x11) {
            lVar8 = 0x28;
          }
          puVar7 = (ulong *)((long)param_2 + lVar8);
        }
        else {
          puVar7 = param_2;
        }
        *(undefined4 *)(puVar7 + 1) = 0xffffffff;
        puVar6 = (ulong *)((long)param_2 + lVar5);
        if ((bVar3 & 4) != 0) {
          puVar6 = param_2;
        }
        lVar5 = uVar9 + 0x10;
        *puVar7 = uVar9;
        lVar8 = uVar9 + 0x18;
        *(undefined2 *)((long)puVar7 + 0xd) = 0x300;
        *(undefined8 *)((long)puVar7 + 0xf) = 0;
        *(undefined8 *)((long)puVar7 + 0x17) = 0;
        *(char *)((long)puVar7 + 0xc) = (puVar6 == param_2) << 2;
        if (uVar9 < 0x11) {
          lVar5 = 0x20;
          lVar8 = 0x28;
        }
        *(undefined1 *)((long)puVar7 + 0x1f) = 0;
        *(long *)((long)puVar7 + lVar5) = lVar8;
        FUN_00c6c4dc(param_1,param_2);
        *(byte *)((long)puVar7 + 0xc) = *(byte *)((long)puVar7 + 0xc) | 8;
        param_2 = puVar7;
      }
    }
  }
  return param_2;
}


