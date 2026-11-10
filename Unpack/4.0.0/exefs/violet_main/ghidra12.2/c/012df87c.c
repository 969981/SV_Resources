/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012df87c; name: FUN_012df87c
 */


undefined8 FUN_012df87c(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  iVar2 = FUN_0133ae28(param_1 + 0x40,0,param_2,0x10);
  if (iVar2 < 0) {
    uVar3 = 0x80040200;
  }
  else {
    FUN_01339e74(param_1 + 0x18,param_1,uVar1);
    uVar3 = 0;
  }
  return uVar3;
}


