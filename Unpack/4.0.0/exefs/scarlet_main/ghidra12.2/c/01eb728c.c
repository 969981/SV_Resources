/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb728c; name: FUN_01eb728c
 */


uint FUN_01eb728c(long param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 *local_58 [4];
  undefined2 local_38;
  undefined1 local_36;
  
  plVar2 = *(long **)(param_1 + 0xd0);
  uVar1 = 0;
  if (plVar2 != (long *)0x0) {
    local_38 = param_3;
    local_36 = param_4;
    FUN_016947d8(local_58);
    local_5c = 5;
    if (local_58[0] == (undefined8 *)0x0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      FUN_00e5f2bc(&local_68,&local_5c,local_58[0] + 1);
      FUN_01eb734c(&local_68,&local_38,local_58[0] + 1);
      uVar3 = *local_58[0];
      uVar4 = *(undefined4 *)(local_58[0] + 3);
    }
    local_68 = FUN_00dc05e0(param_2);
    uVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,uVar3,uVar4,&local_68);
    FUN_01694aa8(local_58);
  }
  return uVar1 & 1;
}


