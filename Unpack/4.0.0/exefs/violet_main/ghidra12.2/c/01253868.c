/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01253868; name: FUN_01253868
 */


void FUN_01253868(long param_1,byte param_2,undefined1 *param_3,char *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  uVar5 = (uint)*(byte *)(*(long *)(param_1 + 8) + 0x370);
  if (iVar1 == 2) {
    if (param_2 < 0xb) {
      if (uVar5 == 0) {
        if (2 < (byte)(param_2 - 1)) goto LAB_0125389c;
      }
      else if (uVar5 == 1) {
        if ((param_2 & 0xfe) != 2) goto LAB_0125389c;
      }
      else if ((uVar5 != 2) || (param_2 != 3)) {
LAB_0125389c:
        puVar6 = (undefined4 *)&DAT_03d6a424;
        goto LAB_012538a4;
      }
    }
LAB_012539ec:
    cVar4 = '\0';
    *param_3 = 5;
    goto LAB_0125396c;
  }
  if (iVar1 == 0) {
    if (10 < param_2) goto LAB_012539ec;
    puVar6 = (undefined4 *)&DAT_03d6a348;
  }
  else {
    if (iVar1 != 1 || 10 < param_2) goto LAB_012539ec;
    if (uVar5 - 1 < 5) {
      puVar6 = (undefined4 *)(&PTR_DAT_045ee590)[(char)(uVar5 - 1)];
    }
    else {
      puVar6 = &DAT_03d6a374;
    }
  }
LAB_012538a4:
  uVar5 = puVar6[param_2];
  cVar4 = '\0';
  *param_3 = (char)uVar5;
  if ((param_2 == 0) || (uVar5 = uVar5 & 0xff, uVar5 == 5)) goto LAB_0125396c;
  bVar3 = param_2 - 1;
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  bVar2 = *(byte *)(*(long *)(param_1 + 8) + 0x370);
  uVar7 = (uint)bVar2;
  if (iVar1 == 2) {
    if (bVar3 < 0xb) {
      if (uVar7 == 0) {
        if (2 < (byte)(param_2 - 2)) goto LAB_01253900;
      }
      else if (uVar7 == 1) {
        if ((bVar3 & 0xfe) != 2) goto LAB_01253900;
      }
      else if ((uVar7 != 2) || (bVar3 != 3)) {
LAB_01253900:
        puVar6 = (undefined4 *)&DAT_03d6a424;
        goto LAB_01253908;
      }
    }
LAB_01253b08:
    uVar8 = 5;
  }
  else {
    if (iVar1 != 0) {
      if ((iVar1 == 1) && (bVar3 < 0xb)) {
        if (uVar7 == 5) {
          puVar6 = (undefined4 *)&DAT_03d6a3f8;
        }
        else if (uVar7 - 1 < 3) {
          puVar6 = &DAT_03d6a3a0;
        }
        else if (uVar7 == 4) {
          puVar6 = (undefined4 *)&DAT_03d6a3cc;
        }
        else {
          puVar6 = &DAT_03d6a374;
        }
        goto LAB_01253908;
      }
      goto LAB_01253b08;
    }
    if (10 < bVar3) goto LAB_01253b08;
    puVar6 = (undefined4 *)&DAT_03d6a348;
LAB_01253908:
    uVar8 = puVar6[bVar3];
  }
  cVar4 = uVar8 == uVar5;
  if (bVar3 == 0) goto LAB_0125396c;
  bVar3 = param_2 - 2;
  if (iVar1 == 2) {
    if (bVar3 < 0xb) {
      if (uVar7 == 0) {
        if (2 < (byte)(param_2 - 3)) goto LAB_0125394c;
      }
      else if (uVar7 == 1) {
        if ((bVar3 & 0xfe) != 2) goto LAB_0125394c;
      }
      else if ((uVar7 != 2) || (bVar3 != 3)) {
LAB_0125394c:
        puVar6 = (undefined4 *)&DAT_03d6a424;
        goto LAB_01253954;
      }
    }
LAB_01253b68:
    uVar8 = 5;
  }
  else {
    if (iVar1 != 0) {
      if ((iVar1 == 1) && (bVar3 < 0xb)) {
        if (uVar7 == 5) {
          puVar6 = (undefined4 *)&DAT_03d6a3f8;
        }
        else if (uVar7 - 1 < 3) {
          puVar6 = &DAT_03d6a3a0;
        }
        else if (uVar7 == 4) {
          puVar6 = (undefined4 *)&DAT_03d6a3cc;
        }
        else {
          puVar6 = &DAT_03d6a374;
        }
        goto LAB_01253954;
      }
      goto LAB_01253b68;
    }
    if (10 < bVar3) goto LAB_01253b68;
    puVar6 = (undefined4 *)&DAT_03d6a348;
LAB_01253954:
    uVar8 = puVar6[bVar3];
  }
  if (uVar8 == uVar5) {
    cVar4 = cVar4 + '\x01';
  }
  if (bVar3 != 0) {
    cVar9 = param_2 - 2;
    do {
      bVar3 = cVar9 - 1;
      uVar8 = (uint)bVar2;
      if (iVar1 == 2) {
        if (10 < bVar3) goto LAB_01253ca0;
        if (uVar7 == 0) {
          uVar8 = 5;
          if ((byte)(cVar9 - 2U) < 3) goto LAB_01253ac4;
        }
        else if (uVar8 == 1) {
          if ((bVar3 & 0xfe) == 2) goto LAB_01253ca0;
        }
        else if ((uVar8 == 2) && (bVar3 == 3)) goto LAB_01253ca0;
        uVar8 = *(uint *)(&DAT_03d6a424 + (ulong)bVar3 * 4);
      }
      else if (iVar1 == 0) {
        if (bVar3 < 0xb) {
          uVar8 = *(uint *)(&DAT_03d6a348 + (ulong)bVar3 * 4);
        }
        else {
LAB_01253ca0:
          uVar8 = 5;
        }
      }
      else {
        if ((iVar1 != 1) || (10 < bVar3)) goto LAB_01253ca0;
        if (uVar8 == 5) {
          uVar8 = *(uint *)(&DAT_03d6a3f8 + (ulong)bVar3 * 4);
        }
        else if (uVar8 - 1 < 3) {
          uVar8 = (&DAT_03d6a3a0)[bVar3];
        }
        else if (uVar7 == 4) {
          uVar8 = *(uint *)(&DAT_03d6a3cc + (ulong)bVar3 * 4);
        }
        else {
          uVar8 = (&DAT_03d6a374)[bVar3];
        }
      }
LAB_01253ac4:
      if (uVar8 == uVar5) {
        cVar4 = cVar4 + '\x01';
      }
      cVar9 = cVar9 + -1;
    } while (bVar3 != 0);
  }
LAB_0125396c:
  *param_4 = cVar4;
  return;
}


