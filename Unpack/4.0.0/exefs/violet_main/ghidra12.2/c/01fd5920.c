/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fd5920; name: FUN_01fd5920
 */


bool FUN_01fd5920(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  bool bVar1;
  long local_40 [3];
  long *local_28;
  
  if ((undefined1 *)*param_1 == &DAT_cbf29ce484222645) {
    bVar1 = false;
  }
  else {
    FUN_015a8b44(local_40,*param_4,param_1);
    if (*param_2 == 0x133a8707be4aa423) {
      bVar1 = *param_3 != local_40[0];
    }
    else if (*param_2 == 0x137e8707be8470ef) {
      bVar1 = *param_3 == local_40[0];
    }
    else {
      bVar1 = false;
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return bVar1;
}


