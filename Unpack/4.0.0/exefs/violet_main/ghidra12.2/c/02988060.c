/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02988060; name: FUN_02988060
 */


void FUN_02988060(undefined8 param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  
  if (*(short *)((long)param_2 + 0x1a) != 0x9c) {
    uVar1 = FUN_018d31e0(param_1,*param_2);
    FUN_01582534(param_1);
    uVar3 = FUN_014813ec();
    uVar2 = FUN_029230f4(uVar3,param_3,0);
    uVar3 = FUN_01243584(param_1);
    FUN_02988154(uVar3,uVar1,uVar2,*(undefined2 *)((long)param_2 + 0x1a));
  }
  if (*(char *)(param_2 + 7) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_018ce0e4(uVar3,*param_2);
  }
  FUN_029800b8(auStack_68,param_2 + 8);
  if (*(char *)(param_2 + 0x11) != '\0') {
    FUN_02988170(auStack_68,0,param_3 & 0xff);
  }
  uVar3 = FUN_01243584(param_1);
  FUN_0124b0ac(uVar3,*param_2,auStack_68);
  if (*(char *)(param_2 + 7) != '\0') {
    uVar3 = FUN_01243584(param_1);
    FUN_018ce27c(uVar3,*param_2);
  }
  return;
}


