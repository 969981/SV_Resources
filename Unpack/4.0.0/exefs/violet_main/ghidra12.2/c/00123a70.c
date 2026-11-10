/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123a70; name: FUN_00123a70
 */


void FUN_00123a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  int local_88;
  undefined1 auStack_74 [68];
  
  local_108 = param_3;
  uStack_100 = param_4;
  local_f8 = param_5;
  uStack_f0 = param_6;
  local_e8 = param_7;
  uStack_e0 = param_8;
  iVar1 = FUN_00125280(param_1,1,&local_b8);
  if (iVar1 != 0) {
    FUN_00125400(param_1,&DAT_03c95da5,&local_b8);
    if (0 < local_88) {
      FUN_01b2cd10(param_1,"%s:%d: ",auStack_74);
      goto LAB_00123b2c;
    }
  }
  FUN_01b2cd10(param_1,&DAT_03c886bc);
LAB_00123b2c:
  uStack_a0 = 0xffffff80ffffffd0;
  local_b8 = (undefined1 *)register0x00000008;
  puStack_b0 = auStack_110 + 0x38;
  local_a8 = auStack_110;
  FUN_001227a0(param_1,param_2,&local_b8);
  FUN_001234b0(param_1,2);
  FUN_00123400(param_1);
  return;
}


