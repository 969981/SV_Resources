/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270dabc; name: FUN_0270dabc
 */


void FUN_0270dabc(long param_1,int *param_2)

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
  FUN_0270d9d8(param_1 + 0x48,lVar2);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_0270d9d8(param_1 + 0xa0,lVar2);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_0270d9d8(param_1 + 0xf8,lVar2);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_0270d9d8(param_1 + 0x150,lVar2);
  return;
}


