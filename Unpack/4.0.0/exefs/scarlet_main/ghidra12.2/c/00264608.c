/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00264608; name: FUN_00264608
 */


undefined1 * FUN_00264608(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *__src;
  ulong uVar11;
  size_t __n;
  int iVar12;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 == 0) {
LAB_002646a4:
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar3 = *pbVar9;
joined_r0x002646ac:
    if ((bVar3 & 1) == 0) goto LAB_002646b0;
LAB_002646f4:
    uVar8 = *(ulong *)(pbVar9 + 8);
    if (uVar8 != 0) {
      pbVar9 = *(byte **)(pbVar9 + 0x10);
      goto LAB_00264700;
    }
  }
  else {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 8;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x30);
      *param_2 = 8;
    }
    if (0x7f < uVar1) {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
        param_2 = param_2 + 3;
        goto LAB_002646a4;
      }
      uVar8 = (ulong)(long)(int)uVar1 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar7 = param_2;
        uVar10 = uVar8 >> 7;
        puVar7[-1] = (byte)uVar8 | 0x80;
        param_2 = puVar7 + 1;
        uVar11 = uVar8 >> 0xe;
        uVar8 = uVar10;
      } while (uVar11 != 0);
      *puVar7 = (char)uVar10;
      pbVar9 = *(byte **)(param_1 + 0x28);
      bVar3 = *pbVar9;
      goto joined_r0x002646ac;
    }
    param_2[1] = (byte)uVar1;
    param_2 = param_2 + 2;
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) != 0) goto LAB_002646f4;
LAB_002646b0:
    if (1 < bVar3) {
      pbVar9 = pbVar9 + 1;
      uVar8 = (ulong)(bVar3 >> 1);
LAB_00264700:
      FUN_005347a4(pbVar9,uVar8,1,"google.rpc.Status.message");
      pbVar9 = *(byte **)(param_1 + 0x28);
      if ((*pbVar9 & 1) == 0) {
        __n = (size_t)(*pbVar9 >> 1);
LAB_00264730:
        if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x12;
          param_2[1] = (char)__n;
          __src = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            __src = pbVar9 + 1;
          }
          memcpy(param_2 + 2,__src,__n);
          param_2 = param_2 + 2 + __n;
          goto LAB_00264774;
        }
      }
      else {
        __n = *(size_t *)(pbVar9 + 8);
        if ((long)__n < 0x80) goto LAB_00264730;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar9,param_2);
      iVar2 = *(int *)(param_1 + 0x18);
      goto joined_r0x00264844;
    }
  }
LAB_00264774:
  iVar2 = *(int *)(param_1 + 0x18);
joined_r0x00264844:
  if (iVar2 != 0) {
    iVar12 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar12 * 8 + 8);
      *param_2 = 0x1a;
      uVar1 = *(uint *)(lVar6 + 0x20);
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
            uVar4 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar1 >> 0xe;
            uVar1 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_0049ed2c(lVar6,param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined1 *)
           FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar7;
}


