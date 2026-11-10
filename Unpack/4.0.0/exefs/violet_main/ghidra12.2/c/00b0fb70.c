/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0fb70; name: FUN_00b0fb70
 */


bool FUN_00b0fb70(long *param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  int iVar31;
  long *plVar32;
  char cVar33;
  ushort uVar34;
  uint uVar35;
  long lVar36;
  int local_c8 [2];
  int local_c0 [2];
  int local_b8 [2];
  int local_b0 [2];
  int local_a8 [2];
  int local_a0 [2];
  int local_98 [2];
  int local_90 [2];
  int local_88 [2];
  undefined8 local_80;
  int local_78 [2];
  int local_70 [4];
  
  lVar36 = *param_1;
  if (lVar36 == 0) {
    return false;
  }
  uVar34 = *param_2;
  uVar35 = 0xffffff84;
  if ((uint)uVar34 != ((int)(char)uVar34 & 0xffffU)) {
    uVar35 = 0xffffff85;
  }
  uVar2 = (uint)uVar34;
  if (0xbf < (ushort)(uVar34 + 0x40)) {
    uVar2 = uVar35;
  }
  lVar6 = FUN_0111b030(uVar2);
  iVar3 = *(int *)(param_2 + 2);
  iVar31 = -0x7b;
  if (iVar3 != (short)iVar3) {
    iVar31 = -0x7a;
  }
  iVar1 = 0x84;
  if (iVar3 != (char)iVar3) {
    iVar1 = iVar31;
  }
  if (iVar3 + 0x40U < 0xc0) {
    iVar1 = iVar3;
  }
  lVar7 = FUN_0111b030(iVar1);
  iVar3 = *(int *)(param_2 + 4);
  iVar31 = -0x7b;
  if (iVar3 != (short)iVar3) {
    iVar31 = -0x7a;
  }
  iVar1 = 0x84;
  if (iVar3 != (char)iVar3) {
    iVar1 = iVar31;
  }
  if (iVar3 + 0x40U < 0xc0) {
    iVar1 = iVar3;
  }
  lVar8 = FUN_0111b030(iVar1);
  iVar31 = (int)(char)param_2[6];
  if ((char)param_2[6] < -0x40) {
    iVar31 = -0x7c;
  }
  lVar9 = FUN_0111b030(iVar31);
  iVar31 = (int)*(char *)((long)param_2 + 0xd);
  if (*(char *)((long)param_2 + 0xd) < -0x40) {
    iVar31 = -0x7c;
  }
  lVar10 = FUN_0111b030(iVar31);
  iVar31 = *(int *)(param_2 + 8);
  if (0xbf < iVar31 + 0x40U) {
    if (iVar31 == (char)iVar31) {
      iVar31 = 0x84;
    }
    else {
      bVar5 = iVar31 != (short)iVar31;
      iVar31 = -0x7b;
      if (bVar5) {
        iVar31 = -0x7a;
      }
    }
  }
  lVar11 = FUN_0111b030(iVar31);
  lVar12 = FUN_00f45d0c(param_2 + 0xc);
  lVar13 = FUN_00b10628(param_2 + 0x10);
  iVar31 = (int)(char)param_2[0x1b];
  if ((char)param_2[0x1b] < -0x40) {
    iVar31 = -0x7c;
  }
  lVar14 = FUN_0111b030(iVar31);
  iVar31 = *(int *)(param_2 + 0x3e);
  if (0xbf < iVar31 + 0x40U) {
    if (iVar31 == (char)iVar31) {
      iVar31 = 0x84;
    }
    else {
      bVar5 = iVar31 != (short)iVar31;
      iVar31 = -0x7b;
      if (bVar5) {
        iVar31 = -0x7a;
      }
    }
  }
  lVar15 = FUN_0111b030(iVar31);
  lVar16 = FUN_0111b030((char)param_2[0x40]);
  lVar17 = FUN_00f45d0c(param_2 + 0x44);
  iVar31 = (int)(char)param_2[0x48];
  if ((char)param_2[0x48] < -0x40) {
    iVar31 = -0x7c;
  }
  lVar18 = FUN_0111b030(iVar31);
  uVar34 = param_2[0x58];
  uVar35 = 0xffffff84;
  if ((uint)uVar34 != ((int)(char)uVar34 & 0xffffU)) {
    uVar35 = 0xffffff85;
  }
  uVar2 = (uint)uVar34;
  if (0xbf < (ushort)(uVar34 + 0x40)) {
    uVar2 = uVar35;
  }
  lVar19 = FUN_0111b030(uVar2);
  iVar31 = *(int *)(param_2 + 0x5c);
  if (0xbf < iVar31 + 0x40U) {
    if (iVar31 == (char)iVar31) {
      iVar31 = 0x84;
    }
    else {
      bVar5 = iVar31 != (short)iVar31;
      iVar31 = -0x7b;
      if (bVar5) {
        iVar31 = -0x7a;
      }
    }
  }
  lVar20 = FUN_0111b030(iVar31);
  iVar31 = *(int *)(param_2 + 0x5e);
  if (0xbf < iVar31 + 0x40U) {
    if (iVar31 == (char)iVar31) {
      iVar31 = 0x84;
    }
    else {
      bVar5 = iVar31 != (short)iVar31;
      iVar31 = -0x7b;
      if (bVar5) {
        iVar31 = -0x7a;
      }
    }
  }
  lVar21 = FUN_0111b030(iVar31);
  lVar22 = FUN_00b10628(param_2 + 0x4a);
  iVar31 = (int)(char)param_2[0x55];
  if ((char)param_2[0x55] < -0x40) {
    iVar31 = -0x7c;
  }
  lVar23 = FUN_0111b030(iVar31);
  lVar24 = FUN_00b10628(param_2 + 0x1e);
  iVar31 = (int)(char)param_2[0x29];
  if ((char)param_2[0x29] < -0x40) {
    iVar31 = -0x7c;
  }
  lVar25 = FUN_0111b030(iVar31);
  iVar31 = *(int *)(param_2 + 0x2c);
  if (0xbf < iVar31 + 0x40U) {
    if (iVar31 == (char)iVar31) {
      iVar31 = 0x84;
    }
    else {
      bVar5 = iVar31 != (short)iVar31;
      iVar31 = -0x7b;
      if (bVar5) {
        iVar31 = -0x7a;
      }
    }
  }
  lVar26 = FUN_0111b030(iVar31);
  lVar27 = FUN_00b10628();
  iVar31 = (int)(char)param_2[0x39];
  if ((char)param_2[0x39] < -0x40) {
    iVar31 = -0x7c;
  }
  lVar28 = FUN_0111b030(iVar31);
  iVar31 = *(int *)(param_2 + 0x3c);
  if (0xbf < iVar31 + 0x40U) {
    if (iVar31 == (char)iVar31) {
      iVar31 = 0x84;
    }
    else {
      bVar5 = iVar31 != (short)iVar31;
      iVar31 = -0x7b;
      if (bVar5) {
        iVar31 = -0x7a;
      }
    }
  }
  lVar29 = FUN_0111b030(iVar31);
  plVar32 = (long *)(lVar36 + 0x18);
  if (*(ulong *)(lVar36 + 0x10) <
      lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + lVar16 +
      lVar17 + lVar18 + lVar19 + lVar20 + lVar21 + lVar22 + lVar23 + lVar24 + lVar25 + lVar26 +
      lVar27 + lVar28 + lVar29 + *plVar32 + 0x29U) {
    return false;
  }
  plVar30 = (long *)(lVar36 + 8);
  *(undefined1 *)(*plVar30 + *plVar32) = 0xb9;
  *(long *)(lVar36 + 0x18) = *(long *)(lVar36 + 0x18) + 1;
  local_80 = 0x12;
  FUN_0111b0ac(local_c8,&local_80);
  if (local_c8[0] != 0) {
    iVar31 = 1;
    goto LAB_00b10034;
  }
  uVar4 = *param_2;
  uVar34 = 0xff84;
  if (uVar4 != (short)(char)uVar4) {
    uVar34 = 0xff85;
  }
  if (0xbf < (ushort)(uVar4 + 0x40)) {
    uVar4 = uVar34;
  }
  *(char *)(*plVar30 + *plVar32) = (char)uVar4;
  lVar36 = *plVar32 + 1;
  *plVar32 = lVar36;
  if ((uVar4 & 0xff) == 0x85) {
    *(ushort *)(*plVar30 + lVar36) = *param_2;
    lVar36 = 2;
LAB_00b0ffc4:
    *plVar32 = *plVar32 + lVar36;
  }
  else if ((uVar4 & 0xff) == 0x84) {
    *(char *)(*plVar30 + lVar36) = (char)*param_2;
    lVar36 = 1;
    goto LAB_00b0ffc4;
  }
  FUN_01e63170(&local_80,param_2 + 2,plVar30);
  iVar31 = (int)local_80;
  if ((int)local_80 == 0) {
    FUN_01e63170(local_70,param_2 + 4,plVar30);
    iVar31 = local_70[0];
    if (local_70[0] == 0) {
      cVar33 = (char)param_2[6];
      if (cVar33 < -0x40) {
        cVar33 = -0x7c;
      }
      *(char *)(*plVar30 + *plVar32) = cVar33;
      lVar36 = *plVar32 + 1;
      *plVar32 = lVar36;
      if (cVar33 == -0x7c) {
        *(char *)(*plVar30 + lVar36) = (char)param_2[6];
        lVar36 = *plVar32 + 1;
        *plVar32 = lVar36;
      }
      cVar33 = *(char *)((long)param_2 + 0xd);
      if (cVar33 < -0x40) {
        cVar33 = -0x7c;
      }
      *(char *)(*plVar30 + lVar36) = cVar33;
      lVar36 = *plVar32;
      *plVar32 = lVar36 + 1;
      if (cVar33 == -0x7c) {
        *(undefined1 *)(*plVar30 + lVar36 + 1) = *(undefined1 *)((long)param_2 + 0xd);
        *plVar32 = *plVar32 + 1;
      }
      FUN_01e63170(local_78,param_2 + 8,plVar30);
      iVar31 = local_78[0];
      if (local_78[0] == 0) {
        *(undefined1 *)(*plVar30 + *plVar32) = 0xb9;
        *plVar32 = *plVar32 + 1;
        FUN_00f46670(local_88,0xb9,param_2 + 0xc,plVar30);
        iVar31 = local_88[0];
        if (local_88[0] == 0) {
          *(undefined1 *)(*plVar30 + *plVar32) = 0xb9;
          *plVar32 = *plVar32 + 1;
          local_80 = 10;
          FUN_0111b0ac(local_70,&local_80,plVar30);
          iVar31 = local_70[0];
          if (local_70[0] == 0) {
            FUN_00b10794(local_90,param_2 + 0x10,plVar30);
            iVar31 = local_90[0];
            if (local_90[0] == 0) {
              FUN_01e63170(local_98,param_2 + 0x3e,plVar30);
              iVar31 = local_98[0];
              if (local_98[0] == 0) {
                *(char *)(*plVar30 + *plVar32) = (char)param_2[0x40];
                lVar36 = *plVar32;
                *plVar32 = lVar36 + 1;
                *(undefined1 *)(*plVar30 + lVar36 + 1) = 0xb9;
                *plVar32 = *plVar32 + 1;
                FUN_00f46670(local_a0,0xb9,param_2 + 0x44,plVar30);
                iVar31 = local_a0[0];
                if (local_a0[0] == 0) {
                  cVar33 = (char)param_2[0x48];
                  if (cVar33 < -0x40) {
                    cVar33 = -0x7c;
                  }
                  *(char *)(*plVar30 + *plVar32) = cVar33;
                  lVar36 = *plVar32;
                  *plVar32 = lVar36 + 1;
                  if (cVar33 == -0x7c) {
                    *(char *)(*plVar30 + lVar36 + 1) = (char)param_2[0x48];
                    *plVar32 = *plVar32 + 1;
                  }
                  FUN_00b0fa18(local_a8,param_2 + 0x58,plVar30);
                  iVar31 = local_a8[0];
                  if (local_a8[0] == 0) {
                    *(undefined1 *)(*plVar30 + *plVar32) = 0xb9;
                    *plVar32 = *plVar32 + 1;
                    local_80 = 10;
                    FUN_0111b0ac(local_70,&local_80,plVar30);
                    iVar31 = local_70[0];
                    if (local_70[0] == 0) {
                      FUN_00b10794(local_b0,param_2 + 0x4a,plVar30);
                      iVar31 = local_b0[0];
                      if (local_b0[0] == 0) {
                        *(undefined1 *)(*plVar30 + *plVar32) = 0xb9;
                        *plVar32 = *plVar32 + 1;
                        local_80 = 10;
                        FUN_0111b0ac(local_70,&local_80,plVar30);
                        iVar31 = local_70[0];
                        if (local_70[0] == 0) {
                          FUN_00b10794(local_b8,param_2 + 0x1e,plVar30);
                          iVar31 = local_b8[0];
                          if (local_b8[0] == 0) {
                            FUN_01e63170(local_c0,param_2 + 0x2c,plVar30);
                            iVar31 = local_c0[0];
                            if (local_c0[0] == 0) {
                              *(undefined1 *)(*plVar30 + *plVar32) = 0xb9;
                              *plVar32 = *plVar32 + 1;
                              local_80 = 10;
                              FUN_0111b0ac(local_70,&local_80,plVar30);
                              iVar31 = local_70[0];
                              if (local_70[0] == 0) {
                                FUN_00b10794(&local_80,param_2 + 0x2e,plVar30);
                                iVar31 = (int)local_80;
                                if ((int)local_80 == 0) {
                                  FUN_01e63170(local_70,param_2 + 0x3c,plVar30);
                                  iVar31 = local_70[0];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00b10034:
  return iVar31 == 0;
}


