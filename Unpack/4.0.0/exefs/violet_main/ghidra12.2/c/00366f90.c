/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00366f90; name: FUN_00366f90
 */


void * FUN_00366f90(long *param_1)

{
  void *__dest;
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  
  puVar3 = (ulong *)(param_1 + 1);
  if (*param_1 == 0) {
    uVar1 = (ulong)(byte)*puVar3;
  }
  else {
    uVar1 = *puVar3;
  }
  __dest = (void *)FUN_0038c780(uVar1 + 1);
  if (*param_1 == 0) {
    memcpy(__dest,(void *)((long)param_1 + 9),(ulong)(byte)*puVar3);
    lVar2 = *param_1;
  }
  else {
    memcpy(__dest,(void *)param_1[2],param_1[1]);
    lVar2 = *param_1;
  }
  if (lVar2 == 0) {
    uVar1 = (ulong)(byte)*puVar3;
  }
  else {
    uVar1 = *puVar3;
  }
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return __dest;
}


