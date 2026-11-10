/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f2b18; name: FUN_005f2b18
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005f2b18(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  long *plStack_f8;
  byte local_f0;
  undefined7 uStack_ef;
  undefined8 local_e0;
  long *plStack_d8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  
  FUN_006c4a3c(param_1,*param_2,0);
  *param_1 = (long)(PTR_DAT_047ceb70 + 0x10);
  lVar1 = *param_2;
  param_1[0x15] = param_2[1];
  param_1[0x14] = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((long)param_1 + 0xb1) = 1;
                    /* try { // try from 005f2b68 to 005f2b73 has its CatchHandler @ 005f2c50 */
  FUN_005f1784(&local_110,param_4);
                    /* try { // try from 005f2b74 to 005f2b7f has its CatchHandler @ 005f2c4c */
  FUN_005f1784(&local_a0,&local_110);
  FUN_005f2e7c(param_1 + 6,&local_a0);
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  }
  if ((local_f0 & 1) != 0) {
    (**(code **)(*plStack_d8 + 0x18))
              (plStack_d8,local_e0,CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe,1);
  }
  if ((local_110 & 1) != 0) {
    (**(code **)(*plStack_f8 + 0x18))
              (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
  }
  return;
}


