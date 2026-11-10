/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c2a0f0; name: FUN_00c2a0f0
 */


void FUN_00c2a0f0(long *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined4 local_88;
  undefined4 uStack_84;
  char *local_80;
  undefined4 local_78;
  char local_70 [24];
  undefined8 local_58;
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
      switch((char)param_1[1]) {
      case '\x01':
        FUN_00c0b724(*param_1,param_2,param_3);
        return;
      case '\x02':
        FUN_00c0b4d8((int)*param_1,param_2,param_3);
        return;
      case '\x03':
        FUN_00c0a1b0(param_2,*param_1,param_3);
        return;
      case '\x04':
        FUN_00c0a5f0(param_2,*param_1,param_3);
        return;
      case '\x05':
        FUN_00c09ed4(param_2,(int)*param_1,param_3);
        return;
      case '\x06':
        FUN_00c0ae0c(param_2,*param_1,param_3);
        return;
      case '\a':
        FUN_00c0abc8(param_2,(int)*param_1,param_3);
        return;
      case '\b':
        FUN_00c0b970(param_2,(char)*param_1,param_3);
        return;
      case '\t':
        FUN_00c0bea8(param_2,*param_1,param_3);
        return;
      case '\n':
        FUN_00c0cf00(param_2,*param_1,param_3);
        return;
      case '\v':
        if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
          FUN_00c0d1e8(param_2,*param_1,param_3);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00c2ba1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,param_2,param_3);
        return;
      case '\f':
        FUN_00c0c6d4(param_2,*param_1,param_3);
        return;
      case '\r':
        FUN_00c0a338(param_2,(int)*param_1,param_3);
        return;
      case '\x0e':
        FUN_00c0bbcc(param_2,(int)*param_1,param_3);
        return;
      case '\x0f':
        FUN_00c0b050(param_2,(int)*param_1,param_3);
        return;
      case '\x10':
        FUN_00c0b294(param_2,*param_1,param_3);
        return;
      case '\x11':
        FUN_00c0a778(param_2,(int)*param_1,param_3);
        return;
      case '\x12':
        FUN_00c0aa3c(param_2,*param_1,param_3);
        return;
      }
    }
  }
  else if (*(char *)((long)param_1 + 0xb) == '\0') {
    switch((char)param_1[1]) {
    case '\x01':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0b724(*(undefined8 *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8),param_2,param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x02':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0b4d8(*(undefined4 *)(*(long *)(piVar11 + 2) + lVar18 * 4 + 8),param_2,param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x03':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0a1b0(param_2,*(undefined8 *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x04':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0a5f0(param_2,*(undefined8 *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x05':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c09ed4(param_2,*(undefined4 *)(*(long *)(piVar11 + 2) + lVar18 * 4 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x06':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0ae0c(param_2,*(undefined8 *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\a':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0abc8(param_2,*(undefined4 *)(*(long *)(piVar11 + 2) + lVar18 * 4 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\b':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0b970(param_2,*(undefined1 *)(*(long *)(piVar11 + 2) + lVar18 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\t':
      lVar18 = *param_1;
      if (0 < *(int *)(lVar18 + 8)) {
        lVar12 = 0;
        do {
          FUN_00c0bea8(param_2,*(undefined8 *)(*(long *)(lVar18 + 0x10) + lVar12 * 8 + 8),param_3);
          lVar18 = *param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(lVar18 + 8));
      }
      break;
    case '\n':
      lVar18 = *param_1;
      if (0 < *(int *)(lVar18 + 8)) {
        lVar12 = 0;
        do {
          FUN_00c0cf00(param_2,*(undefined8 *)(*(long *)(lVar18 + 0x10) + lVar12 * 8 + 8),param_3);
          lVar18 = *param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(lVar18 + 8));
      }
      break;
    case '\v':
      lVar18 = *param_1;
      if (0 < *(int *)(lVar18 + 8)) {
        lVar12 = 0;
        do {
          FUN_00c0d1e8(param_2,*(undefined8 *)(*(long *)(lVar18 + 0x10) + lVar12 * 8 + 8),param_3);
          lVar18 = *param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(lVar18 + 8));
      }
      break;
    case '\f':
      lVar18 = *param_1;
      if (0 < *(int *)(lVar18 + 8)) {
        lVar12 = 0;
        do {
          FUN_00c0c6d4(param_2,*(undefined8 *)(*(long *)(lVar18 + 0x10) + lVar12 * 8 + 8),param_3);
          lVar18 = *param_1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(lVar18 + 8));
      }
      break;
    case '\r':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0a338(param_2,*(undefined4 *)(*(long *)(piVar11 + 2) + lVar18 * 4 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x0e':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0bbcc(param_2,*(undefined4 *)(*(long *)(piVar11 + 2) + lVar18 * 4 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x0f':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0b050(param_2,*(undefined4 *)(*(long *)(piVar11 + 2) + lVar18 * 4 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x10':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0b294(param_2,*(undefined8 *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x11':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0a778(param_2,*(undefined4 *)(*(long *)(piVar11 + 2) + lVar18 * 4 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x12':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0aa3c(param_2,*(undefined8 *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8),param_3);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
    }
  }
  else if (*(int *)((long)param_1 + 0xc) != 0) {
    uVar8 = param_2 << 3 | 2;
    piVar11 = (int *)(param_3 + 2);
    if (*piVar11 < 5) {
      pbVar14 = (byte *)&local_58;
      if (0x7f < uVar8) {
        pbVar16 = pbVar14;
        uVar17 = uVar8;
        do {
          uVar8 = uVar17 >> 7;
          uVar4 = uVar17 >> 0xe;
          pbVar14 = pbVar16 + 1;
          *pbVar16 = (byte)uVar17 | 0x80;
          pbVar16 = pbVar14;
          uVar17 = uVar8;
        } while (uVar4 != 0);
      }
      puVar19 = &local_58;
      *pbVar14 = (byte)uVar8;
      iVar13 = ((int)pbVar14 - (int)puVar19) + 1;
      iVar9 = *(int *)(param_3 + 2);
      pvVar6 = (void *)param_3[1];
      if (iVar9 < iVar13) {
        puVar19 = &local_58;
        do {
          memcpy(pvVar6,puVar19,(long)iVar9);
          iVar3 = *(int *)(param_3 + 2);
          uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
          if ((uVar7 & 1) == 0) {
            pbVar14 = (byte *)0x0;
            param_3[1] = 0;
            iVar13 = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c2a32c;
          }
          iVar9 = *(int *)(param_3 + 2);
          iVar13 = iVar13 - iVar3;
          pvVar6 = (void *)CONCAT44(uStack_84,local_88);
          puVar19 = (undefined8 *)((long)puVar19 + (long)iVar3);
          param_3[1] = pvVar6;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
        } while (iVar9 < iVar13);
      }
      memcpy(pvVar6,puVar19,(long)iVar13);
      pbVar14 = (byte *)(param_3[1] + (long)iVar13);
      iVar13 = *(int *)(param_3 + 2) - iVar13;
      param_3[1] = pbVar14;
    }
    else {
      pbVar14 = (byte *)param_3[1];
      if (uVar8 < 0x80) {
        pbVar16 = pbVar14;
      }
      else {
        pbVar10 = pbVar14;
        uVar17 = uVar8;
        do {
          uVar8 = uVar17 >> 7;
          uVar4 = uVar17 >> 0xe;
          pbVar16 = pbVar10 + 1;
          *pbVar10 = (byte)uVar17 | 0x80;
          pbVar10 = pbVar16;
          uVar17 = uVar8;
        } while (uVar4 != 0);
      }
      *pbVar16 = (byte)uVar8;
      iVar13 = ((int)pbVar16 - (int)pbVar14) + 1;
      pbVar14 = (byte *)(param_3[1] + (long)iVar13);
      param_3[1] = pbVar14;
      iVar13 = *(int *)(param_3 + 2) - iVar13;
    }
    *(int *)(param_3 + 2) = iVar13;
LAB_00c2a32c:
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (iVar13 < 5) {
      pbVar14 = (byte *)&local_58;
      if (0x7f < uVar8) {
        pbVar16 = pbVar14;
        uVar17 = uVar8;
        do {
          uVar8 = uVar17 >> 7;
          uVar4 = uVar17 >> 0xe;
          pbVar14 = pbVar16 + 1;
          *pbVar16 = (byte)uVar17 | 0x80;
          pbVar16 = pbVar14;
          uVar17 = uVar8;
        } while (uVar4 != 0);
      }
      puVar19 = &local_58;
      *pbVar14 = (byte)uVar8;
      iVar13 = ((int)pbVar14 - (int)puVar19) + 1;
      iVar9 = *(int *)(param_3 + 2);
      pvVar6 = (void *)param_3[1];
      if (iVar9 < iVar13) {
        puVar19 = &local_58;
        do {
          memcpy(pvVar6,puVar19,(long)iVar9);
          iVar3 = *(int *)(param_3 + 2);
          uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
          if ((uVar7 & 1) == 0) {
            pbVar14 = (byte *)0x0;
            param_3[1] = 0;
            uVar8 = 0;
            *(undefined4 *)(param_3 + 2) = 0;
            *(undefined1 *)(param_3 + 3) = 1;
            goto LAB_00c2a450;
          }
          iVar9 = *(int *)(param_3 + 2);
          iVar13 = iVar13 - iVar3;
          pvVar6 = (void *)CONCAT44(uStack_84,local_88);
          puVar19 = (undefined8 *)((long)puVar19 + (long)iVar3);
          param_3[1] = pvVar6;
          *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
        } while (iVar9 < iVar13);
      }
      memcpy(pvVar6,puVar19,(long)iVar13);
      pbVar14 = (byte *)(param_3[1] + (long)iVar13);
      param_3[1] = pbVar14;
      uVar8 = *(int *)(param_3 + 2) - iVar13;
    }
    else {
      pbVar16 = pbVar14;
      if (0x7f < uVar8) {
        pbVar10 = pbVar14;
        uVar17 = uVar8;
        do {
          uVar8 = uVar17 >> 7;
          uVar4 = uVar17 >> 0xe;
          pbVar16 = pbVar10 + 1;
          *pbVar10 = (byte)uVar17 | 0x80;
          pbVar10 = pbVar16;
          uVar17 = uVar8;
        } while (uVar4 != 0);
      }
      *pbVar16 = (byte)uVar8;
      iVar13 = ((int)pbVar16 - (int)pbVar14) + 1;
      pbVar14 = (byte *)(param_3[1] + (long)iVar13);
      param_3[1] = pbVar14;
      uVar8 = *(int *)(param_3 + 2) - iVar13;
    }
    *(uint *)(param_3 + 2) = uVar8;
LAB_00c2a450:
    switch((char)param_1[1]) {
    case '\x01':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          local_58 = *(undefined8 *)(*(long *)(piVar15 + 2) + lVar18 * 8 + 8);
          if (uVar8 < 8) {
            puVar19 = &local_58;
            iVar13 = 8;
            do {
              memcpy(pbVar14,puVar19,(long)(int)uVar8);
              iVar9 = *(int *)(param_3 + 2);
              uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
              if ((uVar7 & 1) == 0) {
                pbVar14 = (byte *)0x0;
                uVar8 = 0;
                param_3[1] = 0;
                *(undefined4 *)(param_3 + 2) = 0;
                *(undefined1 *)(param_3 + 3) = 1;
                goto LAB_00c2a9f0;
              }
              uVar8 = *(uint *)(param_3 + 2);
              iVar13 = iVar13 - iVar9;
              pbVar14 = (byte *)CONCAT44(uStack_84,local_88);
              puVar19 = (undefined8 *)((long)puVar19 + (long)iVar9);
              param_3[1] = pbVar14;
              *(uint *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + uVar8;
            } while ((int)uVar8 < iVar13);
            memcpy(pbVar14,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            *(undefined8 *)pbVar14 = local_58;
            pbVar14 = (byte *)(param_3[1] + 8);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - 8;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2a9f0:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\x02':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          uVar1 = *(undefined4 *)(*(long *)(piVar15 + 2) + lVar18 * 4 + 8);
          if (uVar8 < 4) {
            puVar19 = &local_58;
            iVar13 = 4;
            local_58 = CONCAT44(local_58._4_4_,uVar1);
            do {
              memcpy(pbVar14,puVar19,(long)(int)uVar8);
              iVar9 = *(int *)(param_3 + 2);
              uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
              if ((uVar7 & 1) == 0) {
                pbVar14 = (byte *)0x0;
                uVar8 = 0;
                param_3[1] = 0;
                *(undefined4 *)(param_3 + 2) = 0;
                *(undefined1 *)(param_3 + 3) = 1;
                goto LAB_00c2aae8;
              }
              uVar8 = *(uint *)(param_3 + 2);
              iVar13 = iVar13 - iVar9;
              pbVar14 = (byte *)CONCAT44(uStack_84,local_88);
              puVar19 = (undefined8 *)((long)puVar19 + (long)iVar9);
              param_3[1] = pbVar14;
              *(uint *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + uVar8;
            } while ((int)uVar8 < iVar13);
            memcpy(pbVar14,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            *(undefined4 *)pbVar14 = uVar1;
            pbVar14 = (byte *)(param_3[1] + 4);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - 4;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2aae8:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\x03':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0998c(param_3,*(undefined8 *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8));
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x04':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          FUN_00c0998c(param_3,*(undefined8 *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8));
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
      break;
    case '\x05':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          uVar8 = *(uint *)(*(long *)(piVar15 + 2) + lVar18 * 4 + 8);
          if ((int)uVar8 < 0) {
            FUN_00c0998c(param_3,(long)(int)uVar8);
          }
          else {
            if (*piVar11 < 5) {
              pbVar14 = (byte *)&local_58;
              if (0x7f < uVar8) {
                pbVar16 = pbVar14;
                uVar7 = (ulong)uVar8;
                do {
                  uVar8 = (uint)(uVar7 >> 7);
                  uVar5 = uVar7 >> 0xe;
                  pbVar14 = pbVar16 + 1;
                  *pbVar16 = (byte)uVar7 | 0x80;
                  pbVar16 = pbVar14;
                  uVar7 = uVar7 >> 7;
                } while (uVar5 != 0);
              }
              puVar19 = &local_58;
              *pbVar14 = (byte)uVar8;
              iVar13 = ((int)pbVar14 - (int)puVar19) + 1;
              iVar9 = *(int *)(param_3 + 2);
              pvVar6 = (void *)param_3[1];
              if (iVar9 < iVar13) {
                puVar19 = &local_58;
                do {
                  memcpy(pvVar6,puVar19,(long)iVar9);
                  iVar3 = *(int *)(param_3 + 2);
                  uVar7 = (**(code **)(*(long *)*param_3 + 0x10))
                                    ((long *)*param_3,&local_88,piVar11);
                  if ((uVar7 & 1) == 0) {
                    param_3[1] = 0;
                    *(undefined4 *)(param_3 + 2) = 0;
                    *(undefined1 *)(param_3 + 3) = 1;
                    goto LAB_00c2ace4;
                  }
                  iVar9 = *(int *)(param_3 + 2);
                  iVar13 = iVar13 - iVar3;
                  pvVar6 = (void *)CONCAT44(uStack_84,local_88);
                  puVar19 = (undefined8 *)((long)puVar19 + (long)iVar3);
                  param_3[1] = pvVar6;
                  *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
                } while (iVar9 < iVar13);
              }
              memcpy(pvVar6,puVar19,(long)iVar13);
              param_3[1] = param_3[1] + (long)iVar13;
              iVar13 = *(int *)(param_3 + 2) - iVar13;
            }
            else {
              pbVar14 = (byte *)param_3[1];
              if (uVar8 < 0x80) {
                pbVar16 = pbVar14;
              }
              else {
                pbVar10 = pbVar14;
                uVar7 = (ulong)uVar8;
                do {
                  uVar8 = (uint)(uVar7 >> 7);
                  uVar5 = uVar7 >> 0xe;
                  pbVar16 = pbVar10 + 1;
                  *pbVar10 = (byte)uVar7 | 0x80;
                  pbVar10 = pbVar16;
                  uVar7 = uVar7 >> 7;
                } while (uVar5 != 0);
              }
              *pbVar16 = (byte)uVar8;
              iVar13 = ((int)pbVar16 - (int)pbVar14) + 1;
              param_3[1] = param_3[1] + (long)iVar13;
              iVar13 = *(int *)(param_3 + 2) - iVar13;
            }
            *(int *)(param_3 + 2) = iVar13;
          }
LAB_00c2ace4:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\x06':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          local_58 = *(undefined8 *)(*(long *)(piVar15 + 2) + lVar18 * 8 + 8);
          if (uVar8 < 8) {
            puVar19 = &local_58;
            iVar13 = 8;
            do {
              memcpy(pbVar14,puVar19,(long)(int)uVar8);
              iVar9 = *(int *)(param_3 + 2);
              uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
              if ((uVar7 & 1) == 0) {
                pbVar14 = (byte *)0x0;
                uVar8 = 0;
                param_3[1] = 0;
                *(undefined4 *)(param_3 + 2) = 0;
                *(undefined1 *)(param_3 + 3) = 1;
                goto LAB_00c2adec;
              }
              uVar8 = *(uint *)(param_3 + 2);
              iVar13 = iVar13 - iVar9;
              pbVar14 = (byte *)CONCAT44(uStack_84,local_88);
              puVar19 = (undefined8 *)((long)puVar19 + (long)iVar9);
              param_3[1] = pbVar14;
              *(uint *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + uVar8;
            } while ((int)uVar8 < iVar13);
            memcpy(pbVar14,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            *(undefined8 *)pbVar14 = local_58;
            pbVar14 = (byte *)(param_3[1] + 8);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - 8;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2adec:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\a':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          uVar1 = *(undefined4 *)(*(long *)(piVar15 + 2) + lVar18 * 4 + 8);
          if (uVar8 < 4) {
            puVar19 = &local_58;
            iVar13 = 4;
            local_58 = CONCAT44(local_58._4_4_,uVar1);
            do {
              memcpy(pbVar14,puVar19,(long)(int)uVar8);
              iVar9 = *(int *)(param_3 + 2);
              uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
              if ((uVar7 & 1) == 0) {
                pbVar14 = (byte *)0x0;
                uVar8 = 0;
                param_3[1] = 0;
                *(undefined4 *)(param_3 + 2) = 0;
                *(undefined1 *)(param_3 + 3) = 1;
                goto LAB_00c2aee4;
              }
              uVar8 = *(uint *)(param_3 + 2);
              iVar13 = iVar13 - iVar9;
              pbVar14 = (byte *)CONCAT44(uStack_84,local_88);
              puVar19 = (undefined8 *)((long)puVar19 + (long)iVar9);
              param_3[1] = pbVar14;
              *(uint *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + uVar8;
            } while ((int)uVar8 < iVar13);
            memcpy(pbVar14,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            *(undefined4 *)pbVar14 = uVar1;
            pbVar14 = (byte *)(param_3[1] + 4);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - 4;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2aee4:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\b':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          bVar2 = *(byte *)(*(long *)(piVar15 + 2) + lVar18 + 8);
          if ((int)uVar8 < 5) {
            local_58 = CONCAT71(local_58._1_7_,bVar2);
            if ((int)uVar8 < 1) {
              iVar13 = 1;
              puVar19 = &local_58;
              do {
                memcpy(pbVar14,puVar19,(long)(int)uVar8);
                iVar9 = *(int *)(param_3 + 2);
                uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
                if ((uVar7 & 1) == 0) {
                  pbVar14 = (byte *)0x0;
                  uVar8 = 0;
                  param_3[1] = 0;
                  *(undefined4 *)(param_3 + 2) = 0;
                  *(undefined1 *)(param_3 + 3) = 1;
                  goto LAB_00c2afd8;
                }
                uVar8 = *(uint *)(param_3 + 2);
                iVar13 = iVar13 - iVar9;
                pbVar14 = (byte *)CONCAT44(uStack_84,local_88);
                puVar19 = (undefined8 *)((long)puVar19 + (long)iVar9);
                param_3[1] = pbVar14;
                *(uint *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + uVar8;
              } while ((int)uVar8 < iVar13);
            }
            else {
              puVar19 = &local_58;
              iVar13 = 1;
            }
            memcpy(pbVar14,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            *pbVar14 = bVar2;
            pbVar14 = (byte *)(param_3[1] + 1);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - 1;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2afd8:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\t':
    case '\n':
    case '\v':
    case '\f':
      local_88 = 3;
      local_70[0x10] = '\0';
      local_70[0x11] = '\0';
      local_70[0x12] = '\0';
      local_70[0x13] = '\0';
      local_70[0x14] = '\0';
      local_70[0x15] = '\0';
      local_70[0x16] = '\0';
      local_70[0x17] = '\0';
      local_78 = 0x5be;
      local_80 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set.cc"
      ;
      local_70[0] = '\0';
      local_70[1] = '\0';
      local_70[2] = '\0';
      local_70[3] = '\0';
      local_70[4] = '\0';
      local_70[5] = '\0';
      local_70[6] = '\0';
      local_70[7] = '\0';
      local_70[8] = '\0';
      local_70[9] = '\0';
      local_70[10] = '\0';
      local_70[0xb] = '\0';
      local_70[0xc] = '\0';
      local_70[0xd] = '\0';
      local_70[0xe] = '\0';
      local_70[0xf] = '\0';
      std::string::append(local_70);
      FUN_00bb0e90(&local_88);
      FUN_00bb0d74(&local_88);
      break;
    case '\r':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          uVar17 = *(uint *)(*(long *)(piVar15 + 2) + lVar18 * 4 + 8);
          if ((int)uVar8 < 5) {
            pbVar14 = (byte *)&local_58;
            if (0x7f < uVar17) {
              pbVar16 = pbVar14;
              uVar8 = uVar17;
              do {
                uVar17 = uVar8 >> 7;
                uVar4 = uVar8 >> 0xe;
                pbVar14 = pbVar16 + 1;
                *pbVar16 = (byte)uVar8 | 0x80;
                pbVar16 = pbVar14;
                uVar8 = uVar17;
              } while (uVar4 != 0);
            }
            puVar19 = &local_58;
            *pbVar14 = (byte)uVar17;
            iVar13 = ((int)pbVar14 - (int)puVar19) + 1;
            iVar9 = *(int *)(param_3 + 2);
            pvVar6 = (void *)param_3[1];
            if (iVar9 < iVar13) {
              puVar19 = &local_58;
              do {
                memcpy(pvVar6,puVar19,(long)iVar9);
                iVar3 = *(int *)(param_3 + 2);
                uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
                if ((uVar7 & 1) == 0) {
                  pbVar14 = (byte *)0x0;
                  uVar8 = 0;
                  param_3[1] = 0;
                  *(undefined4 *)(param_3 + 2) = 0;
                  *(undefined1 *)(param_3 + 3) = 1;
                  goto LAB_00c2b14c;
                }
                iVar9 = *(int *)(param_3 + 2);
                iVar13 = iVar13 - iVar3;
                pvVar6 = (void *)CONCAT44(uStack_84,local_88);
                puVar19 = (undefined8 *)((long)puVar19 + (long)iVar3);
                param_3[1] = pvVar6;
                *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
              } while (iVar9 < iVar13);
            }
            memcpy(pvVar6,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            pbVar16 = pbVar14;
            if (0x7f < uVar17) {
              pbVar10 = pbVar14;
              uVar8 = uVar17;
              do {
                uVar17 = uVar8 >> 7;
                uVar4 = uVar8 >> 0xe;
                pbVar16 = pbVar10 + 1;
                *pbVar10 = (byte)uVar8 | 0x80;
                pbVar10 = pbVar16;
                uVar8 = uVar17;
              } while (uVar4 != 0);
            }
            *pbVar16 = (byte)uVar17;
            iVar13 = ((int)pbVar16 - (int)pbVar14) + 1;
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2b14c:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\x0e':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          uVar8 = *(uint *)(*(long *)(piVar15 + 2) + lVar18 * 4 + 8);
          if ((int)uVar8 < 0) {
            FUN_00c0998c(param_3,(long)(int)uVar8);
          }
          else {
            if (*piVar11 < 5) {
              pbVar14 = (byte *)&local_58;
              if (0x7f < uVar8) {
                pbVar16 = pbVar14;
                uVar7 = (ulong)uVar8;
                do {
                  uVar8 = (uint)(uVar7 >> 7);
                  uVar5 = uVar7 >> 0xe;
                  pbVar14 = pbVar16 + 1;
                  *pbVar16 = (byte)uVar7 | 0x80;
                  pbVar16 = pbVar14;
                  uVar7 = uVar7 >> 7;
                } while (uVar5 != 0);
              }
              puVar19 = &local_58;
              *pbVar14 = (byte)uVar8;
              iVar13 = ((int)pbVar14 - (int)puVar19) + 1;
              iVar9 = *(int *)(param_3 + 2);
              pvVar6 = (void *)param_3[1];
              if (iVar9 < iVar13) {
                puVar19 = &local_58;
                do {
                  memcpy(pvVar6,puVar19,(long)iVar9);
                  iVar3 = *(int *)(param_3 + 2);
                  uVar7 = (**(code **)(*(long *)*param_3 + 0x10))
                                    ((long *)*param_3,&local_88,piVar11);
                  if ((uVar7 & 1) == 0) {
                    param_3[1] = 0;
                    *(undefined4 *)(param_3 + 2) = 0;
                    *(undefined1 *)(param_3 + 3) = 1;
                    goto LAB_00c2b2e0;
                  }
                  iVar9 = *(int *)(param_3 + 2);
                  iVar13 = iVar13 - iVar3;
                  pvVar6 = (void *)CONCAT44(uStack_84,local_88);
                  puVar19 = (undefined8 *)((long)puVar19 + (long)iVar3);
                  param_3[1] = pvVar6;
                  *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
                } while (iVar9 < iVar13);
              }
              memcpy(pvVar6,puVar19,(long)iVar13);
              param_3[1] = param_3[1] + (long)iVar13;
              iVar13 = *(int *)(param_3 + 2) - iVar13;
            }
            else {
              pbVar14 = (byte *)param_3[1];
              if (uVar8 < 0x80) {
                pbVar16 = pbVar14;
              }
              else {
                pbVar10 = pbVar14;
                uVar7 = (ulong)uVar8;
                do {
                  uVar8 = (uint)(uVar7 >> 7);
                  uVar5 = uVar7 >> 0xe;
                  pbVar16 = pbVar10 + 1;
                  *pbVar10 = (byte)uVar7 | 0x80;
                  pbVar10 = pbVar16;
                  uVar7 = uVar7 >> 7;
                } while (uVar5 != 0);
              }
              *pbVar16 = (byte)uVar8;
              iVar13 = ((int)pbVar16 - (int)pbVar14) + 1;
              param_3[1] = param_3[1] + (long)iVar13;
              iVar13 = *(int *)(param_3 + 2) - iVar13;
            }
            *(int *)(param_3 + 2) = iVar13;
          }
LAB_00c2b2e0:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\x0f':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          uVar1 = *(undefined4 *)(*(long *)(piVar15 + 2) + lVar18 * 4 + 8);
          if (uVar8 < 4) {
            puVar19 = &local_58;
            iVar13 = 4;
            local_58 = CONCAT44(local_58._4_4_,uVar1);
            do {
              memcpy(pbVar14,puVar19,(long)(int)uVar8);
              iVar9 = *(int *)(param_3 + 2);
              uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
              if ((uVar7 & 1) == 0) {
                pbVar14 = (byte *)0x0;
                uVar8 = 0;
                param_3[1] = 0;
                *(undefined4 *)(param_3 + 2) = 0;
                *(undefined1 *)(param_3 + 3) = 1;
                goto LAB_00c2b3e8;
              }
              uVar8 = *(uint *)(param_3 + 2);
              iVar13 = iVar13 - iVar9;
              pbVar14 = (byte *)CONCAT44(uStack_84,local_88);
              puVar19 = (undefined8 *)((long)puVar19 + (long)iVar9);
              param_3[1] = pbVar14;
              *(uint *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + uVar8;
            } while ((int)uVar8 < iVar13);
            memcpy(pbVar14,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            *(undefined4 *)pbVar14 = uVar1;
            pbVar14 = (byte *)(param_3[1] + 4);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - 4;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2b3e8:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\x10':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          local_58 = *(undefined8 *)(*(long *)(piVar15 + 2) + lVar18 * 8 + 8);
          if (uVar8 < 8) {
            puVar19 = &local_58;
            iVar13 = 8;
            do {
              memcpy(pbVar14,puVar19,(long)(int)uVar8);
              iVar9 = *(int *)(param_3 + 2);
              uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
              if ((uVar7 & 1) == 0) {
                pbVar14 = (byte *)0x0;
                uVar8 = 0;
                param_3[1] = 0;
                *(undefined4 *)(param_3 + 2) = 0;
                *(undefined1 *)(param_3 + 3) = 1;
                goto LAB_00c2b4e0;
              }
              uVar8 = *(uint *)(param_3 + 2);
              iVar13 = iVar13 - iVar9;
              pbVar14 = (byte *)CONCAT44(uStack_84,local_88);
              puVar19 = (undefined8 *)((long)puVar19 + (long)iVar9);
              param_3[1] = pbVar14;
              *(uint *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + uVar8;
            } while ((int)uVar8 < iVar13);
            memcpy(pbVar14,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            *(undefined8 *)pbVar14 = local_58;
            pbVar14 = (byte *)(param_3[1] + 8);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - 8;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2b4e0:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\x11':
      piVar15 = (int *)*param_1;
      if (0 < *piVar15) {
        lVar18 = 0;
        do {
          iVar13 = *(int *)(*(long *)(piVar15 + 2) + lVar18 * 4 + 8);
          uVar17 = iVar13 << 1 ^ iVar13 >> 0x1f;
          if ((int)uVar8 < 5) {
            pbVar14 = (byte *)&local_58;
            if (0x7f < uVar17) {
              pbVar16 = pbVar14;
              uVar8 = uVar17;
              do {
                uVar17 = uVar8 >> 7;
                uVar4 = uVar8 >> 0xe;
                pbVar14 = pbVar16 + 1;
                *pbVar16 = (byte)uVar8 | 0x80;
                pbVar16 = pbVar14;
                uVar8 = uVar17;
              } while (uVar4 != 0);
            }
            puVar19 = &local_58;
            *pbVar14 = (byte)uVar17;
            iVar13 = ((int)pbVar14 - (int)puVar19) + 1;
            iVar9 = *(int *)(param_3 + 2);
            pvVar6 = (void *)param_3[1];
            if (iVar9 < iVar13) {
              puVar19 = &local_58;
              do {
                memcpy(pvVar6,puVar19,(long)iVar9);
                iVar3 = *(int *)(param_3 + 2);
                uVar7 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_88,piVar11);
                if ((uVar7 & 1) == 0) {
                  pbVar14 = (byte *)0x0;
                  uVar8 = 0;
                  param_3[1] = 0;
                  *(undefined4 *)(param_3 + 2) = 0;
                  *(undefined1 *)(param_3 + 3) = 1;
                  goto LAB_00c2b644;
                }
                iVar9 = *(int *)(param_3 + 2);
                iVar13 = iVar13 - iVar3;
                pvVar6 = (void *)CONCAT44(uStack_84,local_88);
                puVar19 = (undefined8 *)((long)puVar19 + (long)iVar3);
                param_3[1] = pvVar6;
                *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar9;
              } while (iVar9 < iVar13);
            }
            memcpy(pvVar6,puVar19,(long)iVar13);
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          else {
            pbVar16 = pbVar14;
            if (0x7f < uVar17) {
              pbVar10 = pbVar14;
              uVar8 = uVar17;
              do {
                uVar17 = uVar8 >> 7;
                uVar4 = uVar8 >> 0xe;
                pbVar16 = pbVar10 + 1;
                *pbVar10 = (byte)uVar8 | 0x80;
                pbVar10 = pbVar16;
                uVar8 = uVar17;
              } while (uVar4 != 0);
            }
            *pbVar16 = (byte)uVar17;
            iVar13 = ((int)pbVar16 - (int)pbVar14) + 1;
            pbVar14 = (byte *)(param_3[1] + (long)iVar13);
            param_3[1] = pbVar14;
            uVar8 = *(int *)(param_3 + 2) - iVar13;
          }
          *(uint *)(param_3 + 2) = uVar8;
LAB_00c2b644:
          piVar15 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar15);
      }
      break;
    case '\x12':
      piVar11 = (int *)*param_1;
      if (0 < *piVar11) {
        lVar18 = 0;
        do {
          lVar12 = *(long *)(*(long *)(piVar11 + 2) + lVar18 * 8 + 8);
          FUN_00c0998c(param_3,lVar12 << 1 ^ lVar12 >> 0x3f);
          piVar11 = (int *)*param_1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar11);
      }
    }
  }
  return;
}


