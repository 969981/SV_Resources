/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c060f8; name: FUN_00c060f8
 */


void FUN_00c060f8(long param_1,long *param_2,undefined8 *param_3)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  int *piVar26;
  long *plVar27;
  undefined1 *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  plVar11 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if ((((*(char *)(param_1 + 0x44) != '\0') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x50) != '\0')) &&
      ((*(uint *)(param_1 + 0x3c) & 0xfffffffe) == 10)) && (*(int *)(param_1 + 0x40) != 3)) {
    plVar11 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
    piVar26 = (int *)(param_3 + 2);
    iVar20 = *piVar26;
    if (iVar20 < 5) {
      local_68 = CONCAT71(local_68._1_7_,0xb);
      if (iVar20 < 1) {
        iVar17 = 1;
        puVar25 = &local_68;
        puVar15 = (undefined1 *)param_3[1];
        do {
          memcpy(puVar15,puVar25,(long)iVar20);
          iVar3 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,piVar26);
          if ((uVar14 & 1) == 0) {
            puVar15 = (undefined1 *)0x0;
            param_3[1] = 0;
            iVar17 = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c07620;
          }
          iVar20 = *(int *)(param_3 + 2);
          iVar17 = iVar17 - iVar3;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar3);
          param_3[1] = local_80;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar20;
          puVar15 = local_80;
        } while (iVar20 < iVar17);
      }
      else {
        puVar25 = &local_68;
        iVar17 = 1;
        puVar15 = (undefined1 *)param_3[1];
      }
      memcpy(puVar15,puVar25,(long)iVar17);
      puVar15 = (undefined1 *)(param_3[1] + (long)iVar17);
      param_3[1] = puVar15;
      iVar17 = *(int *)(param_3 + 2) - iVar17;
    }
    else {
      *(undefined1 *)param_3[1] = 0xb;
      puVar15 = (undefined1 *)(param_3[1] + 1);
      param_3[1] = puVar15;
      iVar17 = *(int *)(param_3 + 2) + -1;
    }
    *(int *)(param_3 + 2) = iVar17;
LAB_00c07620:
    if (iVar17 < 5) {
      local_68 = CONCAT71(local_68._1_7_,0x10);
      if (iVar17 < 1) {
        iVar20 = 1;
        puVar25 = &local_68;
        do {
          memcpy(puVar15,puVar25,(long)iVar17);
          iVar3 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,piVar26);
          if ((uVar14 & 1) == 0) {
            pbVar21 = (byte *)0x0;
            param_3[1] = 0;
            iVar20 = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c076e0;
          }
          iVar17 = *(int *)(param_3 + 2);
          iVar20 = iVar20 - iVar3;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar3);
          param_3[1] = local_80;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar17;
          puVar15 = local_80;
        } while (iVar17 < iVar20);
      }
      else {
        puVar25 = &local_68;
        iVar20 = 1;
      }
      memcpy(puVar15,puVar25,(long)iVar20);
      pbVar21 = (byte *)(param_3[1] + (long)iVar20);
      iVar20 = *(int *)(param_3 + 2) - iVar20;
      param_3[1] = pbVar21;
    }
    else {
      *puVar15 = 0x10;
      pbVar21 = (byte *)(param_3[1] + 1);
      param_3[1] = pbVar21;
      iVar20 = *(int *)(param_3 + 2) + -1;
    }
    *(int *)(param_3 + 2) = iVar20;
LAB_00c076e0:
    uVar8 = *(uint *)(param_1 + 0x38);
    if (iVar20 < 5) {
      pbVar21 = (byte *)&local_68;
      if (0x7f < uVar8) {
        pbVar22 = pbVar21;
        uVar16 = uVar8;
        do {
          uVar8 = uVar16 >> 7;
          uVar10 = uVar16 >> 0xe;
          pbVar21 = pbVar22 + 1;
          *pbVar22 = (byte)uVar16 | 0x80;
          pbVar22 = pbVar21;
          uVar16 = uVar8;
        } while (uVar10 != 0);
      }
      puVar25 = &local_68;
      *pbVar21 = (byte)uVar8;
      iVar20 = ((int)pbVar21 - (int)puVar25) + 1;
      iVar17 = *(int *)(param_3 + 2);
      puVar15 = (undefined1 *)param_3[1];
      if (iVar17 < iVar20) {
        puVar25 = &local_68;
        do {
          memcpy(puVar15,puVar25,(long)iVar17);
          iVar3 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,piVar26);
          if ((uVar14 & 1) == 0) {
            puVar15 = (undefined1 *)0x0;
            param_3[1] = 0;
            iVar20 = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c07804;
          }
          iVar17 = *(int *)(param_3 + 2);
          iVar20 = iVar20 - iVar3;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar3);
          param_3[1] = local_80;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar17;
          puVar15 = local_80;
        } while (iVar17 < iVar20);
      }
      memcpy(puVar15,puVar25,(long)iVar20);
      puVar15 = (undefined1 *)(param_3[1] + (long)iVar20);
      param_3[1] = puVar15;
      iVar20 = *(int *)(param_3 + 2) - iVar20;
    }
    else {
      pbVar22 = pbVar21;
      if (0x7f < uVar8) {
        pbVar19 = pbVar21;
        uVar16 = uVar8;
        do {
          uVar8 = uVar16 >> 7;
          uVar10 = uVar16 >> 0xe;
          pbVar22 = pbVar19 + 1;
          *pbVar19 = (byte)uVar16 | 0x80;
          pbVar19 = pbVar22;
          uVar16 = uVar8;
        } while (uVar10 != 0);
      }
      *pbVar22 = (byte)uVar8;
      iVar20 = ((int)pbVar22 - (int)pbVar21) + 1;
      puVar15 = (undefined1 *)(param_3[1] + (long)iVar20);
      param_3[1] = puVar15;
      iVar20 = *(int *)(param_3 + 2) - iVar20;
    }
    *(int *)(param_3 + 2) = iVar20;
LAB_00c07804:
    if (iVar20 < 5) {
      local_68 = CONCAT71(local_68._1_7_,0x1a);
      if (iVar20 < 1) {
        iVar17 = 1;
        puVar25 = &local_68;
        do {
          memcpy(puVar15,puVar25,(long)iVar20);
          iVar3 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,piVar26);
          if ((uVar14 & 1) == 0) {
            param_3[1] = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c078c4;
          }
          iVar20 = *(int *)(param_3 + 2);
          iVar17 = iVar17 - iVar3;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar3);
          param_3[1] = local_80;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar20;
          puVar15 = local_80;
        } while (iVar20 < iVar17);
      }
      else {
        puVar25 = &local_68;
        iVar17 = 1;
      }
      memcpy(puVar15,puVar25,(long)iVar17);
      param_3[1] = param_3[1] + (long)iVar17;
      iVar17 = *(int *)(param_3 + 2) - iVar17;
    }
    else {
      *puVar15 = 0x1a;
      param_3[1] = param_3[1] + 1;
      iVar17 = *(int *)(param_3 + 2) + -1;
    }
    *(int *)(param_3 + 2) = iVar17;
LAB_00c078c4:
    plVar11 = (long *)(**(code **)(*plVar11 + 0xd8))(plVar11,param_2,param_1,0);
    uVar14 = (**(code **)(*plVar11 + 0x78))();
    uVar8 = (uint)uVar14;
    if (*piVar26 < 5) {
      pbVar21 = (byte *)&local_68;
      if (0x7f < uVar8) {
        uVar23 = uVar14 & 0xffffffff;
        pbVar22 = pbVar21;
        do {
          bVar7 = (byte)uVar23;
          uVar23 = uVar14 >> 7 & 0x1ffffff;
          uVar8 = (uint)uVar23;
          uVar5 = uVar14 >> 0xe;
          pbVar21 = pbVar22 + 1;
          *pbVar22 = bVar7 | 0x80;
          uVar14 = uVar23;
          pbVar22 = pbVar21;
        } while ((uVar5 & 0x3ffff) != 0);
      }
      puVar25 = &local_68;
      *pbVar21 = (byte)uVar8;
      iVar20 = ((int)pbVar21 - (int)puVar25) + 1;
      iVar17 = *(int *)(param_3 + 2);
      puVar15 = (undefined1 *)param_3[1];
      if (iVar17 < iVar20) {
        puVar25 = &local_68;
        do {
          memcpy(puVar15,puVar25,(long)iVar17);
          iVar3 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,piVar26);
          if ((uVar14 & 1) == 0) {
            param_3[1] = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c07a1c;
          }
          iVar17 = *(int *)(param_3 + 2);
          iVar20 = iVar20 - iVar3;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar3);
          param_3[1] = local_80;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar17;
          puVar15 = local_80;
        } while (iVar17 < iVar20);
      }
      memcpy(puVar15,puVar25,(long)iVar20);
      param_3[1] = param_3[1] + (long)iVar20;
      iVar20 = *(int *)(param_3 + 2) - iVar20;
    }
    else {
      pbVar21 = (byte *)param_3[1];
      if (uVar8 < 0x80) {
        pbVar22 = pbVar21;
      }
      else {
        uVar23 = uVar14 & 0xffffffff;
        pbVar19 = pbVar21;
        do {
          bVar7 = (byte)uVar23;
          uVar23 = uVar14 >> 7 & 0x1ffffff;
          uVar8 = (uint)uVar23;
          uVar5 = uVar14 >> 0xe;
          pbVar22 = pbVar19 + 1;
          *pbVar19 = bVar7 | 0x80;
          uVar14 = uVar23;
          pbVar19 = pbVar22;
        } while ((uVar5 & 0x3ffff) != 0);
      }
      *pbVar22 = (byte)uVar8;
      iVar20 = ((int)pbVar22 - (int)pbVar21) + 1;
      param_3[1] = param_3[1] + (long)iVar20;
      iVar20 = *(int *)(param_3 + 2) - iVar20;
    }
    *(int *)(param_3 + 2) = iVar20;
LAB_00c07a1c:
    (**(code **)(*plVar11 + 0x68))(plVar11,param_3);
    iVar20 = *(int *)(param_3 + 2);
    if (iVar20 < 5) {
      local_68 = CONCAT71(local_68._1_7_,0xc);
      if (iVar20 < 1) {
        iVar17 = 1;
        puVar25 = &local_68;
        puVar15 = (undefined1 *)param_3[1];
        do {
          memcpy(puVar15,puVar25,(long)iVar20);
          iVar3 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,piVar26);
          if ((uVar14 & 1) == 0) {
            param_3[1] = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            return;
          }
          iVar20 = *(int *)(param_3 + 2);
          iVar17 = iVar17 - iVar3;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar3);
          param_3[1] = local_80;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar20;
          puVar15 = local_80;
        } while (iVar20 < iVar17);
      }
      else {
        puVar25 = &local_68;
        iVar17 = 1;
        local_80 = (undefined1 *)param_3[1];
      }
      memcpy(local_80,puVar25,(long)iVar17);
      param_3[1] = param_3[1] + (long)iVar17;
      iVar17 = *(int *)(param_3 + 2) - iVar17;
    }
    else {
      *(undefined1 *)param_3[1] = 0xc;
      param_3[1] = param_3[1] + 1;
      iVar17 = *(int *)(param_3 + 2) + -1;
    }
    *(int *)(param_3 + 2) = iVar17;
    return;
  }
  if (*(int *)(param_1 + 0x40) == 3) {
    uVar8 = (**(code **)(*plVar11 + 0x30))(plVar11,param_2,param_1);
  }
  else {
    uVar8 = (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_1);
    uVar8 = uVar8 & 1;
  }
  if ((*(int *)(param_1 + 0x40) != 3) || (*(int *)(param_1 + 0x3c) - 9U < 4)) {
LAB_00c061f0:
    if ((int)uVar8 < 1) {
      return;
    }
    bVar6 = false;
    goto LAB_00c061fc;
  }
  lVar18 = *(long *)(param_1 + 0x78);
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x7c) == 2) {
    if (lVar18 == 0) goto LAB_00c061f0;
LAB_00c07294:
    bVar6 = *(char *)(lVar18 + 0x58) != '\0';
  }
  else {
    if ((lVar18 != 0) && ((*(byte *)(lVar18 + 0x30) >> 1 & 1) != 0)) goto LAB_00c07294;
    bVar6 = true;
  }
  if (0 < (int)uVar8 && bVar6) {
    uVar16 = *(int *)(param_1 + 0x38) << 3 | 2;
    piVar26 = (int *)(param_3 + 2);
    if (*piVar26 < 5) {
      pbVar21 = (byte *)&local_68;
      if (0x7f < uVar16) {
        pbVar22 = pbVar21;
        uVar10 = uVar16;
        do {
          uVar16 = uVar10 >> 7;
          uVar24 = uVar10 >> 0xe;
          pbVar21 = pbVar22 + 1;
          *pbVar22 = (byte)uVar10 | 0x80;
          pbVar22 = pbVar21;
          uVar10 = uVar16;
        } while (uVar24 != 0);
      }
      puVar25 = &local_68;
      *pbVar21 = (byte)uVar16;
      iVar20 = ((int)pbVar21 - (int)puVar25) + 1;
      iVar17 = *(int *)(param_3 + 2);
      puVar15 = (undefined1 *)param_3[1];
      if (iVar17 < iVar20) {
        puVar25 = &local_68;
        do {
          memcpy(puVar15,puVar25,(long)iVar17);
          iVar3 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,piVar26);
          if ((uVar14 & 1) == 0) {
            param_3[1] = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c07460;
          }
          iVar17 = *(int *)(param_3 + 2);
          iVar20 = iVar20 - iVar3;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar3);
          param_3[1] = local_80;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar17;
          puVar15 = local_80;
        } while (iVar17 < iVar20);
      }
      memcpy(puVar15,puVar25,(long)iVar20);
      param_3[1] = param_3[1] + (long)iVar20;
      iVar20 = *(int *)(param_3 + 2) - iVar20;
    }
    else {
      pbVar21 = (byte *)param_3[1];
      if (uVar16 < 0x80) {
        pbVar22 = pbVar21;
      }
      else {
        pbVar19 = pbVar21;
        uVar10 = uVar16;
        do {
          uVar16 = uVar10 >> 7;
          uVar24 = uVar10 >> 0xe;
          pbVar22 = pbVar19 + 1;
          *pbVar19 = (byte)uVar10 | 0x80;
          pbVar19 = pbVar22;
          uVar10 = uVar16;
        } while (uVar24 != 0);
      }
      *pbVar22 = (byte)uVar16;
      iVar20 = ((int)pbVar22 - (int)pbVar21) + 1;
      param_3[1] = param_3[1] + (long)iVar20;
      iVar20 = *(int *)(param_3 + 2) - iVar20;
    }
    *(int *)(param_3 + 2) = iVar20;
LAB_00c07460:
    uVar14 = FUN_00c07bdc(param_1,param_2);
    uVar16 = (uint)uVar14;
    if (*piVar26 < 5) {
      pbVar21 = (byte *)&local_68;
      if (0x7f < uVar16) {
        uVar23 = uVar14 & 0xffffffff;
        pbVar22 = pbVar21;
        do {
          bVar7 = (byte)uVar23;
          uVar23 = uVar14 >> 7 & 0x1ffffff;
          uVar16 = (uint)uVar23;
          uVar5 = uVar14 >> 0xe;
          pbVar21 = pbVar22 + 1;
          *pbVar22 = bVar7 | 0x80;
          uVar14 = uVar23;
          pbVar22 = pbVar21;
        } while ((uVar5 & 0x3ffff) != 0);
      }
      puVar25 = &local_68;
      *pbVar21 = (byte)uVar16;
      iVar20 = ((int)pbVar21 - (int)puVar25) + 1;
      iVar17 = *(int *)(param_3 + 2);
      puVar15 = (undefined1 *)param_3[1];
      if (iVar17 < iVar20) {
        puVar25 = &local_68;
        do {
          memcpy(puVar15,puVar25,(long)iVar17);
          iVar3 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,piVar26);
          if ((uVar14 & 1) == 0) {
            param_3[1] = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c0759c;
          }
          iVar17 = *(int *)(param_3 + 2);
          iVar20 = iVar20 - iVar3;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar3);
          param_3[1] = local_80;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar17;
          puVar15 = local_80;
        } while (iVar17 < iVar20);
      }
      memcpy(puVar15,puVar25,(long)iVar20);
      param_3[1] = param_3[1] + (long)iVar20;
      iVar20 = *(int *)(param_3 + 2) - iVar20;
    }
    else {
      pbVar21 = (byte *)param_3[1];
      if (uVar16 < 0x80) {
        pbVar22 = pbVar21;
      }
      else {
        uVar23 = uVar14 & 0xffffffff;
        pbVar19 = pbVar21;
        do {
          bVar7 = (byte)uVar23;
          uVar23 = uVar14 >> 7 & 0x1ffffff;
          uVar16 = (uint)uVar23;
          uVar5 = uVar14 >> 0xe;
          pbVar22 = pbVar19 + 1;
          *pbVar19 = bVar7 | 0x80;
          uVar14 = uVar23;
          pbVar19 = pbVar22;
        } while ((uVar5 & 0x3ffff) != 0);
      }
      *pbVar22 = (byte)uVar16;
      iVar17 = ((int)pbVar22 - (int)pbVar21) + 1;
      iVar20 = *(int *)(param_3 + 2) - iVar17;
      param_3[1] = param_3[1] + (long)iVar17;
    }
    *(int *)(param_3 + 2) = iVar20;
LAB_00c0759c:
    bVar6 = true;
  }
  else if ((int)uVar8 < 1) {
    return;
  }
LAB_00c061fc:
  uVar16 = 0;
  puVar1 = (uint *)(param_3 + 2);
  plVar2 = param_3 + 1;
  piVar26 = (int *)((long)param_3 + 0x14);
LAB_00c06210:
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 1:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar14 = (**(code **)(*plVar11 + 0x178))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar14 = (**(code **)(*plVar11 + 0xb0))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = *puVar1;
      if (uVar10 < 8) {
        puVar25 = &local_68;
        iVar20 = 8;
        puVar15 = (undefined1 *)*plVar2;
        local_68 = uVar14;
        do {
          memcpy(puVar15,puVar25,(long)(int)uVar10);
          iVar17 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
          if ((uVar14 & 1) == 0) goto LAB_00c0718c;
          *plVar2 = (long)local_80;
          uVar10 = *puVar1;
          iVar20 = iVar20 - iVar17;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
          *piVar26 = *piVar26 + uVar10;
          puVar15 = local_80;
        } while ((int)uVar10 < iVar20);
        goto LAB_00c06f5c;
      }
      *(ulong *)*plVar2 = uVar14;
LAB_00c06a60:
      *plVar2 = *plVar2 + 8;
      uVar10 = *puVar1 - 8;
LAB_00c071e0:
      *puVar1 = uVar10;
    }
    else {
      FUN_00c0b724(*(undefined4 *)(param_1 + 0x38),param_3);
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar9 = (**(code **)(*plVar11 + 0x170))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar9 = (**(code **)(*plVar11 + 0xa8))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = *puVar1;
      if (3 < uVar10) {
        *(undefined4 *)*plVar2 = uVar9;
LAB_00c06b20:
        *plVar2 = *plVar2 + 4;
        uVar10 = *puVar1 - 4;
        goto LAB_00c071e0;
      }
      local_68._4_4_ = (undefined4)(local_68 >> 0x20);
      local_68 = CONCAT44(local_68._4_4_,uVar9);
      puVar25 = &local_68;
      iVar20 = 4;
      puVar15 = (undefined1 *)*plVar2;
      do {
        memcpy(puVar15,puVar25,(long)(int)uVar10);
        iVar17 = *(int *)(param_3 + 2);
        uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
        if ((uVar14 & 1) == 0) goto LAB_00c0718c;
        *plVar2 = (long)local_80;
        uVar10 = *puVar1;
        iVar20 = iVar20 - iVar17;
        puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
        *piVar26 = *piVar26 + uVar10;
        puVar15 = local_80;
      } while ((int)uVar10 < iVar20);
LAB_00c06f5c:
      memcpy(local_80,puVar25,(long)iVar20);
      *plVar2 = *plVar2 + (long)iVar20;
      *puVar1 = *puVar1 - iVar20;
    }
    else {
      FUN_00c0b4d8(*(undefined4 *)(param_1 + 0x38),param_3);
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar14 = (**(code **)(*plVar11 + 0x158))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar14 = (**(code **)(*plVar11 + 0x90))(plVar11,param_2,param_1);
    }
    if (bVar6) {
LAB_00c06f90:
      FUN_00c0998c(param_3,uVar14);
    }
    else {
      FUN_00c0a1b0(*(undefined4 *)(param_1 + 0x38),uVar14,param_3);
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar14 = (**(code **)(*plVar11 + 0x168))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar14 = (**(code **)(*plVar11 + 0xa0))(plVar11,param_2,param_1);
    }
    if (bVar6) goto LAB_00c06f90;
    FUN_00c0a5f0(*(undefined4 *)(param_1 + 0x38),uVar14,param_3);
    break;
  case 5:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar10 = (**(code **)(*plVar11 + 0x150))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar10 = (**(code **)(*plVar11 + 0x88))(plVar11,param_2,param_1);
    }
    uVar14 = (ulong)uVar10;
    if (bVar6) {
      if (-1 < (int)uVar10) {
        if ((int)*puVar1 < 5) {
          pbVar21 = (byte *)&local_68;
          if (0x7f < uVar10) {
            pbVar22 = pbVar21;
            uVar23 = uVar14;
            do {
              uVar14 = uVar23 >> 7;
              uVar5 = uVar23 >> 0xe;
              pbVar21 = pbVar22 + 1;
              *pbVar22 = (byte)uVar23 | 0x80;
              pbVar22 = pbVar21;
              uVar23 = uVar14;
            } while (uVar5 != 0);
          }
          puVar25 = &local_68;
          *pbVar21 = (byte)uVar14;
          iVar20 = ((int)pbVar21 - (int)puVar25) + 1;
          uVar10 = *puVar1;
          puVar15 = (undefined1 *)*plVar2;
          if ((int)uVar10 < iVar20) {
            puVar25 = &local_68;
            do {
              memcpy(puVar15,puVar25,(long)(int)uVar10);
              iVar17 = *(int *)(param_3 + 2);
              uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
              if ((uVar14 & 1) == 0) goto LAB_00c0718c;
              *plVar2 = (long)local_80;
              uVar10 = *puVar1;
              iVar20 = iVar20 - iVar17;
              puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
              *piVar26 = *piVar26 + uVar10;
              puVar15 = local_80;
            } while ((int)uVar10 < iVar20);
            goto LAB_00c07160;
          }
          goto LAB_00c07164;
        }
        pbVar21 = (byte *)*plVar2;
        if (uVar10 < 0x80) {
          pbVar22 = pbVar21;
        }
        else {
          pbVar19 = pbVar21;
          uVar23 = uVar14;
          do {
            uVar14 = uVar23 >> 7;
            uVar5 = uVar23 >> 0xe;
            pbVar22 = pbVar19 + 1;
            *pbVar19 = (byte)uVar23 | 0x80;
            pbVar19 = pbVar22;
            uVar23 = uVar14;
          } while (uVar5 != 0);
        }
        *pbVar22 = (byte)uVar14;
        goto LAB_00c071b4;
      }
      uVar14 = (ulong)(int)uVar10;
      goto LAB_00c06f90;
    }
    FUN_00c09ed4(*(undefined4 *)(param_1 + 0x38),uVar14,param_3);
    break;
  case 6:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar14 = (**(code **)(*plVar11 + 0x168))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar14 = (**(code **)(*plVar11 + 0xa0))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = *puVar1;
      if (7 < uVar10) {
LAB_00c06a58:
        *(ulong *)*plVar2 = uVar14;
        goto LAB_00c06a60;
      }
      puVar25 = &local_68;
      iVar20 = 8;
      puVar15 = (undefined1 *)*plVar2;
      local_68 = uVar14;
      do {
        memcpy(puVar15,puVar25,(long)(int)uVar10);
        iVar17 = *(int *)(param_3 + 2);
        uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
        if ((uVar14 & 1) == 0) goto LAB_00c0718c;
        *plVar2 = (long)local_80;
        uVar10 = *puVar1;
        iVar20 = iVar20 - iVar17;
        puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
        *piVar26 = *piVar26 + uVar10;
        puVar15 = local_80;
      } while ((int)uVar10 < iVar20);
      goto LAB_00c06f5c;
    }
    FUN_00c0ae0c(*(undefined4 *)(param_1 + 0x38),uVar14,param_3);
    break;
  case 7:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar9 = (**(code **)(*plVar11 + 0x160))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar9 = (**(code **)(*plVar11 + 0x98))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = *puVar1;
      if (3 < uVar10) {
LAB_00c06b18:
        *(undefined4 *)*plVar2 = uVar9;
        goto LAB_00c06b20;
      }
      local_68 = CONCAT44(local_68._4_4_,uVar9);
      puVar25 = &local_68;
      iVar20 = 4;
      puVar15 = (undefined1 *)*plVar2;
      do {
        memcpy(puVar15,puVar25,(long)(int)uVar10);
        iVar17 = *(int *)(param_3 + 2);
        uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
        if ((uVar14 & 1) == 0) goto LAB_00c0718c;
        *plVar2 = (long)local_80;
        uVar10 = *puVar1;
        iVar20 = iVar20 - iVar17;
        puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
        *piVar26 = *piVar26 + uVar10;
        puVar15 = local_80;
      } while ((int)uVar10 < iVar20);
      goto LAB_00c06f5c;
    }
    FUN_00c0abc8(*(undefined4 *)(param_1 + 0x38),uVar9,param_3);
    break;
  case 8:
    if (*(int *)(param_1 + 0x40) == 3) {
      bVar7 = (**(code **)(*plVar11 + 0x180))(plVar11,param_2,param_1,uVar16);
    }
    else {
      bVar7 = (**(code **)(*plVar11 + 0xb8))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = *puVar1;
      if (4 < (int)uVar10) {
        *(byte *)*plVar2 = bVar7 & 1;
        *plVar2 = *plVar2 + 1;
        uVar10 = *puVar1 - 1;
        goto LAB_00c071e0;
      }
      local_68._1_7_ = (undefined7)(local_68 >> 8);
      local_68 = CONCAT71(local_68._1_7_,bVar7) & 0xffffffffffffff01;
      puVar15 = (undefined1 *)*plVar2;
      if ((int)uVar10 < 1) {
        iVar20 = 1;
        puVar25 = &local_68;
        do {
          memcpy(puVar15,puVar25,(long)(int)uVar10);
          iVar17 = *(int *)(param_3 + 2);
          uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
          if ((uVar14 & 1) == 0) goto LAB_00c0718c;
          *plVar2 = (long)local_80;
          uVar10 = *puVar1;
          iVar20 = iVar20 - iVar17;
          puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
          *piVar26 = *piVar26 + uVar10;
          puVar15 = local_80;
        } while ((int)uVar10 < iVar20);
LAB_00c07160:
        puVar15 = local_80;
      }
      else {
        puVar25 = &local_68;
        iVar20 = 1;
      }
LAB_00c07164:
      memcpy(puVar15,puVar25,(long)iVar20);
      *plVar2 = *plVar2 + (long)iVar20;
      *puVar1 = *puVar1 - iVar20;
    }
    else {
      FUN_00c0b970(*(undefined4 *)(param_1 + 0x38),bVar7 & 1,param_3);
    }
    break;
  case 9:
    iVar20 = *(int *)(*(long *)(param_1 + 0x30) + 0x7c);
    local_80 = (undefined1 *)0x0;
    local_78 = 0;
    local_70 = 0;
    if (*(int *)(param_1 + 0x40) == 3) {
      pbVar21 = (byte *)(**(code **)(*plVar11 + 0x1a8))(plVar11,param_2,param_1,uVar16,&local_80);
    }
    else {
      pbVar21 = (byte *)(**(code **)(*plVar11 + 0xe0))(plVar11,param_2,param_1,&local_80);
    }
    if ((*pbVar21 & 1) == 0) {
      pbVar22 = pbVar21 + 1;
      uVar14 = (ulong)(*pbVar21 >> 1);
    }
    else {
      uVar14 = *(ulong *)(pbVar21 + 8);
      pbVar22 = *(byte **)(pbVar21 + 0x10);
    }
    pbVar19 = *(byte **)(param_1 + 8);
    if ((*pbVar19 & 1) == 0) {
      pbVar19 = pbVar19 + 1;
    }
    else {
      pbVar19 = *(byte **)(pbVar19 + 0x10);
    }
    if (iVar20 == 3) {
      FUN_00c0d914(pbVar22,uVar14,1,pbVar19);
    }
    FUN_00c0bea8(*(undefined4 *)(param_1 + 0x38),pbVar21,param_3);
    lVar18 = local_70;
    goto joined_r0x00c06714;
  case 10:
    uVar9 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar12 = (**(code **)(*plVar11 + 0x1a0))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar12 = (**(code **)(*plVar11 + 0xd8))(plVar11,param_2,param_1,0);
    }
    FUN_00c0cf00(uVar9,uVar12,param_3);
    break;
  case 0xb:
    uVar9 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar12 = (**(code **)(*plVar11 + 0x1a0))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar12 = (**(code **)(*plVar11 + 0xd8))(plVar11,param_2,param_1,0);
    }
    FUN_00c0d1e8(uVar9,uVar12,param_3);
    break;
  case 0xc:
    local_78 = 0;
    local_70 = 0;
    local_80 = (undefined1 *)0x0;
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar12 = (**(code **)(*plVar11 + 0x1a8))(plVar11,param_2,param_1,uVar16,&local_80);
    }
    else {
      uVar12 = (**(code **)(*plVar11 + 0xe0))(plVar11,param_2,param_1,&local_80);
    }
    FUN_00c0c6d4(*(undefined4 *)(param_1 + 0x38),uVar12,param_3);
    lVar18 = local_70;
joined_r0x00c06714:
    local_70 = lVar18;
    if ((((ulong)local_80 & 1) != 0) && (lVar18 != 0)) {
      lVar13 = tpidr_el0;
      plVar27 = *(long **)(lVar13 + 0x30);
      if (plVar27 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar20 = __cxa_guard_acquire(&DAT_04859438), iVar20 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar27 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar14 = (**(code **)(*plVar27 + 0xf8))(plVar27);
      if (((uVar14 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar27 + 0x18))(plVar27,lVar18,0,8);
      }
      else {
        FUN_00c48fe8(plVar27,lVar18,0,8);
      }
    }
    break;
  case 0xd:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar14 = (**(code **)(*plVar11 + 0x160))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar14 = (**(code **)(*plVar11 + 0x98))(plVar11,param_2,param_1);
    }
    uVar23 = uVar14 & 0xffffffff;
    if (bVar6) {
      if ((int)*puVar1 < 5) {
        pbVar21 = (byte *)&local_68;
        if (0x7f < (uint)uVar14) {
          pbVar22 = pbVar21;
          uVar14 = uVar14 & 0xffffffff;
          do {
            uVar23 = uVar14 >> 7;
            uVar5 = uVar14 >> 0xe;
            pbVar21 = pbVar22 + 1;
            *pbVar22 = (byte)uVar14 | 0x80;
            pbVar22 = pbVar21;
            uVar14 = uVar23;
          } while (uVar5 != 0);
        }
        puVar25 = &local_68;
        *pbVar21 = (byte)uVar23;
        iVar20 = ((int)pbVar21 - (int)puVar25) + 1;
        uVar10 = *puVar1;
        puVar15 = (undefined1 *)*plVar2;
        if ((int)uVar10 < iVar20) {
          puVar25 = &local_68;
          do {
            memcpy(puVar15,puVar25,(long)(int)uVar10);
            iVar17 = *(int *)(param_3 + 2);
            uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
            if ((uVar14 & 1) == 0) goto LAB_00c0718c;
            *plVar2 = (long)local_80;
            uVar10 = *puVar1;
            iVar20 = iVar20 - iVar17;
            puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
            *piVar26 = *piVar26 + uVar10;
            puVar15 = local_80;
          } while ((int)uVar10 < iVar20);
          goto LAB_00c07160;
        }
        goto LAB_00c07164;
      }
      pbVar21 = (byte *)*plVar2;
      if ((uint)uVar14 < 0x80) {
        pbVar22 = pbVar21;
      }
      else {
        pbVar19 = pbVar21;
        uVar14 = uVar14 & 0xffffffff;
        do {
          uVar23 = uVar14 >> 7;
          uVar5 = uVar14 >> 0xe;
          pbVar22 = pbVar19 + 1;
          *pbVar19 = (byte)uVar14 | 0x80;
          pbVar19 = pbVar22;
          uVar14 = uVar23;
        } while (uVar5 != 0);
      }
      *pbVar22 = (byte)uVar23;
LAB_00c071b4:
      iVar20 = (int)pbVar22 - (int)pbVar21;
LAB_00c071c8:
      *plVar2 = *plVar2 + (long)(iVar20 + 1);
      uVar10 = *puVar1 - (iVar20 + 1);
      goto LAB_00c071e0;
    }
    FUN_00c0a338(*(undefined4 *)(param_1 + 0x38),uVar23,param_3);
    break;
  case 0xe:
    if (*(int *)(param_1 + 0x40) == 3) {
      lVar18 = (**(code **)(*plVar11 + 400))(plVar11,param_2,param_1,uVar16);
    }
    else {
      lVar18 = (**(code **)(*plVar11 + 200))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = *(uint *)(lVar18 + 0x10);
      if (-1 < (int)uVar10) {
        if (4 < (int)*puVar1) {
          pbVar21 = (byte *)*plVar2;
          if (uVar10 < 0x80) {
            pbVar22 = pbVar21;
          }
          else {
            pbVar19 = pbVar21;
            uVar24 = uVar10;
            do {
              uVar10 = uVar24 >> 7;
              uVar4 = uVar24 >> 0xe;
              pbVar22 = pbVar19 + 1;
              *pbVar19 = (byte)uVar24 | 0x80;
              pbVar19 = pbVar22;
              uVar24 = uVar10;
            } while (uVar4 != 0);
          }
          *pbVar22 = (byte)uVar10;
          goto LAB_00c071c4;
        }
        pbVar21 = (byte *)&local_68;
        if (0x7f < uVar10) {
          pbVar22 = pbVar21;
          uVar24 = uVar10;
          do {
            uVar10 = uVar24 >> 7;
            uVar4 = uVar24 >> 0xe;
            pbVar21 = pbVar22 + 1;
            *pbVar22 = (byte)uVar24 | 0x80;
            pbVar22 = pbVar21;
            uVar24 = uVar10;
          } while (uVar4 != 0);
        }
        puVar25 = &local_68;
        *pbVar21 = (byte)uVar10;
        iVar20 = ((int)pbVar21 - (int)puVar25) + 1;
        uVar10 = *puVar1;
        puVar15 = (undefined1 *)*plVar2;
        if ((int)uVar10 < iVar20) {
          puVar25 = &local_68;
          do {
            memcpy(puVar15,puVar25,(long)(int)uVar10);
            iVar17 = *(int *)(param_3 + 2);
            uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
            if ((uVar14 & 1) == 0) goto LAB_00c0718c;
            *plVar2 = (long)local_80;
            uVar10 = *puVar1;
            iVar20 = iVar20 - iVar17;
            puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
            *piVar26 = *piVar26 + uVar10;
            puVar15 = local_80;
          } while ((int)uVar10 < iVar20);
          goto LAB_00c07160;
        }
        goto LAB_00c07164;
      }
      uVar14 = (ulong)(int)uVar10;
      goto LAB_00c06f90;
    }
    FUN_00c0bbcc(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(lVar18 + 0x10),param_3);
    break;
  case 0xf:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar9 = (**(code **)(*plVar11 + 0x150))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar9 = (**(code **)(*plVar11 + 0x88))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = *puVar1;
      if (3 < uVar10) goto LAB_00c06b18;
      local_68 = CONCAT44(local_68._4_4_,uVar9);
      puVar25 = &local_68;
      iVar20 = 4;
      puVar15 = (undefined1 *)*plVar2;
      do {
        memcpy(puVar15,puVar25,(long)(int)uVar10);
        iVar17 = *(int *)(param_3 + 2);
        uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
        if ((uVar14 & 1) == 0) goto LAB_00c0718c;
        *plVar2 = (long)local_80;
        uVar10 = *puVar1;
        iVar20 = iVar20 - iVar17;
        puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
        *piVar26 = *piVar26 + uVar10;
        puVar15 = local_80;
      } while ((int)uVar10 < iVar20);
      goto LAB_00c06f5c;
    }
    FUN_00c0b050(*(undefined4 *)(param_1 + 0x38),uVar9,param_3);
    break;
  case 0x10:
    if (*(int *)(param_1 + 0x40) == 3) {
      uVar14 = (**(code **)(*plVar11 + 0x158))(plVar11,param_2,param_1,uVar16);
    }
    else {
      uVar14 = (**(code **)(*plVar11 + 0x90))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = *puVar1;
      if (7 < uVar10) goto LAB_00c06a58;
      puVar25 = &local_68;
      iVar20 = 8;
      puVar15 = (undefined1 *)*plVar2;
      local_68 = uVar14;
      do {
        memcpy(puVar15,puVar25,(long)(int)uVar10);
        iVar17 = *(int *)(param_3 + 2);
        uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
        if ((uVar14 & 1) == 0) goto LAB_00c0718c;
        *plVar2 = (long)local_80;
        uVar10 = *puVar1;
        iVar20 = iVar20 - iVar17;
        puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
        *piVar26 = *piVar26 + uVar10;
        puVar15 = local_80;
      } while ((int)uVar10 < iVar20);
      goto LAB_00c06f5c;
    }
    FUN_00c0b294(*(undefined4 *)(param_1 + 0x38),uVar14,param_3);
    break;
  case 0x11:
    if (*(int *)(param_1 + 0x40) == 3) {
      iVar20 = (**(code **)(*plVar11 + 0x150))(plVar11,param_2,param_1,uVar16);
    }
    else {
      iVar20 = (**(code **)(*plVar11 + 0x88))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar10 = iVar20 << 1 ^ iVar20 >> 0x1f;
      if ((int)*puVar1 < 5) {
        pbVar21 = (byte *)&local_68;
        if (0x7f < uVar10) {
          pbVar22 = pbVar21;
          uVar24 = uVar10;
          do {
            uVar10 = uVar24 >> 7;
            uVar4 = uVar24 >> 0xe;
            pbVar21 = pbVar22 + 1;
            *pbVar22 = (byte)uVar24 | 0x80;
            pbVar22 = pbVar21;
            uVar24 = uVar10;
          } while (uVar4 != 0);
        }
        puVar25 = &local_68;
        *pbVar21 = (byte)uVar10;
        iVar20 = ((int)pbVar21 - (int)puVar25) + 1;
        uVar10 = *puVar1;
        puVar15 = (undefined1 *)*plVar2;
        if ((int)uVar10 < iVar20) {
          puVar25 = &local_68;
          do {
            memcpy(puVar15,puVar25,(long)(int)uVar10);
            iVar17 = *(int *)(param_3 + 2);
            uVar14 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_80,puVar1);
            if ((uVar14 & 1) == 0) goto LAB_00c0718c;
            *plVar2 = (long)local_80;
            uVar10 = *puVar1;
            iVar20 = iVar20 - iVar17;
            puVar25 = (undefined8 *)((long)puVar25 + (long)iVar17);
            *piVar26 = *piVar26 + uVar10;
            puVar15 = local_80;
          } while ((int)uVar10 < iVar20);
          goto LAB_00c07160;
        }
        goto LAB_00c07164;
      }
      pbVar21 = (byte *)*plVar2;
      if (uVar10 < 0x80) {
        pbVar22 = pbVar21;
      }
      else {
        pbVar19 = pbVar21;
        uVar24 = uVar10;
        do {
          uVar10 = uVar24 >> 7;
          uVar4 = uVar24 >> 0xe;
          pbVar22 = pbVar19 + 1;
          *pbVar19 = (byte)uVar24 | 0x80;
          pbVar19 = pbVar22;
          uVar24 = uVar10;
        } while (uVar4 != 0);
      }
      *pbVar22 = (byte)uVar10;
LAB_00c071c4:
      iVar20 = (int)pbVar22 - (int)pbVar21;
      goto LAB_00c071c8;
    }
    FUN_00c0a778(*(undefined4 *)(param_1 + 0x38),iVar20,param_3);
    break;
  case 0x12:
    if (*(int *)(param_1 + 0x40) == 3) {
      lVar18 = (**(code **)(*plVar11 + 0x158))(plVar11,param_2,param_1,uVar16);
    }
    else {
      lVar18 = (**(code **)(*plVar11 + 0x90))(plVar11,param_2,param_1);
    }
    if (bVar6) {
      uVar14 = lVar18 << 1 ^ lVar18 >> 0x3f;
      goto LAB_00c06f90;
    }
    FUN_00c0aa3c(*(undefined4 *)(param_1 + 0x38),lVar18,param_3);
  }
  goto switchD_00c06234_default;
LAB_00c0718c:
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined1 *)(param_3 + 3) = 1;
switchD_00c06234_default:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar8) {
    return;
  }
  goto LAB_00c06210;
}


