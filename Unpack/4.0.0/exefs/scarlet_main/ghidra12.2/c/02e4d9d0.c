/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e4d9d0; name: FUN_02e4d9d0
 */


void FUN_02e4d9d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  uint *puVar4;
  undefined4 local_40 [4];
  
  puVar4 = (uint *)*param_3;
  if ((0.0 < (float)puVar4[1]) &&
     (plVar1 = (long *)(*(long *)(*(long *)*param_1 + 0x38) + 0x30),
     uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,local_40,param_2,*(long *)*param_1 + 0xa8),
     (uVar2 & 1) != 0)) {
    pcVar3 = *(code **)(PTR_PTR_047e31a0 + (ulong)*puVar4 * 0x10);
    uVar2 = *(ulong *)((long)(PTR_PTR_047e31a0 + (ulong)*puVar4 * 0x10) + 8);
    if ((uVar2 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)((long)puVar4 + ((long)uVar2 >> 1)));
    }
    (*pcVar3)(*(undefined4 *)param_1[1],local_40[0]);
  }
  return;
}


