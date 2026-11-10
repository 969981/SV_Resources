/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049ed2c; name: FUN_0049ed2c
 */


undefined1 * FUN_0049ed2c(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  size_t sVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) goto LAB_0049ede4;
    pbVar4 = pbVar4 + 1;
    uVar3 = (ulong)(bVar1 >> 1);
LAB_0049ed70:
    FUN_005347a4(pbVar4,uVar3,1,"google.protobuf.Any.type_url");
    pbVar4 = *(byte **)(param_1 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      sVar6 = (size_t)(*pbVar4 >> 1);
LAB_0049eda0:
      if ((long)sVar6 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar6;
        pbVar5 = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          pbVar5 = pbVar4 + 1;
        }
        memcpy(param_2 + 2,pbVar5,sVar6);
        param_2 = param_2 + 2 + sVar6;
        goto LAB_0049ede4;
      }
    }
    else {
      sVar6 = *(size_t *)(pbVar4 + 8);
      if ((long)sVar6 < 0x80) goto LAB_0049eda0;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar4,param_2);
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) != 0) goto LAB_0049ee20;
LAB_0049edf0:
    if (1 < bVar1) {
      sVar6 = (size_t)(bVar1 >> 1);
LAB_0049ee30:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar6) {
LAB_0049ee90:
        param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar4,param_2);
        uVar3 = *(ulong *)(param_1 + 8);
        goto joined_r0x0049eea8;
      }
      *param_2 = 0x12;
      param_2[1] = (char)sVar6;
      pbVar5 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        pbVar5 = pbVar4 + 1;
      }
      memcpy(param_2 + 2,pbVar5,sVar6);
      param_2 = param_2 + 2 + sVar6;
    }
  }
  else {
    uVar3 = *(ulong *)(pbVar4 + 8);
    if (uVar3 != 0) {
      pbVar4 = *(byte **)(pbVar4 + 0x10);
      goto LAB_0049ed70;
    }
LAB_0049ede4:
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) goto LAB_0049edf0;
LAB_0049ee20:
    sVar6 = *(size_t *)(pbVar4 + 8);
    if (sVar6 != 0) {
      if ((long)sVar6 < 0x80) goto LAB_0049ee30;
      goto LAB_0049ee90;
    }
  }
  uVar3 = *(ulong *)(param_1 + 8);
joined_r0x0049eea8:
  if ((uVar3 & 1) == 0) {
    return param_2;
  }
  puVar2 = (undefined1 *)FUN_005161f8((uVar3 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar2;
}


