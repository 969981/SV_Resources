/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f9c94; name: FUN_034f9c94
 */


int FUN_034f9c94(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long local_38;
  
  plVar1 = param_1 + 0xd;
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 699) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  puVar4 = PTR_DAT_047e6980;
  do {
    iVar5 = (**(code **)(*(long *)param_1[0xb] + 0x88))
                      ((long *)param_1[0xb],&local_38,plVar1,*puVar4);
    if ((iVar5 != 0x11) && (iVar5 != 0x2d)) {
      if (iVar5 == 0x2e) {
        return 0x3f;
      }
      return 2;
    }
    if (local_38 == 0) {
      return 2;
    }
    iVar5 = (**(code **)(*param_1 + 0x120))(param_1);
  } while (iVar5 == 0x3f);
  if (iVar5 == 1) {
    if ((*(byte *)(param_1[3] + 0x2bd) >> 6 & 1) == 0) {
      iVar6 = (**(code **)(*(long *)param_1[0xb] + 0x78))((long *)param_1[0xb],0);
      iVar7 = *(int *)((long)param_1 + 0x74);
      iVar5 = (**(code **)(*param_1 + 0x130))(param_1,local_38,0);
      uVar3 = (int)param_1[6] - (iVar7 + iVar6);
      param_1[0xc] = param_1[0xc] + (ulong)uVar3;
      *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar3;
      *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar3;
    }
    else {
      iVar5 = FUN_034f988c(param_1);
      iVar7 = (**(code **)(*param_1 + 0x138))(param_1,iVar5,param_1 + 5);
      if (iVar7 == 1) {
        lVar8 = param_1[3];
        *(int *)(lVar8 + 0x2b4) = iVar5 - (int)param_1[5];
        puVar2 = (uint *)(lVar8 + 699);
        iVar5 = 1;
        *puVar2 = *puVar2 & 0xfe3fffff;
      }
      else {
        iVar5 = 2;
      }
      if ((int)*plVar1 != 0) {
        if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
          (**(code **)(*(long *)param_1[0xb] + 0x90))();
        }
        else {
          *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
        }
        *(int *)plVar1 = 0;
      }
    }
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
  }
  return iVar5;
}


