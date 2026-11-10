/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050edb8; name: FUN_0050edb8
 */


undefined8 FUN_0050edb8(long *param_1,byte *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  byte local_48 [16];
  undefined8 local_38;
  
  if ((int)param_1[5] == 5) {
    if ((*param_2 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
      iVar1 = (int)param_1[5];
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      iVar1 = (int)param_1[5];
    }
    if (iVar1 == 5) {
      do {
        FUN_004fd3a8(param_1 + 6,param_2);
        FUN_004fcda0(param_1 + 5);
      } while ((int)param_1[5] == 5);
    }
    uVar3 = 1;
  }
  else {
    FUN_004a8ec0(local_48,"Expected string, got: ",param_1 + 6);
    plVar2 = (long *)*param_1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 0050ee28 to 0050ee2f has its CatchHandler @ 0050eea8 */
      (**(code **)(*plVar2 + 0x10))
                (plVar2,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),local_48);
    }
    if ((local_48[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_38);
    }
    uVar3 = 0;
  }
  return uVar3;
}


