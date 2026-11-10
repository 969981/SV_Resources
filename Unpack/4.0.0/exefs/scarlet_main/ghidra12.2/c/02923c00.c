/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02923c00; name: FUN_02923c00
 */


void FUN_02923c00(long param_1,byte param_2,byte param_3)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int local_38;
  int local_34;
  
  uVar4 = (ulong)param_2;
  lVar1 = param_1 + 8;
  uVar5 = (ulong)param_3;
  uVar3 = *(ulong *)(lVar1 + uVar4 * 8);
  *(undefined8 *)(lVar1 + uVar4 * 8) = *(undefined8 *)(lVar1 + uVar5 * 8);
  *(ulong *)(lVar1 + uVar5 * 8) = uVar3;
  local_34 = *(int *)(lVar1 + uVar4 * 8);
  if (local_34 != 0) {
    pbVar2 = (byte *)FUN_010785a8(param_1 + 0x60,&local_34);
    *pbVar2 = param_2;
    uVar3 = (ulong)*(uint *)(param_1 + uVar5 * 8 + 8);
  }
  local_38 = (int)uVar3;
  if (local_38 != 0) {
    pbVar2 = (byte *)FUN_010785a8(param_1 + 0x60,&local_38);
    *pbVar2 = param_3;
  }
  return;
}


