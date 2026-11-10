/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028531f8; name: FUN_028531f8
 */


void FUN_028531f8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_98 [16];
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  char local_68 [66];
  undefined2 local_26;
  undefined2 local_24;
  
  FUN_0195a874(&local_88,param_3);
  FUN_0195a950(local_68,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68[0] == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_02857920(&local_88,*(undefined8 *)(param_2 + 0x68));
    (**(code **)(*local_88 + 0x10))(local_88,local_26);
    (**(code **)(*local_88 + 0x18))(auStack_98,local_88,local_24);
    (**(code **)(*local_88 + 0x88))(local_88,0,10);
    (**(code **)(*local_88 + 0x28))(local_88,1);
    (**(code **)(*local_88 + 0x30))(local_88,1);
    *param_1 = local_88;
    param_1[1] = local_80;
    param_1[2] = uStack_78;
    param_1[3] = local_70;
  }
  return;
}


