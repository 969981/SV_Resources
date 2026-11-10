/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d927c; name: FUN_004d927c
 */


undefined1 * FUN_004d927c(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *__src;
  size_t __n;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) {
LAB_004d9304:
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0x30);
    if ((*pbVar8 & 1) == 0) {
      __n = (size_t)(*pbVar8 >> 1);
LAB_004d92c0:
      if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)__n;
        __src = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          __src = pbVar8 + 1;
        }
        memcpy(param_2 + 2,__src,__n);
        param_2 = param_2 + 2 + __n;
        goto LAB_004d9304;
      }
    }
    else {
      __n = *(size_t *)(pbVar8 + 8);
      if ((long)__n < 0x80) goto LAB_004d92c0;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    iVar9 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar9 * 8 + 8);
      *param_2 = 0x12;
      uVar3 = *(uint *)(lVar6 + 0x14);
      if (uVar3 < 0x80) {
        param_2[1] = (byte)uVar3;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar3 | 0x80;
        if (uVar3 >> 0xe == 0) {
          param_2[2] = (char)(uVar3 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar3 = uVar3 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar3 >> 7;
            puVar7[-1] = (byte)uVar3 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar3 >> 0xe;
            uVar3 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004da58c(lVar6,param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x38);
    *param_2 = 0x1a;
    uVar1 = *(uint *)(lVar6 + 0x2c);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar7 = param_2;
          uVar3 = uVar1 >> 7;
          puVar7[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_004e0954(lVar6,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined1 *)
           FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar7;
}


