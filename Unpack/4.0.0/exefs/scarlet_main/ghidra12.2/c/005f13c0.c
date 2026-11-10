/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f13c0; name: FUN_005f13c0
 */


void FUN_005f13c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  
  uVar1 = *param_2;
                    /* try { // try from 005f13d8 to 005f13df has its CatchHandler @ 005f1464 */
  FUN_005f1784(&local_90);
  FUN_005f16c0(param_1,uVar1,param_2 + 2,&local_90);
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))
              (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
  }
  if ((local_90 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_78 + 0x18))
            (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  return;
}


