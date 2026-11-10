/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00126750; name: FUN_00126750
 */


char * FUN_00126750(long param_1,int param_2,uint param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  char *pcVar10;
  char *local_28 [5];
  
code_r0x00126750:
  lVar5 = FUN_00129d10(param_1,param_3 + 1,param_2);
  *param_4 = lVar5;
  if (lVar5 != 0) {
    pcVar10 = "local";
switchD_001268b8_caseD_1:
    return pcVar10;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  uVar1 = param_2 + ((int)(char)(&DAT_03cb602b)[(ulong)*(uint *)(lVar5 + (long)param_2 * 4) & 0x7f]
                    >> 7);
  if ((int)uVar1 < 1) {
    return (char *)0x0;
  }
  uVar8 = 0;
  iVar4 = 0;
  param_2 = -1;
  do {
    uVar2 = *(uint *)(lVar5 + uVar8 * 4);
    uVar3 = uVar2 >> 7 & 0xff;
    uVar9 = (uint)((ulong)uVar2 & 0x7f);
    iVar7 = (int)uVar8;
    if (uVar9 < 0x44) {
      if (uVar9 == 8) {
        if (((int)uVar3 <= (int)param_3) && ((int)param_3 <= (int)(uVar3 + (uVar2 >> 0x10 & 0xff))))
        goto LAB_001267d4;
      }
      else {
        if (uVar9 != 0x38) goto LAB_00126874;
        iVar7 = iVar7 + (uVar2 >> 7) + -0xfffffe;
        if (iVar7 <= iVar4 || (int)uVar1 < iVar7) {
          iVar7 = iVar4;
        }
        iVar4 = iVar7;
      }
    }
    else {
      if (1 < uVar9 - 0x44) {
        if (uVar9 != 0x4c) {
LAB_00126874:
          if ((uVar3 == param_3) && (((byte)(&DAT_03cb602b)[(ulong)uVar2 & 0x7f] >> 3 & 1) != 0))
          goto LAB_001267d4;
          goto LAB_001267dc;
        }
        uVar3 = uVar3 + 2;
      }
      if ((int)uVar3 <= (int)param_3) {
LAB_001267d4:
        if ((long)uVar8 < (long)iVar4) {
          iVar7 = -1;
        }
        param_2 = iVar7;
      }
    }
LAB_001267dc:
    uVar8 = uVar8 + 1;
  } while (uVar1 != uVar8);
  if (param_2 == -1) {
    return (char *)0x0;
  }
  uVar1 = *(uint *)(lVar5 + (long)param_2 * 4);
  pcVar10 = (char *)0x0;
  switch(uVar1 & 0x7f) {
  case 0:
    goto switchD_001268b8_caseD_0;
  default:
    goto switchD_001268b8_caseD_1;
  case 3:
    uVar1 = uVar1 >> 0xf;
    goto LAB_00126904;
  case 4:
    uVar1 = *(uint *)(lVar5 + (long)param_2 * 4 + 4) >> 7;
LAB_00126904:
    if ((*(byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x10 + 8) & 0xf) == 4) {
      *param_4 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x10) + 0x18;
      return "constant";
    }
    return (char *)0x0;
  case 9:
    lVar5 = *(long *)(*(long *)(param_1 + 0x50) + ((ulong)(uVar1 >> 0x10) & 0xff) * 0x10);
    puVar6 = &DAT_03c1ceec;
    if (lVar5 != 0) {
      puVar6 = (undefined *)(lVar5 + 0x18);
    }
    *param_4 = (long)puVar6;
    return "upvalue";
  case 0xb:
    puVar6 = &DAT_03c1ceec;
    if ((*(byte *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 >> 0x18) * 0x10 + 8) & 0xf) == 4) {
      puVar6 = (undefined *)
               (*(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 >> 0x18) * 0x10) + 0x18);
    }
    *param_4 = (long)puVar6;
    lVar5 = *(long *)(*(long *)(param_1 + 0x50) + ((ulong)(uVar1 >> 0x10) & 0xff) * 0x10);
    pcVar10 = "?";
    if (lVar5 != 0) {
      pcVar10 = (char *)(lVar5 + 0x18);
    }
    iVar4 = strcmp(pcVar10,"_ENV");
    pcVar10 = "global";
    if (iVar4 != 0) {
      pcVar10 = "field";
    }
    return pcVar10;
  case 0xc:
    pcVar10 = (char *)FUN_00126750(param_1,param_2,uVar1 >> 0x18,param_4);
    if ((pcVar10 != (char *)0x0) && (*pcVar10 == 'c')) goto LAB_00126a7c;
LAB_00126a70:
    puVar6 = &DAT_03c1ceec;
    break;
  case 0xd:
    *param_4 = (long)"integer index";
    return "field";
  case 0xe:
    if ((*(byte *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 >> 0x18) * 0x10 + 8) & 0xf) != 4)
    goto LAB_00126a70;
    puVar6 = (undefined *)
             (*(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar1 >> 0x18) * 0x10) + 0x18);
    break;
  case 0x14:
    uVar8 = (ulong)(uVar1 >> 0x18);
    if ((uVar1 >> 0xf & 1) == 0) {
      pcVar10 = (char *)FUN_00126750(param_1,param_2,uVar8,param_4);
      if ((pcVar10 != (char *)0x0) && (*pcVar10 == 'c')) goto LAB_00126b20;
LAB_00126b14:
      puVar6 = &DAT_03c1ceec;
    }
    else {
      if ((*(byte *)(*(long *)(param_1 + 0x38) + uVar8 * 0x10 + 8) & 0xf) != 4) goto LAB_00126b14;
      puVar6 = (undefined *)(*(long *)(*(long *)(param_1 + 0x38) + uVar8 * 0x10) + 0x18);
    }
    *param_4 = (long)puVar6;
LAB_00126b20:
    return "method";
  }
  *param_4 = (long)puVar6;
LAB_00126a7c:
  FUN_00126750(param_1,param_2,uVar1 >> 0x10 & 0xff,local_28);
  if (local_28[0] == (char *)0x0) {
    return "field";
  }
  iVar4 = strcmp(local_28[0],"_ENV");
  pcVar10 = "global";
  if (iVar4 != 0) {
    pcVar10 = "field";
  }
  return pcVar10;
switchD_001268b8_caseD_0:
  param_3 = uVar1 >> 0x10 & 0xff;
  if ((uVar1 >> 7 & 0xff) <= param_3) {
    return (char *)0x0;
  }
  goto code_r0x00126750;
}


