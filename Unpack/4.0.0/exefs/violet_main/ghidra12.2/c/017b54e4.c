/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b54e4; name: FUN_017b54e4
 */


ulong FUN_017b54e4(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined2 local_18;
  undefined1 local_16;
  
  if (*param_1 == 0) {
    FUN_017b54d8(&local_18);
  }
  else {
    plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    puVar2 = (undefined2 *)(*param_2)(plVar1,*param_4);
    local_16 = *(undefined1 *)(puVar2 + 1);
    local_18 = *puVar2;
  }
  return (ulong)CONCAT12(local_16,local_18);
}


