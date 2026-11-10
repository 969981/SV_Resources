/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0183f034; name: FUN_0183f034
 */


uint FUN_0183f034(long param_1,undefined8 param_2,short *param_3,long *param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290);
  uVar1 = (**(code **)(*param_4 + 0x98))(param_4);
  uVar2 = FUN_010e161c(uVar4,uVar1);
  if (*param_3 == 0xae) {
    if ((char)param_3[5] == '\a') {
      return uVar2;
    }
    if (((char)param_3[5] == '\0') &&
       ((((param_5 & 0xff) == 10 || ((uVar2 & 0xff) == (param_5 & 0xff))) ||
        (uVar3 = FUN_0173f398(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar2,param_5),
        (uVar3 & 1) != 0)))) {
      uVar4 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
      param_5 = FUN_011e21c0(param_2,*(undefined8 *)(param_1 + 0x10),param_4,0xae,uVar4);
    }
  }
  return param_5;
}


