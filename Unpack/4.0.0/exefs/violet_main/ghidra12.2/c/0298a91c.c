/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298a91c; name: FUN_0298a91c
 */


undefined8 FUN_0298a91c(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_00cf4838();
  if ((uVar2 & 0xff) != 0) {
    uVar3 = 0;
    do {
      sVar1 = FUN_0196f860(param_1,param_2,uVar3);
      if ((sVar1 == 8) && (sVar1 = FUN_00cf51a8(param_1,param_2,uVar3), sVar1 == 2)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xff) < (uVar2 & 0xff));
  }
  return 0;
}


