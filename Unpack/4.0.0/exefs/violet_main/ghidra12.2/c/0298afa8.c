/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298afa8; name: FUN_0298afa8
 */


void FUN_0298afa8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_01243d7c(param_3[3]);
  lVar2 = FUN_0168003c(param_3[3]);
  if (lVar2 != 0) {
    do {
      uVar1 = FUN_0298b24c(param_1,*param_3,param_3[1],param_3[2],lVar2);
      uVar3 = FUN_0298b294(param_1,*param_3,param_3[1],param_3[2],lVar2,uVar1 & 1);
      if (((uVar1 & 1) != 0) || ((uVar3 & 1) != 0)) {
        lVar2 = FUN_0149b698(param_1);
        FUN_0167a950(lVar2 + 0x10);
      }
      lVar2 = FUN_0168003c(param_3[3]);
    } while (lVar2 != 0);
  }
  return;
}


