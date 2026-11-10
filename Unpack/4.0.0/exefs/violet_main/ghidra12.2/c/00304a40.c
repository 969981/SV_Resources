/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00304a40; name: FUN_00304a40
 */


undefined8
FUN_00304a40(long param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5,
            undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_48;
  
  if ((param_1 == 0) || (param_6 == (undefined8 *)0x0)) {
    if (param_7 == (undefined8 *)0x0) {
      uVar5 = 3;
    }
    else {
      pcVar6 = (char *)FUN_0038c780(0x40);
      *param_7 = pcVar6;
      uVar2 = s_Invalid_nullptr_arguments_to_alt_03c6e8f0._56_8_;
      uVar1 = s_Invalid_nullptr_arguments_to_alt_03c6e8f0._48_8_;
      uVar5 = s_Invalid_nullptr_arguments_to_alt_03c6e8f0._32_8_;
      *(undefined8 *)(pcVar6 + 0x28) = s_Invalid_nullptr_arguments_to_alt_03c6e8f0._40_8_;
      *(undefined8 *)(pcVar6 + 0x20) = uVar5;
      *(undefined8 *)(pcVar6 + 0x38) = uVar2;
      *(undefined8 *)(pcVar6 + 0x30) = uVar1;
      uVar3 = s_Invalid_nullptr_arguments_to_alt_03c6e8f0._24_8_;
      uVar2 = s_Invalid_nullptr_arguments_to_alt_03c6e8f0._16_8_;
      uVar1 = s_Invalid_nullptr_arguments_to_alt_03c6e8f0._0_8_;
      uVar5 = 3;
      *(undefined8 *)(pcVar6 + 8) = s_Invalid_nullptr_arguments_to_alt_03c6e8f0._8_8_;
      *(undefined8 *)pcVar6 = uVar1;
      *(undefined8 *)(pcVar6 + 0x18) = uVar3;
      *(undefined8 *)(pcVar6 + 0x10) = uVar2;
    }
  }
  else {
    __ptr = (undefined8 *)FUN_0038c7b0(0x20);
    local_48 = 0;
    iVar4 = FUN_00302a70(param_1,&local_48,param_7);
    if (((iVar4 == 0) &&
        (iVar4 = FUN_003025c0((param_3 ^ param_5) & 1,local_48,param_2,__ptr,param_7), iVar4 == 0))
       && (uVar5 = FUN_00302ae0(param_1,__ptr + 2,param_7), (int)uVar5 == 0)) {
      __ptr[1] = param_1;
      *(byte *)(__ptr + 3) = param_4 & 1;
      *(byte *)((long)__ptr + 0x19) = param_5 & 1;
      *param_6 = __ptr;
    }
    else {
      FUN_003027f0(*__ptr);
      free(__ptr);
      uVar5 = 9;
    }
  }
  return uVar5;
}


