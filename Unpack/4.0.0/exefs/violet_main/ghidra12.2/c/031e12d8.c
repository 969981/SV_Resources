/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e12d8; name: FUN_031e12d8
 */


long FUN_031e12d8(ulong *param_1,long *param_2,code *param_3,code *param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  char *__s;
  size_t sVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *local_100;
  ulong local_f8;
  undefined1 local_f0 [128];
  undefined4 local_70;
  
  if (param_3 == (code *)0x0) {
    puVar6 = param_1;
    while (uVar13 = *puVar6, ((uint)uVar13 >> 3 & 1) == 0) {
      if (((uVar13 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
      goto LAB_031e1360;
    }
    if (puVar6 != (ulong *)0x0) {
      uVar13 = puVar6[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2];
      goto LAB_031e1364;
    }
LAB_031e1360:
    uVar13 = 0;
LAB_031e1364:
    FUN_031c6afc(param_2,uVar13,0xffffffff);
    if ((int)param_2[1] == 1) {
      uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      iVar9 = 7;
      if (uVar7 < 8) {
        iVar9 = uVar7 - 1;
      }
      if ((int)param_2[0x12] != 0) {
        iVar9 = 7;
      }
      iVar1 = iVar9 + 1;
      if (iVar9 < (int)uVar7) {
        iVar5 = 1;
      }
      else {
        FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,iVar1);
        iVar5 = (int)param_2[1];
      }
      if ((iVar5 <= iVar9) || (iVar1 < iVar5)) {
        *(int *)(param_2 + 1) = iVar1;
      }
      *(undefined1 *)(*param_2 + (long)iVar9) = 0;
      memcpy((void *)*param_2,"unnamed",(long)(int)param_2[1] - 1);
    }
  }
  else {
    (*param_3)(param_1,param_2);
  }
  while( true ) {
    uVar7 = (uint)*param_1;
    if ((uVar7 >> 0xf & 1) != 0) break;
    if (((*param_1 & 9) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
    goto LAB_031e1968;
  }
  uVar13 = CONCAT44(uVar7,uVar7) & 0x7fff00007fff;
  uVar13 = param_1[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) + 2];
  if ((uVar13 != 0) && (*(short *)(uVar13 + 8) != 0)) {
    iVar1 = (int)param_2[1];
    uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    iVar9 = uVar7 - 1;
    if (iVar1 + 1 < iVar9) {
      iVar9 = iVar1 + 1;
    }
    if ((int)param_2[0x12] != 0) {
      iVar9 = iVar1 + 1;
    }
    iVar5 = iVar9 + 1;
    iVar8 = iVar1;
    if ((int)uVar7 <= iVar9) {
      FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
      iVar8 = (int)param_2[1];
    }
    if ((iVar8 <= iVar9) || (iVar5 < iVar8)) {
      *(int *)(param_2 + 1) = iVar5;
    }
    *(undefined1 *)(*param_2 + (long)iVar9) = 0;
    memcpy((void *)(*param_2 + (long)iVar1 + -1),&DAT_03c8085c,(long)((int)param_2[1] - iVar1));
    if (*(short *)(uVar13 + 8) != 0) {
      plVar10 = (long *)(uVar13 + 0x10);
      if (param_4 == (code *)0x0) {
        puVar2 = PTR_PTR_047d1a50 + 0x20;
        uVar12 = 0;
        do {
          if (uVar12 != 0) {
            iVar1 = (int)param_2[1];
            uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
            iVar9 = uVar7 - 1;
            if (iVar1 + 1 < iVar9) {
              iVar9 = iVar1 + 1;
            }
            if ((int)param_2[0x12] != 0) {
              iVar9 = iVar1 + 1;
            }
            iVar5 = iVar9 + 1;
            iVar8 = iVar1;
            if ((int)uVar7 <= iVar9) {
              FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
              iVar8 = (int)param_2[1];
            }
            if (iVar8 <= iVar9 || iVar5 < iVar8) {
              *(int *)(param_2 + 1) = iVar5;
            }
            *(undefined1 *)(*param_2 + (long)iVar9) = 0;
            memcpy((void *)(*param_2 + (long)iVar1 + -1),&DAT_03c82382,
                   (long)((int)param_2[1] - iVar1));
          }
          if (*(char *)plVar10[1] == 't') {
            if (*plVar10 == 0) {
              iVar5 = (int)param_2[1];
              uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
              iVar9 = iVar5 + 5;
              iVar8 = uVar7 - 1;
              iVar1 = iVar9;
              if (iVar8 <= iVar9) {
                iVar1 = iVar8;
              }
              if ((int)param_2[0x12] != 0) {
                iVar1 = iVar9;
              }
              iVar9 = iVar1 + 1;
              iVar8 = iVar5;
              if ((int)uVar7 <= iVar1) {
                FUN_030b4a20(param_2,puVar2,(long)iVar9);
                iVar8 = (int)param_2[1];
              }
              if ((iVar8 <= iVar1) || (iVar9 < iVar8)) {
                *(int *)(param_2 + 1) = iVar9;
              }
              *(undefined1 *)(*param_2 + (long)iVar1) = 0;
              memcpy((void *)(*param_2 + (long)iVar5 + -1),"(null)",(long)((int)param_2[1] - iVar5))
              ;
            }
            else {
              local_f8 = 0x8000008000000001;
              local_70 = 1;
              local_f0[0] = 0;
              local_100 = local_f0;
              __s = (char *)FUN_031e12d8(*plVar10,&local_100,param_3,0);
              if (__s != (char *)0x0) {
                sVar4 = strlen(__s);
                iVar5 = (int)param_2[1];
                iVar9 = (int)((long)iVar5 + -1) + (int)sVar4;
                uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
                iVar8 = uVar7 - 1;
                iVar1 = iVar9;
                if (iVar8 <= iVar9) {
                  iVar1 = iVar8;
                }
                if ((int)param_2[0x12] != 0) {
                  iVar1 = iVar9;
                }
                iVar9 = iVar1 + 1;
                iVar8 = iVar5;
                if ((int)uVar7 <= iVar1) {
                  FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar9);
                  iVar8 = (int)param_2[1];
                }
                if ((iVar8 <= iVar1) || (iVar9 < iVar8)) {
                  *(int *)(param_2 + 1) = iVar9;
                }
                *(undefined1 *)(*param_2 + (long)iVar1) = 0;
                memmove((void *)(*param_2 + (long)iVar5 + -1),__s,(long)((int)param_2[1] - iVar5));
              }
              uVar3 = local_f8;
              local_f8 = local_f8 & 0xffffffff00000000;
              if ((-1 < (long)uVar3) && (local_100 != (undefined1 *)0x0)) {
                (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
              }
            }
          }
          else {
            local_100 = (undefined1 *)*plVar10;
            FUN_031c8b2c(param_2,&DAT_03be65d6,PTR_DAT_047e5c20,&local_100);
          }
          uVar12 = uVar12 + 1;
          plVar10 = plVar10 + 2;
        } while (uVar12 < *(ushort *)(uVar13 + 8));
      }
      else {
        if (**(char **)(uVar13 + 0x18) == 't') {
          (*param_4)(*plVar10,param_2);
        }
        else {
          local_100 = (undefined1 *)*plVar10;
          FUN_031c8b2c(param_2,&DAT_03be65d6,PTR_DAT_047e5c20,&local_100);
        }
        if ((*(ushort *)(uVar13 + 8) & 0xfffe) != 0) {
          puVar11 = (undefined8 *)(uVar13 + 0x20);
          uVar12 = 1;
          puVar2 = PTR_PTR_047d1a50 + 0x20;
          do {
            iVar1 = (int)param_2[1];
            uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
            iVar9 = uVar7 - 1;
            if (iVar1 + 1 < iVar9) {
              iVar9 = iVar1 + 1;
            }
            if ((int)param_2[0x12] != 0) {
              iVar9 = iVar1 + 1;
            }
            iVar5 = iVar9 + 1;
            iVar8 = iVar1;
            if ((int)uVar7 <= iVar9) {
              FUN_030b4a20(param_2,puVar2,(long)iVar5);
              iVar8 = (int)param_2[1];
            }
            if (iVar8 <= iVar9 || iVar5 < iVar8) {
              *(int *)(param_2 + 1) = iVar5;
            }
            *(undefined1 *)(*param_2 + (long)iVar9) = 0;
            memcpy((void *)(*param_2 + (long)iVar1 + -1),&DAT_03c82382,
                   (long)((int)param_2[1] - iVar1));
            if (*(char *)puVar11[1] == 't') {
              (*param_4)(*puVar11,param_2);
            }
            else {
              local_100 = (undefined1 *)*puVar11;
              FUN_031c8b2c(param_2,&DAT_03be65d6,PTR_DAT_047e5c20,&local_100);
            }
            uVar12 = uVar12 + 1;
            puVar11 = puVar11 + 2;
          } while (uVar12 < *(ushort *)(uVar13 + 8));
        }
      }
    }
    iVar1 = (int)param_2[1];
    uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    iVar9 = uVar7 - 1;
    if (iVar1 + 1 < iVar9) {
      iVar9 = iVar1 + 1;
    }
    if ((int)param_2[0x12] != 0) {
      iVar9 = iVar1 + 1;
    }
    iVar5 = iVar9 + 1;
    iVar8 = iVar1;
    if ((int)uVar7 <= iVar9) {
      FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
      iVar8 = (int)param_2[1];
    }
    if ((iVar8 <= iVar9) || (iVar5 < iVar8)) {
      *(int *)(param_2 + 1) = iVar5;
    }
    *(undefined1 *)(*param_2 + (long)iVar9) = 0;
    memcpy((void *)(*param_2 + (long)iVar1 + -1),&DAT_03c5fc7b,(long)((int)param_2[1] - iVar1));
  }
LAB_031e1968:
  return *param_2;
}


