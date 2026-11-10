/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02851dd8; name: FUN_02851dd8
 */


void FUN_02851dd8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [16];
  char local_c8 [24];
  long *local_b0;
  undefined4 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78 [66];
  undefined2 local_36;
  undefined2 local_34;
  
  FUN_0195a874(local_c8,param_3);
  FUN_0195a950(local_78,local_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_78[0] == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_02856e50(&local_98,*(undefined8 *)(param_2 + 0x68));
    (**(code **)(*local_98 + 0x18))(local_98,local_36);
    (**(code **)(*local_98 + 0x10))(local_c8,local_98,local_34);
    FUN_0195a830(local_c8,param_3);
    if (local_c8[0] != '\0') {
      (**(code **)(*local_98 + 0x80))(auStack_d8,local_98,(ulong)local_c8 | 4,local_a0);
    }
    *param_1 = local_98;
    param_1[1] = local_90;
    param_1[2] = uStack_88;
    param_1[3] = local_80;
  }
  return;
}


