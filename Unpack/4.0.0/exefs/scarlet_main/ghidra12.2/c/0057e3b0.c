/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057e3b0; name: FUN_0057e3b0
 */


undefined1 * FUN_0057e3b0(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *__src_00;
  size_t sVar11;
  int iVar12;
  
  pbVar9 = *(byte **)(param_1 + 0x28);
  bVar3 = *pbVar9;
  if ((bVar3 & 1) == 0) {
    if (1 < bVar3) {
      FUN_00532960(pbVar9 + 1,bVar3 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x28);
      bVar3 = *pbVar9;
      if ((bVar3 & 1) != 0) goto LAB_0057e3f8;
LAB_0057e424:
      sVar11 = (size_t)(bVar3 >> 1);
LAB_0057e428:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_0057e524;
      *param_2 = 10;
      param_2[1] = (char)sVar11;
      __src_00 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        __src_00 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,__src_00,sVar11);
      param_2 = param_2 + 2 + sVar11;
    }
  }
  else if (*(long *)(pbVar9 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) == 0) goto LAB_0057e424;
LAB_0057e3f8:
    sVar11 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar11 < 0x80) goto LAB_0057e428;
LAB_0057e524:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
    iVar2 = *(int *)(param_1 + 0x18);
    goto joined_r0x0057e470;
  }
  iVar2 = *(int *)(param_1 + 0x18);
joined_r0x0057e470:
  if (iVar2 != 0) {
    iVar12 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar12 * 8 + 8);
      *param_2 = 0x12;
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
      param_2 = (undefined1 *)FUN_0057fec0(lVar6,param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar8 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar8 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar11 = (size_t)(int)uVar8;
    if (*param_3 - (long)param_2 < (long)sVar11) {
      puVar7 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar8,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,sVar11);
    param_2 = param_2 + sVar11;
  }
  return param_2;
}


