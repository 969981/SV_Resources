/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297da44; name: FUN_0297da44
 */


uint FUN_0297da44(long param_1,undefined4 *param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 local_40 [16];
  
  if ((*(byte *)(param_2 + 0x16) & 0x18) == 0) {
    plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_2);
    uVar5 = (**(code **)(*plVar4 + 0x220))(plVar4,0x17);
    if ((((uVar5 & 1) != 0) && (param_2[1] == 1)) &&
       (uVar1 = *(ushort *)(param_2 + 4), uVar1 != 0xa5)) {
      local_40 = (**(code **)(*plVar4 + 0x240))(plVar4,0x17);
      uVar3 = FUN_0107ffe0(local_40);
      if ((uint)uVar1 != (uVar3 & 0xffff)) {
        sVar2 = (**(code **)(*plVar4 + 0x698))(plVar4,uVar3);
        if (sVar2 != 0) {
          return uVar3;
        }
      }
    }
  }
  return 0;
}


