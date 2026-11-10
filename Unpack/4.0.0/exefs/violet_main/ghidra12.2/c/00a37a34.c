/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a37a34; name: FUN_00a37a34
 */


void FUN_00a37a34(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_4 + 0x40);
  lVar2 = lVar1 + (long)param_5 * 0x44;
  *(undefined4 *)(lVar2 + 0xd0) = param_1;
  *(undefined4 *)(lVar2 + 0xd4) = param_2;
  *(undefined4 *)(lVar2 + 0xd8) = param_3;
  *(undefined1 *)(lVar1 + 0x1b0) = 1;
  return;
}


