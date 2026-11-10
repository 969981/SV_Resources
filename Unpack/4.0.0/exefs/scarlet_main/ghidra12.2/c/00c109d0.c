/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c109d0; name: FUN_00c109d0
 */


undefined8 FUN_00c109d0(string *param_1,int *param_2)

{
  byte *pbVar1;
  string sVar2;
  string sVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  string *psVar7;
  string *psVar8;
  string *psVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  string local_70 [8];
  ulong local_68;
  byte *pbStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  *param_2 = 0;
  sVar2 = *param_1;
  if (((byte)sVar2 & 1) == 0) {
    psVar7 = param_1 + 1;
    uVar11 = (ulong)((byte)sVar2 >> 1);
  }
  else {
    uVar11 = *(ulong *)(param_1 + 8);
    psVar7 = *(string **)(param_1 + 0x10);
  }
  psVar8 = psVar7 + uVar11;
  if (0 < (long)uVar11) {
    psVar9 = psVar8;
    if (psVar8 <= psVar7 + 1) {
      psVar9 = psVar7 + 1;
    }
    do {
      if (*psVar7 != (string)0x20) goto LAB_00c10a40;
      psVar7 = psVar7 + 1;
    } while (psVar9 != psVar7);
    psVar7 = psVar9;
  }
LAB_00c10a40:
  do {
    psVar9 = psVar8;
    if (psVar9 <= psVar7) goto LAB_00c10a84;
    psVar8 = psVar9 + -1;
  } while (psVar9[-1] == (string)0x20);
  sVar3 = *psVar7;
  if (((sVar3 == (string)0x2d) || (sVar3 == (string)0x2b)) &&
     (psVar7 = psVar7 + 1, psVar9 <= psVar7)) {
LAB_00c10a84:
    uVar13 = 0;
  }
  else {
    if (((byte)sVar2 & 1) == 0) {
      psVar8 = param_1 + 1;
    }
    else {
      psVar8 = *(string **)(param_1 + 0x10);
    }
    std::string::string((string *)&local_58,param_1,(long)psVar7 - (long)psVar8,
                        (long)psVar9 - (long)psVar7,(allocator *)param_1);
    if ((((byte)*param_1 & 1) != 0) && (lVar12 = *(long *)(param_1 + 0x10), lVar12 != 0)) {
      lVar6 = tpidr_el0;
      plVar14 = *(long **)(lVar6 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar12,0,8);
      }
    }
    *(undefined8 *)(param_1 + 8) = uStack_50;
    *(undefined8 *)(param_1 + 0x10) = local_48;
    *(undefined8 *)param_1 = local_58;
    if (sVar3 == (string)0x2d) {
      uVar11 = *(ulong *)(param_1 + 8);
      psVar7 = *(string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        psVar7 = param_1 + 1;
        uVar11 = (ulong)((byte)*param_1 >> 1);
      }
      if ((long)uVar11 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        psVar8 = psVar7 + uVar11;
        do {
          sVar2 = *psVar7;
          if (9 < (byte)sVar2 - 0x30) {
            uVar13 = 0;
            goto LAB_00c10c7c;
          }
          if ((iVar5 < -0xccccccc) || (iVar5 * 10 < (int)((byte)sVar2 + 0x7fffffd0))) {
            *param_2 = -0x80000000;
            return 0;
          }
          psVar7 = psVar7 + 1;
          iVar5 = (iVar5 * 10 - (uint)(byte)sVar2) + 0x30;
        } while (psVar7 < psVar8);
      }
      uVar13 = 1;
LAB_00c10c7c:
      *param_2 = iVar5;
    }
    else {
      std::string::string(local_70,param_1);
      pbVar10 = (byte *)((ulong)local_70 | 1);
      uVar11 = (ulong)((byte)local_70[0] >> 1);
      if (((byte)local_70[0] & 1) != 0) {
        pbVar10 = pbStack_60;
        uVar11 = local_68;
      }
      if ((long)uVar11 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        pbVar1 = pbVar10 + uVar11;
        do {
          bVar4 = *pbVar10;
          if (9 < bVar4 - 0x30) {
            uVar13 = 0;
            goto LAB_00c10c88;
          }
          if ((0xccccccc < iVar5) || ((int)(-0x7fffffd1 - (uint)bVar4) < iVar5 * 10)) {
            uVar13 = 0;
            iVar5 = 0x7fffffff;
            goto LAB_00c10c88;
          }
          pbVar10 = pbVar10 + 1;
          iVar5 = iVar5 * 10 + (uint)bVar4 + -0x30;
        } while (pbVar10 < pbVar1);
      }
      uVar13 = 1;
LAB_00c10c88:
      *param_2 = iVar5;
      if ((((byte)local_70[0] & 1) != 0) && (pbStack_60 != (byte *)0x0)) {
        lVar12 = tpidr_el0;
        plVar14 = *(long **)(lVar12 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
        }
        uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,pbStack_60,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,pbStack_60,0,8);
        }
      }
    }
  }
  return uVar13;
}


