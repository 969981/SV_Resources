/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c72fb0; name: FUN_00c72fb0
 */


bool FUN_00c72fb0(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort *puVar4;
  ulong uVar5;
  
  if (param_1 == (int *)0x0) {
    return false;
  }
  puVar4 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar4;
  if (4 < uVar3) {
    if ((ulong)puVar4[2] != 0) {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar4[2]);
      piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
      if (((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
          (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 != 0)) &&
         (puVar1 = (uint *)((long)piVar2 + uVar5), *(int *)((long)puVar1 + (ulong)*puVar1) != 0)) {
        return true;
      }
    }
    if (uVar3 < 7) {
      return false;
    }
    if ((ulong)puVar4[3] != 0) {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar4[3]);
      piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
      if (((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
          (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 != 0)) &&
         (puVar1 = (uint *)((long)piVar2 + uVar5), *(int *)((long)puVar1 + (ulong)*puVar1) != 0)) {
        return true;
      }
    }
    if (8 < uVar3) {
      if ((ulong)puVar4[4] != 0) {
        puVar1 = (uint *)((long)param_1 + (ulong)puVar4[4]);
        piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
        if (((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
            (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 != 0)) &&
           (puVar1 = (uint *)((long)piVar2 + uVar5), *(int *)((long)puVar1 + (ulong)*puVar1) != 0))
        {
          return true;
        }
      }
      if ((10 < uVar3) && ((ulong)puVar4[5] != 0)) {
        puVar1 = (uint *)((long)param_1 + (ulong)puVar4[5]);
        piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
        if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
           (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 != 0)) {
          puVar1 = (uint *)((long)piVar2 + uVar5);
          return *(int *)((long)puVar1 + (ulong)*puVar1) != 0;
        }
      }
    }
  }
  return false;
}


