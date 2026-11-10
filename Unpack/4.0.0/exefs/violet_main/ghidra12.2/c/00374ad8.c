/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00374ad8; name: FUN_00374ad8
 */


void FUN_00374ad8(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  *(int *)(param_1 + 1) = (int)uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  puVar1 = PTR_DAT_047ccf40;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00368450(param_1 + 3);
  FUN_00368930(param_2,param_1 + 3);
  return;
}


