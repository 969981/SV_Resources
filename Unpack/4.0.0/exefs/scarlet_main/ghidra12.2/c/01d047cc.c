/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d047cc; name: FUN_01d047cc
 */


void FUN_01d047cc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  long *plStack_28;
  
  FUN_01d05030(&local_40,param_3,*param_2,param_2[1]);
  FUN_01cfa550(param_1,&local_40);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}


