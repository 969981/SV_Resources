/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157dd78; name: FUN_0157dd78
 */


uint FUN_0157dd78(long param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  iVar4 = FUN_0157defc();
  if (((iVar4 == 1) && (iVar4 = FUN_02914cc8(param_1), iVar4 == 0)) &&
     (*(short *)(param_1 + 0xb6) != 0x62)) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar5 = uVar5 & 1;
  }
  else {
    uVar5 = 0;
  }
  uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if (((uVar7 & 1) != 0) &&
     ((sVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), sVar3 == 199
      || (sVar3 == 0xaa)))) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    uVar5 = uVar5 + (uVar6 & 1);
  }
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (((cVar1 != '\0') &&
      (bVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
      5 < bVar2)) &&
     ((cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
      cVar1 != '\x06' &&
      (uVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          0x6abc4e98d224cabd), (uVar7 & 1) != 0)))) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    uVar5 = uVar5 + (uVar6 & 1);
  }
  return uVar5;
}


