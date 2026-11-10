/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eebcf4; name: FUN_02eebcf4
 */


undefined8
FUN_02eebcf4(long param_1,long param_2,short *param_3,long param_4,long param_5,int param_6,
            long *param_7,long *param_8)

{
  float *pfVar1;
  float *pfVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  undefined4 *puVar16;
  float *pfVar17;
  ulong uVar18;
  undefined4 *puVar19;
  short *psVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  uint unaff_w28;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  iVar25 = param_6 - (int)param_5;
  if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) < iVar25) {
    FUN_02eec748(param_7,(long)iVar25);
  }
  uVar26 = *(uint *)(param_7 + 1);
  if ((int)uVar26 < iVar25) {
    *(int *)(param_7 + 1) = iVar25;
    memset((void *)(*param_7 + (long)(int)uVar26 * 4),0xff,
           (ulong)((param_6 - (int)param_5) + ~uVar26) * 4 + 4);
  }
  else if (iVar25 < (int)uVar26) {
    *(int *)(param_7 + 1) = iVar25;
  }
  uVar26 = (int)(param_2 - param_1 >> 2) * -0x55555555;
  uVar30 = (ulong)(int)uVar26;
  if ((int)(*(uint *)((long)param_8 + 0xc) & 0x7fffffff) < (int)uVar26) {
    FUN_02eec748(param_8,uVar30);
  }
  uVar32 = *(uint *)(param_8 + 1);
  if ((int)uVar32 < (int)uVar26) {
    *(uint *)(param_8 + 1) = uVar26;
    memset((void *)(*param_8 + (long)(int)uVar32 * 4),0xff,(ulong)(~uVar32 + uVar26) * 4 + 4);
  }
  else if ((int)uVar26 < (int)uVar32) {
    *(uint *)(param_8 + 1) = uVar26;
  }
  uVar21 = (uint)((ulong)(param_4 - (long)param_3) >> 2);
  psVar20 = param_3 + (long)(int)uVar21 * 2;
  uVar32 = uVar21 & (int)uVar21 >> 0x1f;
  lVar13 = (param_4 - (long)param_3) * 0x40000000 >> 0x20;
  do {
    psVar20 = psVar20 + -2;
    lVar14 = lVar13 + -1;
    if (lVar13 < 1) goto LAB_02eebe4c;
    lVar13 = lVar14;
  } while (*psVar20 == *param_3);
  uVar32 = (int)lVar14 + 1;
LAB_02eebe4c:
  pfVar17 = (float *)(param_1 + (long)(int)uVar26 * 0xc);
  if (0 < (int)uVar26) {
    uVar26 = 1;
  }
  do {
    if ((long)uVar30 < 2) {
      uVar30 = (ulong)uVar26;
      goto LAB_02eebeac;
    }
    if ((pfVar17[-6] != pfVar17[-3]) || (pfVar17[-5] != pfVar17[-2])) goto LAB_02eebeac;
    pfVar2 = pfVar17 + -4;
    uVar30 = uVar30 - 1;
    pfVar1 = pfVar17 + -1;
    pfVar17 = pfVar17 + -3;
  } while (*pfVar2 == *pfVar1);
  uVar30 = (ulong)((int)uVar30 + 1);
LAB_02eebeac:
  local_98 = 0;
  local_90 = 0x8000000000000000;
  lVar13 = tpidr_el0;
  lVar14 = *(long *)(lVar13 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar13 + 0x1000b8) = lVar14;
  }
  local_88 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
  if (*(long *)(local_88 + 8) == 0) {
    local_78 = 0x180;
    uStack_70 = 0x180;
    if (local_88 == 0) goto LAB_02eebf60;
    local_68 = 0x180;
    if (*(ulong *)(local_88 + 0x28) < 0x180) {
LAB_02eebf1c:
      lVar13 = FUN_031cf3b4(local_88,&local_68);
    }
    else {
      lVar13 = *(long *)(local_88 + 0x38);
      if (*(ulong *)(local_88 + 0x40) < lVar13 + 0x180U) goto LAB_02eebf1c;
      *(ulong *)(local_88 + 0x38) = lVar13 + 0x180U;
    }
  }
  else {
    local_88 = 0;
LAB_02eebf60:
    uStack_70 = 0x180;
    local_78 = 0x180;
    lVar13 = (**(code **)PTR_DAT_047d1a08)(1,&uStack_70,0x40);
  }
  local_90 = CONCAT44(0x80000040,(int)local_90);
  local_98 = lVar13;
  local_80 = lVar13;
  if (0 < (int)uVar32) {
    uVar18 = 0;
    do {
      puVar3 = (ushort *)(param_3 + uVar18 * 2);
      uVar26 = (uint)(byte)puVar3[1];
      if (uVar26 != 0) {
        uVar27 = 0;
        uVar26 = uVar26 - 1;
        do {
          lVar14 = (ulong)*puVar3 + (long)(int)uVar26;
          cVar8 = *(char *)(param_5 + lVar14);
          cVar9 = *(char *)(param_5 + *puVar3 + uVar27);
          unaff_w28 = (uint)uVar18 & 0xffff | (uVar26 & 0xff) << 0x10 | unaff_w28 & 0xff000000;
          iVar25 = (int)local_90 + -1;
          if (0 < (int)local_90) {
            lVar22 = 0;
            lVar23 = 0;
            pcVar15 = (char *)(lVar13 + 1);
            do {
              if (cVar9 == pcVar15[-1] && cVar8 == *pcVar15) {
                if ((int)lVar22 != 1) {
                  lVar24 = lVar13 + (lVar23 >> 0x20) * 6;
                  uVar10 = *(ushort *)(lVar24 + 2);
                  bVar7 = *(byte *)(lVar24 + 4);
                  uVar6 = *(undefined1 *)(lVar24 + 5);
                  puVar4 = (ushort *)(*param_7 + lVar14 * 4);
                  uVar11 = param_3[(ulong)uVar10 * 2];
                  *puVar4 = uVar10;
                  *(byte *)(puVar4 + 1) = bVar7;
                  *(undefined1 *)((long)puVar4 + 3) = uVar6;
                  *(uint *)(*param_7 + ((ulong)uVar11 + (ulong)bVar7) * 4) = unaff_w28;
                  iVar29 = (int)local_90 + (int)lVar22;
                  *(uint *)(*param_8 + (ulong)*(byte *)(param_5 + lVar14) * 4) = unaff_w28;
                  puVar4 = (ushort *)
                           (*param_8 + (ulong)*(byte *)(param_5 + (ulong)uVar11 + (ulong)bVar7) * 4)
                  ;
                  *puVar4 = uVar10;
                  *(byte *)(puVar4 + 1) = bVar7;
                  *(undefined1 *)((long)puVar4 + 3) = uVar6;
                  local_90 = CONCAT44(local_90._4_4_,iVar25);
                  if (iVar29 != 1) {
                    puVar19 = (undefined4 *)(lVar13 + (long)iVar25 * 6);
                    uVar5 = *puVar19;
                    puVar16 = (undefined4 *)(lVar13 + (lVar23 >> 0x20) * 6);
                    *(undefined2 *)(puVar16 + 1) = *(undefined2 *)(puVar19 + 1);
                    *puVar16 = uVar5;
                  }
                  goto LAB_02eec08c;
                }
                break;
              }
              lVar22 = lVar22 + -1;
              lVar23 = lVar23 + 0x100000000;
              pcVar15 = pcVar15 + 6;
            } while ((local_90 & 0xffffffff) + lVar22 != 0);
          }
          lVar14 = (long)(int)local_90;
          if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)local_90) {
            FUN_02eec85c(&local_98,lVar14 + 1);
            lVar13 = local_98;
          }
          pcVar15 = (char *)(lVar13 + (long)(int)local_90 * 6);
          *pcVar15 = cVar8;
          pcVar15[1] = cVar9;
          *(uint *)(pcVar15 + 2) = unaff_w28;
          local_90 = CONCAT44(local_90._4_4_,(int)(lVar14 + 1));
LAB_02eec08c:
          uVar26 = (uint)uVar27;
          uVar27 = (ulong)(uVar26 + 1);
        } while (uVar26 + 1 < (uint)(byte)puVar3[1]);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar32);
  }
  iVar25 = (int)uVar30;
  if (((iVar25 == 0) || (uVar32 == 0)) || ((int)local_90 != 0)) {
    *(undefined4 *)(param_8 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_8 + 0xc)) && (*param_8 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,*param_8,(ulong)*(uint *)((long)param_8 + 0xc) << 2);
    }
    *param_8 = 0;
    *(undefined4 *)((long)param_8 + 0xc) = 0x80000000;
    *(undefined4 *)(param_7 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_7 + 0xc)) && (*param_7 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,*param_7,(ulong)*(uint *)((long)param_7 + 0xc) << 2);
    }
    uVar28 = 0x80040200;
    *param_7 = 0;
    *(undefined4 *)((long)param_7 + 0xc) = 0x80000000;
  }
  else {
    if (0 < iVar25) {
      uVar30 = uVar30 & 0xffffffff;
      psVar20 = (short *)*param_8;
      do {
        if (*psVar20 == -1) {
          *(undefined4 *)(param_8 + 1) = 0;
          puVar12 = PTR_PTR_047d1a50;
          if (-1 < (int)*(uint *)((long)param_8 + 0xc)) {
            (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                      (PTR_PTR_047d1a50 + 0x20,(short *)*param_8,
                       (ulong)*(uint *)((long)param_8 + 0xc) << 2);
          }
          *param_8 = 0;
          *(undefined4 *)((long)param_8 + 0xc) = 0x80000000;
          *(undefined4 *)(param_7 + 1) = 0;
          if ((-1 < (int)*(uint *)((long)param_7 + 0xc)) && (*param_7 != 0)) {
            (**(code **)(*(long *)(puVar12 + 0x20) + 0x20))
                      (puVar12 + 0x20,*param_7,(ulong)*(uint *)((long)param_7 + 0xc) << 2);
          }
          uVar28 = 0x80040200;
          *param_7 = 0;
          *(undefined4 *)((long)param_7 + 0xc) = 0x80000000;
          goto LAB_02eec344;
        }
        uVar30 = uVar30 - 1;
        psVar20 = psVar20 + 2;
      } while (uVar30 != 0);
    }
    if ((int)uVar32 < (int)uVar21) {
      iVar29 = uVar21 - uVar32;
      bVar7 = *(byte *)(param_3 + 1);
      do {
        lVar14 = param_7[1];
        lVar13 = (long)(int)lVar14 + (ulong)bVar7;
        iVar31 = (int)lVar13;
        if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) < iVar31) {
          FUN_02eec748(param_7,lVar13);
        }
        *(int *)(param_7 + 1) = iVar31;
        memcpy((void *)(*param_7 + (long)(int)lVar14 * 4),(void *)*param_7,(ulong)bVar7 << 2);
        iVar29 = iVar29 + -1;
      } while (iVar29 != 0);
    }
    iVar29 = (int)param_8[1];
    if (iVar25 < iVar29) {
      lVar13 = (long)iVar25;
      do {
        *(undefined4 *)(*param_8 + lVar13 * 4) = *(undefined4 *)(*param_8 + (long)(iVar25 + -1) * 4)
        ;
        iVar29 = (int)param_8[1];
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar29);
    }
    if ((int)param_7[1] < (int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff)) {
      FUN_02eec9e4(param_7,(int)param_7[1]);
      iVar29 = (int)param_8[1];
    }
    if (iVar29 < (int)(*(uint *)((long)param_8 + 0xc) & 0x7fffffff)) {
      FUN_02eec9e4(param_8);
    }
    uVar28 = 0;
  }
LAB_02eec344:
  lVar13 = local_98;
  if (local_80 == local_98) {
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_88 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_02eec410;
  }
  uVar30 = local_78 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_88 + 0x28) < uVar30) || (*(long *)(local_88 + 0x38) != uVar30 + local_80)) {
    if (local_80 == 0) goto LAB_02eec410;
    if (*(ulong *)(local_88 + 0x28) < uVar30 + 0x40) {
      *(int *)(*(long *)(local_88 + 0x30) + 0x20) = *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                (*(long **)(local_88 + 0x10),local_80 - *(int *)(local_80 + -4),uVar30 + 0x44);
      goto LAB_02eec410;
    }
    if (*(long *)(local_88 + 0x38) != uVar30 + local_80) {
      FUN_031cf778();
      goto LAB_02eec410;
    }
    *(long *)(local_88 + 0x38) = local_80;
  }
  else {
    *(long *)(local_88 + 0x38) = local_80;
    if (*(long *)(local_88 + 0x48) != local_80) goto LAB_02eec410;
  }
  FUN_031cf578();
LAB_02eec410:
  uVar18 = local_90;
  uVar30 = local_90 >> 0x20;
  local_90 = uVar30 << 0x20;
  if ((lVar13 != 0) && (-1 < (long)uVar18)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar13,uVar30 * 6);
  }
  return uVar28;
}


