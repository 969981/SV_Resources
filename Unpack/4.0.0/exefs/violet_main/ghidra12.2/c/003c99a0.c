/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c99a0; name: FUN_003c99a0
 */


undefined8 FUN_003c99a0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong local_68;
  
  iVar3 = FUN_003a1810();
  if (((iVar3 == 0) ||
      (uVar12 = *(ulong *)(*(long *)(param_1 + 0x2c) + 0x130), uVar5 = FUN_003a1940(param_1),
      uVar12 < uVar5)) ||
     ((param_2 == 0x16 &&
      ((*(long *)(param_1 + 0x28) == 0 &&
       (*(long *)(param_1 + 0x26) != *(long *)(*(long *)(param_1 + 0x2c) + 0x140) + 0xc)))))) {
    return 0xffffffff;
  }
  lVar6 = *(long *)(param_1 + 0x152);
  if (lVar6 == 0) {
LAB_003c9a6c:
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x14c);
  }
  else {
    if (*(long *)(param_1 + 0x14c) != 0) {
      FUN_0043b170(*(long *)(param_1 + 0x14c));
      uVar4 = FUN_0043b160();
      if ((uVar4 >> 0x15 & 1) != 0) goto LAB_003c9a6c;
      lVar6 = *(long *)(param_1 + 0x152);
    }
    FUN_0043b770(lVar6);
    iVar3 = FUN_0043b720();
    lVar6 = (long)iVar3;
    lVar7 = *(long *)(param_1 + 0x14c);
  }
  if (lVar7 != 0) {
    FUN_0043b170();
    uVar5 = FUN_0043b160();
    if ((uVar5 & 0xf0007) == 2) {
      iVar3 = FUN_0043b650(*(undefined8 *)(param_1 + 0x14c));
      lVar7 = (long)(iVar3 << 1);
      goto LAB_003c9aac;
    }
  }
  lVar7 = 0;
LAB_003c9aac:
  plVar13 = (long *)(param_1 + 0x26);
  lVar9 = *plVar13;
  param_1[10] = 1;
  if (lVar9 != 0) {
    lVar7 = lVar7 + lVar6;
    lVar6 = 0;
    bVar2 = true;
    do {
      if ((param_2 == 0x16) && (uVar5 = *(ulong *)(param_1 + 0x28), uVar5 != 0)) {
        if (lVar6 == 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x2c) + 0x150);
        }
        else {
          if (uVar5 < 0xd) {
            return 0xffffffff;
          }
          *(long *)(param_1 + 0x26) = lVar9 + 0xc;
          *(ulong *)(param_1 + 0x28) = uVar5 - 0xc;
        }
      }
      iVar3 = FUN_003e9560(*(undefined8 *)(param_1 + 6),0xd,0,0);
      uVar5 = lVar7 + (iVar3 + 0xd);
      lVar9 = *(long *)(param_1 + 0x2c);
      uVar10 = *(ulong *)(lVar9 + 0x130) - uVar5;
      uVar12 = 0;
      if (uVar5 <= *(ulong *)(lVar9 + 0x130)) {
        uVar12 = uVar10;
      }
      if (uVar12 < 0xd) {
        uVar8 = FUN_003e9560(*(undefined8 *)(param_1 + 6),0xb,0,0);
        if ((int)uVar8 < 1) {
          param_1[10] = 2;
          return uVar8;
        }
        lVar9 = *(long *)(param_1 + 0x2c);
        if (*(ulong *)(lVar9 + 0x130) <= lVar7 + 0x19U) {
          return 0xffffffff;
        }
        uVar10 = *(ulong *)(lVar9 + 0x130) - (lVar7 + 0xd);
      }
      if ((*(ulong *)(param_1 + 0x26) & 0xffffffff) <= uVar10) {
        uVar10 = *(ulong *)(param_1 + 0x26);
      }
      uVar5 = *(ulong *)(param_1 + 0x1b0);
      if (uVar10 <= *(ulong *)(param_1 + 0x1b0)) {
        uVar5 = uVar10;
      }
      if (param_2 == 0x16) {
        if (uVar5 < 0xc) {
          return 0xffffffff;
        }
        *(long *)(lVar9 + 0x150) = lVar6;
        *(ulong *)(lVar9 + 0x158) = uVar5 - 0xc;
        puVar1 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(param_1 + 0x28));
        *puVar1 = *(undefined1 *)(lVar9 + 0x138);
        puVar1[1] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 0x10);
        puVar1[2] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 8);
        puVar1[3] = (char)*(undefined8 *)(lVar9 + 0x140);
        puVar1[4] = *(undefined1 *)(lVar9 + 0x149);
        puVar1[5] = *(undefined1 *)(lVar9 + 0x148);
        puVar1[6] = (char)((ulong)*(undefined8 *)(lVar9 + 0x150) >> 0x10);
        puVar1[7] = (char)((ulong)*(undefined8 *)(lVar9 + 0x150) >> 8);
        puVar1[8] = (char)*(undefined8 *)(lVar9 + 0x150);
        puVar1[9] = (char)((ulong)*(undefined8 *)(lVar9 + 0x158) >> 0x10);
        puVar1[10] = (char)((ulong)*(undefined8 *)(lVar9 + 0x158) >> 8);
        puVar1[0xb] = (char)*(undefined8 *)(lVar9 + 0x158);
      }
      iVar3 = FUN_003a3e00(param_1,param_2,
                           *(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(param_1 + 0x28),
                           uVar5,&local_68);
      if (iVar3 < 0) {
        if (!bVar2) {
          return 0xffffffff;
        }
        uVar8 = FUN_003b35e0(param_1);
        lVar9 = FUN_003e9560(uVar8,0x2b,0,0);
        if (lVar9 < 1) {
          return 0xffffffff;
        }
        uVar4 = FUN_003b5740(param_1);
        if ((uVar4 >> 0xc & 1) != 0) {
          return 0xffffffff;
        }
        iVar3 = FUN_003a1810(param_1);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        lVar9 = *plVar13;
        bVar2 = false;
      }
      else {
        if (uVar5 != local_68) {
          return 0xffffffff;
        }
        if ((param_2 == 0x16) && (lVar9 = *(long *)(param_1 + 0x2c), *(int *)(lVar9 + 0x20c) == 0))
        {
          puVar1 = (undefined1 *)
                   (*(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(param_1 + 0x28));
          if ((lVar6 == 0) && (*param_1 != 0x100)) {
            *puVar1 = *(undefined1 *)(lVar9 + 0x138);
            puVar1[1] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 0x10);
            puVar1[2] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 8);
            puVar1[3] = (char)*(undefined8 *)(lVar9 + 0x140);
            puVar1[4] = *(undefined1 *)(lVar9 + 0x149);
            puVar1[5] = *(undefined1 *)(lVar9 + 0x148);
            *(undefined2 *)(puVar1 + 6) = 0;
            puVar1[8] = 0;
            puVar1[9] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 0x10);
            puVar1[10] = (char)((ulong)*(undefined8 *)(lVar9 + 0x140) >> 8);
            puVar1[0xb] = (char)*(undefined8 *)(lVar9 + 0x140);
            iVar3 = FUN_003acec0(param_1,puVar1,local_68);
            uVar5 = local_68;
          }
          else {
            iVar3 = FUN_003acec0(param_1,puVar1 + 0xc,uVar5 - 0xc);
            uVar5 = local_68;
          }
          if (iVar3 == 0) {
            return 0xffffffff;
          }
          local_68 = uVar5;
        }
        lVar9 = *plVar13 - uVar5;
        if (lVar9 == 0) {
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            (**(code **)(param_1 + 0x2e))
                      (1,*param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x22) + 8),
                       *(long *)(param_1 + 0x28) + uVar5,param_1,*(undefined8 *)(param_1 + 0x30));
          }
          *plVar13 = 0;
          param_1[0x28] = 0;
          param_1[0x29] = 0;
          return 1;
        }
        *(long *)(param_1 + 0x26) = lVar9;
        *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar5;
        local_68 = uVar5 - 0xc;
        lVar6 = local_68 + lVar6;
        lVar11 = *(long *)(param_1 + 0x2c);
        *(long *)(lVar11 + 0x150) = lVar6;
        *(undefined8 *)(lVar11 + 0x158) = 0;
      }
    } while (lVar9 != 0);
  }
  return 0;
}


