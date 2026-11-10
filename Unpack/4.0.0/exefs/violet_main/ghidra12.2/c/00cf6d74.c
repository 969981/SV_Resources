/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf6d74; name: FUN_00cf6d74
 */


void FUN_00cf6d74(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_8 [8];
  
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    lVar1 = plVar2[0x86];
    plVar2[0x87] = plVar2[0x87] | 4;
    *(undefined1 *)(plVar2 + 0x86) = 1;
    if ((char)lVar1 == '\0') {
      FUN_00d37964(plVar2,2,1);
      (**(code **)(*plVar2 + 0x108))(plVar2);
      FUN_00cf6de0(plVar2 + 0x21,auStack_8);
    }
  }
  return;
}


