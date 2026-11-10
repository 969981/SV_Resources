/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051b040; name: FUN_0051b040
 */


byte * FUN_0051b040(long param_1,ulong *param_2,undefined8 *param_3,byte *param_4,long *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  void *__src;
  byte *__src_00;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  size_t sVar21;
  long lVar22;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  undefined **local_60;
  long *plStack_58;
  
  lVar9 = FUN_004a5124();
  lVar20 = *(long *)(lVar9 + 0x28);
  lVar9 = FUN_004a5124(param_1);
  lVar22 = *(long *)(lVar9 + 0x28);
  lVar9 = lVar22 + 0x98;
  iVar6 = FUN_0051d170(lVar20,param_2);
  iVar7 = FUN_0051d310(lVar9,param_3);
  uVar8 = iVar6 + iVar7 + 2;
  if ((byte *)*param_5 <= param_4) {
    param_4 = (byte *)FUN_0052c6d8(param_5,param_4);
  }
  uVar1 = *(uint *)(param_1 + 0x44);
  uVar12 = uVar1 << 3 | 2;
  if (uVar12 < 0x80) {
    pbVar17 = param_4 + 1;
    *param_4 = (byte)uVar12;
joined_r0x0051b1c8:
    if (0x7f < uVar8) goto LAB_0051b1cc;
LAB_0051b0d4:
    pbVar18 = pbVar17 + 1;
    *pbVar17 = (byte)uVar8;
    if (pbVar18 < (byte *)*param_5) goto LAB_0051b0e4;
LAB_0051b228:
    pbVar18 = (byte *)FUN_0052c6d8(param_5,pbVar18);
    puVar10 = *(ulong **)(lVar20 + 0x30);
    puVar5 = PTR_LAB_047cd728;
  }
  else {
    *param_4 = (byte)(uVar1 << 3) | 0x82;
    if ((uVar1 & 0x1fffffff) >> 0xb != 0) {
      pbVar17 = param_4 + 2;
      uVar12 = uVar1 >> 4 & 0x1ffffff;
      do {
        pbVar18 = pbVar17;
        uVar1 = uVar12 >> 7;
        pbVar18[-1] = (byte)uVar12 | 0x80;
        pbVar17 = pbVar18 + 1;
        uVar4 = uVar12 >> 0xe;
        uVar12 = uVar1;
      } while (uVar4 != 0);
      *pbVar18 = (byte)uVar1;
      goto joined_r0x0051b1c8;
    }
    param_4[1] = (byte)(uVar1 >> 4);
    pbVar17 = param_4 + 2;
    if (uVar8 < 0x80) goto LAB_0051b0d4;
LAB_0051b1cc:
    *pbVar17 = (byte)uVar8 | 0x80;
    if (uVar8 >> 0xe == 0) {
      pbVar17[1] = (byte)(uVar8 >> 7);
      pbVar18 = pbVar17 + 2;
      if (pbVar18 < (byte *)*param_5) goto LAB_0051b0e4;
      goto LAB_0051b228;
    }
    pbVar18 = pbVar17 + 2;
    uVar8 = uVar8 >> 7;
    do {
      pbVar17 = pbVar18;
      uVar12 = uVar8 >> 7;
      pbVar17[-1] = (byte)uVar8 | 0x80;
      pbVar18 = pbVar17 + 1;
      uVar1 = uVar8 >> 0xe;
      uVar8 = uVar12;
    } while (uVar1 != 0);
    *pbVar17 = (byte)uVar12;
    if ((byte *)*param_5 <= pbVar18) goto LAB_0051b228;
LAB_0051b0e4:
    puVar10 = *(ulong **)(lVar20 + 0x30);
    puVar5 = PTR_LAB_047cd728;
  }
  PTR_LAB_047cd728 = puVar5;
  if ((puVar10 != (ulong *)0x0) &&
     (local_78 = lVar20, puStack_70 = puVar5, *puVar10 != 0xffffffffffffffff)) {
    local_60 = &puStack_70;
    plStack_58 = &local_78;
    local_68 = &local_60;
    std::__call_once(puVar10,&local_68,(_func_void_void_ptr *)&LAB_0051d550);
  }
  switch(*(undefined4 *)(lVar20 + 0x38)) {
  case 3:
    uVar13 = *param_2;
    *pbVar18 = 8;
    if (uVar13 < 0x80) {
LAB_0051b44c:
      pbVar18[1] = (byte)uVar13;
      pbVar18 = pbVar18 + 2;
      if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
    }
    else {
      pbVar18[1] = (byte)uVar13 | 0x80;
      uVar14 = uVar13 >> 7;
      if (uVar13 >> 0xe != 0) {
        pbVar18 = pbVar18 + 3;
        do {
          uVar13 = uVar14 >> 7;
          pbVar18[-1] = (byte)uVar14 | 0x80;
          pbVar18 = pbVar18 + 1;
          uVar16 = uVar14 >> 0xe;
          uVar14 = uVar13;
        } while (uVar16 != 0);
        goto LAB_0051b368;
      }
LAB_0051b504:
      pbVar18[2] = (byte)uVar14;
      pbVar18 = pbVar18 + 3;
      if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
    }
    break;
  case 4:
    uVar13 = *param_2;
    *pbVar18 = 8;
    if (uVar13 < 0x80) goto LAB_0051b44c;
    pbVar18[1] = (byte)uVar13 | 0x80;
    uVar14 = uVar13 >> 7;
    if (uVar13 >> 0xe == 0) goto LAB_0051b504;
    pbVar18 = pbVar18 + 3;
    do {
      uVar13 = uVar14 >> 7;
      pbVar18[-1] = (byte)uVar14 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar14 >> 0xe;
      uVar14 = uVar13;
    } while (uVar16 != 0);
    goto LAB_0051b368;
  case 5:
    uVar14 = *param_2;
    uVar8 = (uint)uVar14;
    uVar13 = (ulong)(int)uVar8;
    *pbVar18 = 8;
    if (uVar8 < 0x80) goto LAB_0051b44c;
    pbVar18[1] = (byte)uVar14 | 0x80;
    uVar14 = uVar13 >> 7;
    if ((uVar13 >> 0xe & 0x3ffff) == 0) goto LAB_0051b504;
    pbVar18 = pbVar18 + 3;
    do {
      uVar13 = uVar14 >> 7;
      pbVar18[-1] = (byte)uVar14 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar14 >> 0xe;
      uVar14 = uVar13;
    } while (uVar16 != 0);
LAB_0051b368:
    pbVar18[-1] = (byte)uVar13;
    if ((byte *)*param_5 <= pbVar18) break;
LAB_0051b580:
    puVar10 = *(ulong **)(lVar22 + 200);
    goto joined_r0x0051b584;
  case 6:
  case 0x10:
    uVar13 = *param_2;
    *pbVar18 = 9;
    *(ulong *)(pbVar18 + 1) = uVar13;
    pbVar18 = pbVar18 + 9;
    if ((byte *)*param_5 <= pbVar18) break;
    goto LAB_0051b580;
  case 7:
  case 0xf:
    uVar13 = *param_2;
    *pbVar18 = 0xd;
    *(uint *)(pbVar18 + 1) = (uint)uVar13;
    pbVar18 = pbVar18 + 5;
    if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
    break;
  case 8:
    uVar13 = *param_2;
    *pbVar18 = 8;
    pbVar18[1] = (byte)uVar13;
    pbVar18 = pbVar18 + 2;
    if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
    break;
  case 9:
    if (((byte)*param_2 & 1) == 0) {
      sVar21 = (size_t)(byte)((byte)*param_2 >> 1);
LAB_0051b470:
      if ((long)sVar21 <= (*param_5 - (long)pbVar18) + 0xe) {
        *pbVar18 = 10;
        pbVar18[1] = (byte)sVar21;
        __src = (void *)param_2[2];
        if ((*param_2 & 1) == 0) {
          __src = (void *)((long)param_2 + 1);
        }
        memcpy(pbVar18 + 2,__src,sVar21);
        pbVar18 = pbVar18 + 2 + sVar21;
        if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
        break;
      }
    }
    else {
      sVar21 = param_2[1];
      if ((long)sVar21 < 0x80) goto LAB_0051b470;
    }
    pbVar18 = (byte *)FUN_0052cbdc(param_5,1,param_2,pbVar18);
    if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
    break;
  default:
    goto switchD_0051b14c_caseD_a;
  case 0xd:
    uVar13 = *param_2;
    uVar8 = (uint)uVar13;
    *pbVar18 = 8;
    if (uVar8 < 0x80) {
LAB_0051b418:
      pbVar18[1] = (byte)uVar8;
      pbVar18 = pbVar18 + 2;
      if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
    }
    else {
      pbVar18[1] = (byte)uVar13 | 0x80;
      uVar12 = uVar8 >> 7;
      if (uVar8 >> 0xe != 0) {
        pbVar18 = pbVar18 + 3;
        do {
          uVar8 = uVar12 >> 7;
          pbVar18[-1] = (byte)uVar12 | 0x80;
          pbVar18 = pbVar18 + 1;
          uVar1 = uVar12 >> 0xe;
          uVar12 = uVar8;
        } while (uVar1 != 0);
        goto LAB_0051b53c;
      }
LAB_0051b4d8:
      pbVar18[2] = (byte)uVar12;
      pbVar18 = pbVar18 + 3;
      if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
    }
    break;
  case 0x11:
    uVar13 = *param_2;
    *pbVar18 = 8;
    uVar8 = (uint)uVar13 << 1 ^ (int)(uint)uVar13 >> 0x1f;
    if (uVar8 < 0x80) goto LAB_0051b418;
    pbVar18[1] = (byte)uVar8 | 0x80;
    uVar12 = uVar8 >> 7;
    if (uVar8 >> 0xe == 0) goto LAB_0051b4d8;
    pbVar18 = pbVar18 + 3;
    do {
      uVar8 = uVar12 >> 7;
      pbVar18[-1] = (byte)uVar12 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar1 = uVar12 >> 0xe;
      uVar12 = uVar8;
    } while (uVar1 != 0);
LAB_0051b53c:
    pbVar18[-1] = (byte)uVar8;
    if (pbVar18 < (byte *)*param_5) goto LAB_0051b580;
    break;
  case 0x12:
    uVar13 = *param_2;
    *pbVar18 = 8;
    uVar13 = uVar13 << 1 ^ (long)uVar13 >> 0x3f;
    if (uVar13 < 0x80) goto LAB_0051b44c;
    pbVar18[1] = (byte)uVar13 | 0x80;
    uVar14 = uVar13 >> 7;
    if (uVar13 >> 0xe == 0) goto LAB_0051b504;
    pbVar18 = pbVar18 + 3;
    do {
      pbVar17 = pbVar18;
      uVar13 = uVar14 >> 7;
      pbVar17[-1] = (byte)uVar14 | 0x80;
      pbVar18 = pbVar17 + 1;
      uVar16 = uVar14 >> 0xe;
      uVar14 = uVar13;
    } while (uVar16 != 0);
    *pbVar17 = (byte)uVar13;
switchD_0051b14c_caseD_a:
    if ((byte *)*param_5 <= pbVar18) break;
    goto LAB_0051b580;
  }
  pbVar18 = (byte *)FUN_0052c6d8(param_5,pbVar18);
  puVar10 = *(ulong **)(lVar22 + 200);
joined_r0x0051b584:
  if ((puVar10 != (ulong *)0x0) &&
     (local_78 = lVar9, puStack_70 = puVar5, *puVar10 != 0xffffffffffffffff)) {
    local_60 = &puStack_70;
    plStack_58 = &local_78;
    local_68 = &local_60;
    std::__call_once(puVar10,&local_68,(_func_void_void_ptr *)&LAB_0051d550);
  }
  switch(*(undefined4 *)(lVar22 + 0xd0)) {
  case 1:
  case 6:
  case 0x10:
    uVar15 = *(undefined8 *)*param_3;
    *pbVar18 = 0x11;
    *(undefined8 *)(pbVar18 + 1) = uVar15;
    pbVar18 = pbVar18 + 9;
    break;
  case 2:
  case 7:
  case 0xf:
    uVar2 = *(undefined4 *)*param_3;
    *pbVar18 = 0x15;
    *(undefined4 *)(pbVar18 + 1) = uVar2;
    pbVar18 = pbVar18 + 5;
    break;
  case 3:
    uVar13 = *(ulong *)*param_3;
    *pbVar18 = 0x10;
    if (uVar13 < 0x80) {
LAB_0051b894:
      pbVar18[1] = (byte)uVar13;
      return pbVar18 + 2;
    }
    pbVar18[1] = (byte)uVar13 | 0x80;
    uVar14 = uVar13 >> 7;
    if (uVar13 >> 0xe == 0) {
LAB_0051b948:
      pbVar18[2] = (byte)uVar14;
      return pbVar18 + 3;
    }
    pbVar18 = pbVar18 + 3;
    do {
      uVar13 = uVar14 >> 7;
      pbVar18[-1] = (byte)uVar14 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar14 >> 0xe;
      uVar14 = uVar13;
    } while (uVar16 != 0);
    goto LAB_0051b9dc;
  case 4:
    uVar13 = *(ulong *)*param_3;
    *pbVar18 = 0x10;
    if (uVar13 < 0x80) goto LAB_0051b894;
    pbVar18[1] = (byte)uVar13 | 0x80;
    uVar14 = uVar13 >> 7;
    if (uVar13 >> 0xe == 0) goto LAB_0051b948;
    pbVar18 = pbVar18 + 3;
    do {
      uVar13 = uVar14 >> 7;
      pbVar18[-1] = (byte)uVar14 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar14 >> 0xe;
      uVar14 = uVar13;
    } while (uVar16 != 0);
    goto LAB_0051b9dc;
  case 5:
    uVar8 = *(uint *)*param_3;
    uVar13 = (ulong)(int)uVar8;
    *pbVar18 = 0x10;
    if (uVar8 < 0x80) goto LAB_0051b894;
    pbVar18[1] = (byte)uVar8 | 0x80;
    uVar14 = uVar13 >> 7;
    if ((uVar13 >> 0xe & 0x3ffff) == 0) goto LAB_0051b948;
    pbVar18 = pbVar18 + 3;
    do {
      uVar13 = uVar14 >> 7;
      pbVar18[-1] = (byte)uVar14 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar14 >> 0xe;
      uVar14 = uVar13;
    } while (uVar16 != 0);
    goto LAB_0051b9dc;
  case 8:
    bVar3 = *(byte *)*param_3;
    *pbVar18 = 0x10;
    pbVar18[1] = bVar3;
    pbVar18 = pbVar18 + 2;
    break;
  case 9:
  case 0xc:
    pbVar17 = (byte *)*param_3;
    if ((*pbVar17 & 1) == 0) {
      sVar21 = (size_t)(*pbVar17 >> 1);
LAB_0051b8ac:
      if ((long)sVar21 <= (*param_5 - (long)pbVar18) + 0xe) {
        *pbVar18 = 0x12;
        pbVar18[1] = (byte)sVar21;
        __src_00 = *(byte **)(pbVar17 + 0x10);
        if ((*pbVar17 & 1) == 0) {
          __src_00 = pbVar17 + 1;
        }
        memcpy(pbVar18 + 2,__src_00,sVar21);
        return pbVar18 + 2 + sVar21;
      }
    }
    else {
      sVar21 = *(size_t *)(pbVar17 + 8);
      if ((long)sVar21 < 0x80) goto LAB_0051b8ac;
    }
    pbVar18 = (byte *)FUN_0052cbdc(param_5,2,pbVar17,pbVar18);
    break;
  case 10:
    plVar19 = (long *)*param_3;
    *pbVar18 = 0x13;
    puVar11 = (undefined1 *)(**(code **)(*plVar19 + 0x60))(plVar19,pbVar18 + 1,param_5);
    if ((undefined1 *)*param_5 <= puVar11) {
      puVar11 = (undefined1 *)FUN_0052c6d8(param_5,puVar11);
    }
    pbVar18 = puVar11 + 1;
    *puVar11 = 0x14;
    break;
  case 0xb:
    plVar19 = (long *)*param_3;
    *pbVar18 = 0x12;
    uVar8 = (**(code **)(*plVar19 + 0x50))(plVar19);
    if (uVar8 < 0x80) {
      pbVar18[1] = (byte)uVar8;
      pbVar18 = pbVar18 + 2;
    }
    else {
      pbVar18[1] = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        pbVar18[2] = (byte)(uVar8 >> 7);
        pbVar18 = pbVar18 + 3;
      }
      else {
        pbVar18 = pbVar18 + 3;
        uVar8 = uVar8 >> 7;
        do {
          pbVar17 = pbVar18;
          uVar12 = uVar8 >> 7;
          pbVar17[-1] = (byte)uVar8 | 0x80;
          pbVar18 = pbVar17 + 1;
          uVar1 = uVar8 >> 0xe;
          uVar8 = uVar12;
        } while (uVar1 != 0);
        *pbVar17 = (byte)uVar12;
      }
    }
    pbVar18 = (byte *)(**(code **)(*plVar19 + 0x60))(plVar19,pbVar18,param_5);
    break;
  case 0xd:
    uVar8 = *(uint *)*param_3;
    *pbVar18 = 0x10;
    if (uVar8 < 0x80) {
LAB_0051b868:
      pbVar18[1] = (byte)uVar8;
      return pbVar18 + 2;
    }
    pbVar18[1] = (byte)uVar8 | 0x80;
    uVar12 = uVar8 >> 7;
    if (uVar8 >> 0xe == 0) {
LAB_0051b928:
      pbVar18[2] = (byte)uVar12;
      return pbVar18 + 3;
    }
    pbVar18 = pbVar18 + 3;
    do {
      uVar8 = uVar12 >> 7;
      pbVar18[-1] = (byte)uVar12 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar1 = uVar12 >> 0xe;
      uVar12 = uVar8;
    } while (uVar1 != 0);
    goto LAB_0051b9b4;
  case 0xe:
    uVar8 = *(uint *)*param_3;
    uVar13 = (ulong)(int)uVar8;
    *pbVar18 = 0x10;
    if (uVar8 < 0x80) goto LAB_0051b894;
    pbVar18[1] = (byte)uVar8 | 0x80;
    uVar14 = uVar13 >> 7;
    if ((uVar13 >> 0xe & 0x3ffff) == 0) goto LAB_0051b948;
    pbVar18 = pbVar18 + 3;
    do {
      uVar13 = uVar14 >> 7;
      pbVar18[-1] = (byte)uVar14 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar14 >> 0xe;
      uVar14 = uVar13;
    } while (uVar16 != 0);
    goto LAB_0051b9dc;
  case 0x11:
    iVar6 = *(int *)*param_3;
    *pbVar18 = 0x10;
    uVar8 = iVar6 << 1 ^ iVar6 >> 0x1f;
    if (uVar8 < 0x80) goto LAB_0051b868;
    pbVar18[1] = (byte)uVar8 | 0x80;
    uVar12 = uVar8 >> 7;
    if (uVar8 >> 0xe == 0) goto LAB_0051b928;
    pbVar18 = pbVar18 + 3;
    do {
      uVar8 = uVar12 >> 7;
      pbVar18[-1] = (byte)uVar12 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar1 = uVar12 >> 0xe;
      uVar12 = uVar8;
    } while (uVar1 != 0);
LAB_0051b9b4:
    pbVar18[-1] = (byte)uVar8;
    break;
  case 0x12:
    lVar9 = *(long *)*param_3;
    *pbVar18 = 0x10;
    uVar13 = lVar9 << 1 ^ lVar9 >> 0x3f;
    if (uVar13 < 0x80) goto LAB_0051b894;
    pbVar18[1] = (byte)uVar13 | 0x80;
    uVar14 = uVar13 >> 7;
    if (uVar13 >> 0xe == 0) goto LAB_0051b948;
    pbVar18 = pbVar18 + 3;
    do {
      uVar13 = uVar14 >> 7;
      pbVar18[-1] = (byte)uVar14 | 0x80;
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar14 >> 0xe;
      uVar14 = uVar13;
    } while (uVar16 != 0);
LAB_0051b9dc:
    pbVar18[-1] = (byte)uVar13;
  }
  return pbVar18;
}


