/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ea2bc4; name: FUN_02ea2bc4
 */


void FUN_02ea2bc4(long param_1,long *param_2,long param_3,undefined8 *param_4,long param_5,
                 undefined2 *param_6,undefined8 *param_7,undefined8 param_8,byte param_9,
                 undefined8 param_10)

{
  long *plVar1;
  ulong uVar2;
  undefined2 local_d0 [2];
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  undefined2 local_98 [2];
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  *param_2 = param_1;
  plVar1 = *(long **)(param_3 + 8);
  if (plVar1 != (long *)0x0) {
    local_98[0] = *(undefined2 *)(param_3 + 0x10);
    local_94 = *(undefined8 *)(param_3 + 0x14);
    local_8c = *(undefined4 *)(param_3 + 0x1c);
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = param_4[2];
    local_70 = *(undefined4 *)(param_4 + 3);
    local_68 = *(undefined8 *)(param_3 + 0x38);
    local_d0[0] = *param_6;
    local_cc = *(undefined8 *)(param_6 + 2);
    local_c4 = *(undefined4 *)(param_6 + 6);
    local_c0 = *param_7;
    uStack_b8 = param_7[1];
    local_b0 = param_7[2];
    local_a8 = *(undefined4 *)(param_7 + 3);
    local_a0 = param_5;
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,5,~param_9 & 1,local_98,local_d0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  (**(code **)(param_1 + (ulong)*(byte *)(*(long *)(param_3 + 0x38) + 0x18) * 0xf8 +
               (ulong)*(byte *)(param_5 + 0x18) * 8 + 0xa0))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9 & 1,param_10);
  return;
}


