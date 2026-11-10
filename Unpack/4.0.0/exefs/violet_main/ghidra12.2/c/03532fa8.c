/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03532fa8; name: FUN_03532fa8
 */


void FUN_03532fa8(undefined8 param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_2 + 9) = (int)param_2[9] + 1;
  if ((*(byte *)((long)param_2 + 0x5a) >> 1 & 1) != 0) {
    if (*(int *)((long)param_2 + 0x54) != -1) {
      param_4 = *(int *)((long)param_2 + 0x54);
    }
  }
  FUN_035330c4(param_2,param_3,param_4);
  if (param_2[6] != 0) {
    iVar1 = *(int *)(*(long *)(param_2[0xf] + 0x130) + 4);
    lVar2 = param_2[6];
    do {
      lVar3 = *(long *)(lVar2 + 8);
      if ((*(byte *)(lVar2 + 0x5a) & 3) != 0 && (*(byte *)(lVar2 + 0x5a) & 0x10) == 0) {
        FUN_035376b8(param_1,lVar2,iVar1 + param_3,param_4);
      }
      lVar2 = lVar3;
    } while (lVar3 != 0);
  }
  iVar1 = (int)param_2[9] + -1;
  *(int *)(param_2 + 9) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (param_2[2] == 0) {
    FUN_03518540(param_2);
  }
  else {
    FUN_0351c44c(param_2[2],param_2);
    param_2[2] = 0;
  }
  (**(code **)(*param_2 + 0x50))(param_2);
                    /* WARNING: Could not recover jumptable at 0x035330c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_2);
  return;
}


