/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c2998; name: FUN_031c2998
 */


void FUN_031c2998(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (5 < (int)param_3) {
                    /* WARNING: Could not recover jumptable at 0x031c29dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_2,param_3);
    return;
  }
  iVar4 = *(int *)(param_1 + 0xb);
  if (*(int *)((long)param_1 + 0x5c) <= (int)(iVar4 + param_3)) {
    iVar2 = iVar4;
    if (5 < iVar4) {
      iVar2 = 6;
    }
    iVar4 = iVar4 - iVar2;
    (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_1[1] + (long)iVar4 * 8);
    *(int *)(param_1 + 0xb) = iVar4;
  }
  if (0 < (int)param_3) {
    if (param_3 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        puVar1 = (undefined8 *)(param_2 + uVar3 * 8);
        iVar2 = (int)uVar3;
        *(undefined8 *)(param_1[1] + (long)(iVar2 + iVar4) * 8) = *puVar1;
        uVar3 = uVar3 + 2;
        *(undefined8 *)(param_1[1] + (long)(iVar2 + *(int *)(param_1 + 0xb) + 1) * 8) = puVar1[1];
        iVar4 = *(int *)(param_1 + 0xb);
      } while (((ulong)param_3 & 0xfffffffe) != uVar3);
    }
    if ((param_3 & 1) != 0) {
      *(undefined8 *)(param_1[1] + (long)(iVar4 + (int)uVar3) * 8) =
           *(undefined8 *)(param_2 + uVar3 * 8);
      iVar4 = *(int *)(param_1 + 0xb);
    }
  }
  iVar2 = *(int *)((long)param_1 + 0x5c);
  iVar4 = iVar4 + param_3;
  *(int *)(param_1 + 0xb) = iVar4;
  if (iVar2 < iVar4) {
    (**(code **)(*(long *)*param_1 + 0x28))
              ((long *)*param_1,param_1[1] + (long)iVar2 * 8,iVar4 - iVar2);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
  }
  return;
}


