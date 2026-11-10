/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fba318; name: FUN_00fba318
 */


void FUN_00fba318(long *param_1,long param_2,long *param_3)

{
  locale *plVar1;
  locale *this;
  locale alStack_38 [8];
  locale alStack_18 [8];
  
  if ((char)param_1[4] == '\0') {
    if (param_3 == (long *)0x0) goto LAB_00fba340;
    this = alStack_38;
    plVar1 = alStack_38;
  }
  else {
    param_3 = param_1 + 5;
    this = alStack_18;
    plVar1 = alStack_18;
  }
  FUN_00fba428(plVar1,param_2,param_3);
  std::locale::~locale(this);
LAB_00fba340:
  if (*param_1 != -1) {
    *(long *)(param_2 + 0x18) = *param_1;
  }
  if (param_1[1] != -1) {
    *(long *)(param_2 + 0x10) = param_1[1];
  }
  if (*(byte *)(param_1 + 2) != 0) {
    *(uint *)(param_2 + 0x90) = (uint)*(byte *)(param_1 + 2);
  }
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)((long)param_1 + 0x14);
  std::ios_base::clear((uint)param_2);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((long)param_1 + 0x1c);
  std::ios_base::clear((uint)param_2);
  return;
}


