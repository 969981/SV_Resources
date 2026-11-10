/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019079dc; name: FUN_019079dc
 */


void FUN_019079dc(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  
  *param_2 = 0;
  plVar1 = (long *)FUN_014813f4(param_1,*param_3);
  if ((((*(char *)((long)param_3 + 7) != '\0') ||
       (uVar2 = (**(code **)(*plVar1 + 0x200))(plVar1), (uVar2 & 1) == 0)) &&
      (uVar2 = (**(code **)(*plVar1 + 0x5b0))(plVar1), (uVar2 & 1) == 0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1), (uVar2 & 1) != 0)) {
    FUN_01907cc4(param_1,param_3);
    *param_2 = 1;
  }
  return;
}


