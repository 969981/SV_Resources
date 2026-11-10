/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006144c8; name: FUN_006144c8
 */


undefined1 * FUN_006144c8(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  size_t sVar9;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar5;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) goto LAB_00614580;
    FUN_00532960(pbVar5 + 1,bVar1 >> 1);
    pbVar5 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar5;
    if ((bVar1 & 1) == 0) goto LAB_00614538;
LAB_0061450c:
    sVar9 = *(size_t *)(pbVar5 + 8);
    if ((long)sVar9 < 0x80) goto LAB_0061453c;
LAB_006145f0:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar5,param_2);
    uVar4 = *(uint *)(param_1 + 0x28);
    if (uVar4 != 0) goto LAB_00614588;
LAB_00614654:
    uVar4 = *(uint *)(param_1 + 0x2c);
joined_r0x006145b0:
    if (uVar4 != 0) goto LAB_0061465c;
LAB_006145b4:
    pbVar5 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar5;
joined_r0x006145bc:
    if ((bVar1 & 1) != 0) goto LAB_0061468c;
LAB_006145c0:
    if (1 < bVar1) {
      FUN_00532960(pbVar5 + 1,bVar1 >> 1);
      pbVar5 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar5;
      goto joined_r0x006145dc;
    }
LAB_006146f0:
    pbVar5 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar5;
    if ((bVar1 & 1) == 0) goto LAB_006146fc;
LAB_0061477c:
    if (*(long *)(pbVar5 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar5 + 0x10));
      pbVar5 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar5;
      goto joined_r0x00614794;
    }
  }
  else {
    if (*(long *)(pbVar5 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar5 + 0x10));
      pbVar5 = *(byte **)(param_1 + 0x10);
      bVar1 = *pbVar5;
      if ((bVar1 & 1) != 0) goto LAB_0061450c;
LAB_00614538:
      sVar9 = (size_t)(bVar1 >> 1);
LAB_0061453c:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_006145f0;
      *param_2 = 10;
      param_2[1] = (char)sVar9;
      pbVar7 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar7 = pbVar5 + 1;
      }
      memcpy(param_2 + 2,pbVar7,sVar9);
      param_2 = param_2 + 2 + sVar9;
    }
LAB_00614580:
    uVar4 = *(uint *)(param_1 + 0x28);
    if (uVar4 == 0) goto LAB_00614654;
LAB_00614588:
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
      if (0x7f < uVar4) goto LAB_00614634;
LAB_006145a4:
      param_2[1] = (char)uVar4;
      param_2 = param_2 + 2;
      uVar4 = *(uint *)(param_1 + 0x2c);
      goto joined_r0x006145b0;
    }
    param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    uVar4 = *(uint *)(param_1 + 0x28);
    *param_2 = 0x10;
    if (uVar4 < 0x80) goto LAB_006145a4;
LAB_00614634:
    param_2[1] = (byte)uVar4 | 0x80;
    if (uVar4 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar4 >> 7);
      param_2 = param_2 + 3;
      goto LAB_00614654;
    }
    uVar6 = (ulong)(long)(int)uVar4 >> 7;
    param_2 = param_2 + 3;
    do {
      puVar2 = param_2;
      uVar3 = uVar6 >> 7;
      puVar2[-1] = (byte)uVar6 | 0x80;
      param_2 = puVar2 + 1;
      uVar8 = uVar6 >> 0xe;
      uVar6 = uVar3;
    } while (uVar8 != 0);
    *puVar2 = (char)uVar3;
    uVar4 = *(uint *)(param_1 + 0x2c);
    if (uVar4 == 0) goto LAB_006145b4;
LAB_0061465c:
    uVar6 = (ulong)uVar4;
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x18;
      if (0x7f < uVar4) goto LAB_00614858;
LAB_00614678:
      param_2[1] = (char)uVar6;
      param_2 = param_2 + 2;
      pbVar5 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar5;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0x2c);
      uVar6 = (ulong)uVar4;
      *param_2 = 0x18;
      if (uVar4 < 0x80) goto LAB_00614678;
LAB_00614858:
      param_2[1] = (byte)uVar6 | 0x80;
      uVar3 = (ulong)(long)(int)uVar6 >> 7;
      if (uVar6 >> 0xe == 0) {
        param_2[2] = (char)uVar3;
        param_2 = param_2 + 3;
        pbVar5 = *(byte **)(param_1 + 0x18);
        bVar1 = *pbVar5;
        goto joined_r0x006145bc;
      }
      param_2 = param_2 + 3;
      do {
        puVar2 = param_2;
        uVar6 = uVar3 >> 7;
        puVar2[-1] = (byte)uVar3 | 0x80;
        param_2 = puVar2 + 1;
        uVar8 = uVar3 >> 0xe;
        uVar3 = uVar6;
      } while (uVar8 != 0);
      *puVar2 = (char)uVar6;
      pbVar5 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar5;
    }
    if ((bVar1 & 1) == 0) goto LAB_006145c0;
LAB_0061468c:
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_006146f0;
    FUN_00532960(*(undefined8 *)(pbVar5 + 0x10));
    pbVar5 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar5;
joined_r0x006145dc:
    if ((bVar1 & 1) == 0) {
      sVar9 = (size_t)(bVar1 >> 1);
LAB_006146ac:
      if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x22;
        param_2[1] = (char)sVar9;
        pbVar7 = *(byte **)(pbVar5 + 0x10);
        if ((*pbVar5 & 1) == 0) {
          pbVar7 = pbVar5 + 1;
        }
        memcpy(param_2 + 2,pbVar7,sVar9);
        param_2 = param_2 + 2 + sVar9;
        goto LAB_006146f0;
      }
    }
    else {
      sVar9 = *(size_t *)(pbVar5 + 8);
      if ((long)sVar9 < 0x80) goto LAB_006146ac;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,4,pbVar5,param_2);
    pbVar5 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar5;
    if ((bVar1 & 1) != 0) goto LAB_0061477c;
LAB_006146fc:
    if (1 < bVar1) {
      FUN_00532960(pbVar5 + 1,bVar1 >> 1);
      pbVar5 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar5;
joined_r0x00614794:
      if ((bVar1 & 1) == 0) {
        sVar9 = (size_t)(bVar1 >> 1);
LAB_0061479c:
        if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x2a;
          param_2[1] = (char)sVar9;
          pbVar7 = *(byte **)(pbVar5 + 0x10);
          if ((*pbVar5 & 1) == 0) {
            pbVar7 = pbVar5 + 1;
          }
          memcpy(param_2 + 2,pbVar7,sVar9);
          param_2 = param_2 + 2 + sVar9;
          goto LAB_006147e0;
        }
      }
      else {
        sVar9 = *(size_t *)(pbVar5 + 8);
        if ((long)sVar9 < 0x80) goto LAB_0061479c;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,5,pbVar5,param_2);
      uVar6 = *(ulong *)(param_1 + 8);
      goto joined_r0x006147e4;
    }
  }
LAB_006147e0:
  uVar6 = *(ulong *)(param_1 + 8);
joined_r0x006147e4:
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      __src = (void *)(uVar6 + 9);
      uVar3 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar6 + 0x10);
      __src = *(void **)(uVar6 + 0x18);
    }
    sVar9 = (size_t)(int)uVar3;
    if (*param_3 - (long)param_2 < (long)sVar9) {
      puVar2 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar9);
    param_2 = param_2 + sVar9;
  }
  return param_2;
}


