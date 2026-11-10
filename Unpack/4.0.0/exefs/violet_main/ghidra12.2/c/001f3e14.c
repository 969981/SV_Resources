/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3e14; name: FUN_001f3e14
 */


undefined8 FUN_001f3e14(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_001f98fc(param_1,*(undefined4 *)(param_2 + 1),*(undefined4 *)((long)param_2 + 0xc));
  if (iVar1 != 0) {
    uVar2 = FUN_001ee90c(*param_2,*(undefined4 *)(param_1 + 0xb8),3);
    return uVar2;
  }
  if (((*(int *)(param_1 + 0xbc) < 1) || (iVar1 = FUN_001f98e0(param_1), iVar1 == 0)) ||
     (uVar2 = FUN_001f9894(param_1,4), -0x385 < (int)uVar2)) {
    uVar2 = 0;
  }
  return uVar2;
}


