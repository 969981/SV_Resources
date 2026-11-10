/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143ba0c; name: FUN_0143ba0c
 */


void FUN_0143ba0c(long param_1,uint param_2,undefined8 param_3)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  
  uVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (uVar1 < 0x378) {
    if (uVar1 == 0x286) {
      FUN_021f7974(param_1,param_2,param_3);
    }
    else if (((uVar1 == 800) &&
             (sVar2 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70)), (param_2 & 0xffff) == 0)) &&
            (sVar2 == 800)) {
      sVar2 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
      if (sVar2 == 1) {
        lVar3 = 0;
      }
      else {
        sVar2 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
        if (sVar2 != 2) goto LAB_0143bb00;
        lVar3 = 1;
      }
      FUN_021f7f0c(param_1,(&DAT_03cb2720)[lVar3],param_3);
    }
  }
  else if (uVar1 == 0x378) {
    FUN_021f7dec(param_1,param_2,param_3);
  }
  else if (uVar1 == 0x379) {
    FUN_021f7e7c(param_1,param_2,param_3);
  }
LAB_0143bb00:
  FUN_021f31d0(param_1);
  FUN_020e7f54(param_1);
  return;
}


