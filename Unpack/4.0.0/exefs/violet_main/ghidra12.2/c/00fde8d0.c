/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fde8d0; name: FUN_00fde8d0
 */


int FUN_00fde8d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *__src;
  ulong uVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if (*(long *)(DAT_04835c08 + 0x28) != 0) {
    FUN_00fdeb50();
  }
  __src = DAT_04835c40;
  uVar6 = DAT_04835c28._4_4_;
  uVar5 = (uint)DAT_04835c28;
  lVar9 = DAT_04835c08;
  if (DAT_04835c10 == 0) {
    FUN_00fdec14();
    return DAT_04835c10;
  }
  switch(DAT_04835c10) {
  case 1:
    FUN_00fdfd38();
    return DAT_04835c10;
  case 2:
    uVar7 = FUN_00fdf148(DAT_04835c08);
    DAT_04835c10 = 2;
    if ((uVar7 & 1) != 0) {
      DAT_04835c10 = 3;
    }
    break;
  case 3:
    uVar7 = FUN_00fdfc94(DAT_04835c08);
    DAT_04835c10 = 4;
    if ((uVar7 & 1) == 0) {
      DAT_04835c10 = 8;
    }
    break;
  case 4:
    lVar9 = *(long *)(DAT_04835c08 + 0x28);
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x60) != 0)) || (*(int *)(lVar9 + 0x40) != 0)) {
      DAT_04835c10 = 4;
      iVar10 = 4;
    }
    else {
      iVar10 = 5;
      DAT_04835c10 = 9;
    }
    if ((int)DAT_04835c38 != 4) {
      DAT_04835c10 = iVar10;
    }
    break;
  case 5:
    FUN_00fdff3c();
    return DAT_04835c10;
  case 6:
    if (DAT_04835c40 == (void *)0x0) {
      DAT_04835c10 = 0;
      break;
    }
    if (*(long *)(DAT_04835c08 + 0x28) != 0) {
      plVar11 = *(long **)(DAT_04835c08 + 8);
      lVar8 = (long)(int)(uint)DAT_04835c28;
      lVar3 = (long)(int)DAT_04835c28._4_4_;
      uVar4 = (uint)DAT_04835c28 * DAT_04835c28._4_4_ * 3;
      uVar7 = (ulong)uVar4 / 6;
      *(uint *)(DAT_04835c08 + 0x38) = uVar4 / 6;
      *(undefined4 *)(lVar9 + 0x3c) = 0x20;
      __dest = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar7,0x20);
      *(void **)(lVar9 + 0x30) = __dest;
      memcpy(__dest,__src,uVar7);
      if ((*(long *)(lVar9 + 0x30) != 0) &&
         (lVar9 = *(long *)(lVar9 + 0x28),
         *(int *)(lVar9 + 0x40) == 0 && ((uVar6 | uVar5) & 0x1f) == 0)) {
        *(long *)(lVar9 + 0x80) = lVar8;
        *(long *)(lVar9 + 0x88) = lVar3;
        *(undefined8 *)(lVar9 + 0x90) = 0x4200000025;
        FUN_00fdf384(lVar9);
        *(undefined4 *)(lVar9 + 0x40) = 3;
        goto LAB_00fdea70;
      }
    }
    DAT_04835c10 = 8;
    break;
  case 7:
    lVar9 = *(long *)(DAT_04835c08 + 0x28);
    if (lVar9 != 0) {
      DAT_04835c10 = 7;
      if ((*(long *)(lVar9 + 0x60) == 0) && (DAT_04835c10 = 7, *(int *)(lVar9 + 0x40) == 0)) {
        DAT_04835c10 = 8;
      }
      break;
    }
LAB_00fdea70:
    DAT_04835c10 = 7;
    break;
  case 8:
    plVar11 = *(long **)(DAT_04835c08 + 8);
    uVar12 = *(undefined8 *)(DAT_04835c08 + 0x30);
    uVar1 = *(undefined4 *)(DAT_04835c08 + 0x38);
    uVar2 = *(undefined4 *)(DAT_04835c08 + 0x3c);
    uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar12,uVar1,uVar2);
    }
    else {
      FUN_00c48fe8(plVar11,uVar12,uVar1,uVar2);
    }
    *(undefined8 *)(lVar9 + 0x30) = 0;
    DAT_04835c10 = 9;
    break;
  case 9:
    FUN_00fdf170();
  }
  return DAT_04835c10;
}


