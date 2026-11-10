/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f21f4; name: FUN_005f21f4
 */


void FUN_005f21f4(undefined8 param_1,undefined8 *param_2)

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
  
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  local_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
                    /* try { // try from 005f2224 to 005f2227 has its CatchHandler @ 005f22ac */
  FUN_005f1784(&local_a0,param_2 + 8);
  local_30 = param_2[0x16];
  FUN_005f254c(param_1,&local_e0);
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


