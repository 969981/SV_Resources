/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c09bd4; name: FUN_00c09bd4
 */


ulong FUN_00c09bd4(ulong *param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint extraout_w1;
  uint uVar5;
  void *__src;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *__dest;
  int iVar10;
  long lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_24 [4];
  
  uVar4 = 0;
  switch(param_2 & 7) {
  case 0:
    pcVar1 = (char *)*param_1;
    if (((char *)param_1[1] <= pcVar1) || (*pcVar1 < '\0')) {
      FUN_00c09268(param_1);
      return (ulong)(extraout_w1 & 1);
    }
    pbVar7 = (byte *)(pcVar1 + 1);
    break;
  case 1:
    __src = (void *)*param_1;
    lVar11 = param_1[1] - (long)__src;
    if (((int)(uint)lVar11 < 8) && ((uint)lVar11 < 8)) {
      iVar10 = 8;
      __dest = auStack_48;
      do {
        iVar8 = (int)lVar11;
        memcpy(__dest,__src,(long)iVar8);
        *param_1 = *param_1 + (long)iVar8;
        uVar4 = FUN_00c08eb0(param_1);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        __src = (void *)*param_1;
        iVar10 = iVar10 - iVar8;
        lVar11 = param_1[1] - (long)__src;
        __dest = __dest + iVar8;
      } while ((int)lVar11 < iVar10);
LAB_00c09ebc:
      memcpy(__dest,__src,(long)iVar10);
      pbVar7 = (byte *)(*param_1 + (long)iVar10);
    }
    else {
      pbVar7 = (byte *)((long)__src + 8);
    }
    break;
  case 2:
    pbVar7 = (byte *)*param_1;
    pbVar9 = (byte *)param_1[1];
    if (pbVar7 < pbVar9) {
      bVar6 = *pbVar7;
      uVar3 = (uint)bVar6;
      if ((char)bVar6 < '\0') goto LAB_00c09e30;
      pbVar7 = pbVar7 + 1;
      *param_1 = (ulong)pbVar7;
    }
    else {
      bVar6 = 0;
LAB_00c09e30:
      uVar4 = FUN_00c0944c(param_1,bVar6);
      if ((uVar4 & 0x8000000080000000) != 0) {
        return 0;
      }
      pbVar7 = (byte *)*param_1;
      pbVar9 = (byte *)param_1[1];
      uVar3 = (uint)uVar4;
    }
    iVar8 = (int)pbVar9 - (int)pbVar7;
    iVar10 = uVar3 - iVar8;
    if (iVar10 == 0 || (int)uVar3 < iVar8) {
      pbVar7 = pbVar7 + uVar3;
      break;
    }
    if (*(int *)((long)param_1 + 0x2c) < 1) {
      *param_1 = 0;
      param_1[1] = 0;
      iVar8 = (int)param_1[6];
      if ((int)param_1[5] <= (int)param_1[6]) {
        iVar8 = (int)param_1[5];
      }
      iVar2 = iVar8 - (int)param_1[3];
      if (iVar10 <= iVar2) {
        *(int *)(param_1 + 3) = (int)param_1[3] + iVar10;
                    /* WARNING: Could not recover jumptable at 0x00c09dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*(long *)param_1[2] + 0x20))();
        return uVar4;
      }
      if (0 < iVar2) {
        *(int *)(param_1 + 3) = iVar8;
        (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],iVar2);
      }
      return 0;
    }
    pbVar7 = pbVar7 + iVar8;
    uVar4 = 0;
    goto LAB_00c09d24;
  case 3:
    uVar4 = param_1[7];
    *(int *)(param_1 + 7) = (int)uVar4 + -1;
    if ((int)uVar4 < 1) {
      return 0;
    }
    do {
      pbVar7 = (byte *)*param_1;
      if (pbVar7 < (byte *)param_1[1]) {
        uVar3 = (uint)*pbVar7;
        if ((char)*pbVar7 < '\0') goto LAB_00c09cd4;
        *(uint *)(param_1 + 4) = uVar3;
        *param_1 = (ulong)(pbVar7 + 1);
        uVar5 = uVar3;
      }
      else {
        uVar3 = 0;
LAB_00c09cd4:
        uVar3 = FUN_00c096d0(param_1,uVar3);
        *(uint *)(param_1 + 4) = uVar3;
        uVar5 = 0;
      }
      if ((uVar3 == 0) || (uVar5 = uVar3, (uVar3 & 7) == 4)) {
        if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
          *(int *)(param_1 + 7) = (int)param_1[7] + 1;
        }
        return (ulong)(uVar5 == (param_2 & 0xfffffff8 | 4));
      }
      uVar4 = FUN_00c09bd4(param_1);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    } while( true );
  default:
    goto switchD_00c09c14_caseD_4;
  case 5:
    __src = (void *)*param_1;
    lVar11 = param_1[1] - (long)__src;
    if (((int)(uint)lVar11 < 4) && ((uint)lVar11 < 4)) {
      iVar10 = 4;
      __dest = auStack_24;
      do {
        iVar8 = (int)lVar11;
        memcpy(__dest,__src,(long)iVar8);
        *param_1 = *param_1 + (long)iVar8;
        uVar4 = FUN_00c08eb0(param_1);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        __src = (void *)*param_1;
        iVar10 = iVar10 - iVar8;
        lVar11 = param_1[1] - (long)__src;
        __dest = __dest + iVar8;
      } while ((int)lVar11 < iVar10);
      goto LAB_00c09ebc;
    }
    pbVar7 = (byte *)((long)__src + 4);
  }
  uVar4 = 1;
LAB_00c09d24:
  *param_1 = (ulong)pbVar7;
switchD_00c09c14_caseD_4:
  return uVar4;
}


