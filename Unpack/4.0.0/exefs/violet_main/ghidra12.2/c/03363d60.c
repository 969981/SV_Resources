/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03363d60; name: FUN_03363d60
 */


undefined8 FUN_03363d60(long *param_1,char *param_2)

{
  size_t sVar1;
  void *__dest;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong local_28;
  
  local_28 = 0;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    sVar1 = (size_t)((int)sVar1 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar1);
    memcpy(__dest,param_2,sVar1);
    local_28 = (ulong)__dest | 1;
  }
  lVar2 = FUN_033418d0(param_1 + 5,&local_28);
  if (lVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(param_1[5] + (long)*(int *)(lVar2 + 4) * 0x10 + 8);
  }
  if ((local_28 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_28 - 1,0);
  }
  if ((int)uVar4 < 0) {
    uVar3 = (**(code **)(**(long **)(param_1[4] + 0x18) + 0x20))
                      (*(long **)(param_1[4] + 0x18),param_2);
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x98))(param_1,*(undefined8 *)(param_1[0xd] + (ulong)uVar4 * 8))
    ;
    uVar3 = *(undefined8 *)(lVar2 + 0x50);
  }
  return uVar3;
}


