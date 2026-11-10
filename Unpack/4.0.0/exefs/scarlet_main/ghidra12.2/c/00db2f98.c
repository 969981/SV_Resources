/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db2f98; name: FUN_00db2f98
 */


void FUN_00db2f98(long param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db3094(param_1 + 0x48,lVar2);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db3094(param_1 + 0xa0,lVar2);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db3094(param_1 + 0xf8,lVar2);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db3094(param_1 + 0x150,lVar2);
  return;
}


