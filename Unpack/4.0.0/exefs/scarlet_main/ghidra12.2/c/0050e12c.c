/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050e12c; name: FUN_0050e12c
 */


undefined8 FUN_0050e12c(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  byte local_38 [16];
  undefined8 local_28;
  
  iVar1 = (int)param_1[5];
  if (iVar1 != 2) {
    if (((char)param_1[0x1d] == '\0') && (*(char *)((long)param_1 + 0xe5) == '\0')) {
      if ((iVar1 != 3) || (*(char *)((long)param_1 + 0xe6) == '\0')) goto LAB_0050e1a0;
    }
    else if (iVar1 != 3) {
LAB_0050e1a0:
      FUN_004a8ec0(local_38,"Expected identifier, got: ",param_1 + 6);
      plVar2 = (long *)*param_1;
      *(undefined1 *)(param_1 + 0x1e) = 1;
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 0050e1d0 to 0050e1d7 has its CatchHandler @ 0050e204 */
        (**(code **)(*plVar2 + 0x10))
                  (plVar2,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),local_38);
      }
      if ((local_38[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_28);
      }
      return 0;
    }
  }
  FUN_001fcec0(param_2,param_1 + 6);
  FUN_004fcda0(param_1 + 5);
  return 1;
}


