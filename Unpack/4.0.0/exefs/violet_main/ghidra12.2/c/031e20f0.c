/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e20f0; name: FUN_031e20f0
 */


void FUN_031e20f0(char *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  int iVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long local_68;
  
  if (param_1 == (char *)0x0) {
    iVar1 = (int)param_3[1];
    uVar10 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    iVar3 = iVar1 + 6;
    iVar8 = uVar10 - 1;
    iVar5 = iVar3;
    if (iVar8 <= iVar3) {
      iVar5 = iVar8;
    }
    if ((int)param_3[0x12] != 0) {
      iVar5 = iVar3;
    }
    iVar3 = iVar5 + 1;
    iVar8 = iVar1;
    if ((int)uVar10 <= iVar5) {
      FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,(long)iVar3);
      iVar8 = (int)param_3[1];
    }
    if (iVar8 <= iVar5 || iVar3 < iVar8) {
      *(int *)(param_3 + 1) = iVar3;
    }
    *(undefined1 *)(*param_3 + (long)iVar5) = 0;
    memcpy((void *)(*param_3 + (long)iVar1 + -1),"unnamed",(long)((int)param_3[1] - iVar1));
  }
  else {
    sVar6 = strlen(param_1);
    iVar1 = (int)param_3[1];
    iVar3 = (int)((long)iVar1 + -1) + (int)sVar6;
    uVar10 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    iVar8 = uVar10 - 1;
    iVar5 = iVar3;
    if (iVar8 <= iVar3) {
      iVar5 = iVar8;
    }
    if ((int)param_3[0x12] != 0) {
      iVar5 = iVar3;
    }
    iVar3 = iVar5 + 1;
    iVar8 = iVar1;
    if ((int)uVar10 <= iVar5) {
      FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,(long)iVar3);
      iVar8 = (int)param_3[1];
    }
    if (iVar8 <= iVar5 || iVar3 < iVar8) {
      *(int *)(param_3 + 1) = iVar3;
    }
    *(undefined1 *)(*param_3 + (long)iVar5) = 0;
    memmove((void *)(*param_3 + (long)iVar1 + -1),param_1,(long)((int)param_3[1] - iVar1));
  }
  if ((param_2 != 0) && (*(short *)(param_2 + 8) != 0)) {
    iVar5 = (int)param_3[1];
    uVar10 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    iVar3 = uVar10 - 1;
    if (iVar5 + 1 < iVar3) {
      iVar3 = iVar5 + 1;
    }
    if ((int)param_3[0x12] != 0) {
      iVar3 = iVar5 + 1;
    }
    iVar1 = iVar3 + 1;
    iVar8 = iVar5;
    if ((int)uVar10 <= iVar3) {
      FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,(long)iVar1);
      iVar8 = (int)param_3[1];
    }
    if ((iVar8 <= iVar3) || (iVar1 < iVar8)) {
      *(int *)(param_3 + 1) = iVar1;
    }
    *(undefined1 *)(*param_3 + (long)iVar3) = 0;
    memcpy((void *)(*param_3 + (long)iVar5 + -1),&DAT_03c8085c,(long)((int)param_3[1] - iVar5));
    if (*(short *)(param_2 + 8) != 0) {
      uVar13 = 0;
      puVar2 = PTR_PTR_047d1a50 + 0x20;
      do {
        plVar4 = (long *)(param_2 + 0x10 + uVar13 * 0x10);
        if (uVar13 != 0) {
          iVar5 = (int)param_3[1];
          uVar10 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
          iVar3 = uVar10 - 1;
          if (iVar5 + 1 < iVar3) {
            iVar3 = iVar5 + 1;
          }
          if ((int)param_3[0x12] != 0) {
            iVar3 = iVar5 + 1;
          }
          iVar1 = iVar3 + 1;
          iVar8 = iVar5;
          if ((int)uVar10 <= iVar3) {
            FUN_030b4a20(param_3,puVar2,(long)iVar1);
            iVar8 = (int)param_3[1];
          }
          if (iVar8 <= iVar3 || iVar1 < iVar8) {
            *(int *)(param_3 + 1) = iVar1;
          }
          *(undefined1 *)(*param_3 + (long)iVar3) = 0;
          memcpy((void *)(*param_3 + (long)iVar5 + -1),&DAT_03c82382,(long)((int)param_3[1] - iVar5)
                );
        }
        if (*(char *)plVar4[1] == 't') {
          puVar9 = (ulong *)*plVar4;
          if (puVar9 == (ulong *)0x0) {
            uVar12 = 0;
          }
          else {
            puVar11 = puVar9;
            do {
              uVar12 = *puVar11;
              if (((uint)uVar12 >> 3 & 1) != 0) {
                uVar12 = puVar11[(ulong)(byte)POPCOUNT((byte)uVar12 & 7) + 2];
                goto LAB_031e2420;
              }
            } while (((uVar12 & 1) == 0) && (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0)
                    );
            uVar12 = 0;
LAB_031e2420:
            do {
              uVar10 = (uint)*puVar9;
              if ((uVar10 >> 0xf & 1) != 0) {
                uVar7 = CONCAT44(uVar10,uVar10) & 0x7fff00007fff;
                uVar7 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) +
                               2];
                goto LAB_031e2460;
              }
            } while (((*puVar9 & 9) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
          }
          uVar7 = 0;
LAB_031e2460:
          FUN_031e20f0(uVar12,uVar7,param_3);
        }
        else {
          local_68 = *plVar4;
          FUN_031c8b2c(param_3,&DAT_03be65d6,PTR_DAT_047e5c20,&local_68);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(param_2 + 8));
    }
    iVar5 = (int)param_3[1];
    uVar10 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    iVar3 = uVar10 - 1;
    if (iVar5 + 1 < iVar3) {
      iVar3 = iVar5 + 1;
    }
    if ((int)param_3[0x12] != 0) {
      iVar3 = iVar5 + 1;
    }
    iVar1 = iVar3 + 1;
    iVar8 = iVar5;
    if ((int)uVar10 <= iVar3) {
      FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,(long)iVar1);
      iVar8 = (int)param_3[1];
    }
    if ((iVar8 <= iVar3) || (iVar1 < iVar8)) {
      *(int *)(param_3 + 1) = iVar1;
    }
    *(undefined1 *)(*param_3 + (long)iVar3) = 0;
    memcpy((void *)(*param_3 + (long)iVar5 + -1),&DAT_03c5fc7b,(long)((int)param_3[1] - iVar5));
  }
  return;
}


