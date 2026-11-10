/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293ef9c; name: FUN_0293ef9c
 */


void FUN_0293ef9c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_58 [4];
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_2 = 0;
  local_50 = *(undefined8 *)(param_3 + 2);
  uStack_48 = *(undefined8 *)(param_3 + 4);
  uVar1 = FUN_01246e90();
  FUN_0293aae8(uVar1,*param_3,param_3[1],*(undefined1 *)(param_3 + 6),&local_50);
  local_58[0] = 0;
  FUN_01582534(param_1);
  uVar1 = FUN_014813ec();
  FUN_02923478(uVar1,local_54,local_58,*(undefined1 *)(param_3 + 6));
  if (local_58[0] != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_01243584(param_1);
      uVar2 = FUN_02987f9c(uVar1,local_54[uVar3],param_3[1],&local_50);
      if ((uVar2 & 1) != 0) {
        uVar1 = FUN_01243584(param_1);
        FUN_02988018(uVar1,local_54[uVar3],param_3[1],&local_50);
        FUN_02988060(param_1,param_3,local_54[uVar3]);
        uVar1 = FUN_01246e90(param_1);
        FUN_0293aec0(uVar1,*param_3,param_3[1],*(undefined1 *)(param_3 + 6),&local_50);
        *param_2 = 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_58[0]);
  }
  return;
}


