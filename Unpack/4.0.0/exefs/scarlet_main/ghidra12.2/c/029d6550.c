/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d6550; name: FUN_029d6550
 */


bool FUN_029d6550(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_2 + 8);
  *(float *)(param_2 + 8) = param_1;
  *(undefined1 *)(param_2 + 2) = 0;
  if (fVar6 <= param_1) {
    iVar5 = *(int *)(param_2 + 0xc);
    uVar1 = iVar5 + 1U & 7;
    if (param_1 <= *(float *)(param_2 + (ulong)uVar1 * 4 + 0x10)) {
      return false;
    }
    uVar2 = iVar5 + 2U & 7;
    if (param_1 <= *(float *)(param_2 + (ulong)uVar2 * 4 + 0x10)) {
      uVar3 = iVar5 + 1U & 3;
      *(uint *)(param_2 + 0xc) = uVar1;
    }
    else {
      uVar3 = iVar5 + 2U & 3;
      if (uVar3 == 3) {
        *(uint *)(param_2 + 0xc) = uVar2;
        *(undefined1 *)(param_2 + 2) = 1;
        return true;
      }
      if (*(float *)(param_2 + (ulong)(iVar5 + 3U & 7) * 4 + 0x10) < param_1) {
        iVar5 = -1;
        goto LAB_029d656c;
      }
      *(uint *)(param_2 + 0xc) = uVar2;
    }
    bVar4 = uVar3 == 2;
  }
  else {
    iVar5 = -(uint)(0.0 < param_1);
LAB_029d656c:
    *(int *)(param_2 + 4) = iVar5;
    bVar4 = true;
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return bVar4;
}


