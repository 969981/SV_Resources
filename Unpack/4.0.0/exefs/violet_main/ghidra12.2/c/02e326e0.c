/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e326e0; name: FUN_02e326e0
 */


void FUN_02e326e0(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined2 *puVar18;
  long lVar19;
  
  if (*(char *)((long)param_3 + 0x19) == '\0') {
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = (**(code **)(*(long *)param_3[1] + 0x98))();
    FUN_0167bf90(uVar16,uVar10,0);
  }
  (**(code **)(*(long *)param_3[1] + 0x508))((long *)param_3[1],3);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_02e327dc:
    bVar5 = false;
  }
  else {
    lVar17 = *(long *)(param_1 + 0x10);
    iVar11 = (**(code **)(*(long *)param_3[1] + 0x98))();
    lVar17 = *(long *)(lVar17 + 0x310);
    if (((*(byte *)(*(long *)(*(long *)(lVar17 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (*(int *)(lVar17 + 0x18) == 0)) {
      uVar16 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x30),1);
      plVar14 = (long *)FUN_0124c614(uVar16,0);
      if (plVar14 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar14 + 0x98))();
        *(undefined4 *)(lVar17 + 0x18) = uVar10;
      }
    }
    if (*(int *)(lVar17 + 0x18) != iVar11) goto LAB_02e327dc;
    if ((*(char *)((long)param_3 + 0x19) == '\0') &&
       (uVar12 = (**(code **)(*(long *)param_3[1] + 0x220))((long *)param_3[1],0x1a),
       (uVar12 & 1) != 0)) {
      sVar8 = (**(code **)(*(long *)param_3[1] + 1000))();
      bVar5 = *(short *)param_3[2] == sVar8;
    }
    else {
      bVar5 = true;
    }
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
    lVar17 = *(long *)(param_1 + 0x10);
    uVar10 = (**(code **)(*(long *)param_3[1] + 0x98))();
    piVar13 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x290) + 8) + 0x50),
                                  uVar10);
    if (piVar13 == (int *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = *piVar13 == 1;
    }
    bVar5 = (bool)(bVar5 | bVar6);
  }
  if (((!bVar5) && ((char)param_3[3] == '\0')) &&
     ((*(char *)((long)param_3 + 0x1a) == '\0' ||
      (sVar8 = (**(code **)(*(long *)param_3[1] + 0x260))(), *(short *)param_3[2] != sVar8)))) {
    if (*(char *)((long)param_3 + 0x1c) == '\x02') {
      sVar9 = (**(code **)(*(long *)param_3[1] + 0x268))();
      sVar8 = *(short *)param_3[2];
      if (sVar8 == sVar9) goto LAB_02e328a8;
    }
    else {
      sVar8 = *(short *)param_3[2];
    }
    if (sVar8 != 0xa5) {
      cVar7 = (**(code **)(*(long *)param_3[1] + 0x540))((long *)param_3[1],3);
      if ((cVar7 != '\0') && ((*(byte *)(*param_3 + 4) >> 3 & 1) == 0)) {
        FUN_01243a30(*(undefined8 *)(param_1 + 0x20),param_3[1],3,0);
      }
      goto LAB_02e3293c;
    }
  }
LAB_02e328a8:
  lVar19 = *(long *)(param_1 + 0x20);
  uVar10 = (**(code **)(*(long *)param_3[1] + 0x98))();
  cVar7 = *(char *)((long)param_3 + 0x19);
  uVar3 = *(undefined2 *)((long)param_3 + 0x1e);
  lVar17 = param_3[4];
  uVar4 = *(undefined2 *)param_3[2];
  uVar1 = *(undefined1 *)((undefined2 *)param_3[2] + 4);
  plVar14 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0x10) + 0x30),
                                 uVar10);
  (**(code **)(*plVar14 + 0x3f8))(plVar14,(char)lVar17,uVar1,cVar7 != '\0',uVar4,uVar3);
  FUN_0129aff0(*(undefined8 *)(lVar19 + 0x18),0x1d,uVar10,(char)lVar17,uVar1,cVar7,0,uVar4,uVar3);
LAB_02e3293c:
  if ((((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) == 0) &&
      (*(char *)((long)param_3 + 0x19) != '\0')) && (sVar8 = *(short *)param_3[2], sVar8 != 0xa5)) {
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar16 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar16;
    piVar13 = (int *)FUN_00cf60cc(uVar16,sVar8);
    if (((0xc < *(ushort *)((long)piVar13 - (long)*piVar13)) &&
        (uVar12 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[6], uVar12 != 0)) &&
       ((*(char *)((long)piVar13 + uVar12) != '\0' && ((*(byte *)((long)param_3 + 0x1c) | 4) == 4)))
       ) {
      bVar2 = *(byte *)((undefined2 *)param_3[2] + 4);
      uVar15 = (uint)bVar2;
      if (bVar2 == 0x12) {
        uVar15 = FUN_02e2219c(param_3[1],0x12,*(undefined2 *)param_3[2]);
      }
      lVar17 = *(long *)(param_1 + 0x20);
      uVar10 = (**(code **)(*(long *)param_3[1] + 0x98))();
      FUN_02e35a50(*(undefined8 *)(lVar17 + 0x20),uVar10,uVar15);
      FUN_0129aff0(*(undefined8 *)(lVar17 + 0x18),0x86,uVar10,uVar15);
    }
  }
  if ((*(char *)((long)param_3 + 0x1b) != '\0') &&
     (iVar11 = (**(code **)(*(long *)param_3[1] + 0x4e8))(), iVar11 != 0x20)) {
    FUN_0298a9c8(param_1,param_3[1]);
  }
  uVar12 = (**(code **)(*(long *)param_3[1] + 0x510))((long *)param_3[1],0xb);
  if ((uVar12 & 1) != 0) {
    lVar17 = *(long *)(param_1 + 0x20);
    uVar10 = (**(code **)(*(long *)param_3[1] + 0x98))();
    FUN_0129aff0(*(undefined8 *)(lVar17 + 0x18),0x8c,uVar10,0);
    FUN_0298a9f8(param_1,param_3[1]);
  }
  puVar18 = (undefined2 *)param_3[2];
  lVar17 = *param_3;
  plVar14 = (long *)param_3[1];
  cVar7 = *(char *)((long)param_3 + 0x19);
  FUN_02931890(*(undefined8 *)(param_1 + 0x38),plVar14,*puVar18,cVar7,lVar17);
  uVar12 = (**(code **)(*plVar14 + 0x4d0))(plVar14,0x14);
  if ((((uVar12 & 1) != 0) && (*(char *)(puVar18 + 4) == '\f')) &&
     (uVar12 = FUN_02931c94(*(undefined8 *)(param_1 + 0x38),plVar14,puVar18,cVar7 != '\0',lVar17),
     (uVar12 & 1) != 0)) {
    FUN_01240198(*(undefined8 *)(param_1 + 0x20),plVar14,0x14);
  }
  lVar17 = *(long *)(param_1 + 0x20);
  uVar10 = (**(code **)(*(long *)param_3[1] + 0x98))();
  lVar19 = *(long *)(lVar17 + 0x20);
  uVar3 = *(undefined2 *)((long)param_3 + 0x1e);
  uVar16 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar19 + 0x10) + 0x30),uVar10);
  FUN_014dc030(*(undefined8 *)(lVar19 + 0x18),uVar16,uVar3);
  FUN_0129aff0(*(undefined8 *)(lVar17 + 0x18),0x5b,uVar10,uVar3);
  lVar17 = *(long *)(param_1 + 0x20);
  uVar10 = (**(code **)(*(long *)param_3[1] + 0x98))();
  lVar19 = *(long *)(lVar17 + 0x20);
  uVar3 = *(undefined2 *)param_3[2];
  uVar16 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar19 + 0x10) + 0x30),uVar10);
  FUN_014dc030(*(undefined8 *)(lVar19 + 0x18),uVar16,uVar3);
  FUN_0129aff0(*(undefined8 *)(lVar17 + 0x18),0x5b,uVar10,uVar3);
  return;
}


