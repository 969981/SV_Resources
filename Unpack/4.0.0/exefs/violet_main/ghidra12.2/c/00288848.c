/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00288848; name: FUN_00288848
 */


void FUN_00288848(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  void *__s1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  void *__s2;
  long *plVar11;
  
  if (param_1[2] != 0) {
    plVar5 = (long *)*param_1;
    plVar11 = param_1 + 1;
    *param_1 = (long)plVar11;
    *(undefined8 *)(*plVar11 + 0x10) = 0;
    param_1[2] = 0;
    *plVar11 = 0;
    plVar8 = (long *)plVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar5 = plVar8;
    }
    if (plVar5 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)plVar5[2];
      if (plVar8 != (long *)0x0) {
        plVar6 = (long *)*plVar8;
        if (plVar6 == plVar5) {
          *plVar8 = 0;
          while (plVar6 = (long *)plVar8[1], (long *)plVar8[1] != (long *)0x0) {
            do {
              plVar8 = plVar6;
              plVar6 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
        }
        else {
          plVar8[1] = 0;
          while (plVar6 != (long *)0x0) {
            do {
              plVar8 = plVar6;
              plVar6 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
            plVar6 = (long *)plVar8[1];
          }
        }
      }
      if (param_2 != param_3) {
        plVar6 = plVar5;
LAB_002888dc:
        plVar5 = plVar8;
                    /* try { // try from 002888e8 to 00288953 has its CatchHandler @ 00288bdc */
        FUN_001fcec0(plVar6 + 4,param_2 + 4);
        iVar4 = (int)param_2[7];
        *(int *)(plVar6 + 7) = iVar4;
        if (iVar4 - 3U < 2) {
          FUN_001fcec0(plVar6 + 8,param_2 + 8);
        }
        else if (iVar4 == 5) {
          if (plVar6 != param_2) {
            FUN_00288848(plVar6 + 0xb,param_2[0xb],param_2 + 0xc);
          }
        }
        else if ((iVar4 == 6) && (plVar6 != param_2)) {
          FUN_00288e1c(plVar6 + 0xe,param_2[0xe],param_2[0xf]);
        }
        plVar8 = (long *)*plVar11;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)(*(byte *)(plVar6 + 4) >> 1);
          __s1 = (void *)plVar6[6];
          if ((*(byte *)(plVar6 + 4) & 1) == 0) {
            __s1 = (void *)((long)plVar6 + 0x21);
          }
          else {
            uVar9 = plVar6[5];
          }
          do {
            bVar2 = *(byte *)(plVar8 + 4);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = plVar8[5];
            }
            __n = uVar1;
            if (uVar9 <= uVar1) {
              __n = uVar9;
            }
            if (__n == 0) {
LAB_002889c8:
              if (uVar9 < uVar1) goto LAB_002889d0;
LAB_00288978:
              plVar7 = (long *)plVar8[1];
              if (plVar7 == (long *)0x0) {
                plVar7 = plVar8 + 1;
                goto LAB_002889f0;
              }
            }
            else {
              __s2 = (void *)plVar8[6];
              if ((bVar2 & 1) == 0) {
                __s2 = (void *)((long)plVar8 + 0x21);
              }
              iVar4 = memcmp(__s1,__s2,__n);
              if (iVar4 == 0) goto LAB_002889c8;
              if (-1 < iVar4) goto LAB_00288978;
LAB_002889d0:
              plVar7 = (long *)*plVar8;
              if (plVar7 == (long *)0x0) goto code_r0x002889d8;
            }
            plVar8 = plVar7;
          } while( true );
        }
        plVar7 = plVar11;
        plVar8 = plVar11;
        goto LAB_002889f0;
      }
LAB_00288b04:
      FUN_0025cef0(param_1,plVar5);
      if (plVar8 == (long *)0x0) goto LAB_00288b48;
      plVar5 = (long *)plVar8[2];
      while (plVar11 = plVar5, plVar11 != (long *)0x0) {
        plVar8 = plVar11;
        plVar5 = (long *)plVar11[2];
      }
    }
    FUN_0025cef0(param_1,plVar8);
  }
LAB_00288b48:
  while (param_2 != param_3) {
    FUN_00288c18(param_1,param_2 + 4);
    plVar5 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar5 = param_2 + 2;
      if (*(long **)*plVar5 == param_2) {
        param_2 = (long *)*plVar5;
      }
      else {
        do {
          lVar10 = *plVar5;
          plVar5 = (long *)(lVar10 + 0x10);
          param_2 = (long *)*plVar5;
        } while (*param_2 != lVar10);
      }
    }
    else {
      do {
        param_2 = plVar5;
        plVar5 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
code_r0x002889d8:
  plVar7 = plVar8;
LAB_002889f0:
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = (long)plVar8;
  *plVar7 = (long)plVar6;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar6 = (long *)*plVar7;
  }
  FUN_010108e0(param_1[1],plVar6);
  param_1[2] = param_1[2] + 1;
  plVar8 = plVar5;
  if (plVar5 != (long *)0x0) {
    plVar8 = (long *)plVar5[2];
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      plVar6 = (long *)param_2[1];
      goto joined_r0x00288a9c;
    }
    plVar6 = (long *)*plVar8;
    if (plVar6 == plVar5) {
      *plVar8 = 0;
      plVar6 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar6 = (long *)param_2[1];
        goto joined_r0x00288a9c;
      }
      do {
        do {
          plVar8 = plVar6;
          plVar6 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
        plVar6 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    else {
      plVar8[1] = 0;
      if (plVar6 != (long *)0x0) {
        do {
          do {
            plVar8 = plVar6;
            plVar6 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
          plVar6 = (long *)plVar8[1];
        } while ((long *)plVar8[1] != (long *)0x0);
      }
    }
  }
  plVar6 = (long *)param_2[1];
joined_r0x00288a9c:
  if (plVar6 == (long *)0x0) {
    plVar6 = param_2 + 2;
    bVar3 = *(long **)*plVar6 != param_2;
    param_2 = (long *)*plVar6;
    if (bVar3) {
      do {
        lVar10 = *plVar6;
        plVar6 = (long *)(lVar10 + 0x10);
        param_2 = (long *)*plVar6;
      } while (*param_2 != lVar10);
    }
  }
  else {
    do {
      param_2 = plVar6;
      plVar6 = (long *)*param_2;
    } while ((long *)*param_2 != (long *)0x0);
  }
  if (plVar5 == (long *)0x0) goto LAB_00288b04;
  plVar6 = plVar5;
  if (param_2 == param_3) goto LAB_00288b04;
  goto LAB_002888dc;
}


