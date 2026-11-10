/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dab388; name: FUN_00dab388
 */


undefined8 FUN_00dab388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_830 [2048];
  
  pvVar1 = memset(auStack_830,0,0x800);
  uVar2 = FUN_01f8bd00(param_1,param_2,pvVar1,auStack_830,0x20,param_4);
  if (0x1f < uVar2) {
    uVar2 = 0x20;
  }
  uVar3 = FUN_01f8bc80(param_3,auStack_830,uVar2);
  FUN_01091980(auStack_830);
  return uVar3;
}


