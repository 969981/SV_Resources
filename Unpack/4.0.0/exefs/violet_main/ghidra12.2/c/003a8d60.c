/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a8d60; name: FUN_003a8d60
 */


undefined8 FUN_003a8d60(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
  puVar12 = auStack_c0;
  lVar5 = *(long *)(param_1 + 0x1890) + 0xd;
  lVar10 = *(long *)(param_1 + 0x5d0);
  *(long *)(param_1 + 0xeb8) = lVar5;
  if (0x4540 < *(ulong *)(param_1 + 0xe98)) {
    uVar6 = 0x16;
    uVar7 = 0x96;
    uVar8 = 0x667;
    goto LAB_003a8db4;
  }
  *(long *)(param_1 + 0xeb0) = lVar5;
  *(ulong *)(param_1 + 0xea0) = *(ulong *)(param_1 + 0xe98);
  lVar5 = param_1 + 0xe90;
  if (((*(byte *)(*(long *)(param_1 + 0xa8) + 1) & 1) != 0) && (*(long *)(param_1 + 0x518) != 0)) {
    FUN_0043b770();
    uVar1 = FUN_0043b720();
    if (0x40 < uVar1) {
      uVar6 = 0x50;
      uVar7 = 0x44;
      uVar8 = 0x674;
      goto LAB_003a8db4;
    }
    uVar9 = (ulong)(int)uVar1;
    if (*(ulong *)(param_1 + 0xea0) < uVar9) {
      uVar6 = 0x32;
      uVar7 = 0xa0;
      uVar8 = 0x679;
      goto LAB_003a8db4;
    }
    lVar11 = *(long *)(param_1 + 0xe98) - uVar9;
    *(long *)(param_1 + 0xe98) = lVar11;
    lVar13 = *(long *)(param_1 + 0xeb0);
    iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 8))(param_1,lVar5,auStack_80,0);
    if ((iVar2 == 0) || (iVar2 = FUN_003f6d80(auStack_80,lVar13 + lVar11,uVar9), iVar2 != 0)) {
      uVar6 = 0x14;
      uVar7 = 0x119;
      uVar8 = 0x681;
      goto LAB_003a8db4;
    }
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0xc0))(param_1,lVar5,1,0);
  if (iVar2 == 0) {
    uVar6 = FUN_003c39d0(param_1);
    if ((int)uVar6 != 0) {
      return 0;
    }
    goto LAB_003a909c;
  }
  if ((((lVar10 != 0) && ((*(byte *)(*(long *)(param_1 + 0xa8) + 1) & 1) == 0)) &&
      (*(long *)(param_1 + 0x500) != 0)) &&
     (lVar10 = FUN_0043b770(*(undefined8 *)(param_1 + 0x518)), lVar10 != 0)) {
    FUN_0043b770(*(undefined8 *)(param_1 + 0x518));
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      uVar6 = 0x50;
      uVar8 = 0x6ac;
      uVar7 = 6;
      goto LAB_003a8db4;
    }
    if (0x40 < uVar1) {
      uVar6 = 0x50;
      uVar7 = 0x44;
      uVar8 = 0x6b2;
      goto LAB_003a8db4;
    }
    uVar9 = (ulong)uVar1;
    if (uVar9 <= *(ulong *)(param_1 + 0xea0)) {
      FUN_0043b170(*(undefined8 *)(param_1 + 0x500));
      uVar4 = FUN_0043b160();
      if (((uVar4 & 0xf0007) != 2) || (uVar9 < *(ulong *)(param_1 + 0xea0))) {
        FUN_0043b170(*(undefined8 *)(param_1 + 0x500));
        uVar4 = FUN_0043b160();
        if ((uVar4 & 0xf0007) == 2) {
          iVar3 = FUN_003a7cd0(auStack_c0,lVar5,uVar9);
          if (iVar3 == 0) {
            uVar6 = 0x50;
            uVar7 = 0x44;
            uVar8 = 0x6cf;
            goto LAB_003a8db4;
          }
          lVar10 = *(long *)(param_1 + 0xe98) - uVar9;
        }
        else {
          lVar10 = *(long *)(param_1 + 0xe98) - uVar9;
          puVar12 = (undefined1 *)(*(long *)(param_1 + 0xeb0) + lVar10);
        }
        *(long *)(param_1 + 0xe98) = lVar10;
        iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 8))
                          (param_1,lVar5,auStack_80,0);
        if (((puVar12 == (undefined1 *)0x0) || (iVar3 == 0)) ||
           (iVar3 = FUN_003f6d80(auStack_80,puVar12,uVar9), iVar3 != 0)) {
          iVar2 = -1;
        }
        if (*(ulong *)(param_1 + 0xe98) <= uVar9 + 0x4400) goto LAB_003a9060;
        goto LAB_003a9098;
      }
    }
    uVar6 = 0x32;
    uVar7 = 0xa0;
    uVar8 = 0x6c1;
    goto LAB_003a8db4;
  }
LAB_003a9060:
  if (iVar2 < 0) {
LAB_003a9098:
    uVar6 = 0;
LAB_003a909c:
    *(undefined8 *)(param_1 + 0xe98) = 0;
    *(undefined8 *)(param_1 + 0x1898) = 0;
    return uVar6;
  }
  lVar5 = *(long *)(param_1 + 0x528);
  if (lVar5 == 0) {
LAB_003a90f8:
    if ((*(long *)(param_1 + 0x5d0) == 0) ||
       (uVar1 = *(byte *)(*(long *)(param_1 + 0x5d0) + 0x250) - 1, 3 < uVar1)) {
      if (*(ulong *)(param_1 + 0xe98) < 0x4001) goto LAB_003a9124;
    }
    else if (*(ulong *)(param_1 + 0xe98) <= (ulong)(uint)(0x200 << (ulong)(uVar1 & 0x1f))) {
LAB_003a9124:
      *(undefined8 *)(param_1 + 0xea8) = 0;
      *(undefined8 *)(param_1 + 0x1898) = 0;
      FUN_003a43e0(param_1,param_2);
      return 1;
    }
    uVar6 = 0x16;
    uVar7 = 0x92;
    uVar8 = 0x701;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0xe98);
    if (0x4400 < uVar9) {
      uVar6 = 0x16;
      uVar7 = 0x8c;
      uVar8 = 0x6f0;
      goto LAB_003a8db4;
    }
    lVar10 = *(long *)(param_1 + 0xec0);
    if (lVar10 == 0) {
      lVar10 = FUN_00452c30(0x4540,"external/openssl/ssl/record/ssl3_record.c",799);
      *(long *)(param_1 + 0xec0) = lVar10;
      if (lVar10 != 0) {
        lVar5 = *(long *)(param_1 + 0x528);
        uVar9 = *(ulong *)(param_1 + 0xe98);
        goto LAB_003a90d8;
      }
    }
    else {
LAB_003a90d8:
      uVar1 = FUN_003f4120(lVar5,lVar10,0x4000,*(undefined8 *)(param_1 + 0xeb0),uVar9);
      if (-1 < (int)uVar1) {
        *(ulong *)(param_1 + 0xe98) = (ulong)uVar1;
        *(undefined8 *)(param_1 + 0xeb0) = *(undefined8 *)(param_1 + 0xec0);
        goto LAB_003a90f8;
      }
    }
    uVar7 = 0x6b;
    uVar8 = 0x6f5;
    uVar6 = 0x1e;
  }
LAB_003a8db4:
  FUN_003c3950(param_1,uVar6,0x101,uVar7,"external/openssl/ssl/record/ssl3_record.c",uVar8);
  return 0;
}


