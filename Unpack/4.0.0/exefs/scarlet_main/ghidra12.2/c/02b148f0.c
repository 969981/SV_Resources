/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b148f0; name: FUN_02b148f0
 */


ulong FUN_02b148f0(undefined8 param_1,long *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint extraout_w1;
  
  plVar5 = (long *)(**(code **)(*param_2 + 0x930))(param_2,param_4);
  if ((param_3 & 0xffff) == 2) {
                    /* WARNING: Could not recover jumptable at 0x02b14944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*plVar5 + 0x228))(plVar5,0);
    return uVar6;
  }
  uVar3 = (**(code **)(*plVar5 + 0x220))(plVar5,param_3);
  if ((param_3 & 0xffff) == 0x30) {
    (**(code **)(*plVar5 + 0x240))(plVar5,0x30);
    uVar2 = extraout_w1 >> 3 & 0x3f;
    if ((extraout_w1 & 7) != 4) {
      uVar2 = 0;
    }
    uVar1 = extraout_w1 >> 3 & 0x3f;
    if ((extraout_w1 & 7) != 2) {
      uVar1 = uVar2;
    }
    iVar4 = (**(code **)(*plVar5 + 0x248))(plVar5,0x30);
    uVar3 = uVar3 & (uVar1 - iVar4 & 0xff) != 1;
  }
  return (ulong)(uVar3 & 1);
}


