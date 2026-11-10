/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f2080; name: FUN_005f2080
 */


void FUN_005f2080(long *param_1,long *param_2)

{
  long *in_x6;
  undefined8 *in_x7;
  long lVar1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  long *plStack_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_40;
  
  FUN_006c4058(param_1,*param_2,0);
  *param_1 = (long)(PTR_DAT_047ceb60 + 0x10);
  lVar1 = *in_x6;
  param_1[0x31] = in_x6[1];
  param_1[0x30] = lVar1;
  lVar1 = *param_2;
  param_1[0x33] = param_2[1];
  param_1[0x32] = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((long)param_1 + 0x1a1) = 1;
  uStack_e8 = in_x7[1];
  local_f0 = *in_x7;
  uStack_d8 = in_x7[3];
  uStack_e0 = in_x7[2];
  uStack_c8 = in_x7[5];
  local_d0 = in_x7[4];
  uStack_b8 = in_x7[7];
  uStack_c0 = in_x7[6];
                    /* try { // try from 005f20f8 to 005f20fb has its CatchHandler @ 005f216c */
  FUN_005f1784(&local_b0,in_x7 + 8);
  local_40 = in_x7[0x16];
  FUN_005f21f4(param_1 + 0x19,&local_f0);
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  if ((local_b0 & 1) != 0) {
    (**(code **)(*plStack_98 + 0x18))
              (plStack_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
  }
  return;
}


