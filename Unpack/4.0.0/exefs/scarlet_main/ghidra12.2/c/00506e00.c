/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00506e00; name: FUN_00506e00
 */


void FUN_00506e00(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x1;
  ulong *puVar3;
  
  puVar3 = (ulong *)(param_2[1] & 0xfffffffffffffffe);
  if ((param_2[1] & 1U) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  plVar2 = (long *)(**(code **)(*param_2 + 0x20))(param_2,puVar3);
  plVar1 = plVar2;
  if (puVar3 != (ulong *)0x0) {
    plVar1 = (long *)0x0;
  }
                    /* try { // try from 00506e48 to 00506e93 has its CatchHandler @ 00506edc */
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  (**(code **)(*param_2 + 0x98))(param_2);
  FUN_004f1998(extraout_x1,plVar2,param_2);
  if (plVar1 == (long *)0x0) {
    return;
  }
  (**(code **)*plVar1)(plVar1);
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}


