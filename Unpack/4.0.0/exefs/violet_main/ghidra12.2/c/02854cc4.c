/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02854cc4; name: FUN_02854cc4
 */


void FUN_02854cc4(undefined8 *param_1,long param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  long *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = FUN_0278dcb0(param_3);
  if (lVar1 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_02857c50(&local_50,*(undefined8 *)(param_2 + 0x68));
    uVar2 = FUN_0278dcb0(param_3);
    (**(code **)(*local_50 + 0x18))(local_50,uVar2);
    if (*param_4 != '\0') {
      (**(code **)(*local_50 + 0x28))
                (auStack_60,local_50,param_4 + 4,*(undefined4 *)(param_4 + 0x28));
    }
    *param_1 = local_50;
    param_1[1] = local_48;
    param_1[2] = uStack_40;
    param_1[3] = local_38;
  }
  return;
}


