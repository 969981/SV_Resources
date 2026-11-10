/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e310; name: FUN_0297e310
 */


void FUN_0297e310(long param_1,long *param_2)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *local_30;
  undefined1 auStack_28 [8];
  
  sVar1 = (**(code **)(*param_2 + 0xf0))(param_2);
  if ((sVar1 == 0x100) || (uVar2 = (**(code **)(*param_2 + 0x438))(param_2), (uVar2 & 1) == 0)) {
    local_30 = param_2;
    uVar3 = FUN_0297e380(*(undefined8 *)(param_1 + 0x78));
    FUN_0297e388(uVar3,auStack_28,&local_30);
  }
  return;
}


