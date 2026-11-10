/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e51a0; name: FUN_027e51a0
 */


void FUN_027e51a0(undefined8 *param_1,long param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_70 [16];
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar1 = FUN_0278dcb0(param_3);
  if (lVar1 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    auVar3 = FUN_0195a820();
    FUN_027e8780(&local_60,*(undefined8 *)(param_2 + 8));
    uVar2 = FUN_0278dcb0(param_3);
    (**(code **)(*local_60 + 0x18))(local_60,uVar2);
    FUN_027e88a4(auStack_70,local_60,auVar3._0_8_,auVar3._8_8_ & 0xffffffff);
    if (*param_4 != '\0') {
      (**(code **)(*local_60 + 0x28))
                (auStack_70,local_60,param_4 + 4,*(undefined4 *)(param_4 + 0x28));
    }
    *param_1 = local_60;
    param_1[1] = local_58;
    param_1[2] = uStack_50;
    param_1[3] = local_48;
  }
  return;
}


