/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf55c0; name: FUN_00cf55c0
 */


ulong FUN_00cf55c0(undefined8 param_1,long *param_2,char *param_3,undefined2 *param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  
  uVar8 = FUN_00e9980c();
  if (uVar8 < *(byte *)(param_4 + 3)) goto switchD_00cf5634_caseD_5;
  uVar10 = FUN_00cf5bec(param_1,param_3 + 0x14);
  if ((uVar10 & 1) == 0) {
    uVar8 = FUN_01a8b46c(param_1);
  }
  else {
    uVar8 = FUN_0131c04c(param_1);
  }
  uVar10 = 1;
  switch(*param_4) {
  case 1:
  case 0x23:
    bVar1 = 0x9e < uVar8;
    bVar2 = uVar8 == 0x9f;
    goto LAB_00cf563c;
  case 2:
    if (0x9f < uVar8) goto switchD_00cf5634_caseD_20;
    break;
  case 3:
    if (0x9f < uVar8) goto switchD_00cf5634_caseD_21;
    break;
  case 4:
  case 0xe:
    goto switchD_00cf5634_caseD_4;
  case 9:
    uVar5 = FUN_013e8070(param_1,1);
    uVar6 = FUN_013e8070(param_1,2);
    bVar2 = uVar5 <= uVar6;
    goto LAB_00cf579c;
  case 10:
    sVar7 = FUN_013e8070(param_1,1);
    sVar4 = FUN_013e8070(param_1,2);
    bVar2 = sVar4 == sVar7;
    goto LAB_00cf5660;
  case 0xb:
    uVar5 = FUN_013e8070(param_1,1);
    uVar6 = FUN_013e8070(param_1,2);
    bVar2 = uVar6 <= uVar5;
    goto LAB_00cf579c;
  case 0xc:
    uVar10 = FUN_018c687c(param_1);
    uVar10 = uVar10 >> 0x10 & 0xffff;
    bVar2 = 4 < (uint)((int)uVar10 + (int)(uVar10 / 10) * -10);
LAB_00cf579c:
    return (ulong)!bVar2;
  case 0xd:
    uVar10 = FUN_018c687c(param_1);
    uVar10 = uVar10 >> 0x10 & 0xffff;
    uVar8 = (int)uVar10 + (int)(uVar10 / 10) * -10;
    bVar1 = 3 < uVar8;
    bVar2 = uVar8 == 4;
LAB_00cf563c:
    return (ulong)(bVar1 && !bVar2);
  case 0xf:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","isSatisfyEvolutionConditionByLevelUp",
               "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/lib/pokelib/program/src/pokepara/pml_evolution_checker.cpp"
               ,0xc4);
  case 0x13:
    uVar12 = FUN_00e974d8(param_1);
    uVar10 = FUN_00cf4c64(uVar12,param_4[1]);
    if ((uVar10 & 1) != 0) goto switchD_00cf5634_caseD_20;
    break;
  case 0x14:
    uVar12 = FUN_00e974d8(param_1);
    uVar10 = FUN_00cf4c64(uVar12,param_4[1]);
    if ((uVar10 & 1) != 0) goto switchD_00cf5634_caseD_21;
    break;
  case 0x15:
    sVar7 = FUN_01df4e18(param_1,0);
    if (param_4[1] == sVar7) {
      return 1;
    }
    sVar7 = FUN_01df4e18(param_1,1);
    if (param_4[1] == sVar7) {
      return 1;
    }
    sVar7 = FUN_01df4e18(param_1,2);
    if (param_4[1] == sVar7) {
      return 1;
    }
    sVar7 = FUN_01df4e18(param_1,3);
    return (ulong)(param_4[1] == sVar7);
  case 0x16:
    uVar10 = FUN_021ef024(param_2,param_4[1]);
    return uVar10;
  case 0x17:
    cVar3 = FUN_00cec028(param_1);
    bVar2 = cVar3 == '\0';
    goto LAB_00cf5660;
  case 0x18:
  case 0x22:
    cVar3 = FUN_00cec028(param_1);
    bVar2 = cVar3 == '\x01';
    goto LAB_00cf5660;
  case 0x19:
    cVar3 = *param_3;
    goto LAB_00cf5950;
  case 0x1a:
    cVar3 = param_3[2];
    goto LAB_00cf5950;
  case 0x1b:
    cVar3 = param_3[1];
    goto LAB_00cf5950;
  case 0x1c:
    cVar3 = param_3[9];
    goto LAB_00cf5950;
  case 0x1d:
    if (0x9f < uVar8) {
      FUN_01df4e18(param_1,0);
      cVar3 = FUN_015d9898();
      if (*(char *)(param_4 + 1) == cVar3) {
        return 1;
      }
      FUN_01df4e18(param_1,1);
      cVar3 = FUN_015d9898();
      if (*(char *)(param_4 + 1) == cVar3) {
        return 1;
      }
      FUN_01df4e18(param_1,2);
      cVar3 = FUN_015d9898();
      if (*(char *)(param_4 + 1) == cVar3) {
        return 1;
      }
      FUN_01df4e18(param_1,3);
      cVar3 = FUN_015d9898();
      bVar2 = *(char *)(param_4 + 1) == cVar3;
      goto LAB_00cf5660;
    }
    break;
  case 0x1e:
    iVar9 = FUN_014c0588(param_2);
    if (iVar9 != 0) {
      iVar13 = 0;
      do {
        lVar11 = (**(code **)(*param_2 + 0x68))(param_2,iVar13);
        if ((lVar11 != 0) && (uVar10 = FUN_00cf4c90(lVar11,2), (uVar10 & 1) == 0)) {
          cVar3 = FUN_0113b7d0(lVar11);
          if (cVar3 == '\x10') {
            return 1;
          }
          cVar3 = FUN_01155170(lVar11);
          if (cVar3 == '\x10') {
            return 1;
          }
        }
        iVar13 = iVar13 + 1;
        if (iVar9 == iVar13) {
          return 0;
        }
      } while( true );
    }
    break;
  case 0x1f:
    cVar3 = param_3[8];
    goto LAB_00cf5950;
  case 0x20:
switchD_00cf5634_caseD_20:
    cVar3 = param_3[5];
    goto LAB_00cf5950;
  case 0x21:
switchD_00cf5634_caseD_21:
    cVar3 = param_3[6];
    goto LAB_00cf5950;
  case 0x24:
    lVar11 = FUN_01741ea0();
    bVar2 = param_4[1] == (ushort)*(byte *)(lVar11 + 0x3d1);
LAB_00cf5660:
    return (ulong)bVar2;
  case 0x25:
    lVar11 = FUN_01741ea0();
    if (param_4[1] == (ushort)*(byte *)(lVar11 + 0x3d1)) goto switchD_00cf5634_caseD_20;
    break;
  case 0x26:
    lVar11 = FUN_01741ea0();
    if (param_4[1] == (ushort)*(byte *)(lVar11 + 0x3d1)) goto switchD_00cf5634_caseD_21;
    break;
  case 0x27:
    cVar3 = param_3[3];
    goto LAB_00cf5950;
  case 0x28:
    cVar3 = param_3[7];
    goto LAB_00cf5950;
  case 0x29:
    cVar3 = param_3[4];
    goto LAB_00cf5950;
  case 0x2b:
    iVar9 = FUN_00ddf318(param_1);
    if (iVar9 != 0) {
      return (ulong)((ushort)param_4[1] <= (ushort)(byte)param_3[0xb]);
    }
    break;
  case 0x2e:
    uVar10 = FUN_021f3c54(param_1);
    return uVar10;
  case 0x2f:
    uVar10 = FUN_021f3c90(param_1);
    return uVar10;
  case 0x32:
    bVar2 = (uint)(ushort)param_4[1] <= *(uint *)(param_3 + 0x10);
    goto LAB_00cf5b10;
  case 0x33:
    cVar3 = param_3[0xc];
LAB_00cf5950:
    return (ulong)(cVar3 != '\0');
  case 0x34:
    if (((param_3[0xd] != '\0') && (param_3[0xe] != '\0')) &&
       (iVar9 = FUN_018c687c(param_1),
       ((uint)(iVar9 * -0x3d70a3d7) >> 2 | iVar9 * 0x40000000) < 0x28f5c29)) {
      return 1;
    }
    break;
  case 0x35:
    if (((param_3[0xd] != '\0') && (param_3[0xe] != '\0')) &&
       (iVar9 = FUN_018c687c(param_1),
       0x28f5c28 < ((uint)(iVar9 * -0x3d70a3d7) >> 2 | iVar9 * 0x40000000))) {
      return 1;
    }
    break;
  case 0x36:
    uVar8 = FUN_021f199c(param_1);
    goto LAB_00cf5b08;
  case 0x37:
    uVar8 = FUN_021f1a54(param_1);
    goto LAB_00cf5b08;
  case 0x38:
    uVar8 = FUN_021f1b34(param_1);
LAB_00cf5b08:
    bVar2 = (ushort)param_4[1] <= uVar8;
LAB_00cf5b10:
    return (ulong)bVar2;
  case 0x39:
    iVar9 = FUN_018c687c(param_1);
    if (0x28f5c28 < ((uint)(iVar9 * -0x3d70a3d7) >> 2 | iVar9 * 0x40000000)) {
LAB_00cf59a4:
      sVar7 = FUN_01df4e18(param_1,0);
      if (param_4[1] != sVar7) {
        sVar7 = FUN_01df4e18(param_1,1);
        if (param_4[1] == sVar7) {
          return 1;
        }
        sVar7 = FUN_01df4e18(param_1,2);
        if (param_4[1] != sVar7) {
          sVar7 = FUN_01df4e18(param_1,3);
          bVar2 = param_4[1] == sVar7;
          goto LAB_00cf5660;
        }
      }
      return 1;
    }
    break;
  case 0x3a:
    iVar9 = FUN_018c687c(param_1);
    if (((uint)(iVar9 * -0x3d70a3d7) >> 2 | iVar9 * 0x40000000) < 0x28f5c29) goto LAB_00cf59a4;
    break;
  case 0x3b:
    cVar3 = FUN_00cec028(param_1);
    if (cVar3 == '\0') {
LAB_00cf5b50:
      uVar8 = FUN_021f1618(param_1);
      if ((ushort)param_4[1] <= uVar8) {
        return 1;
      }
    }
    break;
  case 0x3c:
    cVar3 = FUN_00cec028(param_1);
    if (cVar3 == '\x01') goto LAB_00cf5b50;
  }
switchD_00cf5634_caseD_5:
  uVar10 = 0;
switchD_00cf5634_caseD_4:
  return uVar10;
}


