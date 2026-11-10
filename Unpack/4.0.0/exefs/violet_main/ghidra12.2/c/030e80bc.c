/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e80bc; name: FUN_030e80bc
 */


void FUN_030e80bc(undefined8 param_1,long *param_2,long param_3,undefined4 *param_4,
                 undefined4 *param_5,long *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  
  puVar4 = (uint *)(*param_2 + ((param_3 << 0x20) >> 0x1d) + 4);
  uVar1 = *puVar4 - 0x1000000;
  if (uVar1 >> 0x16 != 0) {
    *puVar4 = uVar1;
    return;
  }
  iVar3 = (int)param_6[1];
  lVar5 = (long)iVar3;
  uVar2 = *param_4;
  if ((int)(*(uint *)((long)param_6 + 0xc) & 0x7fffffff) <= iVar3) {
    FUN_030e71f8(param_6,lVar5 + 1);
    iVar3 = (int)param_6[1];
  }
  puVar6 = (undefined1 *)(*param_6 + (long)iVar3 * 0xc);
  *puVar6 = 3;
  *(undefined4 *)(puVar6 + 4) = uVar2;
  *(int *)(param_6 + 1) = (int)(lVar5 + 1);
  local_58[0] = *param_4;
  local_60[0] = *param_5;
  FUN_030e2538(param_1,local_58,local_60,param_6 + 2);
  if ((uint)((ulong)param_3 >> 0x20) <= *(uint *)(param_2 + 3)) {
    lVar5 = param_2[2] + (param_3 >> 0x20) * 8;
    if (*(int *)(lVar5 + 4) == (int)param_3) goto LAB_030e81bc;
  }
  lVar5 = FUN_030e7a5c(param_2,*param_2 + (long)(int)param_3 * 8);
LAB_030e81bc:
  FUN_030e7acc(param_2,lVar5);
  return;
}


