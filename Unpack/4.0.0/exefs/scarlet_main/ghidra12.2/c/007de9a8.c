/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007de9a8; name: FUN_007de9a8
 */


void FUN_007de9a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    lVar1 = FUN_0078fac8(param_1 + 0xc0);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 - *(int *)(param_1 + 0xd4);
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_0078f9e0(param_1 + 0xa8,param_1 + 0xa8,lVar1);
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    plVar2 = (long *)FUN_0079365c();
    lVar3 = *plVar2;
    local_28 = 0;
    FUN_007935cc(&local_28);
    *(long *)(lVar1 + 0x18) = local_28 + lVar3 * 10000;
  }
  return;
}


