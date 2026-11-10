/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023b7cb0; name: FUN_023b7cb0
 */


undefined8
FUN_023b7cb0(undefined8 param_1,code *param_2,ulong param_3,undefined8 param_4,undefined4 *param_5,
            undefined8 *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  long local_28;
  
  FUN_0236cc34(&local_28);
  if (local_28 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)(local_28 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = (*param_2)(*param_5,plVar1,param_4,*param_6);
  }
  FUN_0236c92c(&local_28);
  return uVar2;
}


