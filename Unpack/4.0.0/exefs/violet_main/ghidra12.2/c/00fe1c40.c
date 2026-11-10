/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe1c40; name: FUN_00fe1c40
 */


uint FUN_00fe1c40(uint param_1,char *param_2,char *param_3,int *param_4,int *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (*param_2 == '\0' || *param_3 == '\0') {
    if (*param_3 == '\0' && *param_2 == '\0') goto LAB_00fe1c74;
  }
  else if (*(long *)(param_2 + 8) == *(long *)(param_3 + 8)) goto LAB_00fe1c74;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_1 = 1;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 8) = uVar1;
LAB_00fe1c74:
  if ((((*param_4 != *param_5) || (param_4[1] != param_5[1])) || (param_4[2] != param_5[2])) ||
     (((param_4[3] != param_5[3] || (param_4[4] != param_5[4])) ||
      (uVar4 = param_1, param_4[5] != param_5[5])))) {
    uVar1 = *(undefined8 *)param_5;
    uVar4 = 1;
    uVar3 = *(undefined8 *)(param_5 + 4);
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)(param_4 + 4) = uVar3;
    *(undefined8 *)param_4 = uVar1;
  }
  uVar2 = FUN_00fe1d40(uVar4 & 1,param_6,param_7,param_8,param_9);
  return (param_1 | uVar4 | uVar2) & 1;
}


