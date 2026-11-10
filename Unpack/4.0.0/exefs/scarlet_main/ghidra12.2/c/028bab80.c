/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bab80; name: FUN_028bab80
 */


void FUN_028bab80(long *param_1,uint *param_2,long param_3)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = (long)(PTR_DAT_047d8e88 + 0x10);
  param_1[4] = 0;
  FUN_00fb9f24(param_1 + 0xb,param_3);
  if (((param_2 != (uint *)0x0) && (*(long *)(param_3 + 8) != 0)) &&
     ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) != 0)) {
    puVar2 = (uint *)(**(code **)(**(long **)(param_3 + 8) + 0x70))();
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) {
      lVar4 = 0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
      lVar4 = 0;
      if (uVar3 != 0) {
        puVar2 = (uint *)((long)piVar1 + uVar3);
        lVar4 = (long)puVar2 + (ulong)*puVar2;
      }
    }
    *param_1 = (long)param_2 + (ulong)*param_2;
    param_1[1] = lVar4;
    param_1[2] = (long)piVar1;
  }
  return;
}


