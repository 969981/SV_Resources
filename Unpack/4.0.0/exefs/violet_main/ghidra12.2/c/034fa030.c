/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034fa030; name: FUN_034fa030
 */


undefined8 FUN_034fa030(long *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  int local_28 [2];
  
  *param_2 = '\0';
  lVar5 = param_1[3];
  if (((*(byte *)(*(long *)(lVar5 + 0x248) + 0xc) >> 1 & 1) != 0) &&
     ((*(byte *)(lVar5 + 0x2bd) >> 6 & 1) == 0)) {
    lVar6 = *(long *)(lVar5 + 0x2e0);
    iVar2 = *(int *)(lVar5 + 0x2e8);
    *(int *)(param_1 + 0xd) = iVar2;
    if (lVar6 == 0) {
      bVar4 = 0;
      *param_2 = '\0';
    }
    else {
      *param_2 = iVar2 != 0;
      bVar4 = (iVar2 != 0) << 1;
    }
    bVar4 = *(byte *)((long)param_1 + 0x82) & 0xfd | bVar4;
    *(byte *)((long)param_1 + 0x82) = bVar4;
    if (*param_2 != '\0') {
      *(byte *)((long)param_1 + 0x82) = bVar4 | 0x10;
      uVar3 = (**(code **)(*param_1 + 0x120))(param_1,lVar6);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar3 = (**(code **)(*param_1 + 0x130))(param_1,lVar6,1);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      if ((*(byte *)((long)param_1 + 0x82) >> 6 & 1) == 0) {
        lVar5 = param_1[0xd];
        iVar2 = (**(code **)(*(long *)param_1[0xb] + 0x80))
                          ((long *)param_1[0xb],(int)lVar5,0,local_28);
        if (iVar2 != 1) {
          return 2;
        }
        *(int *)(param_1 + 0xe) = local_28[0];
        *(int *)((long)param_1 + 0x74) = (int)lVar5 - local_28[0];
      }
      uVar1 = *(uint *)(param_1 + 6);
      param_1[0xc] = param_1[0xc] + (ulong)uVar1;
      *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar1;
      *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar1;
    }
  }
  return 1;
}


