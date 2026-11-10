/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004da58c; name: FUN_004da58c
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_004da58c(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar8 = *(byte **)(param_1 + 0x18);
    if ((*pbVar8 & 1) == 0) {
      sVar11 = (size_t)(*pbVar8 >> 1);
LAB_004da5fc:
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar11;
        pbVar10 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar10 = pbVar8 + 1;
        }
        memcpy(param_2 + 2,pbVar10,sVar11);
        param_2 = param_2 + 2 + sVar11;
        goto joined_r0x004da640;
      }
    }
    else {
      sVar11 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar11 < 0x80) goto LAB_004da5fc;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1);
  }
joined_r0x004da640:
  if ((uVar1 >> 1 & 1) != 0) {
    pbVar8 = *(byte **)(param_1 + 0x20);
    if ((*pbVar8 & 1) == 0) {
      sVar11 = (size_t)(*pbVar8 >> 1);
LAB_004da664:
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        *(char *)((long)param_2 + 1) = (char)sVar11;
        pbVar10 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar10 = pbVar8 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 2),pbVar10,sVar11);
        param_2 = (undefined1 *)((long)param_2 + 2) + sVar11;
        goto joined_r0x004da82c;
      }
    }
    else {
      sVar11 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar11 < 0x80) goto LAB_004da664;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2);
  }
joined_r0x004da82c:
  if ((uVar1 >> 2 & 1) == 0) goto joined_r0x004da844;
  pbVar8 = *(byte **)(param_1 + 0x28);
  if ((*pbVar8 & 1) == 0) {
    sVar11 = (size_t)(*pbVar8 >> 1);
LAB_004da6cc:
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x1a;
      param_2[1] = (char)sVar11;
      pbVar10 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar10 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar10,sVar11);
      param_2 = param_2 + 2 + sVar11;
      goto joined_r0x004da844;
    }
  }
  else {
    sVar11 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar11 < 0x80) goto LAB_004da6cc;
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,3);
joined_r0x004da844:
  if ((uVar1 >> 3 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x30);
    *param_2 = 0x22;
    uVar2 = *(uint *)(lVar6 + 0x2c);
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      if (uVar2 >> 0xe == 0) {
        param_2[2] = (char)(uVar2 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar2 = uVar2 >> 7;
        do {
          puVar7 = param_2;
          uVar4 = uVar2 >> 7;
          puVar7[-1] = (byte)uVar2 | 0x80;
          param_2 = puVar7 + 1;
          uVar5 = uVar2 >> 0xe;
          uVar2 = uVar4;
        } while (uVar5 != 0);
        *puVar7 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_004e1328(lVar6,param_2,param_3);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x38);
    *param_2 = 0x28;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 5 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x39);
    *param_2 = 0x30;
    param_2[1] = uVar3;
    param_2 = param_2 + 2;
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if ((uVar9 & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined1 *)FUN_005161f8((uVar9 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar7;
}


