/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293ecfc; name: FUN_0293ecfc
 */


void FUN_0293ecfc(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  
  *param_2 = 0;
  plVar1 = (long *)FUN_014813f4(param_1,*param_3);
  uVar2 = (**(code **)(*plVar1 + 0x200))();
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0x508))(plVar1,param_3[1]);
    *param_2 = 1;
  }
  return;
}


