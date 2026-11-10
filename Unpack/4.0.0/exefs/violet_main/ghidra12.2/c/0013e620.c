/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013e620; name: FUN_0013e620
 */


bool FUN_0013e620(long param_1,long *param_2,long *param_3,uint param_4)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x10);
  iVar6 = (int)((ulong)*(byte *)(param_2 + 1) & 0xf);
  if (iVar6 == 7) {
    lVar3 = *(long *)(*param_2 + 0x18);
    lVar7 = *(long *)(param_1 + 0x18);
joined_r0x0013e680:
    if (lVar3 != 0) goto LAB_0013e684;
LAB_0013e6b8:
    puVar4 = (undefined8 *)(lVar7 + 0x50);
    bVar1 = *(byte *)(lVar7 + 0x58);
  }
  else {
    if (iVar6 != 5) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(byte *)(param_2 + 1) & 0xf) * 8 +
                       0x1e0);
      lVar7 = *(long *)(param_1 + 0x18);
      goto joined_r0x0013e680;
    }
    lVar3 = *(long *)(*param_2 + 0x28);
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_0013e6b8;
LAB_0013e684:
    puVar4 = (undefined8 *)FUN_0013d2c0(lVar3,*(undefined8 *)(lVar7 + (ulong)param_4 * 8 + 0x118));
    bVar1 = *(byte *)(puVar4 + 1);
  }
  if ((bVar1 & 0xf) != 0) goto LAB_0013e71c;
  iVar6 = (int)((ulong)*(byte *)(param_3 + 1) & 0xf);
  if (iVar6 == 7) {
    lVar3 = *(long *)(*param_3 + 0x18);
    lVar7 = *(long *)(param_1 + 0x18);
joined_r0x0013e700:
    if (lVar3 != 0) goto LAB_0013e704;
LAB_0013e7f8:
    puVar4 = (undefined8 *)(lVar7 + 0x50);
    bVar1 = *(byte *)(lVar7 + 0x58);
  }
  else {
    if (iVar6 != 5) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(byte *)(param_3 + 1) & 0xf) * 8 +
                       0x1e0);
      lVar7 = *(long *)(param_1 + 0x18);
      goto joined_r0x0013e700;
    }
    lVar3 = *(long *)(*param_3 + 0x28);
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_0013e7f8;
LAB_0013e704:
    puVar4 = (undefined8 *)FUN_0013d2c0(lVar3,*(undefined8 *)(lVar7 + (ulong)param_4 * 8 + 0x118));
    bVar1 = *(byte *)(puVar4 + 1);
  }
  if ((bVar1 & 0xf) != 0) {
LAB_0013e71c:
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x30);
    *puVar5 = *puVar4;
    *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar5[2] = *param_2;
    *(char *)(puVar5 + 3) = (char)param_2[1];
    puVar5[4] = *param_3;
    *(char *)(puVar5 + 5) = (char)param_3[1];
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x3e) & 10) == 0) {
      FUN_00127d10(param_1,puVar5,1);
    }
    else {
      FUN_00127da0();
    }
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (lVar9 - lVar3));
    lVar9 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar9 + -0x10;
    *puVar4 = *(undefined8 *)(lVar9 + -0x10);
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(lVar9 + -8);
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 8);
    return bVar1 != 1 && (bVar1 & 0xf) != 0;
  }
  if (param_4 != 0x15) goto LAB_0013e9c8;
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) | 0x2000;
  lVar9 = *(long *)(param_1 + 0x10);
  iVar6 = (int)((ulong)*(byte *)(param_3 + 1) & 0xf);
  if (iVar6 == 7) {
    lVar3 = *(long *)(*param_3 + 0x18);
    lVar7 = *(long *)(param_1 + 0x18);
joined_r0x0013e85c:
    if (lVar3 != 0) goto LAB_0013e860;
LAB_0013e890:
    puVar4 = (undefined8 *)(lVar7 + 0x50);
    bVar1 = *(byte *)(lVar7 + 0x58);
  }
  else {
    if (iVar6 != 5) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(byte *)(param_3 + 1) & 0xf) * 8 +
                       0x1e0);
      lVar7 = *(long *)(param_1 + 0x18);
      goto joined_r0x0013e85c;
    }
    lVar3 = *(long *)(*param_3 + 0x28);
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_0013e890;
LAB_0013e860:
    puVar4 = (undefined8 *)FUN_0013d2c0(lVar3,*(undefined8 *)(lVar7 + 0x1b8));
    bVar1 = *(byte *)(puVar4 + 1);
  }
  if ((bVar1 & 0xf) == 0) {
    iVar6 = (int)((ulong)*(byte *)(param_2 + 1) & 0xf);
    if (iVar6 == 7) {
      plVar8 = (long *)(*param_2 + 0x18);
    }
    else if (iVar6 == 5) {
      plVar8 = (long *)(*param_2 + 0x28);
    }
    else {
      plVar8 = (long *)(*(long *)(param_1 + 0x18) + ((ulong)*(byte *)(param_2 + 1) & 0xf) * 8 +
                       0x1e0);
    }
    if (*plVar8 == 0) {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
    }
    else {
      puVar4 = (undefined8 *)
               FUN_0013d2c0(*plVar8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1b8));
    }
    if ((*(byte *)(puVar4 + 1) & 0xf) == 0) {
LAB_0013e9c8:
      FUN_00126140(param_1,param_2,param_3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)UndefinedInstructionException(0,0x13e9d8);
      (*pcVar2)();
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x30);
  *puVar5 = *puVar4;
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar5[2] = *param_3;
  *(char *)(puVar5 + 3) = (char)param_3[1];
  puVar5[4] = *param_2;
  *(char *)(puVar5 + 5) = (char)param_2[1];
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x30;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x3e) & 10) == 0) {
    FUN_00127d10(param_1,puVar5,1);
  }
  else {
    FUN_00127da0();
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (lVar9 - lVar3));
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  *puVar4 = *(undefined8 *)(lVar9 + -0x10);
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(lVar9 + -8);
  *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) =
       *(ushort *)(*(long *)(param_1 + 0x20) + 0x3e) ^ 0x2000;
  bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 8);
  return bVar1 == 1 || (bVar1 & 0xf) == 0;
}


