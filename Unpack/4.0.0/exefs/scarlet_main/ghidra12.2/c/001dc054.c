/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dc054; name: FUN_001dc054
 */


undefined4 FUN_001dc054(long *param_1,int param_2,void *param_3,ulong param_4,size_t *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  undefined4 local_44;
  
  local_44 = 0x38;
  lVar8 = *param_1;
  uVar4 = FUN_001cf51c(*(undefined8 *)(lVar8 + 0xd8),1);
  if ((uVar4 & 1) == 0) {
    iVar1 = *(int *)((long)param_1 + 0x25c);
    *param_5 = 0;
    uVar4 = (ulong)(iVar1 == param_2);
  }
  else {
    iVar1 = *(int *)((long)param_1 + 0x25c);
    iVar2 = *(int *)param_1[0xcc];
    *param_5 = 0;
    uVar4 = (ulong)(iVar1 == param_2);
    if (iVar2 == 1) {
      sVar7 = param_1[0x9f] - param_1[0x9e];
      if (param_4 <= sVar7) {
        sVar7 = param_4;
      }
      if (sVar7 != 0) {
        memcpy(param_3,(void *)(param_1[0x9d] + param_1[0x9e]),sVar7);
        param_1[0x9e] = param_1[0x9e] + sVar7;
        *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xffbfffff;
        *param_5 = sVar7;
        return 0;
      }
      if (0x3fff < param_4) {
        param_4 = 0x4000;
      }
      bVar3 = true;
      pvVar5 = (void *)param_1[0x9d];
      goto LAB_001dc130;
    }
  }
  uVar6 = *(ulong *)(lVar8 + 0xc10);
  bVar3 = false;
  if (uVar6 <= param_4) {
    param_4 = uVar6;
  }
  pvVar5 = param_3;
LAB_001dc130:
  sVar7 = (*(code *)param_1[uVar4 + 0x4e])(param_1,uVar4,pvVar5,param_4,&local_44);
  if (-1 < (long)sVar7) {
    if (bVar3) {
      memcpy(param_3,(void *)param_1[0x9d],sVar7);
      param_1[0x9f] = sVar7;
      param_1[0x9e] = sVar7;
    }
    local_44 = 0;
    *param_5 = *param_5 + sVar7;
  }
  return local_44;
}


