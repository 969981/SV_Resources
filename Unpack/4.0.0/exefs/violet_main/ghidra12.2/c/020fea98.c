/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fea98; name: FUN_020fea98
 */


uint FUN_020fea98(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  bVar2 = (**(code **)(*param_2 + 0x708))(param_2);
  if (bVar2 == 0) {
    uVar9 = 0;
    uVar6 = 4;
  }
  else {
    uVar8 = 0;
    uVar9 = (ulong)bVar2;
    uVar6 = 4;
    do {
      sVar3 = (**(code **)(*param_2 + 0x690))(param_2,uVar8 & 0xffffffff);
      if (sVar3 == 0) {
        bVar1 = false;
      }
      else {
        uVar4 = (**(code **)(*param_2 + 0x730))(param_2,uVar8 & 0xffffffff);
        iVar5 = FUN_0161b654(param_2,uVar4,*(undefined8 *)(param_1 + 0x48),
                             *(undefined8 *)(param_1 + 0x50));
        bVar1 = iVar5 == 0;
        uVar7 = (uint)uVar8;
        if (!bVar1) {
          uVar7 = 4;
        }
        if ((uVar6 & 0xff) != 4) {
          uVar7 = uVar6;
        }
        uVar6 = uVar7;
      }
      *(bool *)(param_3 + uVar8) = bVar1;
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
    if (3 < bVar2) {
      return uVar6;
    }
  }
  memset((void *)(param_3 + uVar9),0,(ulong)(byte)(3 - bVar2) + 1);
  return uVar6;
}


