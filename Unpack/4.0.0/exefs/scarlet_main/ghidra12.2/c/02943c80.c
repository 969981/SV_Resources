/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943c80; name: FUN_02943c80
 */


ulong FUN_02943c80(undefined8 *param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_58 [32];
  long *local_38;
  
  FUN_01247754(auStack_58,*param_1,param_1[1]);
  uVar2 = FUN_01460dbc(auStack_58,&local_38);
  uVar3 = 0;
  while ((uVar2 & 1) != 0) {
    uVar1 = (**(code **)(*local_38 + 0x98))();
    uVar2 = FUN_0128ab58(*(undefined8 *)(param_1[1] + 0x290),param_2,uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = (**(code **)(*local_38 + 0x98))();
      uVar2 = uVar3 & 0xff;
      uVar3 = (ulong)((int)uVar3 + 1);
      *(undefined4 *)(param_3 + uVar2 * 4) = uVar1;
    }
    uVar2 = FUN_01460dbc(auStack_58,&local_38);
  }
  return uVar3;
}


