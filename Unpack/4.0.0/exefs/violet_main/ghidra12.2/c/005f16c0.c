/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f16c0; name: FUN_005f16c0
 */


void FUN_005f16c0(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_30;
  
  uStack_d8 = param_3[1];
  local_e0 = *param_3;
  uStack_c8 = param_3[3];
  uStack_d0 = param_3[2];
  uStack_b8 = param_3[5];
  local_c0 = param_3[4];
  uStack_a8 = param_3[7];
  uStack_b0 = param_3[6];
                    /* try { // try from 005f16ec to 005f16f3 has its CatchHandler @ 005f1780 */
  FUN_005f1784(&local_a0,param_4);
  local_30 = *(undefined8 *)(param_2 + 0x240);
  FUN_005f1910(param_1,&local_e0,local_30,0x10000,*(undefined8 *)(param_2 + 0x4b8));
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_88 + 0x18))
            (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  return;
}


