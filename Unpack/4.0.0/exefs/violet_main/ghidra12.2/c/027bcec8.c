/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bcec8; name: FUN_027bcec8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_027bcec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  byte local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  long *plStack_128;
  byte local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  long *plStack_108;
  byte local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  long *plStack_e8;
  byte local_e0;
  undefined7 uStack_df;
  undefined8 local_d0;
  long *plStack_c8;
  byte local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  long *plStack_a8;
  long alStack_90 [4];
  long *local_70;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_50;
  long *plStack_48;
  
  FUN_001fc8c0(&local_60);
  if ((local_60 & 1) == 0) {
    uVar2 = (ulong)&local_60 | 1;
  }
  else {
    uVar2 = local_50;
  }
  FUN_00256780(&local_140,uVar2);
  FUN_001fc9c8(param_1,uVar2,&local_140,param_3,param_4,param_5);
  if (local_70 != (long *)0x0) {
    if (local_70 == alStack_90) {
      pcVar1 = *(code **)(*local_70 + 0x10);
    }
    else {
      pcVar1 = *(code **)(*local_70 + 0x18);
    }
    (*pcVar1)();
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  if ((local_e0 & 1) != 0) {
    (**(code **)(*plStack_c8 + 0x18))
              (plStack_c8,local_d0,CONCAT71(uStack_df,local_e0) & 0xfffffffffffffffe,1);
  }
  if ((local_100 & 1) != 0) {
    (**(code **)(*plStack_e8 + 0x18))
              (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
  }
  if ((local_120 & 1) != 0) {
    (**(code **)(*plStack_108 + 0x18))
              (plStack_108,local_110,CONCAT71(uStack_11f,local_120) & 0xfffffffffffffffe,1);
  }
  if ((local_140 & 1) != 0) {
    (**(code **)(*plStack_128 + 0x18))
              (plStack_128,local_130,CONCAT71(uStack_13f,local_140) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  return;
}


