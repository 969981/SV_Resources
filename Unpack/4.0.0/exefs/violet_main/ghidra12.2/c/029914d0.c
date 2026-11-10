/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029914d0; name: FUN_029914d0
 */


uint FUN_029914d0(long *param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + 0x70);
  uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,lVar5);
  if (*(int *)(lVar5 + 0xb0) == 0) {
    uVar4 = (**(code **)(*param_1 + 0x220))(param_1,0x20);
    if ((((uVar4 & 1) == 0) &&
        (uVar4 = (**(code **)(*param_1 + 0x220))(param_1,0x15), (uVar4 & 1) == 0)) &&
       (uVar4 = FUN_0161bb5c(param_2,0xb7c6a04fb62db9cf,uVar2), (uVar4 & 1) == 0)) {
      sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
      if (((sVar1 == 0x1a) || (uVar4 = (**(code **)(*param_1 + 0x300))(param_1,2), (uVar4 & 1) != 0)
          ) || ((uVar4 = (**(code **)(*param_1 + 0x220))(param_1,0x1f), (uVar4 & 1) != 0 ||
                (uVar4 = (**(code **)(*param_1 + 0x220))(param_1,0x21), (uVar4 & 1) != 0)))) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0161bb5c(param_2,0x4f31616740489b83,uVar2);
        uVar3 = uVar3 ^ 1;
      }
      goto LAB_02991508;
    }
  }
  uVar3 = 1;
LAB_02991508:
  return uVar3 & 1;
}


