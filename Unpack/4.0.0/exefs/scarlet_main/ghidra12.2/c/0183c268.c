/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183c268; name: FUN_0183c268
 */


undefined8
FUN_0183c268(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined8 param_5,
            long *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long local_80 [6];
  
  lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x290);
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  puVar6 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x50
                                 ),uVar2);
  if (puVar6 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar6 & 0xff;
    if (4 < (int)*puVar6) {
      uVar4 = 0;
    }
  }
  lVar10 = *(long *)(lVar13 + 8);
  uVar7 = FUN_01465b00(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),uVar4,0);
  lVar13 = *(long *)(lVar13 + 8);
  iVar5 = *(int *)(lVar13 + 0x36c);
  uVar4 = (uint)(uVar7 & 0xff);
  if (iVar5 == 2) {
    if (4 < uVar4) goto LAB_0183c508;
    puVar11 = &DAT_03d6a45a;
  }
  else if (iVar5 == 1) {
    if (4 < uVar4) {
LAB_0183c508:
      uVar9 = 2;
      goto LAB_0183c334;
    }
    puVar11 = &DAT_03d6a455;
  }
  else {
    if ((iVar5 != 0) || (4 < uVar4)) goto LAB_0183c508;
    puVar11 = &DAT_03d6a450;
  }
  uVar9 = puVar11[uVar7 & 0xff];
LAB_0183c334:
  uVar7 = FUN_0123aa70(iVar5,*(undefined1 *)(lVar13 + 0x370),uVar9);
  if (((uVar7 & 0xfe) != 0) && (*(char *)((long)param_6 + 0xa6) == '\x01')) {
    plVar14 = (long *)*param_6;
    uVar7 = (**(code **)(*plVar14 + 0x200))(plVar14);
    if ((uVar7 & 1) == 0) {
      return 1;
    }
    uVar7 = FUN_018d5d98(param_1,param_3,plVar14);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x10);
      iVar3 = (**(code **)(*param_3 + 0x98))(param_3);
      lVar13 = *(long *)(lVar13 + 0x310);
      iVar5 = *(int *)(lVar13 + 0x18);
      if (((*(byte *)(*(long *)(*(long *)(lVar13 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
         (iVar5 == 0)) {
        lVar10 = *(long *)(*(long *)(lVar13 + 0x10) + 0x30);
        if (*(char *)(lVar10 + 0x90) == '\0') {
          iVar5 = 0;
        }
        else {
          plVar8 = *(long **)(lVar10 + 0x60);
          iVar5 = 0;
          if (plVar8 != (long *)0x0) {
            iVar5 = (**(code **)(*plVar8 + 0x98))();
            *(int *)(lVar13 + 0x18) = iVar5;
          }
        }
      }
      if (iVar5 == iVar3) {
        return 0;
      }
    }
    FUN_0167bf08(param_6,plVar14);
    uVar4 = FUN_01238ae0(param_1,local_80,6,param_3,param_4);
    if ((uVar4 & 0xff) == 0) {
      return 0;
    }
    if ((uVar4 & 0xff) == 1) {
      if (local_80[0] == 0) {
        return 0;
      }
    }
    else {
      local_80[0] = FUN_02986e3c(param_1,local_80,uVar4);
      if (local_80[0] == 0) {
        return 0;
      }
    }
    uVar7 = (ulong)*(byte *)((long)param_6 + 0xa6);
    if (uVar7 < 0xb) {
      if (*(byte *)((long)param_6 + 0xa6) != 0) {
        plVar14 = param_6;
        uVar12 = uVar7;
        do {
          if (*plVar14 == local_80[0]) {
            return 1;
          }
          uVar12 = uVar12 - 1;
          plVar14 = plVar14 + 1;
        } while (uVar12 != 0);
      }
      param_6[uVar7] = local_80[0];
      *(undefined1 *)((long)param_6 + (ulong)*(byte *)((long)param_6 + 0xa6) + 0x84) = 0;
      *(undefined2 *)((long)param_6 + (ulong)*(byte *)((long)param_6 + 0xa6) * 2 + 0x58) = 0;
      *(undefined2 *)((long)param_6 + (ulong)*(byte *)((long)param_6 + 0xa6) * 2 + 0x6e) = 0;
      bVar1 = *(char *)((long)param_6 + 0xa6) + 1;
      *(byte *)((long)param_6 + 0xa6) = bVar1;
      if (*(byte *)((long)param_6 + 0xa7) < bVar1) {
        *(byte *)((long)param_6 + 0xa7) = bVar1;
      }
    }
  }
  return 1;
}


