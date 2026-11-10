/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031fb3b4; name: FUN_031fb3b4
 */


void FUN_031fb3b4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar3 = FUN_031fdb78();
  if ((int)param_1[1] == iVar3) {
    iVar1 = iVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar3) {
      FUN_031fdccc(param_1,(long)iVar1);
      iVar3 = (int)param_1[1];
    }
    puVar4 = (undefined8 *)(*param_1 + (long)iVar3 * 0x18);
    uVar2 = param_2[1];
    *puVar4 = *param_2;
    puVar4[1] = uVar2;
    puVar4[2] = *param_3;
    *(int *)(param_1 + 1) = iVar1;
  }
  else {
    *(undefined8 *)(*param_1 + (long)iVar3 * 0x18 + 0x10) = *param_3;
  }
  return;
}


