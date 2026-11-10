/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013c050; name: FUN_0013c050
 */


void FUN_0013c050(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x60);
  lVar2 = FUN_00129fd0(param_1,0x14,param_2 + 0x19);
  *(undefined4 *)(lVar2 + 0xc) = uVar1;
  *(undefined1 *)(lVar2 + 10) = 0;
  *(undefined1 *)(lVar2 + param_2 + 0x18) = 0;
  *(long *)(lVar2 + 0x10) = param_2;
  return;
}


