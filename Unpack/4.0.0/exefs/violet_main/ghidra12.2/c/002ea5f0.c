/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ea5f0; name: FUN_002ea5f0
 */


void FUN_002ea5f0(undefined8 param_1,int param_2,ulong param_3)

{
  void *pvVar1;
  byte local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined8 local_28;
  
  if (((param_2 == 0) || (0x7f < param_2)) ||
     (pvVar1 = memchr("(){}[]*+?|.^$\\",param_2,0xf), pvVar1 == (void *)0x0)) {
    if ((0x19 < param_2 - 0x61U) || ((param_3 & 1) == 0)) {
      FUN_002ea740(param_1,param_2);
      return;
    }
    FUN_002ce498(param_1,1,0x5b);
    FUN_002ce498(param_1,1,param_2 + -0x20);
    local_38 = 2;
    local_37 = (undefined1)param_2;
    local_36 = 0;
                    /* try { // try from 002ea694 to 002ea69f has its CatchHandler @ 002ea6f0 */
    FUN_0021d540(param_1,(ulong)&local_38 | 1,1);
    if ((local_38 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
    param_2 = 0x5d;
  }
  else {
    FUN_002ce498(param_1,1,0x5c);
  }
  FUN_002ce498(param_1,1,param_2);
  return;
}


