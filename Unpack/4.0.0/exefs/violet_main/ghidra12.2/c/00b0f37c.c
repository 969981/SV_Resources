/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0f37c; name: FUN_00b0f37c
 */


void FUN_00b0f37c(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
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
  int iVar24;
  uint uVar25;
  char cVar26;
  long *plVar27;
  long lVar28;
  int local_98 [2];
  int local_90 [2];
  int local_88 [2];
  int local_80 [2];
  undefined8 local_78;
  int local_70 [4];
  
  lVar28 = *param_1;
  if (lVar28 != 0) {
    lVar4 = FUN_0111b030(*param_2);
    uVar2 = *(ushort *)(param_2 + 4);
    uVar25 = 0xffffff84;
    if ((uint)uVar2 != ((int)(char)uVar2 & 0xffffU)) {
      uVar25 = 0xffffff85;
    }
    uVar1 = (uint)uVar2;
    if (0xbf < (ushort)(uVar2 + 0x40)) {
      uVar1 = uVar25;
    }
    lVar5 = FUN_0111b030(uVar1);
    iVar24 = *(int *)(param_2 + 0xc);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar6 = FUN_0111b030(iVar24);
    iVar24 = *(int *)(param_2 + 0x10);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar7 = FUN_0111b030(iVar24);
    uVar2 = *(ushort *)(param_2 + 0x50);
    uVar25 = 0xffffff84;
    if ((uint)uVar2 != ((int)(char)uVar2 & 0xffffU)) {
      uVar25 = 0xffffff85;
    }
    uVar1 = (uint)uVar2;
    if (0xbf < (ushort)(uVar2 + 0x40)) {
      uVar1 = uVar25;
    }
    lVar8 = FUN_0111b030(uVar1);
    iVar24 = *(int *)(param_2 + 0x58);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar9 = FUN_0111b030(iVar24);
    iVar24 = *(int *)(param_2 + 0x5c);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar10 = FUN_0111b030(iVar24);
    uVar2 = *(ushort *)(param_2 + 0x9c);
    uVar25 = 0xffffff84;
    if ((uint)uVar2 != ((int)(char)uVar2 & 0xffffU)) {
      uVar25 = 0xffffff85;
    }
    uVar1 = (uint)uVar2;
    if (0xbf < (ushort)(uVar2 + 0x40)) {
      uVar1 = uVar25;
    }
    lVar11 = FUN_0111b030(uVar1);
    iVar24 = *(int *)(param_2 + 0xa4);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar12 = FUN_0111b030(iVar24);
    iVar24 = *(int *)(param_2 + 0xa8);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar13 = FUN_0111b030(iVar24);
    uVar2 = *(ushort *)(param_2 + 0xec);
    uVar25 = 0xffffff84;
    if ((uint)uVar2 != ((int)(char)uVar2 & 0xffffU)) {
      uVar25 = 0xffffff85;
    }
    uVar1 = (uint)uVar2;
    if (0xbf < (ushort)(uVar2 + 0x40)) {
      uVar1 = uVar25;
    }
    lVar14 = FUN_0111b030(uVar1);
    iVar24 = *(int *)(param_2 + 0xf4);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar15 = FUN_0111b030(iVar24);
    iVar24 = *(int *)(param_2 + 0xf8);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar16 = FUN_0111b030(iVar24);
    uVar2 = *(ushort *)(param_2 + 0x138);
    uVar25 = 0xffffff84;
    if ((uint)uVar2 != ((int)(char)uVar2 & 0xffffU)) {
      uVar25 = 0xffffff85;
    }
    uVar1 = (uint)uVar2;
    if (0xbf < (ushort)(uVar2 + 0x40)) {
      uVar1 = uVar25;
    }
    lVar17 = FUN_0111b030(uVar1);
    iVar24 = *(int *)(param_2 + 0x140);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar18 = FUN_0111b030(iVar24);
    iVar24 = *(int *)(param_2 + 0x144);
    if (0xbf < iVar24 + 0x40U) {
      if (iVar24 == (char)iVar24) {
        iVar24 = 0x84;
      }
      else {
        bVar3 = iVar24 != (short)iVar24;
        iVar24 = -0x7b;
        if (bVar3) {
          iVar24 = -0x7a;
        }
      }
    }
    lVar19 = FUN_0111b030(iVar24);
    iVar24 = (int)(char)param_2[0x184];
    if ((char)param_2[0x184] < -0x40) {
      iVar24 = -0x7c;
    }
    lVar20 = FUN_0111b030(iVar24);
    iVar24 = (int)(char)param_2[0x185];
    if ((char)param_2[0x185] < -0x40) {
      iVar24 = -0x7c;
    }
    lVar21 = FUN_0111b030(iVar24);
    uVar25 = *(uint *)(param_2 + 0x188);
    if (0x7f < uVar25) {
      if (uVar25 < 0x100) {
        uVar25 = 0x80;
      }
      else {
        bVar3 = 0xffff < uVar25;
        uVar25 = 0xffffff81;
        if (bVar3) {
          uVar25 = 0xffffff82;
        }
      }
    }
    lVar22 = FUN_0111b030(uVar25);
    uVar25 = *(uint *)(param_2 + 0x18c);
    if (0x7f < uVar25) {
      if (uVar25 < 0x100) {
        uVar25 = 0x80;
      }
      else {
        bVar3 = 0xffff < uVar25;
        uVar25 = 0xffffff81;
        if (bVar3) {
          uVar25 = 0xffffff82;
        }
      }
    }
    lVar23 = FUN_0111b030(uVar25);
    if (lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 +
        lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + lVar20 + lVar21 + lVar22 + lVar23 +
        *(long *)(lVar28 + 0x18) + 0x28U <= *(ulong *)(lVar28 + 0x10)) {
      plVar27 = (long *)(lVar28 + 8);
      *(undefined1 *)(*plVar27 + *(long *)(lVar28 + 0x18)) = 0xb9;
      *(long *)(lVar28 + 0x18) = *(long *)(lVar28 + 0x18) + 1;
      local_78 = 0xb;
      FUN_0111b0ac(local_98,&local_78,plVar27);
      if (local_98[0] == 0) {
        *(undefined1 *)(*(long *)(lVar28 + 8) + *(long *)(lVar28 + 0x18)) = *param_2;
        *(long *)(lVar28 + 0x18) = *(long *)(lVar28 + 0x18) + 1;
        FUN_00b0fa18(&local_78,param_2 + 4,plVar27);
        if ((((int)local_78 == 0) &&
            (FUN_00b0fa18(local_70,param_2 + 0x50,plVar27), local_70[0] == 0)) &&
           (FUN_00b0fa18(local_80,param_2 + 0x9c,plVar27), local_80[0] == 0)) {
          *(undefined1 *)(*(long *)(lVar28 + 8) + *(long *)(lVar28 + 0x18)) = 0xbc;
          *(long *)(lVar28 + 0x18) = *(long *)(lVar28 + 0x18) + 1;
          local_78 = 1;
          FUN_0111b0ac(local_70,&local_78,plVar27);
          if (local_70[0] == 0) {
            *(undefined1 *)(*(long *)(lVar28 + 8) + *(long *)(lVar28 + 0x18)) = param_2[0xe8];
            *(long *)(lVar28 + 0x18) = *(long *)(lVar28 + 0x18) + 1;
            FUN_00b0fa18(local_88,param_2 + 0xec,plVar27);
            if ((local_88[0] == 0) &&
               (FUN_00b0fa18(local_90,param_2 + 0x138,plVar27), local_90[0] == 0)) {
              cVar26 = param_2[0x184];
              if (cVar26 < -0x40) {
                cVar26 = -0x7c;
              }
              *(char *)(*(long *)(lVar28 + 8) + *(long *)(lVar28 + 0x18)) = cVar26;
              lVar4 = *(long *)(lVar28 + 0x18) + 1;
              *(long *)(lVar28 + 0x18) = lVar4;
              if (cVar26 == -0x7c) {
                *(undefined1 *)(*(long *)(lVar28 + 8) + lVar4) = param_2[0x184];
                lVar4 = *(long *)(lVar28 + 0x18) + 1;
                *(long *)(lVar28 + 0x18) = lVar4;
              }
              cVar26 = param_2[0x185];
              if (cVar26 < -0x40) {
                cVar26 = -0x7c;
              }
              *(char *)(*(long *)(lVar28 + 8) + lVar4) = cVar26;
              lVar4 = *(long *)(lVar28 + 0x18) + 1;
              *(long *)(lVar28 + 0x18) = lVar4;
              if (cVar26 == -0x7c) {
                *(undefined1 *)(*(long *)(lVar28 + 8) + lVar4) = param_2[0x185];
                *(long *)(lVar28 + 0x18) = *(long *)(lVar28 + 0x18) + 1;
              }
              FUN_014c29bc(&local_78,param_2 + 0x188,plVar27);
              if ((int)local_78 == 0) {
                FUN_014c29bc(local_70,param_2 + 0x18c,plVar27);
              }
            }
          }
        }
      }
    }
  }
  return;
}


