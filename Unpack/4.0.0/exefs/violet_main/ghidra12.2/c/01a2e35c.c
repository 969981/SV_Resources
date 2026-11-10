/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2e35c; name: FUN_01a2e35c
 */


void FUN_01a2e35c(char *param_1,code *param_2,ulong param_3,undefined8 *param_4,void *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_738 [1800];
  
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    uVar2 = *param_4;
    memcpy(auStack_738,param_5,0x708);
    (*param_2)(plVar1,uVar2,auStack_738);
  }
  return;
}


