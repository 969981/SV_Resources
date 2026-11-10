/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052ed90; name: FUN_0052ed90
 */


undefined8 FUN_0052ed90(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  bVar3 = *param_2;
  if (-1 < (char)bVar3) {
    uVar4 = FUN_00530938(param_3,param_2 + 1,(uint)bVar3,param_1);
    return uVar4;
  }
  bVar2 = param_2[1];
  iVar5 = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
  if ((char)bVar2 < '\0') {
    iVar5 = iVar5 + (uint)param_2[2] * 0x4000 + -0x4000;
    if ((char)param_2[2] < '\0') {
      iVar5 = iVar5 + (uint)param_2[3] * 0x200000 + -0x200000;
      if ((char)param_2[3] < '\0') {
        if ((param_2[4] < 8) &&
           (uVar1 = iVar5 + (uint)param_2[4] * 0x10000000 + 0xf0000000, uVar1 < 0x7ffffff0)) {
          uVar4 = FUN_00530938(param_3,param_2 + 5,uVar1,param_1);
          return uVar4;
        }
        return 0;
      }
      lVar6 = 3;
    }
    else {
      lVar6 = 2;
    }
  }
  else {
    lVar6 = 1;
  }
  uVar4 = FUN_00530938(param_3,param_2 + lVar6 + 1,iVar5,param_1);
  return uVar4;
}


