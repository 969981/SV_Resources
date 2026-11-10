/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0011fe40; name: FUN_0011fe40
 */


undefined8 FUN_0011fe40(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_001209d0(param_1 + 0x100);
  uVar1 = *(uint *)(param_1 + 0x18c);
  if ((*(int *)(param_1 + 0x188) - uVar1) + 0x100 < param_3) {
    uVar4 = 0;
    DAT_047ec990 = "Async queue full.";
  }
  else {
    uVar2 = (ulong)uVar1 & 0xff;
    uVar3 = 0x100 - (int)uVar2;
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    else {
      memcpy((void *)(param_1 + uVar2 + 0x194),param_2,(ulong)uVar3);
      uVar2 = 0;
      param_2 = (void *)((long)param_2 + (ulong)uVar3);
      uVar3 = param_3 - uVar3;
    }
    memcpy((void *)(param_1 + uVar2 + 0x194),param_2,(ulong)uVar3);
    *(uint *)(param_1 + 0x18c) = uVar1 + param_3;
    uVar4 = 1;
    FUN_00120bc0(param_1,1);
    FUN_00120240(param_1 + 0x184,1);
  }
  FUN_00120750(param_1 + 0x100);
  return uVar4;
}


