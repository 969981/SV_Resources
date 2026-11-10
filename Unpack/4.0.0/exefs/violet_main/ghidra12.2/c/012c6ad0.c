/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c6ad0; name: FUN_012c6ad0
 */


void FUN_012c6ad0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (DAT_045a1dd8 != (long *)0x0) {
    lVar1 = *DAT_045a1dd8;
    DAT_045a1dd8 = plVar2;
    (**(code **)(lVar1 + 0x20))();
    plVar2 = DAT_045a1dd8;
  }
  DAT_045a1dd8 = plVar2;
  DAT_045a1de0 = param_1[1];
  PTR_DAT_045a1de8 = (undefined *)param_1[2];
  DAT_045a1df0 = param_1[3];
  plVar2 = (long *)param_1[4];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (DAT_045a1df8 != (long *)0x0) {
    lVar1 = *DAT_045a1df8;
    DAT_045a1df8 = plVar2;
    (**(code **)(lVar1 + 0x20))();
    plVar2 = DAT_045a1df8;
  }
  DAT_045a1df8 = plVar2;
  DAT_045a1e00 = *(undefined4 *)(param_1 + 5);
  return;
}


