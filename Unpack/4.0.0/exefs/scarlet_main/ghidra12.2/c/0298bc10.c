/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298bc10; name: FUN_0298bc10
 */


void FUN_0298bc10(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  lVar1 = param_3[1];
  uVar4 = (**(code **)(*(long *)*param_3 + 0x220))((long *)*param_3,0x26);
  if (((uVar4 & 1) != 0) && (*(char *)(lVar1 + 8) == '\t')) {
    uVar2 = (**(code **)(*(long *)*param_3 + 0x140))();
    uVar5 = FUN_01633ca0(uVar2,0x19);
    uVar3 = FUN_01869890(uVar5,1);
    FUN_0298bcdc(param_1,*param_3,param_3[1]);
    uVar4 = FUN_0298bd44(param_1,*param_3,uVar3);
    if ((uVar4 & 1) != 0) {
      FUN_0298bd80(param_1,*param_3,uVar3);
      FUN_0298be08(param_1,*param_3);
    }
    *param_2 = 1;
  }
  return;
}


