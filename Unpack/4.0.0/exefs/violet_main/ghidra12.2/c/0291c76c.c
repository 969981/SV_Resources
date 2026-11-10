/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291c76c; name: FUN_0291c76c
 */


undefined8 FUN_0291c76c(long param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = FUN_0291c4a8(param_1,param_2,0);
  uVar3 = 0;
  if (lVar2 != 0) {
    do {
      uVar1 = FUN_0291c690(*(undefined4 *)(lVar2 + 0x84),3);
      *(undefined4 *)(lVar2 + 0x84) = uVar1;
      uVar4 = (ulong)*(byte *)(param_1 + 0x2420);
      if (uVar4 != 0) {
        uVar5 = 0;
        lVar2 = (lVar2 - param_1) + 0x84;
        do {
          lVar2 = lVar2 + -0x8c;
          if (lVar2 == 0) {
            uVar4 = uVar5 & 0xffffffff;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
      }
      lVar2 = FUN_0291c4a8(param_1,param_2 & 0xffffffff,(int)uVar4 + 1);
    } while (lVar2 != 0);
    uVar3 = 1;
  }
  return uVar3;
}


