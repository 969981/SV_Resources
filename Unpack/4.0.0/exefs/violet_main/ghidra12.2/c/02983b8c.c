/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02983b8c; name: FUN_02983b8c
 */


undefined8 FUN_02983b8c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_015d9a7c(*(undefined8 *)(param_1 + 0x10));
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_0298da98(lVar1,param_4);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x46,param_3,param_2,*param_4);
      uVar3 = 1;
    }
  }
  return uVar3;
}


