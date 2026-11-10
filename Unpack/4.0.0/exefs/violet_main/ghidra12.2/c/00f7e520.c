/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7e520; name: FUN_00f7e520
 */


undefined4 FUN_00f7e520(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  bVar1 = *param_1;
  uVar5 = FUN_00f7e27c(param_2);
  uVar6 = FUN_00f7d7d8(uVar5,0);
  bVar2 = param_1[1];
  bVar4 = (uVar6 & 1) != 0;
  bVar3 = 0;
  if ((bool)bVar4) {
    bVar3 = bVar1;
  }
  uVar7 = 2;
  if ((bool)bVar4) {
    uVar7 = 0;
  }
  uVar5 = FUN_00f7e27c(2,param_2);
  uVar6 = FUN_00f7d7d8(uVar5,1);
  uVar8 = uVar7;
  if ((uVar6 & 1) != 0) {
    if ((bool)bVar4 && bVar3 <= bVar2) {
      if (bVar3 == bVar2) {
        bVar4 = bVar4 + 1;
      }
      uVar8 = 2;
      if (bVar4 < 2) {
        uVar8 = uVar7;
      }
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}


