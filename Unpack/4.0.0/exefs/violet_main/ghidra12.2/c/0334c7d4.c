/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0334c7d4; name: FUN_0334c7d4
 */


void FUN_0334c7d4(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_033572a8();
  if (*(uint *)(param_1 + 1) == uVar3) {
    iVar2 = uVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar3) {
      FUN_031d33d4(param_1,PTR_PTR_047d1a50,(long)iVar2);
      uVar3 = *(uint *)(param_1 + 1);
    }
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar3 * 0x10);
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *param_3;
    *(int *)(param_1 + 1) = iVar2;
  }
  else {
    *(undefined4 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = *param_3;
  }
  return;
}


