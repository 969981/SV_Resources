/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00123540; name: FUN_00123540
 */


void FUN_00123540(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      uVar1 = *(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10;
      goto LAB_001235ac;
    }
    if (param_2 == 0xfff0b9d8) {
      uVar1 = *(long *)(param_1 + 0x18) + 0x40;
      goto LAB_001235ac;
    }
    plVar2 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar2[1] != '\x16') &&
       (lVar3 = *plVar2, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar3 + 10))) {
      uVar1 = lVar3 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20;
      goto LAB_001235ac;
    }
  }
  else {
    uVar1 = **(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10;
    if (uVar1 < *(ulong *)(param_1 + 0x10)) goto LAB_001235ac;
  }
  uVar1 = *(long *)(param_1 + 0x18) + 0x50;
LAB_001235ac:
  FUN_00140e10(param_1,*(undefined8 *)(param_1 + 0x10),uVar1);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


