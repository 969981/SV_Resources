/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c3bd4; name: FUN_007c3bd4
 */


void FUN_007c3bd4(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_20;
  char *pcStack_18;
  
  *(undefined8 **)PTR_DAT_047d1078 = param_1;
  puVar3 = PTR_DAT_047d1080;
  *(undefined8 *)(PTR_DAT_047d1080 + 8) = 0;
  local_20 = PTR_DAT_047d0878 + 0x10;
  pcStack_18 = "RootHeap";
  uVar4 = FUN_007c0148(*param_1,param_1[1],&local_20,0);
  puVar2 = PTR_DAT_047d0898;
  iVar1 = *(int *)PTR_DAT_047d0898;
  if (iVar1 < *(int *)(PTR_DAT_047d0898 + 4)) {
    *(undefined8 *)(*(long *)(PTR_DAT_047d0898 + 8) + (long)iVar1 * 8) = uVar4;
    *(int *)puVar2 = iVar1 + 1;
  }
  *(undefined **)PTR_DAT_047d0fc0 = puVar3;
  return;
}


