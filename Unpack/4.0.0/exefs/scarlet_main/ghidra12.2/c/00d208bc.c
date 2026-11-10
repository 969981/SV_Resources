/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d208bc; name: FUN_00d208bc
 */


void FUN_00d208bc(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    local_60 = (undefined1 *)0x898255d4ad0f6542;
    pcStack_58 = "Physics";
    local_50 = 7;
    local_48 = (long *)0x0;
    uVar2 = FUN_00d209f8(uVar1,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = &DAT_ea8325e5dbb45b47;
    pcStack_58 = "Wind";
    local_50 = 4;
    local_48 = (long *)0x0;
    uVar3 = FUN_00d209f8(uVar1,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = (undefined1 *)0xaa95b52d79d5cd73;
    pcStack_58 = "WindNoise";
    local_50 = 9;
    local_48 = (long *)0x0;
    uVar1 = FUN_00d209f8(uVar1,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    FUN_00d20bf8(param_1,uVar2,uVar3,uVar1,*(undefined8 *)(param_2 + 0x68));
  }
  return;
}


