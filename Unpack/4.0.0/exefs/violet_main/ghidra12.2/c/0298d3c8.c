/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298d3c8; name: FUN_0298d3c8
 */


void FUN_0298d3c8(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_00f7e27c(param_4);
  uVar3 = FUN_011e2da8(uVar6,param_5);
  *param_2 = 0;
  *param_1 = 0;
  uVar6 = FUN_00f7e27c(param_4);
  cVar1 = FUN_0191f29c(uVar6,param_5);
  uVar6 = FUN_00f7e27c(param_4);
  uVar4 = FUN_0159fe8c(param_3);
  bVar2 = FUN_01242ecc(uVar6,uVar3,uVar4);
  *param_1 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    if ((uVar3 & 0xfe) == 0) goto LAB_0298d478;
  }
  else {
    uVar5 = FUN_0159fe8c(param_3);
    if ((uVar5 & 0xff) == (uVar3 & 0xff)) goto LAB_0298d478;
  }
  *param_2 = 3;
LAB_0298d478:
  bVar2 = *param_2 + cVar1;
  if (4 < bVar2) {
    bVar2 = 5;
  }
  *param_2 = bVar2;
  return;
}


