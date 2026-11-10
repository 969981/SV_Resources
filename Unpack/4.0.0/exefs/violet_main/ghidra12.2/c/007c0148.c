/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c0148; name: FUN_007c0148
 */


long * FUN_007c0148(long *param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  if ((param_2 & 0xfffffffffffffff8) < 0x129) {
    return (long *)0x0;
  }
  FUN_007c27ec(param_1,param_3,0,param_1,param_2 & 0xfffffffffffffff8,1,param_4 & 1);
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *param_1 = (long)(PTR_DAT_047d0ff8 + 0x10);
  param_1[0x1b] = (long)(param_1 + 0x1b);
  param_1[0x1c] = (long)(param_1 + 0x1b);
  param_1[0x1f] = (long)(param_1 + 0x1e);
  param_1[0x20] = -0x100000000;
  param_1[0x1d] = -0x100000000;
  param_1[0x1e] = (long)(param_1 + 0x1e);
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    plVar3 = (long *)0x0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    iVar1 = (int)param_1[0x11];
  }
  else {
    plVar3 = param_1 + 0x12;
    FUN_007c9e3c(plVar3);
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    FUN_007c9e44(plVar3);
    if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
      plVar3 = (long *)0x0;
      iVar1 = (int)param_1[0x11];
    }
    else {
      FUN_007c9e3c(plVar3);
      iVar1 = (int)param_1[0x11];
    }
  }
  if (iVar1 == 1) {
    plVar2 = param_1 + 0x21;
  }
  else {
    plVar2 = (long *)param_1[6];
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 2) = 0;
  plVar2[3] = 0;
  plVar2[3] = param_1[7] + -0x128;
  FUN_007c026c(param_1);
  if (plVar3 == (long *)0x0) {
    return param_1;
  }
  FUN_007c9e44(plVar3);
  return param_1;
}


