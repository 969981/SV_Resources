/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01925918; name: FUN_01925918
 */


ulong FUN_01925918(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_2;
  plVar3 = (long *)param_2[3];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  uVar1 = (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) * -0x3333333333333333;
  uVar5 = 0;
  if ((int)uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x70) + 8);
    uVar4 = 1;
    do {
      if (((char)plVar2[-1] != '\0') && (*plVar2 == lVar6)) goto LAB_0192599c;
      uVar5 = uVar5 + 1;
      plVar2 = plVar2 + 5;
    } while ((uVar1 & 0xffffffff) != uVar5);
    uVar4 = 0;
    uVar5 = uVar1;
  }
LAB_0192599c:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return uVar4 | uVar5 << 0x20;
}


