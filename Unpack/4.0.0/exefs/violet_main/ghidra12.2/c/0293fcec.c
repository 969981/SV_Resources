/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293fcec; name: FUN_0293fcec
 */


void FUN_0293fcec(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_2 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_44[0] = 0;
  FUN_02983ad4(param_1,&local_40,local_44,*param_3,param_3[2],param_3 + 3,
               *(undefined1 *)(param_3 + 4));
  uVar2 = FUN_01243584(param_1);
  bVar1 = FUN_02983b8c(uVar2,*(undefined1 *)(param_3 + 1),param_3[2],param_3 + 3);
  *param_2 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    uVar2 = FUN_01243584(param_1);
    FUN_02983bf8(uVar2,param_3[2],*(undefined1 *)(param_3 + 1),*param_3,&local_40,local_44[0]);
  }
  return;
}


