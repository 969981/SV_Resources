/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00107810; name: FUN_00107810
 */


long FUN_00107810(long param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_a0 [96];
  
  iVar4 = *(int *)(param_1 + 0xd0);
  if ((*(long *)(param_1 + 0x108) != 0xffffffff) ||
     ((param_2 == 0 && (*(int *)(param_1 + 0xe4) != 0)))) {
    return 0;
  }
  if ((*(code **)(param_1 + 0x48) == (code *)0x0) ||
     (iVar6 = (**(code **)(param_1 + 0x48))(param_1), iVar6 == 0)) {
    if (*(code **)(param_1 + 0x58) != (code *)0x0) {
      (**(code **)(param_1 + 0x58))(param_1);
    }
    return -1;
  }
  uVar5 = *(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0x128);
  if (((uVar5 == 0) && (*(int *)(param_1 + 0x150) == 0)) &&
     (lVar8 = *(long *)(param_1 + 0x38), *(char *)(lVar8 + 0x20) < '\0')) {
    *(undefined4 *)(param_1 + 0x150) = 1;
    *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) & 0xffffff7f;
    *(undefined4 *)(param_1 + 0xcc) = 1;
    (*(code *)PTR_FUN_04483038)
              (param_1 + 0x110,
               (**(long **)(*(long *)(param_1 + 0x38) + 0x1c8) - 0x20U & 0xfffffffffffffffe) +
               *(long *)(param_1 + 0xf0));
    lVar8 = (*(code *)PTR_FUN_04483030)(param_1 + 0x110,auStack_a0,0x20);
    if (lVar8 != 0x20) {
      *(undefined4 *)(param_1 + 200) = 1;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  if (*(ulong *)(param_1 + 0x130) >> 0x11 == 0) {
    if (uVar5 - 1 < *(ulong *)(param_1 + 0x130)) goto LAB_00107928;
  }
  else if (uVar5 != 0) {
LAB_00107928:
    uVar2 = uVar5;
    if (0x1ffff < uVar5) {
      uVar2 = 0x20000;
    }
    if (*(code **)(param_1 + 0x68) == (code *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x68))();
    }
    uVar9 = *(ulong *)(param_1 + 0x128) & 0x1ffff;
    uVar3 = 0;
    if (uVar9 <= uVar2 && 0x20000 < uVar5) {
      uVar3 = uVar9;
    }
    if (uVar3 != 0) {
      if (*(ulong *)(param_1 + 0xf8) <= *(ulong *)(param_1 + 0xa8)) {
        *(ulong *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) - uVar3;
      }
      plVar1 = (long *)(param_1 + 0x120);
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        *plVar1 = *plVar1 + uVar3;
      }
      else {
        (**(code **)(param_1 + 0x78))(plVar1,uVar3);
      }
    }
    if (*(int *)(param_1 + 0x150) != 0) {
      *(uint *)(*(long *)(param_1 + 0x38) + 0x20) =
           *(uint *)(*(long *)(param_1 + 0x38) + 0x20) & 0xffffff7f;
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    *(undefined4 *)(param_1 + 0xcc) = 1;
    lVar8 = (*(code *)PTR_FUN_04483030)
                      (param_1 + 0x110,*(long *)(param_1 + 0x138) + uVar3,uVar2 - uVar3);
    *(undefined4 *)(param_1 + 0xcc) = 0;
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      (**(code **)(param_1 + 0x60))(param_1,lVar8,iVar6);
    }
    if ((lVar8 != uVar2 - uVar3) &&
       (uVar5 = *(long *)(param_1 + 0x100) + lVar8 + *(long *)(param_1 + 0xc0),
       uVar5 < *(ulong *)(param_1 + 0x108))) {
      *(ulong *)(param_1 + 0x108) = uVar5;
    }
    if (lVar8 != 0) {
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + lVar8;
      *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + lVar8;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 0x20000;
      if (*(ulong *)(param_1 + 0x148) <= *(ulong *)(param_1 + 0x138)) {
        *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x140);
      }
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + (-(lVar8 << 0x20) >> 0x20);
LAB_00107af8:
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + lVar8;
      }
      else {
        (**(code **)(param_1 + 0x78))((ulong *)(param_1 + 0x130));
        if (*(code **)(param_1 + 0x78) == (code *)0x0) goto LAB_00107af8;
        (**(code **)(param_1 + 0x78))(param_1 + 0xc0,lVar8);
      }
      if (*(ulong *)(param_1 + 0xb0) < *(ulong *)(param_1 + 0xc0)) {
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xc0);
      }
      if (*(code **)(param_1 + 0x68) == (code *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(param_1 + 0x68))();
      }
      iVar7 = iVar7 - iVar6;
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + iVar7;
      if ((iVar4 == 0) && (*(int *)(param_1 + 0xd0) == 0)) {
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + iVar7;
        pcVar10 = *(code **)(param_1 + 0x50);
        goto joined_r0x00107980;
      }
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + iVar7;
    }
    pcVar10 = *(code **)(param_1 + 0x50);
    goto joined_r0x00107980;
  }
  lVar8 = 0;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xc0);
  pcVar10 = *(code **)(param_1 + 0x50);
joined_r0x00107980:
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(param_1);
  }
  return lVar8;
}


