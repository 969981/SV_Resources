/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c02020; name: FUN_00c02020
 */


void FUN_00c02020(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 local_70;
  int *local_68;
  
  lVar21 = 0;
  puVar1 = (uint *)(param_2 + 2);
  plVar2 = param_2 + 1;
  piVar3 = (int *)((long)param_2 + 0x14);
LAB_00c02060:
  plVar14 = (long *)*param_1;
  if (plVar14 == (long *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (int)((ulong)(plVar14[1] - *plVar14) >> 4);
  }
  if (iVar13 <= lVar21) {
    return;
  }
  piVar9 = (int *)(*plVar14 + lVar21 * 0x10);
  iVar13 = (int)&local_70;
  switch(piVar9[1]) {
  case 0:
    uVar11 = *piVar9 << 3;
    if ((int)*puVar1 < 5) {
      pbVar15 = (byte *)&local_70;
      if (0x7f < uVar11) {
        pbVar16 = (byte *)&local_70;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar19 | 0x80;
          pbVar16 = pbVar15;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar15 = (byte)uVar11;
      iVar13 = ((int)pbVar15 - iVar13) + 1;
      uVar11 = *puVar1;
      piVar10 = (int *)*plVar2;
      puVar20 = &local_70;
      if ((int)uVar11 < iVar13) {
        puVar20 = &local_70;
        do {
          memcpy(piVar10,puVar20,(long)(int)uVar11);
          iVar12 = *(int *)(param_2 + 2);
          uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
          if ((uVar8 & 1) == 0) {
            param_2[1] = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00c02658;
          }
          *plVar2 = (long)local_68;
          uVar11 = *puVar1;
          iVar13 = iVar13 - iVar12;
          puVar20 = (undefined8 *)((long)puVar20 + (long)iVar12);
          *piVar3 = *piVar3 + uVar11;
          piVar10 = local_68;
        } while ((int)uVar11 < iVar13);
      }
      memcpy(piVar10,puVar20,(long)iVar13);
      *plVar2 = *plVar2 + (long)iVar13;
      uVar11 = *puVar1 - iVar13;
    }
    else {
      pbVar15 = (byte *)*plVar2;
      if (uVar11 < 0x80) {
        pbVar16 = pbVar15;
      }
      else {
        pbVar17 = pbVar15;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar16 = pbVar17 + 1;
          *pbVar17 = (byte)uVar19 | 0x80;
          pbVar17 = pbVar16;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar16 = (byte)uVar11;
      iVar13 = ((int)pbVar16 - (int)pbVar15) + 1;
      *plVar2 = *plVar2 + (long)iVar13;
      uVar11 = *puVar1 - iVar13;
    }
    *puVar1 = uVar11;
LAB_00c02658:
    FUN_00c0998c(param_2,*(undefined8 *)(piVar9 + 2));
    goto switchD_00c020a4_default;
  case 1:
    uVar11 = *piVar9 << 3 | 5;
    if ((int)*puVar1 < 5) {
      pbVar15 = (byte *)&local_70;
      if (0x7f < uVar11) {
        pbVar16 = (byte *)&local_70;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar19 | 0x80;
          pbVar16 = pbVar15;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar15 = (byte)uVar11;
      iVar13 = ((int)pbVar15 - iVar13) + 1;
      uVar11 = *puVar1;
      piVar10 = (int *)*plVar2;
      puVar20 = &local_70;
      if ((int)uVar11 < iVar13) {
        puVar20 = &local_70;
        do {
          memcpy(piVar10,puVar20,(long)(int)uVar11);
          iVar12 = *(int *)(param_2 + 2);
          uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
          if ((uVar8 & 1) == 0) {
            piVar10 = (int *)0x0;
            param_2[1] = 0;
            uVar11 = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00c02690;
          }
          *plVar2 = (long)local_68;
          uVar11 = *puVar1;
          iVar13 = iVar13 - iVar12;
          puVar20 = (undefined8 *)((long)puVar20 + (long)iVar12);
          *piVar3 = *piVar3 + uVar11;
          piVar10 = local_68;
        } while ((int)uVar11 < iVar13);
      }
      memcpy(piVar10,puVar20,(long)iVar13);
      piVar10 = (int *)(*plVar2 + (long)iVar13);
      *plVar2 = (long)piVar10;
      uVar11 = *puVar1 - iVar13;
    }
    else {
      pbVar15 = (byte *)*plVar2;
      if (uVar11 < 0x80) {
        pbVar16 = pbVar15;
      }
      else {
        pbVar17 = pbVar15;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar16 = pbVar17 + 1;
          *pbVar17 = (byte)uVar19 | 0x80;
          pbVar17 = pbVar16;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar16 = (byte)uVar11;
      iVar13 = ((int)pbVar16 - (int)pbVar15) + 1;
      piVar10 = (int *)(*plVar2 + (long)iVar13);
      *plVar2 = (long)piVar10;
      uVar11 = *puVar1 - iVar13;
    }
    *puVar1 = uVar11;
LAB_00c02690:
    if (uVar11 < 4) {
      iVar13 = 4;
      local_70 = CONCAT44(local_70._4_4_,piVar9[2]);
      puVar20 = &local_70;
      do {
        memcpy(piVar10,puVar20,(long)(int)uVar11);
        iVar12 = *(int *)(param_2 + 2);
        uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
        if ((uVar8 & 1) == 0) goto LAB_00c029d4;
        *plVar2 = (long)local_68;
        uVar11 = *puVar1;
        iVar13 = iVar13 - iVar12;
        puVar20 = (undefined8 *)((long)puVar20 + (long)iVar12);
        *piVar3 = *piVar3 + uVar11;
        piVar9 = local_68;
        piVar10 = local_68;
      } while ((int)uVar11 < iVar13);
LAB_00c02b34:
      memcpy(piVar9,puVar20,(long)iVar13);
      *plVar2 = *plVar2 + (long)iVar13;
      uVar11 = *puVar1 - iVar13;
    }
    else {
      *piVar10 = piVar9[2];
      *plVar2 = *plVar2 + 4;
      uVar11 = *puVar1 - 4;
    }
    break;
  case 2:
    uVar11 = *piVar9 << 3 | 1;
    if ((int)*puVar1 < 5) {
      pbVar15 = (byte *)&local_70;
      if (0x7f < uVar11) {
        pbVar16 = (byte *)&local_70;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar19 | 0x80;
          pbVar16 = pbVar15;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar15 = (byte)uVar11;
      iVar13 = ((int)pbVar15 - iVar13) + 1;
      uVar11 = *puVar1;
      piVar10 = (int *)*plVar2;
      puVar20 = &local_70;
      if ((int)uVar11 < iVar13) {
        puVar20 = &local_70;
        do {
          memcpy(piVar10,puVar20,(long)(int)uVar11);
          iVar12 = *(int *)(param_2 + 2);
          uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
          if ((uVar8 & 1) == 0) {
            piVar10 = (int *)0x0;
            param_2[1] = 0;
            uVar11 = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00c02744;
          }
          *plVar2 = (long)local_68;
          uVar11 = *puVar1;
          iVar13 = iVar13 - iVar12;
          puVar20 = (undefined8 *)((long)puVar20 + (long)iVar12);
          *piVar3 = *piVar3 + uVar11;
          piVar10 = local_68;
        } while ((int)uVar11 < iVar13);
      }
      memcpy(piVar10,puVar20,(long)iVar13);
      piVar10 = (int *)(*plVar2 + (long)iVar13);
      *plVar2 = (long)piVar10;
      uVar11 = *puVar1 - iVar13;
    }
    else {
      pbVar15 = (byte *)*plVar2;
      if (uVar11 < 0x80) {
        pbVar16 = pbVar15;
      }
      else {
        pbVar17 = pbVar15;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar16 = pbVar17 + 1;
          *pbVar17 = (byte)uVar19 | 0x80;
          pbVar17 = pbVar16;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar16 = (byte)uVar11;
      iVar13 = ((int)pbVar16 - (int)pbVar15) + 1;
      piVar10 = (int *)(*plVar2 + (long)iVar13);
      *plVar2 = (long)piVar10;
      uVar11 = *puVar1 - iVar13;
    }
    *puVar1 = uVar11;
LAB_00c02744:
    if (uVar11 < 8) {
      iVar13 = 8;
      puVar20 = &local_70;
      local_70 = *(undefined8 *)(piVar9 + 2);
      do {
        memcpy(piVar10,puVar20,(long)(int)uVar11);
        iVar12 = *(int *)(param_2 + 2);
        uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
        if ((uVar8 & 1) == 0) goto LAB_00c029d4;
        *plVar2 = (long)local_68;
        uVar11 = *puVar1;
        iVar13 = iVar13 - iVar12;
        puVar20 = (undefined8 *)((long)puVar20 + (long)iVar12);
        *piVar3 = *piVar3 + uVar11;
        piVar9 = local_68;
        piVar10 = local_68;
      } while ((int)uVar11 < iVar13);
      goto LAB_00c02b34;
    }
    *(undefined8 *)piVar10 = *(undefined8 *)(piVar9 + 2);
    *plVar2 = *plVar2 + 8;
    uVar11 = *puVar1 - 8;
    break;
  case 3:
    uVar11 = *piVar9 << 3 | 2;
    if ((int)*puVar1 < 5) {
      pbVar15 = (byte *)&local_70;
      if (0x7f < uVar11) {
        pbVar16 = (byte *)&local_70;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar19 | 0x80;
          pbVar16 = pbVar15;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar15 = (byte)uVar11;
      iVar12 = ((int)pbVar15 - iVar13) + 1;
      uVar11 = *puVar1;
      piVar10 = (int *)*plVar2;
      puVar20 = &local_70;
      if ((int)uVar11 < iVar12) {
        puVar20 = &local_70;
        do {
          memcpy(piVar10,puVar20,(long)(int)uVar11);
          iVar4 = *(int *)(param_2 + 2);
          uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
          if ((uVar8 & 1) == 0) {
            pbVar15 = (byte *)0x0;
            param_2[1] = 0;
            uVar11 = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00c027f8;
          }
          *plVar2 = (long)local_68;
          uVar11 = *puVar1;
          iVar12 = iVar12 - iVar4;
          puVar20 = (undefined8 *)((long)puVar20 + (long)iVar4);
          *piVar3 = *piVar3 + uVar11;
          piVar10 = local_68;
        } while ((int)uVar11 < iVar12);
      }
      memcpy(piVar10,puVar20,(long)iVar12);
      pbVar15 = (byte *)(*plVar2 + (long)iVar12);
      *plVar2 = (long)pbVar15;
      uVar11 = *puVar1 - iVar12;
    }
    else {
      pbVar15 = (byte *)*plVar2;
      if (uVar11 < 0x80) {
        pbVar16 = pbVar15;
      }
      else {
        pbVar17 = pbVar15;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar16 = pbVar17 + 1;
          *pbVar17 = (byte)uVar19 | 0x80;
          pbVar17 = pbVar16;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar16 = (byte)uVar11;
      iVar12 = ((int)pbVar16 - (int)pbVar15) + 1;
      pbVar15 = (byte *)(*plVar2 + (long)iVar12);
      *plVar2 = (long)pbVar15;
      uVar11 = *puVar1 - iVar12;
    }
    *puVar1 = uVar11;
LAB_00c027f8:
    pbVar16 = *(byte **)(piVar9 + 2);
    bVar7 = *pbVar16;
    if ((bVar7 & 1) == 0) {
      uVar8 = (ulong)(bVar7 >> 1);
    }
    else {
      uVar8 = *(ulong *)(pbVar16 + 8);
    }
    uVar19 = (uint)uVar8;
    if ((int)uVar11 < 5) {
      pbVar15 = (byte *)&local_70;
      if (0x7f < uVar19) {
        pbVar16 = (byte *)&local_70;
        uVar18 = uVar8 & 0xffffffff;
        do {
          bVar7 = (byte)uVar8;
          uVar8 = uVar18 >> 7;
          uVar19 = (uint)uVar8;
          uVar6 = uVar18 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = bVar7 | 0x80;
          pbVar16 = pbVar15;
          uVar18 = uVar8;
        } while (uVar6 != 0);
      }
      *pbVar15 = (byte)uVar19;
      iVar13 = ((int)pbVar15 - iVar13) + 1;
      uVar11 = *puVar1;
      piVar10 = (int *)*plVar2;
      puVar20 = &local_70;
      if ((int)uVar11 < iVar13) {
        puVar20 = &local_70;
        do {
          memcpy(piVar10,puVar20,(long)(int)uVar11);
          iVar12 = *(int *)(param_2 + 2);
          uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
          if ((uVar8 & 1) == 0) {
            piVar10 = (int *)0x0;
            param_2[1] = 0;
            uVar11 = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00c02930;
          }
          *plVar2 = (long)local_68;
          uVar11 = *puVar1;
          iVar13 = iVar13 - iVar12;
          puVar20 = (undefined8 *)((long)puVar20 + (long)iVar12);
          *piVar3 = *piVar3 + uVar11;
          piVar10 = local_68;
        } while ((int)uVar11 < iVar13);
      }
      memcpy(piVar10,puVar20,(long)iVar13);
      piVar10 = (int *)(*plVar2 + (long)iVar13);
      *plVar2 = (long)piVar10;
      uVar11 = *puVar1 - iVar13;
    }
    else {
      pbVar16 = pbVar15;
      if (0x7f < uVar19) {
        pbVar17 = pbVar15;
        uVar18 = uVar8 & 0xffffffff;
        do {
          bVar7 = (byte)uVar8;
          uVar8 = uVar18 >> 7;
          uVar19 = (uint)uVar8;
          uVar6 = uVar18 >> 0xe;
          pbVar16 = pbVar17 + 1;
          *pbVar17 = bVar7 | 0x80;
          pbVar17 = pbVar16;
          uVar18 = uVar8;
        } while (uVar6 != 0);
      }
      *pbVar16 = (byte)uVar19;
      iVar13 = ((int)pbVar16 - (int)pbVar15) + 1;
      piVar10 = (int *)(*plVar2 + (long)iVar13);
      *plVar2 = (long)piVar10;
      uVar11 = *puVar1 - iVar13;
    }
    *puVar1 = uVar11;
LAB_00c02930:
    pbVar15 = *(byte **)(piVar9 + 2);
    if ((*pbVar15 & 1) == 0) {
      pbVar16 = pbVar15 + 1;
      uVar8 = (ulong)(*pbVar15 >> 1);
    }
    else {
      uVar8 = *(ulong *)(pbVar15 + 8);
      pbVar16 = *(byte **)(pbVar15 + 0x10);
    }
    iVar13 = (int)uVar8;
    if (*(char *)((long)param_2 + 0x19) == '\0') {
      while (iVar13 = (int)uVar8, (int)uVar11 < iVar13) {
        memcpy(piVar10,pbVar16,(long)(int)uVar11);
        iVar12 = *(int *)(param_2 + 2);
        uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
        if ((uVar8 & 1) == 0) goto LAB_00c029d4;
        *plVar2 = (long)local_68;
        uVar11 = *puVar1;
        pbVar16 = pbVar16 + iVar12;
        *piVar3 = *piVar3 + uVar11;
        piVar10 = local_68;
        uVar8 = (ulong)(uint)(iVar13 - iVar12);
      }
LAB_00c0295c:
      memcpy(piVar10,pbVar16,(long)iVar13);
      *plVar2 = *plVar2 + (long)iVar13;
      uVar11 = *puVar1 - iVar13;
      break;
    }
    if (iVar13 < (int)uVar11) goto LAB_00c0295c;
    if ((int)uVar11 < 1) {
      iVar12 = *piVar3;
    }
    else {
      (**(code **)(*(long *)*param_2 + 0x18))();
      iVar12 = *(int *)((long)param_2 + 0x14) - *(int *)(param_2 + 2);
      *(undefined4 *)(param_2 + 2) = 0;
      *(int *)((long)param_2 + 0x14) = iVar12;
      param_2[1] = 0;
    }
    *(int *)((long)param_2 + 0x14) = iVar12 + iVar13;
    bVar7 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,pbVar16,uVar8 & 0xffffffff);
    bVar7 = *(byte *)(param_2 + 3) | ~bVar7 & 1;
    goto LAB_00c02c80;
  case 4:
    uVar11 = *piVar9 << 3 | 3;
    if ((int)*puVar1 < 5) {
      pbVar15 = (byte *)&local_70;
      if (0x7f < uVar11) {
        pbVar16 = (byte *)&local_70;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar19 | 0x80;
          pbVar16 = pbVar15;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar15 = (byte)uVar11;
      iVar12 = ((int)pbVar15 - iVar13) + 1;
      uVar11 = *puVar1;
      piVar10 = (int *)*plVar2;
      puVar20 = &local_70;
      if ((int)uVar11 < iVar12) {
        puVar20 = &local_70;
        do {
          memcpy(piVar10,puVar20,(long)(int)uVar11);
          iVar4 = *(int *)(param_2 + 2);
          uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
          if ((uVar8 & 1) == 0) {
            param_2[1] = 0;
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined1 *)(param_2 + 3) = 1;
            goto LAB_00c02a38;
          }
          *plVar2 = (long)local_68;
          uVar11 = *puVar1;
          iVar12 = iVar12 - iVar4;
          puVar20 = (undefined8 *)((long)puVar20 + (long)iVar4);
          *piVar3 = *piVar3 + uVar11;
          piVar10 = local_68;
        } while ((int)uVar11 < iVar12);
      }
      memcpy(piVar10,puVar20,(long)iVar12);
      *plVar2 = *plVar2 + (long)iVar12;
      uVar11 = *puVar1 - iVar12;
    }
    else {
      pbVar15 = (byte *)*plVar2;
      if (uVar11 < 0x80) {
        pbVar16 = pbVar15;
      }
      else {
        pbVar17 = pbVar15;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar16 = pbVar17 + 1;
          *pbVar17 = (byte)uVar19 | 0x80;
          pbVar17 = pbVar16;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar16 = (byte)uVar11;
      iVar12 = ((int)pbVar16 - (int)pbVar15) + 1;
      *plVar2 = *plVar2 + (long)iVar12;
      uVar11 = *puVar1 - iVar12;
    }
    *puVar1 = uVar11;
LAB_00c02a38:
    FUN_00c02020(*(undefined8 *)(piVar9 + 2),param_2);
    uVar11 = *piVar9 << 3 | 4;
    if (*(int *)(param_2 + 2) < 5) {
      pbVar15 = (byte *)&local_70;
      if (0x7f < uVar11) {
        pbVar16 = (byte *)&local_70;
        uVar19 = uVar11;
        do {
          uVar11 = uVar19 >> 7;
          uVar5 = uVar19 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar19 | 0x80;
          pbVar16 = pbVar15;
          uVar19 = uVar11;
        } while (uVar5 != 0);
      }
      *pbVar15 = (byte)uVar11;
      iVar13 = ((int)pbVar15 - iVar13) + 1;
      uVar11 = *puVar1;
      piVar9 = (int *)*plVar2;
      puVar20 = &local_70;
      if ((int)uVar11 < iVar13) {
        puVar20 = &local_70;
        do {
          memcpy(piVar9,puVar20,(long)(int)uVar11);
          iVar12 = *(int *)(param_2 + 2);
          uVar8 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_68,puVar1);
          if ((uVar8 & 1) == 0) goto LAB_00c029d4;
          *plVar2 = (long)local_68;
          uVar11 = *puVar1;
          iVar13 = iVar13 - iVar12;
          puVar20 = (undefined8 *)((long)puVar20 + (long)iVar12);
          *piVar3 = *piVar3 + uVar11;
          piVar9 = local_68;
        } while ((int)uVar11 < iVar13);
      }
      goto LAB_00c02b34;
    }
    pbVar15 = (byte *)*plVar2;
    if (uVar11 < 0x80) {
      pbVar16 = pbVar15;
    }
    else {
      pbVar17 = pbVar15;
      uVar19 = uVar11;
      do {
        uVar11 = uVar19 >> 7;
        uVar5 = uVar19 >> 0xe;
        pbVar16 = pbVar17 + 1;
        *pbVar17 = (byte)uVar19 | 0x80;
        pbVar17 = pbVar16;
        uVar19 = uVar11;
      } while (uVar5 != 0);
    }
    *pbVar16 = (byte)uVar11;
    iVar13 = ((int)pbVar16 - (int)pbVar15) + 1;
    *plVar2 = *plVar2 + (long)iVar13;
    uVar11 = *puVar1 - iVar13;
    break;
  default:
    goto switchD_00c020a4_default;
  }
  *puVar1 = uVar11;
  goto switchD_00c020a4_default;
LAB_00c029d4:
  bVar7 = 1;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
LAB_00c02c80:
  *(byte *)(param_2 + 3) = bVar7;
switchD_00c020a4_default:
  lVar21 = lVar21 + 1;
  goto LAB_00c02060;
}


