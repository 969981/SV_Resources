/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00513c04; name: FUN_00513c04
 */


void FUN_00513c04(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_047cdb90;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00264e54(param_1 + 1);
    FUN_0051496c(uVar2,(uVar3 & 0xfffffffffffffffe) + 8);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = lVar4;
  return;
}


