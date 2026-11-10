/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071d998; name: FUN_0071d998
 */


undefined1 * FUN_0071d998(long *param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  size_t sVar5;
  
  pbVar2 = (byte *)(**(code **)(*param_1 + 0x70))();
  if (param_2 < (undefined1 *)*param_3) {
    bVar1 = *pbVar2;
    if ((bVar1 & 1) == 0) goto LAB_0071d9d8;
LAB_0071d9f8:
    sVar5 = *(size_t *)(pbVar2 + 8);
    if ((long)sVar5 < 0x80) goto LAB_0071da04;
LAB_0071da78:
    puVar3 = (undefined1 *)FUN_0052cbdc(param_3,1,pbVar2,param_2);
  }
  else {
    param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    bVar1 = *pbVar2;
    if ((bVar1 & 1) != 0) goto LAB_0071d9f8;
LAB_0071d9d8:
    sVar5 = (size_t)(bVar1 >> 1);
LAB_0071da04:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar5) goto LAB_0071da78;
    *param_2 = 10;
    param_2[1] = (char)sVar5;
    pbVar4 = *(byte **)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      pbVar4 = pbVar2 + 1;
    }
    memcpy(param_2 + 2,pbVar4,sVar5);
    puVar3 = param_2 + 2 + sVar5;
  }
  pbVar2 = (byte *)(**(code **)(*param_1 + 0x78))(param_1);
  if (puVar3 < (undefined1 *)*param_3) {
    bVar1 = *pbVar2;
    if ((bVar1 & 1) == 0) goto LAB_0071da70;
LAB_0071daac:
    sVar5 = *(size_t *)(pbVar2 + 8);
    if (0x7f < (long)sVar5) goto LAB_0071db10;
  }
  else {
    puVar3 = (undefined1 *)FUN_0052c6d8(param_3,puVar3);
    bVar1 = *pbVar2;
    if ((bVar1 & 1) != 0) goto LAB_0071daac;
LAB_0071da70:
    sVar5 = (size_t)(bVar1 >> 1);
  }
  if ((long)sVar5 <= (*param_3 - (long)puVar3) + 0xe) {
    *puVar3 = 0x12;
    puVar3[1] = (char)sVar5;
    pbVar4 = *(byte **)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      pbVar4 = pbVar2 + 1;
    }
    memcpy(puVar3 + 2,pbVar4,sVar5);
    return puVar3 + 2 + sVar5;
  }
LAB_0071db10:
  puVar3 = (undefined1 *)FUN_0052cbdc(param_3,2,pbVar2,puVar3);
  return puVar3;
}


