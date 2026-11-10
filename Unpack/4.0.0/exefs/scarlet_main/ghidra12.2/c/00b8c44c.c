/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b8c44c; name: FUN_00b8c44c
 */


void FUN_00b8c44c(undefined8 param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  string sVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  string *psVar12;
  long *plVar13;
  ulong uVar14;
  byte local_90 [16];
  long local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  sVar1 = *param_2;
  uVar10 = (ulong)(byte)sVar1;
  uVar14 = (ulong)((byte)sVar1 >> 1);
  if (((byte)sVar1 & 1) != 0) {
    uVar14 = *(ulong *)(param_2 + 8);
  }
  if (uVar14 == 0) {
    FUN_00b8a120(param_1,param_3,param_4,0,"Missing name.");
    return;
  }
  uVar14 = 0;
  lVar2 = tpidr_el0;
  if (((byte)sVar1 & 1) != 0) goto LAB_00b8c4e4;
LAB_00b8c4b4:
  if (uVar10 >> 1 <= uVar14) {
    return;
  }
  sVar1 = param_2[uVar14 + 1];
  if ((byte)sVar1 < 0x61) {
    uVar11 = (uint)(byte)sVar1;
    if ((byte)sVar1 < 0x41) {
      bVar3 = 8 < uVar11 - 0x30;
      bVar4 = uVar11 - 0x30 == 9;
    }
    else {
      bVar3 = 0x59 < uVar11;
      bVar4 = uVar11 == 0x5a;
    }
  }
  else {
    bVar3 = 0x79 < (byte)sVar1;
    bVar4 = sVar1 == (string)0x7a;
  }
  psVar12 = param_2 + 1;
  if (!bVar3 || bVar4) goto LAB_00b8c5a4;
LAB_00b8c538:
  do {
    if (psVar12[uVar14] != (string)0x5f) {
      std::operator+("\"",param_2);
      puVar6 = (ulong *)std::string::append((char *)local_90);
      uStack_70 = puVar6[1];
      local_68 = puVar6[2];
      local_78 = *puVar6;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      FUN_00b89f94(param_1,param_3,param_4,0,&local_78);
      uVar10 = local_68;
      if (((local_78 & 1) != 0) && (local_68 != 0)) {
        plVar13 = *(long **)(lVar2 + 0x30);
        if (plVar13 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar13 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
        }
        else {
          FUN_00c48fe8(plVar13,uVar10,0,8);
        }
      }
      lVar8 = local_80;
      if (((local_90[0] & 1) != 0) && (local_80 != 0)) {
        plVar13 = *(long **)(lVar2 + 0x30);
        if (plVar13 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar13 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,lVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar13,lVar8,0,8);
        }
      }
      uVar10 = (ulong)(byte)*param_2;
    }
LAB_00b8c5a4:
    do {
      while( true ) {
        while( true ) {
          uVar14 = uVar14 + 1;
          if ((uVar10 & 1) == 0) goto LAB_00b8c4b4;
LAB_00b8c4e4:
          if (*(ulong *)(param_2 + 8) <= uVar14) {
            return;
          }
          psVar12 = *(string **)(param_2 + 0x10);
          sVar1 = psVar12[uVar14];
          if ((byte)sVar1 < 0x61) break;
          if (0x7a < (byte)sVar1) goto LAB_00b8c538;
        }
        if ((byte)sVar1 < 0x41) break;
        if (0x5a < (byte)sVar1) goto LAB_00b8c538;
      }
    } while ((byte)sVar1 - 0x30 < 10);
  } while( true );
}


