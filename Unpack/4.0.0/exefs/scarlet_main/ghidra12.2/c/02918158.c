/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02918158; name: FUN_02918158
 */


ulong FUN_02918158(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  switch(uVar1) {
  case 0:
    if (uVar2 < 4) {
      return (ulong)*(uint *)(&DAT_03cabc70 + (long)(int)uVar2 * 4);
    }
    break;
  case 1:
    uVar3 = 0xfffffffe;
    switch(uVar2) {
    case 0:
      goto switchD_02918250_caseD_0;
    case 1:
    case 2:
switchD_02918250_caseD_0:
      return 0xffffffff;
    case 3:
switchD_02918250_caseD_1:
      uVar4 = 2;
LAB_0291825c:
      uVar3 = FUN_02919830(param_1,uVar4);
      return uVar3;
    }
    break;
  case 2:
    uVar3 = 0xfffffffe;
    switch(uVar2) {
    case 0:
      goto switchD_02918250_caseD_0;
    case 1:
      goto switchD_02918250_caseD_0;
    case 2:
    case 3:
switchD_02918250_caseD_2:
      uVar4 = 3;
      goto LAB_0291825c;
    }
    break;
  case 3:
    uVar3 = 0xffffffff;
    switch(uVar2) {
    case 0:
      goto switchD_02918250_caseD_0;
    case 1:
      goto switchD_02918250_caseD_1;
    case 2:
    case 3:
      goto switchD_02918250_caseD_2;
    }
  }
  uVar3 = 0;
switchD_02918250_caseD_0:
  return uVar3;
}


