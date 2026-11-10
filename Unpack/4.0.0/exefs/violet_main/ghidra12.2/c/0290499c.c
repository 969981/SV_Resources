/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290499c; name: FUN_0290499c
 */


undefined2 FUN_0290499c(long param_1,int param_2)

{
  undefined2 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30));
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = FUN_029049e8(*(undefined8 *)(param_1 + 0x50),lVar2,1);
    }
  }
  return uVar1;
}


