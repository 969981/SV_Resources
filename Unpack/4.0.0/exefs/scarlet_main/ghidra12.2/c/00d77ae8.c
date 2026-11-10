/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d77ae8; name: FUN_00d77ae8
 */


void FUN_00d77ae8(long param_1)

{
  int *piVar1;
  float fVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    fVar2 = *(float *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x61) != '\0') {
      fVar2 = (float)(int)*(float *)(param_1 + 0x54);
    }
    puVar3 = (uint *)(**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 != 0)) {
      puVar3 = (uint *)((long)piVar1 + uVar5);
      piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
        lVar4 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar1 + uVar5);
        lVar4 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_02e5c6a0(fVar2,param_1 + 0x70,lVar4);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar5 == 0)) {
        lVar4 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar1 + uVar5);
        lVar4 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_02e5c7f0(fVar2,param_1 + 0x80,lVar4);
      return;
    }
  }
  return;
}


