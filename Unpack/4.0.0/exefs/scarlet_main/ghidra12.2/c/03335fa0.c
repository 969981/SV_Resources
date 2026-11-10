/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03335fa0; name: FUN_03335fa0
 */


void FUN_03335fa0(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      if (*(long *)(*param_2 + uVar2 * 8) == param_1) {
        if (-1 < (int)uVar2) {
          return;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  lVar3 = (long)(int)uVar1;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= (int)uVar1) {
    FUN_03340784(param_2,PTR_PTR_047d1a50 + 0x20,lVar3 + 1);
    uVar1 = *(uint *)(param_2 + 1);
  }
  *(long *)(*param_2 + (long)(int)uVar1 * 8) = param_1;
  *(int *)(param_2 + 1) = (int)(lVar3 + 1);
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar3 = 0;
    do {
      FUN_03335fa0(*(undefined8 *)(*(long *)(param_1 + 0x40) + lVar3 * 8),param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x48));
  }
  return;
}


