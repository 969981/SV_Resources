/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034fa78c; name: FUN_034fa78c
 */


undefined8 FUN_034fa78c(long *param_1,int param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_1[3] == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined2 *)(param_1[3] + 0x2b8);
    }
    *(undefined2 *)((long)param_1 + 0x54) = uVar5;
    pcVar7 = *(code **)(*param_1 + 0x138);
  }
  else {
    if (param_2 == 2) {
      *(byte *)(param_1 + 4) =
           (byte)(*(uint *)(param_1[3] + 699) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
      goto LAB_034fa8a4;
    }
    if (param_2 != 1) goto LAB_034fa8a4;
    if ((param_3 & 1) != 0) {
      iVar2 = FUN_034f988c(param_1);
      iVar3 = (**(code **)(*param_1 + 0x138))(param_1,iVar2,param_1 + 5);
      if (iVar3 != 1) {
        return 2;
      }
      lVar6 = param_1[3];
      *(int *)(lVar6 + 0x2b4) = iVar2 - (int)param_1[5];
      puVar1 = (uint *)(lVar6 + 699);
      *puVar1 = *puVar1 & 0xfe3fffff;
      goto LAB_034fa8a4;
    }
    iVar2 = (**(code **)(*param_1 + 0x138))(param_1,(int)param_1[5],param_1 + 5);
    if (iVar2 == 1) goto LAB_034fa8a4;
    pcVar7 = *(code **)(*param_1 + 0x138);
  }
  uVar4 = (*pcVar7)(param_1,0,param_1 + 5);
  if ((int)uVar4 != 1) {
    return uVar4;
  }
LAB_034fa8a4:
                    /* WARNING: Could not recover jumptable at 0x034fa8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(long *)param_1[0xb] + 0x68))();
  return uVar4;
}


