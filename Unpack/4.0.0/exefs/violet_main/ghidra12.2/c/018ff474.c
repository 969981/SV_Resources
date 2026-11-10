/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ff474; name: FUN_018ff474
 */


int FUN_018ff474(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    puVar2 = (undefined8 *)FUN_018ff6bc(param_1,0x70);
    FUN_018ff50c();
    iVar1 = FUN_018ff788(param_1,puVar2,param_2 & 0xffff | 0x7c000000);
    if (iVar1 == *(int *)PTR_DAT_047d0e88) {
      (**(code **)*puVar2)(puVar2);
      FUN_018ff540(param_1,puVar2);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


