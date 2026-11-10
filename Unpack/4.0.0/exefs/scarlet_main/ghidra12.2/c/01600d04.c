/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01600d04; name: FUN_01600d04
 */


void FUN_01600d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  long lVar2;
  
  FUN_00dc5c18(param_1 + 0x3e0,0,param_2,0,*(undefined8 *)(param_1 + 0x480));
  FUN_00dc5c18(param_1 + 0x420,0,param_3,0,*(undefined8 *)(param_1 + 0x480));
  if ((*(long *)(param_1 + 1000) == 0) || ((*(byte *)(*(long *)(param_1 + 1000) + 0x1e8) & 1) == 0))
  {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)(**(code **)(**(long **)(param_1 + 1000) + 0x70))();
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  if ((((*(long *)(param_1 + 0x428) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x428) + 0x1e8) & 1) == 0)) ||
      (puVar1 = (uint *)(**(code **)(**(long **)(param_1 + 0x428) + 0x70))(), lVar2 == 0)) ||
     (puVar1 == (uint *)0x0)) {
    return;
  }
  FUN_016113a0(param_1 + 0x188,lVar2,(long)puVar1 + (ulong)*puVar1);
  return;
}


