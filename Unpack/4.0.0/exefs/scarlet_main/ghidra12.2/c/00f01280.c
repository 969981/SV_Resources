/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f01280; name: FUN_00f01280
 */


ulong FUN_00f01280(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((*param_2 != 0) && (plVar2 = *(long **)(param_1 + 0xb1e0), plVar2 != (long *)0x0)) {
    do {
      if (plVar2[2] == *param_3) {
        local_20 = param_5;
        uStack_18 = param_4;
        uVar1 = (*(code *)plVar2[6])(plVar2 + 10,param_2,&uStack_18,&local_20);
        uVar3 = uVar1 & 0xffffffffffffff00;
        uVar1 = uVar1 & 0xff;
        goto LAB_00f012e0;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  uVar1 = 0;
  uVar3 = 0;
LAB_00f012e0:
  return uVar3 | uVar1;
}


