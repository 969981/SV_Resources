/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f1224; name: FUN_030f1224
 */


undefined8 FUN_030f1224(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar2 = FUN_030f29ec();
  iVar4 = (int)uVar2;
  if ((int)param_1[1] == iVar4) {
    iVar1 = iVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_030f2b08(param_1,(long)iVar1);
      iVar4 = (int)param_1[1];
    }
    puVar3 = (undefined8 *)(*param_1 + (long)iVar4 * 0xc);
    *puVar3 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *param_3;
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar2;
}


