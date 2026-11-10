/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b2f40; name: FUN_033b2f40
 */


undefined8 FUN_033b2f40(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int *piVar2;
  byte *__s;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  size_t sVar8;
  byte *pbVar9;
  undefined *__src;
  int iVar10;
  ulong uVar11;
  byte *pbVar13;
  byte *pbVar12;
  int iVar14;
  byte *__s_00;
  undefined1 local_74 [4];
  char acStack_70 [16];
  
  if ((*(uint *)((long)param_2 + 0xc) & 0x7fffffff) == 0) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,1);
  }
  if ((int)param_2[1] != 1) {
    *(undefined4 *)(param_2 + 1) = 1;
  }
  *(undefined1 *)*param_2 = 0;
  __s_00 = (byte *)*param_1;
  piVar5 = (int *)param_1[1];
  sVar8 = (long)piVar5 - (long)__s_00;
  if ((sVar8 == 0) || (pvVar7 = memchr(__s_00,0x26,sVar8), pvVar7 == (void *)0x0)) {
    if (__s_00 == (byte *)0x0) {
      return 0;
    }
  }
  else {
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    do {
      piVar2 = (int *)((long)pvVar7 + 1);
      if (__s_00 != (byte *)0x0) {
        iVar14 = (int)pvVar7 - (int)__s_00;
        if (iVar14 < 0) {
          sVar8 = strlen((char *)__s_00);
          iVar14 = (int)sVar8;
        }
        iVar6 = (int)param_2[1];
        iVar14 = (int)((long)iVar6 + -1) + iVar14;
        uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        iVar10 = uVar3 - 1;
        iVar4 = iVar14;
        if (iVar10 <= iVar14) {
          iVar4 = iVar10;
        }
        if ((int)param_2[0x12] != 0) {
          iVar4 = iVar14;
        }
        iVar14 = iVar4 + 1;
        iVar10 = iVar6;
        if ((int)uVar3 <= iVar4) {
          FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar14);
          iVar10 = (int)param_2[1];
        }
        if (iVar10 <= iVar4 || iVar14 < iVar10) {
          *(int *)(param_2 + 1) = iVar14;
        }
        *(undefined1 *)(*param_2 + (long)iVar4) = 0;
        memmove((void *)(*param_2 + (long)iVar6 + -1),__s_00,(long)((int)param_2[1] - iVar6));
      }
      uVar11 = (long)piVar5 - (long)piVar2;
      if (uVar11 < 4) {
        if (uVar11 != 3) goto LAB_033b3154;
LAB_033b30cc:
        if (*(short *)piVar2 == 0x746c && *(char *)((long)pvVar7 + 3) == ';') {
          iVar4 = (int)param_2[1];
          uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          iVar6 = uVar3 - 1;
          iVar14 = iVar4;
          if (iVar6 <= iVar4) {
            iVar14 = iVar6;
          }
          if ((int)param_2[0x12] != 0) {
            iVar14 = iVar4;
          }
          iVar6 = iVar14 + 1;
          iVar10 = iVar4;
          if ((int)uVar3 <= iVar14) {
            FUN_030b4a20(param_2,puVar1,(long)iVar6);
            iVar10 = (int)param_2[1];
          }
          __s_00 = (byte *)((long)pvVar7 + 4);
          if ((iVar10 <= iVar14) || (iVar6 < iVar10)) {
            *(int *)(param_2 + 1) = iVar6;
          }
          *(undefined1 *)(*param_2 + (long)iVar14) = 0;
          pvVar7 = (void *)(*param_2 + (long)iVar4 + -1);
          sVar8 = (size_t)((int)param_2[1] - iVar4);
          __src = &DAT_03bd47a0;
        }
        else if (*(short *)piVar2 == 0x7467 && *(char *)((long)pvVar7 + 3) == ';') {
          iVar4 = (int)param_2[1];
          uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          iVar6 = uVar3 - 1;
          iVar14 = iVar4;
          if (iVar6 <= iVar4) {
            iVar14 = iVar6;
          }
          if ((int)param_2[0x12] != 0) {
            iVar14 = iVar4;
          }
          iVar6 = iVar14 + 1;
          iVar10 = iVar4;
          if ((int)uVar3 <= iVar14) {
            FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
            iVar10 = (int)param_2[1];
          }
          __s_00 = (byte *)((long)pvVar7 + 4);
          if ((iVar10 <= iVar14) || (iVar6 < iVar10)) {
            *(int *)(param_2 + 1) = iVar6;
          }
          *(undefined1 *)(*param_2 + (long)iVar14) = 0;
          pvVar7 = (void *)(*param_2 + (long)iVar4 + -1);
          sVar8 = (size_t)((int)param_2[1] - iVar4);
          __src = &DAT_03c32803;
        }
        else if (uVar11 < 5) {
LAB_033b3154:
          if ((piVar2 == piVar5) || (*(char *)piVar2 != '#')) {
            return 0x80040200;
          }
          __s = (byte *)((long)pvVar7 + 2);
          if ((long)piVar5 - (long)__s == 0) {
            return 0x80040200;
          }
          pbVar9 = memchr(__s,0x3b,(long)piVar5 - (long)__s);
          if (pbVar9 == (byte *)0x0) {
            return 0x80040200;
          }
          uVar11 = (long)pbVar9 - (long)__s;
          if (uVar11 == 0) {
            return 0x80040200;
          }
          if (0xf < uVar11) {
            return 0x80040200;
          }
          __s_00 = pbVar9 + 1;
          pbVar13 = __s;
          do {
            pbVar12 = pbVar13 + 1;
            if ((*(uint *)(&DAT_03cbf4a0 + ((ulong)(*pbVar13 >> 3) & 0x1c)) >>
                 (ulong)(*pbVar13 & 0x1f) & 1) != 0) {
              return 0x80040200;
            }
            pbVar13 = pbVar12;
          } while (pbVar9 != pbVar12);
          memcpy(acStack_70,__s,uVar11);
          acStack_70[uVar11] = '\0';
          uVar11 = strtoul(acStack_70,(char **)0x0,0);
          if (0xff < (uint)uVar11) {
            return 0x80040200;
          }
          local_74[0] = (undefined1)uVar11;
          iVar4 = (int)param_2[1];
          uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          iVar6 = uVar3 - 1;
          iVar14 = iVar4;
          if (iVar6 <= iVar4) {
            iVar14 = iVar6;
          }
          if ((int)param_2[0x12] != 0) {
            iVar14 = iVar4;
          }
          iVar6 = iVar14 + 1;
          iVar10 = iVar4;
          if ((int)uVar3 <= iVar14) {
            FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
            iVar10 = (int)param_2[1];
          }
          if ((iVar10 <= iVar14) || (iVar6 < iVar10)) {
            *(int *)(param_2 + 1) = iVar6;
          }
          *(undefined1 *)(*param_2 + (long)iVar14) = 0;
          pvVar7 = (void *)(*param_2 + (long)iVar4 + -1);
          sVar8 = (size_t)((int)param_2[1] - iVar4);
          __src = local_74;
        }
        else if (*piVar2 == 0x746f7571 && *(char *)((long)pvVar7 + 5) == ';') {
          iVar4 = (int)param_2[1];
          uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          iVar6 = uVar3 - 1;
          iVar14 = iVar4;
          if (iVar6 <= iVar4) {
            iVar14 = iVar6;
          }
          if ((int)param_2[0x12] != 0) {
            iVar14 = iVar4;
          }
          iVar6 = iVar14 + 1;
          iVar10 = iVar4;
          if ((int)uVar3 <= iVar14) {
            FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
            iVar10 = (int)param_2[1];
          }
          __s_00 = (byte *)((long)pvVar7 + 6);
          if ((iVar10 <= iVar14) || (iVar6 < iVar10)) {
            *(int *)(param_2 + 1) = iVar6;
          }
          *(undefined1 *)(*param_2 + (long)iVar14) = 0;
          pvVar7 = (void *)(*param_2 + (long)iVar4 + -1);
          sVar8 = (size_t)((int)param_2[1] - iVar4);
          __src = &DAT_03c246d6;
        }
        else {
          if (*piVar2 != 0x736f7061 || *(char *)((long)pvVar7 + 5) != ';') goto LAB_033b3154;
          iVar4 = (int)param_2[1];
          uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
          iVar6 = uVar3 - 1;
          iVar14 = iVar4;
          if (iVar6 <= iVar4) {
            iVar14 = iVar6;
          }
          if ((int)param_2[0x12] != 0) {
            iVar14 = iVar4;
          }
          iVar6 = iVar14 + 1;
          iVar10 = iVar4;
          if ((int)uVar3 <= iVar14) {
            FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
            iVar10 = (int)param_2[1];
          }
          __s_00 = (byte *)((long)pvVar7 + 6);
          if ((iVar10 <= iVar14) || (iVar6 < iVar10)) {
            *(int *)(param_2 + 1) = iVar6;
          }
          *(undefined1 *)(*param_2 + (long)iVar14) = 0;
          pvVar7 = (void *)(*param_2 + (long)iVar4 + -1);
          sVar8 = (size_t)((int)param_2[1] - iVar4);
          __src = &DAT_03c24414;
        }
      }
      else {
        if (*piVar2 != 0x3b706d61) goto LAB_033b30cc;
        iVar4 = (int)param_2[1];
        uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        iVar6 = uVar3 - 1;
        iVar14 = iVar4;
        if (iVar6 <= iVar4) {
          iVar14 = iVar6;
        }
        if ((int)param_2[0x12] != 0) {
          iVar14 = iVar4;
        }
        iVar6 = iVar14 + 1;
        iVar10 = iVar4;
        if ((int)uVar3 <= iVar14) {
          FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
          iVar10 = (int)param_2[1];
        }
        __s_00 = (byte *)((long)pvVar7 + 5);
        if ((iVar10 <= iVar14) || (iVar6 < iVar10)) {
          *(int *)(param_2 + 1) = iVar6;
        }
        *(undefined1 *)(*param_2 + (long)iVar14) = 0;
        pvVar7 = (void *)(*param_2 + (long)iVar4 + -1);
        sVar8 = (size_t)((int)param_2[1] - iVar4);
        __src = &DAT_03c8299e;
      }
      memcpy(pvVar7,__src,sVar8);
      sVar8 = (long)piVar5 - (long)__s_00;
    } while ((sVar8 != 0) && (pvVar7 = memchr(__s_00,0x26,sVar8), pvVar7 != (void *)0x0));
  }
  iVar14 = (int)sVar8;
  if (iVar14 < 0) {
    sVar8 = strlen((char *)__s_00);
    iVar14 = (int)sVar8;
  }
  iVar6 = (int)param_2[1];
  iVar14 = (int)((long)iVar6 + -1) + iVar14;
  uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  iVar10 = uVar3 - 1;
  iVar4 = iVar14;
  if (iVar10 <= iVar14) {
    iVar4 = iVar10;
  }
  if ((int)param_2[0x12] != 0) {
    iVar4 = iVar14;
  }
  iVar14 = iVar4 + 1;
  iVar10 = iVar6;
  if ((int)uVar3 <= iVar4) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar14);
    iVar10 = (int)param_2[1];
  }
  if ((iVar10 <= iVar4) || (iVar14 < iVar10)) {
    *(int *)(param_2 + 1) = iVar14;
  }
  *(undefined1 *)(*param_2 + (long)iVar4) = 0;
  memmove((void *)(*param_2 + (long)iVar6 + -1),__s_00,(long)((int)param_2[1] - iVar6));
  return 0;
}


