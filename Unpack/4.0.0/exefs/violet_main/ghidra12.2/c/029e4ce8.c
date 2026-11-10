/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e4ce8; name: FUN_029e4ce8
 */


void FUN_029e4ce8(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  puVar2 = (undefined4 *)FUN_00c42268(*param_2 + 0x160,param_1);
  *puVar2 = uVar1;
  return;
}


