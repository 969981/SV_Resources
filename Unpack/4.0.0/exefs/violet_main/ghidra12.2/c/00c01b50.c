/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c01b50; name: FUN_00c01b50
 */


bool FUN_00c01b50(ulong *param_1,ulong param_2,long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *__src;
  undefined4 *__src_00;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_58;
  undefined4 local_34;
  
  uVar3 = (uint)param_2 & 7;
  bVar2 = false;
  if (5 < uVar3) {
    return false;
  }
  uVar11 = param_2 >> 3 & 0x1fffffff;
  switch(uVar3) {
  case 0:
    pbVar4 = (byte *)*param_1;
    if ((pbVar4 < (byte *)param_1[1]) && (-1 < (char)*pbVar4)) {
      uVar5 = (ulong)*pbVar4;
      *param_1 = (ulong)(pbVar4 + 1);
    }
    else {
      auVar15 = FUN_00c09268(param_1);
      uVar5 = auVar15._0_8_;
      if ((auVar15._8_8_ & 1) == 0) {
        return false;
      }
    }
    if (param_3 != 0) {
      FUN_00c001d0(param_3,uVar11,uVar5);
    }
    break;
  case 1:
    __src = (undefined8 *)*param_1;
    lVar14 = param_1[1] - (long)__src;
    if ((int)(uint)lVar14 < 8) {
      if ((uint)lVar14 < 8) {
        iVar12 = 8;
        puVar8 = &local_58;
        do {
          iVar13 = (int)lVar14;
          memcpy(puVar8,__src,(long)iVar13);
          *param_1 = *param_1 + (long)iVar13;
          uVar5 = FUN_00c08eb0(param_1);
          if ((uVar5 & 1) == 0) {
            return false;
          }
          __src = (undefined8 *)*param_1;
          iVar12 = iVar12 - iVar13;
          lVar14 = param_1[1] - (long)__src;
          puVar8 = (undefined8 *)((long)puVar8 + (long)iVar13);
        } while ((int)lVar14 < iVar12);
        memcpy(puVar8,__src,(long)iVar12);
        puVar8 = (undefined8 *)(*param_1 + (long)iVar12);
        __src = &local_58;
      }
      else {
        puVar8 = __src + 1;
      }
      *param_1 = (ulong)puVar8;
      uVar7 = *__src;
    }
    else {
      uVar7 = *__src;
      *param_1 = (ulong)(__src + 1);
    }
    if (param_3 != 0) {
      FUN_00c00848(param_3,uVar11,uVar7);
    }
    break;
  case 2:
    pbVar4 = (byte *)*param_1;
    if (pbVar4 < (byte *)param_1[1]) {
      uVar5 = (ulong)*pbVar4;
      if ((char)*pbVar4 < '\0') goto LAB_00c01d30;
      *param_1 = (ulong)(pbVar4 + 1);
    }
    else {
      uVar5 = 0;
LAB_00c01d30:
      uVar5 = FUN_00c0944c(param_1,uVar5);
      if ((long)uVar5 < 0) {
        return false;
      }
    }
    iVar12 = (int)uVar5;
    if (param_3 == 0) {
      if (iVar12 < 0) {
        return false;
      }
      uVar11 = *param_1;
      iVar10 = (int)param_1[1] - (int)uVar11;
      iVar13 = iVar12 - iVar10;
      if (iVar13 != 0 && iVar10 <= iVar12) {
        if (0 < *(int *)((long)param_1 + 0x2c)) {
          *param_1 = uVar11 + (long)iVar10;
          return false;
        }
        *param_1 = 0;
        param_1[1] = 0;
        iVar12 = (int)param_1[6];
        if ((int)param_1[5] <= (int)param_1[6]) {
          iVar12 = (int)param_1[5];
        }
        iVar10 = iVar12 - (int)param_1[3];
        if (iVar10 < iVar13) {
          if (iVar10 < 1) {
            return false;
          }
          *(int *)(param_1 + 3) = iVar12;
          (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],iVar10);
          return false;
        }
        *(int *)(param_1 + 3) = (int)param_1[3] + iVar13;
        uVar11 = (**(code **)(*(long *)param_1[2] + 0x20))();
        goto joined_r0x00c01e7c;
      }
      uVar5 = uVar11 + (uVar5 & 0xffffffff);
LAB_00c01e10:
      *param_1 = uVar5;
    }
    else {
      pbVar4 = (byte *)FUN_00c00b88(param_3,uVar11);
      if (iVar12 < 0) {
        return false;
      }
      if ((int)param_1[1] - (int)*param_1 < iVar12) {
        uVar11 = FUN_00c09150(param_1,pbVar4,uVar5 & 0xffffffff);
joined_r0x00c01e7c:
        if ((uVar11 & 1) == 0) {
          return false;
        }
      }
      else {
        uVar5 = uVar5 & 0xffffffff;
        std::string::resize((ulong)pbVar4,(char)uVar5);
        if ((*pbVar4 & 1) == 0) {
          if (1 < *pbVar4) {
            pbVar4 = pbVar4 + 1;
LAB_00c01dfc:
            memcpy(pbVar4,(void *)*param_1,uVar5);
            uVar5 = *param_1 + uVar5;
            goto LAB_00c01e10;
          }
        }
        else if ((*(long *)(pbVar4 + 8) != 0) &&
                (pbVar4 = *(byte **)(pbVar4 + 0x10), pbVar4 != (byte *)0x0)) goto LAB_00c01dfc;
      }
    }
    break;
  case 3:
    uVar5 = param_1[7];
    *(int *)(param_1 + 7) = (int)uVar5 + -1;
    if ((int)uVar5 < 1) {
      return false;
    }
    if (param_3 != 0) {
      param_3 = FUN_00c00f38(param_3,uVar11);
    }
    do {
      pbVar4 = (byte *)*param_1;
      if (pbVar4 < (byte *)param_1[1]) {
        uVar3 = (uint)*pbVar4;
        if ((char)*pbVar4 < '\0') goto LAB_00c01c70;
        *(uint *)(param_1 + 4) = uVar3;
        *param_1 = (ulong)(pbVar4 + 1);
        if (uVar3 == 0) {
          uVar6 = 0;
          goto LAB_00c01cf4;
        }
      }
      else {
        uVar3 = 0;
LAB_00c01c70:
        uVar3 = FUN_00c096d0(param_1,uVar3);
        *(uint *)(param_1 + 4) = uVar3;
        uVar6 = 0;
        if (uVar3 == 0) goto LAB_00c01cf4;
      }
      uVar6 = uVar3;
      if ((uVar6 & 7) == 4) {
LAB_00c01cf4:
        if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
          *(int *)(param_1 + 7) = (int)param_1[7] + 1;
        }
        return uVar6 == ((uint)param_2 & 0xfffffff8 | 4);
      }
      uVar11 = FUN_00c01b50(param_1,uVar6,param_3);
      if ((uVar11 & 1) == 0) {
        return false;
      }
    } while( true );
  case 4:
    goto switchD_00c01ba0_caseD_4;
  case 5:
    __src_00 = (undefined4 *)*param_1;
    lVar14 = param_1[1] - (long)__src_00;
    if ((int)(uint)lVar14 < 4) {
      if ((uint)lVar14 < 4) {
        iVar12 = 4;
        puVar9 = &local_34;
        do {
          iVar13 = (int)lVar14;
          memcpy(puVar9,__src_00,(long)iVar13);
          *param_1 = *param_1 + (long)iVar13;
          uVar5 = FUN_00c08eb0(param_1);
          if ((uVar5 & 1) == 0) {
            return false;
          }
          __src_00 = (undefined4 *)*param_1;
          iVar12 = iVar12 - iVar13;
          lVar14 = param_1[1] - (long)__src_00;
          puVar9 = (undefined4 *)((long)puVar9 + (long)iVar13);
        } while ((int)lVar14 < iVar12);
        memcpy(puVar9,__src_00,(long)iVar12);
        puVar9 = (undefined4 *)(*param_1 + (long)iVar12);
        __src_00 = &local_34;
      }
      else {
        puVar9 = __src_00 + 1;
      }
      *param_1 = (ulong)puVar9;
      uVar1 = *__src_00;
    }
    else {
      uVar1 = *__src_00;
      *param_1 = (ulong)(__src_00 + 1);
    }
    if (param_3 != 0) {
      FUN_00c00508(param_3,uVar11,uVar1);
    }
  }
  bVar2 = true;
switchD_00c01ba0_caseD_4:
  return bVar2;
}


