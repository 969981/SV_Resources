/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e4d920; name: FUN_02e4d920
 */


void FUN_02e4d920(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  uint *puVar4;
  undefined4 local_24;
  
  puVar4 = (uint *)*param_3;
  if ((0.0 < (float)puVar4[1]) &&
     (plVar1 = (long *)(*(long *)(*(long *)*param_1 + 0x38) + 0x30),
     uVar2 = (**(code **)(*plVar1 + 0x98))(plVar1,&local_24,param_2,*(long *)*param_1 + 0xa8),
     (uVar2 & 1) != 0)) {
    pcVar3 = *(code **)(PTR_PTR_047e3190 + (ulong)*puVar4 * 0x10);
    uVar2 = *(ulong *)((long)(PTR_PTR_047e3190 + (ulong)*puVar4 * 0x10) + 8);
    if ((uVar2 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)((long)puVar4 + ((long)uVar2 >> 1)));
    }
    (*pcVar3)(*(undefined4 *)param_1[1],local_24);
  }
  return;
}


