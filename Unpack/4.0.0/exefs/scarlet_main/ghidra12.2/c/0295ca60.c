/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295ca60; name: FUN_0295ca60
 */


void FUN_0295ca60(long param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = FUN_0293d6f0();
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
    cVar1 = FUN_02943aa0(param_1,param_2);
    cVar2 = (**(code **)(*plVar4 + 0x3d0))(plVar4);
    if (cVar1 != cVar2) {
      return;
    }
  }
  FUN_0293d730(param_1,param_3);
  return;
}


