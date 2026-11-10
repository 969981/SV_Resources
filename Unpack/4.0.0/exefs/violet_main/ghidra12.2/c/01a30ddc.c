/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a30ddc; name: FUN_01a30ddc
 */


void FUN_01a30ddc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while( true ) {
    if (param_1 + 1 == plVar2) {
      return;
    }
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,plVar2 + 2);
    if ((uVar1 & 1) != 0) break;
    plVar2 = (long *)plVar2[1];
  }
  FUN_02739fc4(param_1 + 1,plVar2);
  return;
}


