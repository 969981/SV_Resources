/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01091070; name: FUN_01091070
 */


long FUN_01091070(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    lVar3 = 1;
  }
  else if ((*(char *)((long)param_1 + 0x19) == '\0') && (*(char *)((long)param_1 + 0x1a) == '\0')) {
    nn::os::GetSystemTick();
    lVar3 = nn::os::ConvertToTimeSpan();
    uVar2 = param_1[1];
    uVar4 = lVar3 - *param_1;
    uVar1 = ((long)uVar4 >> 0x20) * 0x26d694b3 + ((uVar4 & 0xffffffff) * 0x26d694b3 >> 0x20);
    uVar5 = ((long)uVar2 >> 0x20) * 0x26d694b3 + ((uVar2 & 0xffffffff) * 0x26d694b3 >> 0x20);
    lVar3 = ((param_3 + param_2 + ((long)uVar4 >> 0x3f) + ((long)uVar2 >> 0x3f)) -
            ((long)(((long)uVar4 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
                   ((uVar4 & 0xffffffff) * 0x112e0be8 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1a)) -
            ((long)(((long)uVar2 >> 0x20) * 0x112e0be8 + ((long)uVar5 >> 0x20) +
                   ((uVar2 & 0xffffffff) * 0x112e0be8 + (uVar5 & 0xffffffff) >> 0x20)) >> 0x1a);
  }
  else {
    uVar5 = param_1[1];
    uVar1 = ((long)uVar5 >> 0x20) * 0x26d694b3 + ((uVar5 & 0xffffffff) * 0x26d694b3 >> 0x20);
    lVar3 = (param_2 + ((long)uVar5 >> 0x3f)) -
            ((long)(((long)uVar5 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
                   ((uVar5 & 0xffffffff) * 0x112e0be8 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1a);
  }
  return lVar3;
}


