/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b35920; name: FUN_01b35920
 */


void FUN_01b35920(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = FUN_01b35a1c();
  if ((uVar1 & 1) == 0) {
    switch(*param_2) {
    case 0:
    case 1:
      FUN_01b35a70(param_1,*(undefined8 *)(param_2 + 8));
      return;
    case 2:
      local_30 = 0;
      uStack_28 = 0;
      FUN_01b35b9c(&local_30,param_2 + 8);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01b35dfc(param_1,&local_30);
      FUN_01b352b0(&local_30);
      return;
    case 3:
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01b35b9c(param_1,param_2 + 8);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


