/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00164100; name: FUN_00164100
 */


void FUN_00164100(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  FUN_00163de0();
  *(long *)(param_1 + 0x38) = param_3;
  *(long *)(param_1 + 0x40) = param_3;
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (param_2[2] != 0) {
      uVar4 = *(undefined8 *)(*(long *)(*param_2 + param_2[2] * 8 + -8) + 0x38);
    }
  }
  lVar5 = 0;
  lVar6 = 0;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  lVar2 = param_1 + 0xd0;
  do {
    *(undefined8 *)(lVar2 + lVar6 * 8) = 0;
    uVar3 = FUN_00163f90(param_1,param_3 + lVar6,param_4,lVar2 + lVar5);
    lVar1 = lVar6 * 4;
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 8;
    *(undefined4 *)(lVar2 + lVar1 + -0x80) = uVar3;
  } while (lVar6 != 0x20);
  return;
}


