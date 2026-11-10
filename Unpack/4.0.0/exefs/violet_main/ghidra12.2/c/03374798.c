/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03374798; name: FUN_03374798
 */


void FUN_03374798(long *param_1,undefined8 *param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int local_24;
  
  if (param_3 == -1) {
    puVar3 = PTR_DAT_047e5f40;
  }
  else if (((int)((ulong)(param_5 - param_4) >> 3) <= param_3) ||
          (puVar3 = *(undefined **)(param_4 + (long)param_3 * 8), puVar3 == (undefined *)0x0)) {
    *param_2 = PTR_DAT_047e5f40;
    local_24 = param_3;
    iVar1 = FUN_03375a68(param_1,&local_24);
    if ((int)param_1[1] == iVar1) {
      iVar2 = iVar1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar1) {
        FUN_03375b64(param_1,(long)(iVar1 + 1));
        iVar2 = (int)param_1[1];
      }
      piVar4 = (int *)(*param_1 + (long)iVar2 * 0x18);
      *piVar4 = param_3;
      piVar4[2] = 0;
      piVar4[3] = 0;
      piVar4[4] = 0;
      piVar4[5] = -0x80000000;
      *(int *)(param_1 + 1) = iVar1 + 1;
    }
    lVar6 = *param_1 + (long)iVar1 * 0x18;
    piVar4 = (int *)(lVar6 + 0x10);
    iVar1 = *piVar4;
    lVar5 = (long)iVar1;
    if ((int)(*(uint *)(lVar6 + 0x14) & 0x7fffffff) <= iVar1) {
      FUN_03375da4((long *)(lVar6 + 8),lVar5 + 1);
      iVar1 = *piVar4;
    }
    *(undefined8 **)(*(long *)(lVar6 + 8) + (long)iVar1 * 8) = param_2;
    *piVar4 = (int)(lVar5 + 1);
    return;
  }
  *param_2 = puVar3;
  return;
}


