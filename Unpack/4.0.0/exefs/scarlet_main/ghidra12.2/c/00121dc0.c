/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00121dc0; name: FUN_00121dc0
 */


bool FUN_00121dc0(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      return *(char *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10 + 8) == '\x03';
    }
    if (param_2 == 0xfff0b9d8) {
      return *(char *)(*(long *)(param_1 + 0x18) + 0x48) == '\x03';
    }
    plVar2 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar2[1] != '\x16') &&
       (lVar3 = *plVar2, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar3 + 10))) {
      return *(char *)(lVar3 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x28) == '\x03';
    }
  }
  else {
    uVar1 = **(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10;
    if (uVar1 < *(ulong *)(param_1 + 0x10)) goto LAB_00121de8;
  }
  uVar1 = *(long *)(param_1 + 0x18) + 0x50;
LAB_00121de8:
  return *(char *)(uVar1 + 8) == '\x03';
}


